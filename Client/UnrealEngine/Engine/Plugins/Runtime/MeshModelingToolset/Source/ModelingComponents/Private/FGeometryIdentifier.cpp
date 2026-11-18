// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// GetAsComponentType<UDynamicMeshComponent> @ 14cb5e370

UDynamicMeshComponent * __thiscall
FGeometryIdentifier::GetAsComponentType<UDynamicMeshComponent>(FGeometryIdentifier *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDynamicMeshComponent *pUVar4;
  UClass *pUVar5;
  
  if (this->TargetType != PrimitiveComponent) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2893480907098816407>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Selection\\GeometrySelector.h"
                       ,0x69,"TargetType == ETargetType::PrimitiveComponent");
    if (!bVar3) {
      return (UDynamicMeshComponent *)0x0;
    }
    pcVar2 = (code *)swi(3);
    pUVar4 = (UDynamicMeshComponent *)(*pcVar2)();
    return pUVar4;
  }
  pUVar4 = (UDynamicMeshComponent *)FWeakObjectPtr::Get(&(this->TargetObject).WeakPtr);
  if (pUVar4 != (UDynamicMeshComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return pUVar4;
    }
  }
  return (UDynamicMeshComponent *)0x0;
}

