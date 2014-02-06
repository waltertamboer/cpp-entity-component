cpp-entity-component
====================

A conceptual entity component framework for computer games.

This framework exists out of three parts:
- Subsystems
- Entities
- Components

All three managed by the application.

An entity is a container for components and does not contain and application logic. Each entity has 'N' amount of components, a component is a piece of logic and can contain *anything*. It can be a an audio listener (the device that records sounds) or it can be a transform (position, rotation, scale) in a 3D world.

The subsystems are used to manage components. For example; the audio subsystem manages all Audio related components. This way the application doesn't have to iterate through thousands of components and can delegate to the subsystems.

This way is also becomes possible to effectively start different threads and handle components only there. For example, a graphics renderer could make use of all the SPU's that a Playstation 3 contains while the gameplay code could be executed solely on the CPU.
