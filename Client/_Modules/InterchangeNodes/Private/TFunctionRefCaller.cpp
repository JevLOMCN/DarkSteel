// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 1

// Call @ 14e48dfc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeSceneNode::ResetAllGlobalTransformCaches'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
::Call(void *param_1,FString *param_2,UInterchangeBaseNode **param_3)

{
  int iVar1;
  UInterchangeBaseNode *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = *param_3;
  if (pUVar2 != (UInterchangeBaseNode *)0x0) {
    pUVar3 = UInterchangeSceneNode::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if ((char)pUVar2[10]._padding_ != '\0') {
        *(undefined1 *)&pUVar2[10]._padding_ = 0;
      }
      if (*(char *)&pUVar2[0xb].Attributes.SharedReferenceCount.ReferenceController != '\0') {
        *(undefined1 *)&pUVar2[0xb].Attributes.SharedReferenceCount.ReferenceController = 0;
      }
      if (*(char *)&pUVar2[0xc].TargetNodes.Attributes.Object != '\0') {
        *(undefined1 *)&pUVar2[0xc].TargetNodes.Attributes.Object = 0;
      }
    }
  }
  return;
}

