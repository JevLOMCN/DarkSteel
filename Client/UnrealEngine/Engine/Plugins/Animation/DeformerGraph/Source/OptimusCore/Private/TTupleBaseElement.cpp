// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// TTupleBaseElement<FOptimusInstancedPin,0,2> @ 14e14d4e0

TTupleBaseElement<FOptimusInstancedPin,0,2> * __thiscall
UE::Core::Private::Tuple::TTupleBaseElement<FOptimusInstancedPin,0,2>::
TTupleBaseElement<FOptimusInstancedPin,0,2>
          (TTupleBaseElement<FOptimusInstancedPin,0,2> *this,
          TTupleBaseElement<FOptimusInstancedPin,0,2> *param_1)

{
  (this->Key).InstancedNode.RoutedNode.Node = (param_1->Key).InstancedNode.RoutedNode.Node;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            (&(this->Key).InstancedNode.RoutedNode.TraversalContext,
             &(param_1->Key).InstancedNode.RoutedNode.TraversalContext);
  (this->Key).InstancedNode.LoopIndex = (param_1->Key).InstancedNode.LoopIndex;
  (this->Key).Pin = (param_1->Key).Pin;
  return this;
}

