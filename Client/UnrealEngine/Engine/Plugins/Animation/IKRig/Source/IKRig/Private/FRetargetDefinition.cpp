// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 3

// StaticStruct @ 14def2ec0

UScriptStruct * __cdecl FRetargetDefinition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRetargetDefinition.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRetargetDefinition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRetargetDefinition,(UObject *)pUVar1,
                         L"RetargetDefinition");
  }
  return Z_Registration_Info_UScriptStruct_FRetargetDefinition.OuterSingleton;
}

// AddBoneChain @ 14df22e60

void __thiscall
FRetargetDefinition::AddBoneChain
          (FRetargetDefinition *this,FName *param_1,FName *param_2,FName *param_3,FName *param_4)

{
  TArray<FBoneChain,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  int iVar6;
  FName *pFVar7;
  FName *pFVar8;
  undefined1 local_res8 [8];
  
  iVar6 = (this->BoneChains).ArrayNum;
  pTVar1 = &this->BoneChains;
  pFVar8 = (FName *)(pTVar1->AllocatorInstance).Data;
  FVar3 = *param_1;
  pFVar7 = pFVar8 + (longlong)iVar6 * 6;
  while( true ) {
    if ((this->BoneChains).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FBoneChain,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar7) break;
    if (*pFVar8 == FVar3) {
      pFVar8[1] = *param_2;
      pFVar8[2].Number = 0xffffffff;
      pFVar8[2].ComparisonIndex.Value = 0x7fffffff;
      pFVar8[3] = *param_3;
      pFVar8[4].ComparisonIndex.Value = 0x7fffffff;
      pFVar8[4].Number = 0xffffffff;
      pFVar8[5] = *param_4;
      return;
    }
    pFVar8 = pFVar8 + 6;
  }
  iVar6 = (this->BoneChains).ArrayNum;
  piVar2 = &(this->BoneChains).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x430,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->BoneChains).ArrayNum = iVar6 + 1;
  FVar3 = *param_3;
  FVar4 = *param_2;
  pFVar8 = (FName *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x30);
  FVar5 = *param_4;
  *pFVar8 = *param_1;
  pFVar8[1] = FVar4;
  pFVar8[2].Number = 0xffffffff;
  pFVar8[2].ComparisonIndex.Value = 0x7fffffff;
  pFVar8[3] = FVar3;
  pFVar8[4].Number = 0xffffffff;
  pFVar8[4].ComparisonIndex.Value = 0x7fffffff;
  pFVar8[5] = FVar5;
  return;
}

// GetEditableBoneChainByName @ 14df38000

FBoneChain * __thiscall
FRetargetDefinition::GetEditableBoneChainByName(FRetargetDefinition *this,FName param_1)

{
  int iVar1;
  FBoneChain *pFVar2;
  FBoneChain *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->BoneChains).ArrayNum;
  pFVar3 = (FBoneChain *)(this->BoneChains).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if ((this->BoneChains).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FBoneChain,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3->ChainName == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FBoneChain *)0x0;
}

