// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 25

// StaticStruct @ 14a1fd180

UScriptStruct * __cdecl FModularRigModel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FModularRigModel.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FModularRigModel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FModularRigModel,(UObject *)pUVar1,
                         L"ModularRigModel");
  }
  return Z_Registration_Info_UScriptStruct_FModularRigModel.OuterSingleton;
}

// FModularRigModel @ 14a21f550

FModularRigModel * __thiscall FModularRigModel::FModularRigModel(FModularRigModel *this)

{
  (this->Modules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modules).ArrayNum = 0;
  (this->Modules).ArrayMax = 0;
  (this->RootModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootModules).ArrayNum = 0;
  (this->RootModules).ArrayMax = 0;
  (this->DeletedModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeletedModules).ArrayNum = 0;
  (this->DeletedModules).ArrayMax = 0;
  (this->Connections).ConnectionList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Connections).ConnectionList.ArrayNum = 0;
  (this->Connections).ConnectionList.ArrayMax = 0;
  *(undefined8 *)&(this->Connections).ReverseConnectionMap = 0;
  *(undefined8 *)&(this->Connections).ReverseConnectionMap.field_0x8 = 0;
  *(undefined8 *)&(this->Connections).ReverseConnectionMap.field_0x20 = 0;
  *(undefined4 *)&(this->Connections).ReverseConnectionMap.field_0x28 = 0;
  *(undefined4 *)&(this->Connections).ReverseConnectionMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->Connections).ReverseConnectionMap.field_0x34 = 0;
  *(undefined4 *)&(this->Connections).ReverseConnectionMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Connections).ReverseConnectionMap.field_0x40 = 0;
  *(undefined4 *)&(this->Connections).ReverseConnectionMap.field_0x48 = 0;
  (this->Controller).field0_0x0.DebugPtr = (UObject *)0x0;
  *(undefined8 *)&this->PreviousModulePaths = 0;
  *(undefined8 *)&(this->PreviousModulePaths).field_0x8 = 0;
  *(undefined8 *)&(this->PreviousModulePaths).field_0x20 = 0;
  *(undefined4 *)&(this->PreviousModulePaths).field_0x28 = 0;
  *(undefined4 *)&(this->PreviousModulePaths).field_0x2c = 0x80;
  *(undefined4 *)&(this->PreviousModulePaths).field_0x34 = 0;
  *(undefined4 *)&(this->PreviousModulePaths).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PreviousModulePaths).field_0x40 = 0;
  *(undefined4 *)&(this->PreviousModulePaths).field_0x48 = 0;
  (this->OuterClientHost).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SelectedModuleNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedModuleNames).ArrayNum = 0;
  (this->SelectedModuleNames).ArrayMax = 0;
  return this;
}

// ~FModularRigModel @ 14a225c60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FModularRigModel::~FModularRigModel(FModularRigModel *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->SelectedModuleNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PreviousModulePaths).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PreviousModulePaths).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigHierarchyModulePath,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigHierarchyModulePath,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigHierarchyModulePath,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PreviousModulePaths);
  *(undefined4 *)&(this->Connections).ReverseConnectionMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->Connections).ReverseConnectionMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Connections).ReverseConnectionMap);
  DestructItems<FModularRigSingleConnection,int>
            ((FModularRigSingleConnection *)
             (this->Connections).ConnectionList.AllocatorInstance.Data,
             (this->Connections).ConnectionList.ArrayNum);
  pFVar1 = (this->Connections).ConnectionList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigModuleReference,int>
            ((FRigModuleReference *)(this->DeletedModules).AllocatorInstance.Data,
             (this->DeletedModules).ArrayNum);
  pFVar1 = (this->DeletedModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RootModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigModuleReference,int>
            ((FRigModuleReference *)(this->Modules).AllocatorInstance.Data,(this->Modules).ArrayNum)
  ;
  pFVar1 = (this->Modules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 14a22aac0

bool __thiscall
`FModularRigModel::FindModuleByPath'::__l2::<lambda_1>::operator()
          (void *this,FRigModuleReference *param_1)

{
  int iVar1;
  int iVar2;
  FRigHierarchyModulePath *this_00;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FString local_68;
  FString local_58;
  FRigHierarchyModulePath local_48;
  
  this_00 = FRigModuleReference::GetModulePath(param_1,&local_48);
  pFVar3 = ::FString::ToLower(this,&local_58);
  pFVar4 = ::FString::ToLower(&this_00->ModulePath,&local_68);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar1 == iVar2) {
    if (iVar1 < 2) {
      bVar5 = true;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar4->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((local_48.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_48.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.CachedElementNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if ((local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if (local_48.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ModulePath.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// operator() @ 14a22abb0

bool __thiscall
`FModularRigModel::FindModuleInstancesOfClass'::__l2::<lambda_1>::operator()
          (void *this,FRigModuleReference *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  bool bVar6;
  FRigModuleReference *local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  if (*(longlong *)&(param_1->Class).SoftObjectPtr.field_0x8 == 0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  else {
    FTopLevelAssetPath::ToString
              ((FTopLevelAssetPath *)&(param_1->Class).SoftObjectPtr.field_0x8,&local_18);
  }
  ::FString::RemoveFromEnd(&local_18,L"_C",2,IgnoreCase);
  iVar5 = *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
  if (local_18.Data.ArrayNum == iVar5) {
    if (1 < local_18.Data.ArrayNum) {
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_18.Data.AllocatorInstance.Data,
                         (wchar_t *)**(undefined8 **)((longlong)this + 8));
      bVar6 = iVar5 == 0;
      goto LAB_14a22ac27;
    }
  }
  else {
    bVar6 = local_18.Data.ArrayNum + iVar5 == 1;
LAB_14a22ac27:
    if (!bVar6) goto LAB_14a22acce;
  }
  pFVar2 = *(ForAnyElementType **)this;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return (bool)uVar4;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(FRigModuleReference **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res10[0];
LAB_14a22acce:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 14a22dce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a22e1a1) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`FModularRigModel::PatchModelsOnLoad'::__l7::<lambda_1>::operator()
          (void *this,FRigModuleReference *param_1)

{
  ForElementType<FRigElementKey> FVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  TMap<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
  *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar11;
  ForAnyElementType FVar12;
  int iVar13;
  ForElementType<FRigElementKey> FVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  uint *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  TMap<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
  *pTVar21;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188;
  undefined1 local_187 [7];
  undefined8 local_180;
  uint local_178;
  uint local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ForAnyElementType local_168;
  undefined8 local_160;
  FRigElementKey local_158;
  TMap<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
  *local_148;
  int iStack_140;
  uint uStack_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  int local_114;
  FName local_110;
  undefined8 local_108;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  TMap<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
  *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  uint local_e0;
  FString local_d8;
  FString local_c8;
  TMap<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FString local_88;
  FString local_78;
  ForElementType<FRigElementKey> local_68;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  pwVar5 = FRigHierarchyModulePath::ModuleNameSuffix;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_f0 = this;
  ::FName::ToString(&param_1->Name,&local_88);
  ::FString::ConcatFC(&local_c8,&local_88,pwVar5);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Connections_DEPRECATED).field_0x10;
  iStack_140 = 0;
  iVar9 = *(int *)&(param_1->Connections_DEPRECATED).field_0x28;
  pTVar21 = &param_1->Connections_DEPRECATED;
  local_128 = 0;
  uStack_13c = 1;
  iStack_12c = 0;
  if (iVar9 != 0) {
    puVar19 = *(uint **)&(param_1->Connections_DEPRECATED).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)pTVar20;
    }
    uVar16 = *puVar19;
    while (uVar16 == 0) {
      lVar11 = (longlong)iStack_140;
      local_128 = local_128 + 0x20;
      iStack_140 = iStack_140 + 1;
      iStack_12c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_140) goto LAB_14a22dddd;
      uVar16 = puVar19[lVar11 + 1];
    }
    uStack_13c = -uVar16 & uVar16;
    uVar18 = (ulonglong)uStack_13c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_118 = (int)lVar11;
    iStack_12c = local_128 + -1 + local_118;
    if (iVar9 < iStack_12c) {
      iStack_12c = iVar9;
    }
  }
LAB_14a22dddd:
  uVar16 = *(uint *)&(param_1->Connections_DEPRECATED).field_0x28;
  iStack_120 = *(int *)&(param_1->Connections_DEPRECATED).field_0x8 -
               *(int *)&(param_1->Connections_DEPRECATED).field_0x34;
  uVar15 = uVar16 & 0xffffffe0;
  uStack_130 = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_13c,iStack_140);
  TStack_b0.CurrentBitIndex = iStack_12c;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_b0._28_4_ = iStack_12c;
  TStack_b0.BaseBitIndex = local_128;
  uStack_90 = CONCAT44(uStack_11c,iStack_120);
  local_148 = pTVar21;
  local_138 = (undefined1 *)pTVar20;
  iStack_124 = iStack_12c;
  local_100 = pTVar20;
  local_f8 = pTVar21;
  local_b8 = pTVar21;
  TStack_b0.Array = pTVar20;
  if ((((int)uVar16 < 0) || (iVar9 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  uVar10 = *(uint *)&(param_1->Connections_DEPRECATED).field_0x28;
  if (uVar16 != uVar10) {
    puVar17 = *(undefined1 **)&(param_1->Connections_DEPRECATED).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = (undefined1 *)pTVar20;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14a22dee0;
      uVar16 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar18 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_114 = (int)lVar11;
    uVar16 = local_114 + -1 + uVar15;
    if ((int)uVar10 < (int)uVar16) {
      uVar16 = uVar10;
    }
  }
LAB_14a22dee0:
  while( true ) {
    pTVar6 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      local_188 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_188);
    }
    if (((TStack_b0.CurrentBitIndex == uVar16) && (TStack_b0.Array == pTVar20)) &&
       (pTVar6 == pTVar21)) {
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      return true;
    }
    lVar11 = *(longlong *)pTVar6 + (longlong)TStack_b0.CurrentBitIndex * 0x20;
    ::FName::ToString((FName *)(lVar11 + 4),&local_78);
    ::FString::PrintfImpl(&local_d8,L"%s%s");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar12.Data = local_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_110,(wchar_t *)FVar12.Data);
    local_108 = *(undefined8 *)(lVar11 + 0xc);
    lVar2 = *(longlong *)this;
    local_158.Name.ComparisonIndex = local_110.ComparisonIndex.Value;
    local_158.Name.Number = local_110.Number;
    local_e0 = *(uint *)(lVar11 + 0x14);
    local_158.Type = Connector;
    local_68.SecondaryData = (ForElementType<FRigElementKey>)0x0;
    local_50 = 1;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementKey>_>
              (0xc,4,1,0,&local_68,1,&local_4c);
    local_e8 = local_108;
    FVar14 = (ForElementType<FRigElementKey>)&local_68;
    if (local_68.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
      FVar14 = local_68.SecondaryData;
    }
    *(undefined8 *)FVar14 = local_108;
    *(uint *)((longlong)FVar14 + 8) = local_e0;
    FModularRigConnections::RemoveConnection((FModularRigConnections *)(lVar2 + 0x30),&local_158);
    lVar11 = (longlong)(int)local_50;
    local_180 = CONCAT44(local_158.Name.ComparisonIndex.Value,local_158._0_4_);
    local_178 = local_158.Name.Number;
    local_174 = local_174 & 0xffffff00;
    FVar14 = (ForElementType<FRigElementKey>)&local_68;
    if (local_68.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
      FVar14 = local_68.SecondaryData;
    }
    uStack_170 = 0;
    uStack_16c = 0;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_160 = CONCAT44(local_160._4_4_,local_50);
    if (local_50 == 0) {
      local_160 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_50,0,&local_168,local_50,(int *)((longlong)&local_160 + 4));
      memcpy(local_168.Data,(void *)FVar14,lVar11 * 0xc);
    }
    if (((*(undefined8 **)(lVar2 + 0x30) <= &local_180) &&
        (&local_180 < *(undefined8 **)(lVar2 + 0x30) + (longlong)*(int *)(lVar2 + 0x3c) * 5)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar9 = *(int *)(lVar2 + 0x38);
    if (iVar9 == *(int *)(lVar2 + 0x3c)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,(ForAnyElementType *)(lVar2 + 0x30),(int *)(lVar2 + 0x3c));
    }
    uVar15 = local_50;
    *(int *)(lVar2 + 0x38) = iVar9 + 1;
    lVar11 = *(longlong *)(lVar2 + 0x30);
    *(undefined8 *)(lVar11 + (longlong)iVar9 * 0x28) = local_180;
    lVar11 = lVar11 + (longlong)iVar9 * 0x28;
    *(uint *)(lVar11 + 8) = local_178;
    *(ulonglong *)(lVar11 + 0xc) = CONCAT44(uStack_170,local_174);
    *(undefined4 *)(lVar11 + 0x14) = uStack_16c;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(FScriptContainerElement **)(lVar11 + 0x18) = local_168.Data;
    *(undefined4 *)(lVar11 + 0x20) = (undefined4)local_160;
    *(undefined4 *)(lVar11 + 0x24) = local_160._4_4_;
    local_160 = 0;
    local_168.Data = (FScriptContainerElement *)0x0;
    uVar18 = (ulonglong)(int)local_50;
    FVar14 = (ForElementType<FRigElementKey>)&local_68;
    if (local_68.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
      FVar14 = local_68.SecondaryData;
    }
    FVar1 = (ForElementType<FRigElementKey>)((longlong)FVar14 + uVar18 * 0xc);
    while( true ) {
      if ((uint)uVar18 != uVar15) {
        local_187[0] = 0;
        `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_187);
      }
      if (FVar14 == FVar1) break;
      FVar3 = *(FName *)((longlong)FVar14 + 4);
      uVar10 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      uVar10 = (uint)*(byte *)FVar14 + (uVar10 + FVar3.Number) * 10;
      iVar9 = TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FRigElementKey>
                        ((TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)(lVar2 + 0x40),uVar10,(FRigElementKey *)FVar14);
      if ((iVar9 == -1) ||
         (lVar11 = *(longlong *)(lVar2 + 0x40) + (longlong)iVar9 * 0x28, lVar11 == 0)) {
        this_00 = TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<FRigElementKey_const_&>
                            ((TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                              *)(lVar2 + 0x40),uVar10,(FRigElementKey *)FVar14);
      }
      else {
        this_00 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(lVar11 + 0x10);
      }
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
                (this_00,&local_158);
      uVar18 = (ulonglong)local_50;
      FVar14 = (ForElementType<FRigElementKey>)((longlong)FVar14 + 0xc);
    }
    if (local_68.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
      FMemory::Free((void *)local_68.SecondaryData);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    this = local_f0;
    pTVar20 = local_100;
    pTVar21 = local_f8;
  }
  pcVar4 = (code *)swi(3);
  uVar8 = (*pcVar4)();
  return (bool)uVar8;
}

// FindModule @ 14a25b420

FRigModuleReference * __thiscall FModularRigModel::FindModule(FModularRigModel *this,FName *param_1)

{
  FString *pFVar1;
  FRigModuleReference *pFVar2;
  FRigModuleReference *pFVar3;
  FString local_18;
  
  if (*param_1 == (FName)0x0) {
    return (FRigModuleReference *)0x0;
  }
  pFVar2 = (FRigModuleReference *)(this->Modules).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (this->Modules).ArrayNum;
  do {
    if (pFVar2 == pFVar3) {
LAB_14a25b46f:
      pFVar1 = ::FName::ToString(param_1,&local_18);
      pFVar2 = FindModuleByPath(this,pFVar1);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return pFVar2;
    }
    if (pFVar2->Name == *param_1) {
      if (pFVar2 != (FRigModuleReference *)0x0) {
        return pFVar2;
      }
      goto LAB_14a25b46f;
    }
    pFVar2 = pFVar2 + 1;
  } while( true );
}

// FindModule @ 14a25b4b0

FRigModuleReference * __thiscall FModularRigModel::FindModule(FModularRigModel *this,FName *param_1)

{
  FString *pFVar1;
  FRigModuleReference *pFVar2;
  FRigModuleReference *pFVar3;
  FString FStack_18;
  
  if (*param_1 == (FName)0x0) {
    return (FRigModuleReference *)0x0;
  }
  pFVar2 = (FRigModuleReference *)(this->Modules).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (this->Modules).ArrayNum;
  do {
    if (pFVar2 == pFVar3) {
LAB_14a25b46f:
      pFVar1 = ::FName::ToString(param_1,&FStack_18);
      pFVar2 = FindModuleByPath(this,pFVar1);
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
      return pFVar2;
    }
    if (pFVar2->Name == *param_1) {
      if (pFVar2 != (FRigModuleReference *)0x0) {
        return pFVar2;
      }
      goto LAB_14a25b46f;
    }
    pFVar2 = pFVar2 + 1;
  } while( true );
}

// FindModuleByPath @ 14a25b970

FRigModuleReference * __thiscall
FModularRigModel::FindModuleByPath(FModularRigModel *this,FString *param_1)

{
  FRigModuleReference *pFVar1;
  FString local_28;
  FString local_18;
  
  if ((param_1->Data).ArrayNum < 2) {
    return (FRigModuleReference *)0x0;
  }
  ::FString::FString(&local_28,param_1);
  ::FString::FString(&local_18,&local_28);
  pFVar1 = TArray<FRigModuleReference,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FModularRigModel::FindModuleByPath_::__l2::<lambda_1>_>
                     (&this->Modules,(<lambda_1> *)&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return pFVar1;
}

// FindModuleInstancesOfClass @ 14a25b9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FRigModuleReference_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FModularRigModel::FindModuleInstancesOfClass
          (FModularRigModel *this,
          TArray<FRigModuleReference_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FAssetData *param_1)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined1 auStackY_918 [32];
  FString local_8d8;
  code *local_8c8 [2];
  undefined **local_8b8;
  TArray<FRigModuleReference_const_*,TSizedDefaultAllocator<32>_> *local_8b0;
  FString *local_8a8;
  undefined8 local_8a0;
  FString local_898;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_918;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  local_888.CurPos = local_868;
  local_888.Base = local_868;
  local_888.End = local_52;
  if ((param_1->PackageName != (FName)0x0) && (param_1->AssetName != (FName)0x0)) {
    ::FName::AppendString(&param_1->PackageName,&local_888);
    if (local_888.End < local_888.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_888,1);
    }
    *local_888.CurPos = L'.';
    local_888.CurPos = local_888.CurPos + 1;
    ::FName::AppendString(&param_1->AssetName,&local_888);
  }
  _Src = (FScriptContainerElement *)0x0;
  iVar2 = 0;
  pFVar1 = ::FString::ConstructFromPtrSize
                     (&local_8d8,local_888.Base,
                      (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1));
  if (&local_898 != pFVar1) {
    _Src = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = (pFVar1->Data).ArrayNum;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_8d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8d8.Data.ArrayNum = iVar2;
  if (iVar2 == 0) {
    local_8d8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)&local_8d8,iVar2,&local_8d8.Data.ArrayMax);
    memcpy(local_8d8.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
  }
  ::FString::RemoveFromEnd(&local_8d8,L"_C",2,IgnoreCase);
  local_8a0 = 0;
  local_8b8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FModularRigModel::FindModuleInstancesOfClass'::`2'::<lambda_1>,0,0>
               ::_vftable_;
  local_8a8 = &local_8d8;
  local_8c8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FModularRigModel::FindModuleInstancesOfClass'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
                 ::Call;
  local_8b0 = __return_storage_ptr__;
  ForEachModule(this,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_8c8,true);
  if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
  }
  if (_Src != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src);
  }
  return __return_storage_ptr__;
}

// FindModuleInstancesOfClass @ 14a25bbd0

TArray<FRigModuleReference_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FModularRigModel::FindModuleInstancesOfClass
          (FModularRigModel *this,
          TArray<FRigModuleReference_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  TArray<FRigModuleReference_const_*,TSizedDefaultAllocator<32>_> *local_20;
  FString *local_18;
  undefined8 local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar1 = (longlong)local_48.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar1 * 2);
  }
  ::FString::RemoveFromEnd(&local_48,L"_C",2,IgnoreCase);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FModularRigModel::FindModuleInstancesOfClass'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = &local_48;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FModularRigModel::FindModuleInstancesOfClass'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
                ::Call;
  local_20 = __return_storage_ptr__;
  ForEachModule(this,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_38,true);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindModuleInstancesOfClass @ 14a25bce0

TArray<FRigModuleReference_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FModularRigModel::FindModuleInstancesOfClass
          (FModularRigModel *this,
          TArray<FRigModuleReference_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSoftClassPtr<UControlRig> *param_1)

{
  void *pvVar1;
  ForAnyElementType FVar2;
  FString local_28;
  FString local_18;
  
  FSoftObjectPath::ToString((FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,&local_28);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,(wchar_t *)FVar2.Data);
  FindModuleInstancesOfClass(this,__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return __return_storage_ptr__;
}

// ForEachModule @ 14a25ce10

void __thiscall
FModularRigModel::ForEachModule
          (FModularRigModel *this,TFunction<bool___cdecl(FRigModuleReference_const_*)> *param_1,
          bool param_2)

{
  int iVar1;
  FRigModuleReference *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  ForAnyElementType *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ForAnyElementType local_88;
  int local_80 [2];
  undefined1 local_78 [8];
  undefined8 local_70;
  TFunction<bool___cdecl(FRigModuleReference_const_*)> local_68;
  
  uVar16 = 0;
  if (param_2) {
    pFVar12 = (this->RootModules).AllocatorInstance.Data;
    iVar1 = (this->RootModules).ArrayNum;
    pFVar3 = pFVar12 + (longlong)iVar1 * 8;
    while( true ) {
      if ((this->RootModules).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FRigModuleReference_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_78);
      }
      if (pFVar12 == pFVar3) break;
      local_68._0_8_ = *(undefined8 *)param_1;
      pFVar2 = *(FRigModuleReference **)pFVar12;
      local_68._40_8_ = 0;
      if (local_68._0_8_ != 0) {
        puVar10 = *(undefined8 **)&param_1->field_0x28;
        if (*(undefined8 **)&param_1->field_0x28 == (undefined8 *)0x0) {
          puVar10 = (undefined8 *)&param_1->field_0x10;
        }
        (**(code **)*puVar10)(puVar10,&local_68.field_0x10);
      }
      bVar5 = TraverseModules(pFVar2,&local_68);
      if (!bVar5) break;
      pFVar12 = pFVar12 + 8;
    }
  }
  else {
    local_80[0] = (this->RootModules).ArrayNum;
    lVar13 = (longlong)local_80[0];
    pFVar3 = (this->RootModules).AllocatorInstance.Data;
    local_88.Data = (FScriptContainerElement *)0x0;
    if (local_80[0] == 0) {
      local_80[1] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_80[0],0,&local_88,local_80[0],local_80 + 1);
      memcpy(local_88.Data,pFVar3,lVar13 << 3);
    }
    if (0 < local_80[0]) {
      uVar17 = uVar16;
      do {
        uVar15 = (uint)uVar16;
        uVar7 = 0;
        if ((int)uVar15 < local_80[0]) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        local_70 = *(undefined8 *)(local_88.Data + uVar17);
        UE::Core::Private::Function::CheckCallable(*(void **)param_1);
        pcVar4 = *(code **)param_1;
        plVar11 = *(longlong **)&param_1->field_0x28;
        if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
          plVar11 = (longlong *)&param_1->field_0x10;
        }
        uVar9 = (**(code **)(*plVar11 + 8))();
        cVar6 = (*pcVar4)(uVar9,&local_70);
        if (cVar6 == '\0') break;
        uVar7 = 0;
        if ((int)uVar15 < local_80[0]) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        lVar13 = *(longlong *)(local_88.Data + uVar17);
        pFVar14 = (ForAnyElementType *)(lVar13 + 0x2b8);
        if (&local_88 == pFVar14) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar1 = *(int *)(lVar13 + 0x2c0);
        if (iVar1 != 0) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar1,&local_88,local_80,local_80 + 1);
          memcpy(local_88.Data + (longlong)iVar8 * 8,pFVar14->Data,(longlong)iVar1 << 3);
        }
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 8;
      } while ((int)(uVar15 + 1) < local_80[0]);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  if (*(longlong *)param_1 != 0) {
    plVar11 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// GetController @ 14a261720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UModularRigController * __thiscall
FModularRigModel::GetController(FModularRigModel *this,bool param_1)

{
  bool bVar1;
  UObjectBaseUtility *this_00;
  UClass *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong *plVar5;
  ForAnyElementType FVar6;
  undefined1 auStack_e8 [32];
  FName local_c8;
  FString local_c0;
  FString local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((param_1) && ((this->Controller).field0_0x0.DebugPtr == (UObject *)0x0)) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->OuterClientHost).WeakPtr);
    if (bVar1) {
      this_00 = (UObjectBaseUtility *)FWeakObjectPtr::Get(&(this->OuterClientHost).WeakPtr);
    }
    else {
      this_00 = (UObjectBaseUtility *)0x0;
    }
    UObjectBaseUtility::GetPathName(this_00,&local_b0,(UObject *)0x0);
    ::FString::PrintfImpl(&local_c0,L"%s_ModularRig_Controller");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_c0.Data.ArrayNum != 0) {
      FVar6.Data = local_c0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_c8,(wchar_t *)FVar6.Data);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    pUVar2 = UModularRigController::StaticClass();
    bVar1 = FWeakObjectPtr::IsValid(&(this->OuterClientHost).WeakPtr);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&(this->OuterClientHost).WeakPtr);
    }
    else {
      pUVar3 = (UObject *)0x0;
    }
    if (local_c8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = UModularRigController::StaticClass();
    CheckIsClassChildOf_Internal(pUVar4,pUVar2);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = local_c8.ComparisonIndex.Value;
    local_98._20_4_ = local_c8.Number;
    local_98._24_4_ = RF_NoFlags;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = pUVar3;
    pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    *(FModularRigModel **)(pUVar3 + 1) = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    (this->Controller).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->Controller).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar2 = UModularRigController::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->Controller,pUVar2);
    if (bVar1) {
      return (UModularRigController *)(this->Controller).field0_0x0.DebugPtr;
    }
  }
  return (UModularRigController *)0x0;
}

// GetParentModule @ 14a2668e0

FRigModuleReference * __thiscall
FModularRigModel::GetParentModule(FModularRigModel *this,FName *param_1)

{
  FRigModuleReference *pFVar1;
  FString *pFVar2;
  FRigModuleReference *pFVar3;
  FRigModuleReference *pFVar4;
  FString local_18;
  
  pFVar1 = FindModule(this,param_1);
  if (pFVar1 == (FRigModuleReference *)0x0) {
    return (FRigModuleReference *)0x0;
  }
  if (pFVar1->ParentModuleName == (FName)0x0) {
    pFVar1 = (FRigModuleReference *)0x0;
  }
  else {
    pFVar4 = (FRigModuleReference *)(this->Modules).AllocatorInstance.Data;
    pFVar3 = pFVar4 + (this->Modules).ArrayNum;
    for (; pFVar4 != pFVar3; pFVar4 = pFVar4 + 1) {
      if (pFVar4->Name == pFVar1->ParentModuleName) {
        if (pFVar4 != (FRigModuleReference *)0x0) {
          return pFVar4;
        }
        break;
      }
    }
    pFVar2 = ::FName::ToString(&pFVar1->ParentModuleName,&local_18);
    pFVar1 = FindModuleByPath(this,pFVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return pFVar1;
    }
  }
  return pFVar1;
}

// GetParentModule @ 14a266990

FRigModuleReference * __thiscall
FModularRigModel::GetParentModule(FModularRigModel *this,FRigModuleReference *param_1)

{
  FString *pFVar1;
  FRigModuleReference *pFVar2;
  FRigModuleReference *pFVar3;
  FString local_18;
  
  if (param_1 != (FRigModuleReference *)0x0) {
    if (param_1->ParentModuleName != (FName)0x0) {
      pFVar2 = (FRigModuleReference *)(this->Modules).AllocatorInstance.Data;
      pFVar3 = pFVar2 + (this->Modules).ArrayNum;
      do {
        if (pFVar2 == pFVar3) {
LAB_14a2669de:
          pFVar1 = ::FName::ToString(&param_1->ParentModuleName,&local_18);
          pFVar2 = FindModuleByPath(this,pFVar1);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          return pFVar2;
        }
        if (pFVar2->Name == param_1->ParentModuleName) {
          if (pFVar2 != (FRigModuleReference *)0x0) {
            return pFVar2;
          }
          goto LAB_14a2669de;
        }
        pFVar2 = pFVar2 + 1;
      } while( true );
    }
  }
  return (FRigModuleReference *)0x0;
}

// GetParentModule @ 14a266a30

FRigModuleReference * __thiscall
FModularRigModel::GetParentModule(FModularRigModel *this,FName *param_1)

{
  FRigModuleReference *pFVar1;
  FString *pFVar2;
  FRigModuleReference *pFVar3;
  FRigModuleReference *pFVar4;
  FString local_18;
  
  pFVar1 = FindModule(this,param_1);
  if (pFVar1 != (FRigModuleReference *)0x0) {
    if (pFVar1->ParentModuleName != (FName)0x0) {
      pFVar4 = (FRigModuleReference *)(this->Modules).AllocatorInstance.Data;
      pFVar3 = pFVar4 + (this->Modules).ArrayNum;
      do {
        if (pFVar4 == pFVar3) {
LAB_14a266a88:
          pFVar2 = ::FName::ToString(&pFVar1->ParentModuleName,&local_18);
          pFVar1 = FindModuleByPath(this,pFVar2);
          if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return pFVar1;
          }
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return pFVar1;
        }
        if (pFVar4->Name == pFVar1->ParentModuleName) {
          if (pFVar4 != (FRigModuleReference *)0x0) {
            return pFVar4;
          }
          goto LAB_14a266a88;
        }
        pFVar4 = pFVar4 + 1;
      } while( true );
    }
  }
  return (FRigModuleReference *)0x0;
}

// GetParentModule @ 14a266ae0

FRigModuleReference * __thiscall
FModularRigModel::GetParentModule(FModularRigModel *this,FRigModuleReference *param_1)

{
  FString *pFVar1;
  FRigModuleReference *pFVar2;
  FRigModuleReference *pFVar3;
  FString local_18;
  
  if (param_1 != (FRigModuleReference *)0x0) {
    if (param_1->ParentModuleName != (FName)0x0) {
      pFVar2 = (FRigModuleReference *)(this->Modules).AllocatorInstance.Data;
      pFVar3 = pFVar2 + (this->Modules).ArrayNum;
      do {
        if (pFVar2 == pFVar3) {
LAB_14a266b2e:
          pFVar1 = ::FName::ToString(&param_1->ParentModuleName,&local_18);
          pFVar2 = FindModuleByPath(this,pFVar1);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          return pFVar2;
        }
        if (pFVar2->Name == param_1->ParentModuleName) {
          if (pFVar2 != (FRigModuleReference *)0x0) {
            return pFVar2;
          }
          goto LAB_14a266b2e;
        }
        pFVar2 = pFVar2 + 1;
      } while( true );
    }
  }
  return (FRigModuleReference *)0x0;
}

// IsModuleParentedTo @ 14a274a20

bool __thiscall
FModularRigModel::IsModuleParentedTo(FModularRigModel *this,FName *param_1,FName *param_2)

{
  FName *pFVar1;
  FName *this_00;
  FRigModuleReference *pFVar2;
  FRigModuleReference *pFVar3;
  FString *pFVar4;
  FRigModuleReference *pFVar5;
  FString local_18;
  
  pFVar2 = FindModule(this,param_1);
  pFVar3 = FindModule(this,param_2);
  if (((pFVar2 != (FRigModuleReference *)0x0) && (pFVar3 != (FRigModuleReference *)0x0)) &&
     (pFVar2 != pFVar3)) {
    while (pFVar2 != (FRigModuleReference *)0x0) {
      pFVar1 = &pFVar2->ParentModuleName;
      this_00 = &pFVar2->ParentModuleName;
      if (*pFVar1 == (FName)0x0) {
        return false;
      }
      pFVar2 = (FRigModuleReference *)(this->Modules).AllocatorInstance.Data;
      pFVar5 = pFVar2 + (this->Modules).ArrayNum;
      for (; pFVar2 != pFVar5; pFVar2 = pFVar2 + 1) {
        if (pFVar2->Name == *pFVar1) {
          if (pFVar2 != (FRigModuleReference *)0x0) goto LAB_14a274a70;
          break;
        }
      }
      pFVar4 = ::FName::ToString(this_00,&local_18);
      pFVar2 = FindModuleByPath(this,pFVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (pFVar2 == (FRigModuleReference *)0x0) {
        return false;
      }
LAB_14a274a70:
      if (pFVar2 == pFVar3) {
        return true;
      }
    }
  }
  return false;
}

// IsModuleParentedTo @ 14a274b20

bool __thiscall
FModularRigModel::IsModuleParentedTo
          (FModularRigModel *this,FRigModuleReference *param_1,FRigModuleReference *param_2)

{
  FName *pFVar1;
  FName *this_00;
  FString *pFVar2;
  FRigModuleReference *pFVar3;
  FString local_18;
  
  if (((param_1 != (FRigModuleReference *)0x0) && (param_2 != (FRigModuleReference *)0x0)) &&
     (param_1 != param_2)) {
LAB_14a274b50:
    do {
      if (param_1 == param_2) {
        return true;
      }
      if (param_1 == (FRigModuleReference *)0x0) {
        return false;
      }
      pFVar1 = &param_1->ParentModuleName;
      this_00 = &param_1->ParentModuleName;
      if (*pFVar1 == (FName)0x0) {
        return false;
      }
      param_1 = (FRigModuleReference *)(this->Modules).AllocatorInstance.Data;
      pFVar3 = param_1 + (this->Modules).ArrayNum;
      for (; param_1 != pFVar3; param_1 = param_1 + 1) {
        if (param_1->Name == *pFVar1) {
          if (param_1 != (FRigModuleReference *)0x0) goto LAB_14a274b50;
          break;
        }
      }
      pFVar2 = ::FName::ToString(this_00,&local_18);
      param_1 = FindModuleByPath(this,pFVar2);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    } while (param_1 != (FRigModuleReference *)0x0);
  }
  return false;
}

// PatchModelsOnLoad @ 14a278f20

/* WARNING: Removing unreachable block (ram,0x00014a279503) */
/* WARNING: Removing unreachable block (ram,0x00014a279508) */
/* WARNING: Removing unreachable block (ram,0x00014a279510) */

void __thiscall FModularRigModel::PatchModelsOnLoad(FModularRigModel *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FRigHierarchyModulePath *pFVar12;
  UModularRigController *this_00;
  FRigName *this_01;
  FName *pFVar13;
  FString *pFVar14;
  FString *pFVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  wchar_t *pwVar18;
  ForElementType<FSetElementId> FVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  TSet<TTuple<FRigHierarchyModulePath,FName>,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>,FDefaultSetAllocator>
  *pTVar25;
  uint uVar26;
  FRigModuleReference *this_02;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  FName *pFVar28;
  ulonglong uVar29;
  undefined1 local_res10 [8];
  ulonglong local_res18;
  ForAnyElementType local_2d8;
  undefined8 local_2d0;
  ForAnyElementType local_2c8;
  undefined8 local_2c0;
  TSet<TTuple<FRigHierarchyModulePath,FName>,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>,FDefaultSetAllocator>
  *local_2b8;
  longlong local_2b0;
  TOptional<FName>_u_0 local_2a8;
  void *local_2a0;
  undefined4 local_298;
  int local_294;
  FRigHierarchyModulePath local_288;
  FString local_248;
  void *local_238;
  undefined4 local_230;
  int local_22c;
  void *local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  FString local_208;
  void *local_1f8;
  undefined4 local_1f0;
  int local_1ec;
  void *local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  int local_1c8;
  int local_1c4;
  FName local_1c0;
  FName local_1b8;
  FScriptContainerElement *local_1b0;
  FString local_1a8;
  FScriptContainerElement *local_198;
  int iStack_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  FScriptContainerElement *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  FString *local_138;
  FName *local_130;
  FName local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FRigName local_f0;
  code *local_d8 [2];
  undefined **local_c8;
  FModularRigModel *local_c0;
  undefined8 local_b0;
  FRigHierarchyModulePath local_a8;
  undefined4 local_4c;
  
  iVar11 = (this->Modules).ArrayNum;
  bVar10 = false;
  uVar20 = 0;
  if (0 < iVar11) {
    lVar24 = 0;
    do {
      uVar21 = 0;
      if ((int)uVar20 < iVar11) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(FModularRigModel **)((this->Modules).AllocatorInstance.Data + lVar24 + 0x2c8) = this;
      if (bVar10) {
LAB_14a278fff:
        bVar10 = true;
      }
      else {
        uVar21 = 0;
        if ((int)uVar20 < (this->Modules).ArrayNum) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (1 < *(int *)((this->Modules).AllocatorInstance.Data + lVar24 + 0x28))
        goto LAB_14a278fff;
        bVar10 = false;
      }
      iVar11 = (this->Modules).ArrayNum;
      uVar20 = uVar20 + 1;
      lVar24 = lVar24 + 0x2d0;
    } while ((int)uVar20 < iVar11);
  }
  uVar20 = 0;
  lVar24 = 0;
  if ((this->Connections).ConnectionList.ArrayNum == 0) {
    local_b0 = 0;
    local_c8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FModularRigModel::PatchModelsOnLoad'::`7'::<lambda_1>,0,0>::
                _vftable_;
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FModularRigModel::PatchModelsOnLoad'::__l7::<lambda_1>,bool,FRigModuleReference_const_*>
                  ::Call;
    local_c0 = this;
    ForEachModule(this,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_d8,true);
  }
  if (bVar10) {
    local_2b8 = (TSet<TTuple<FRigHierarchyModulePath,FName>,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>,FDefaultSetAllocator>
                 *)&this->PreviousModulePaths;
    TSet<TTuple<FRigHierarchyModulePath,FName>,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>,FDefaultSetAllocator>
    ::Reset(local_2b8);
    uVar21 = (this->Modules).ArrayNum;
    local_2c8.Data = (FScriptContainerElement *)0x0;
    local_2c0 = 0;
    local_2d8.Data = (FScriptContainerElement *)0x0;
    local_2d0 = 0;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    local_2d0._0_4_ = uVar20;
    local_2d0._4_4_ = 0;
    if (0 < (int)uVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar21,&local_2c8,0,(int *)((longlong)&local_2c0 + 4));
      local_2b8 = (TSet<TTuple<FRigHierarchyModulePath,FName>,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>,FDefaultSetAllocator>
                   *)&this->PreviousModulePaths;
    }
    uVar21 = (this->Modules).ArrayNum;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if (local_2d0._4_4_ < (int)uVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar21,&local_2d8,(uint)local_2d0,(int *)((longlong)&local_2d0 + 4));
    }
    iVar11 = (this->Modules).ArrayNum;
    if (0 < iVar11) {
      do {
        uVar21 = 0;
        if ((int)uVar20 < iVar11) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_02 = (FRigModuleReference *)((this->Modules).AllocatorInstance.Data + lVar24);
        pFVar12 = FRigModuleReference::GetModulePath(this_02,&local_a8);
        if (((local_2c8.Data <= pFVar12) &&
            (pFVar12 < (FRigHierarchyModulePath *)
                       (local_2c8.Data + (longlong)local_2c0._4_4_ * 0x10))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = (int)local_2c0;
        if ((int)local_2c0 == local_2c0._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_2c8,(int *)((longlong)&local_2c0 + 4));
        }
        local_2c0 = CONCAT44(local_2c0._4_4_,iVar11 + 1);
        ::FString::FString((FString *)(local_2c8.Data + (longlong)iVar11 * 0x10),
                           &pFVar12->ModulePath);
        if ((local_a8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_a8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_a8.CachedElementNameString.field0_0x0.TypedValue.Data.
                                AllocatorInstance.Data);
        }
        if ((local_a8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_a8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_a8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                AllocatorInstance.Data);
        }
        if (local_a8.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.ModulePath.Data.AllocatorInstance.Data);
        }
        if (this_02->bShortNameBasedOnPath_DEPRECATED == false) {
          if ((this_02->ShortName_DEPRECATED).Data.ArrayNum == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = (wchar_t *)(this_02->ShortName_DEPRECATED).Data.AllocatorInstance.Data;
          }
          pFVar28 = ::FName::FName(&local_128,pwVar18);
        }
        else {
          pFVar28 = &local_1c0;
          local_1c0 = this_02->Name;
        }
        if (((local_2d8.Data <= pFVar28) &&
            (pFVar28 < (FName *)(local_2d8.Data + (longlong)local_2d0._4_4_ * 8))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = (uint)local_2d0;
        if ((uint)local_2d0 == local_2d0._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_2d8,(int *)((longlong)&local_2d0 + 4));
        }
        local_2d0 = CONCAT44(local_2d0._4_4_,iVar11 + 1);
        *(FName *)(local_2d8.Data + (longlong)iVar11 * 8) = *pFVar28;
        ::FString::PrintfImpl(&local_1a8,L"____TEMPORARY_MODULE_NAME_%03d");
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_1a8.Data.ArrayNum != 0) {
          FVar17.Data = local_1a8.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_1b8,(wchar_t *)FVar17.Data);
        this_02->Name = local_1b8;
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        iVar11 = (this->Modules).ArrayNum;
        uVar20 = uVar20 + 1;
        lVar24 = lVar24 + 0x2d0;
      } while ((int)uVar20 < iVar11);
      local_2b8 = (TSet<TTuple<FRigHierarchyModulePath,FName>,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>,FDefaultSetAllocator>
                   *)&this->PreviousModulePaths;
    }
    uVar23 = 0;
    if (0 < iVar11) {
      local_2b0 = 0;
      local_res18 = 0;
      uVar29 = uVar23;
      do {
        uVar6 = local_res18;
        uVar26 = (uint)uVar23;
        uVar21 = ~uVar26 >> 0x1f;
        uVar20 = 0;
        if ((int)uVar26 < iVar11) {
          uVar20 = uVar21;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar28 = (FName *)((this->Modules).AllocatorInstance.Data + uVar6);
        this_00 = GetController(this,true);
        uVar20 = 0;
        if ((int)uVar26 < (int)(uint)local_2d0) {
          uVar20 = uVar21;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_2a8 = (TOptional<FName>_u_0)0xffffffff;
        local_2a0 = (void *)0x0;
        local_298 = 0;
        local_294 = -1;
        if ((((TOptional<FName>_u_0 *)(local_2d8.Data + uVar29 * 8) != &local_2a8) &&
            (local_2a8 = (TOptional<FName>_u_0)
                         *(TOptional<FName>_u_0 *)
                          &((TOptional<FName>_u_0 *)(local_2d8.Data + uVar29 * 8))->TypedValue,
            local_2a8.TypedValue.ComparisonIndex.Value.Value == 0xffffffff)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x171,
                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_01 = UModularRigController::GetSafeNewName
                            (this_00,&local_f0,(FRigName *)&local_2a8.TypedValue,
                             (FRigModuleReference *)0x0);
        pFVar13 = FRigName::GetFName(this_01);
        *pFVar28 = *pFVar13;
        if ((local_f0.NameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
           (local_f0.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_f0.NameString.field0_0x0.TypedValue.Data.AllocatorInstance.
                                Data);
        }
        if ((local_294 != -1) && (local_2a0 != (void *)0x0)) {
          FMemory::Free(local_2a0);
        }
        uVar20 = 0;
        if ((int)uVar26 < (int)local_2c0) {
          uVar20 = uVar21;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar24 = local_2b0;
        ::FString::FString(&local_208,(FString *)(local_2c8.Data + local_2b0));
        local_138 = &local_208;
        local_1f8 = (void *)0x0;
        local_1f0 = 0;
        local_1ec = -1;
        local_1e8 = (void *)0x0;
        local_1e0 = 0;
        local_1dc = 0xffffffffffffffff;
        local_1d4 = 0;
        local_1d0 = 0xffffffff;
        local_1cc = 0;
        local_130 = pFVar28;
        TSet<TTuple<FRigHierarchyModulePath,FName>,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FRigHierarchyModulePath_&&,FName_const_&>_>
                  (local_2b8,
                   (TPairInitializer<FRigHierarchyModulePath_&&,FName_const_&> *)&stack0x00000020,
                   (bool *)&local_138);
        if (((int)local_1dc != -1) && (local_1e8 != (void *)0x0)) {
          FMemory::Free(local_1e8);
        }
        if ((local_1ec != -1) && (local_1f8 != (void *)0x0)) {
          FMemory::Free(local_1f8);
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        local_2b0 = lVar24 + 0x10;
        local_res18 = local_res18 + 0x2d0;
        uVar23 = (ulonglong)(uVar26 + 1);
        uVar29 = uVar29 + 1;
        iVar11 = (this->Modules).ArrayNum;
      } while ((int)(uVar26 + 1) < iVar11);
      local_2b8 = (TSet<TTuple<FRigHierarchyModulePath,FName>,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>,FDefaultSetAllocator>
                   *)&this->PreviousModulePaths;
    }
    pTVar25 = (TSet<TTuple<FRigHierarchyModulePath,FName>,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>,FDefaultSetAllocator>
               *)&this->PreviousModulePaths;
    uVar29 = 0;
    uVar23 = uVar29;
    if (0 < iVar11) {
      do {
        uVar26 = (uint)uVar23;
        uVar21 = 0;
        uVar20 = uVar21;
        if ((int)uVar26 < iVar11) {
          uVar20 = ~uVar26 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->Modules).AllocatorInstance.Data;
        if (1 < *(int *)(pFVar3 + uVar29 + 0x28)) {
          ::FString::FString(&local_248,(FString *)(pFVar3 + uVar29 + 0x20));
          local_238 = (void *)0x0;
          local_230 = 0;
          local_22c = -1;
          local_228 = (void *)0x0;
          local_220 = 0;
          local_21c = 0xffffffffffffffff;
          local_214 = 0;
          local_210 = 0xffffffff;
          local_20c = 0;
          pFVar14 = ::FString::ToLower(&local_248,&local_120);
          iVar11 = (pFVar14->Data).ArrayNum;
          if (iVar11 == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
            uVar21 = iVar11 - 1;
          }
          uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar21,pwVar18);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (*(int *)&(pTVar25->Elements).field_0x8 != *(int *)&(pTVar25->Elements).field_0x34) {
            FVar4 = (pTVar25->Hash).SecondaryData;
            FVar19 = (ForElementType<FSetElementId>)&pTVar25->Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = FVar4;
            }
            iVar11 = *(int *)((longlong)FVar19 + (ulonglong)(pTVar25->HashSize - 1U & uVar20) * 4);
            for (; iVar11 != -1;
                iVar11 = *(int *)(*(longlong *)&local_2b8->Elements + 0x48 + (longlong)iVar11 * 0x50
                                 )) {
              lVar24 = *(longlong *)&pTVar25->Elements;
              pFVar14 = ::FString::ToLower(&local_248,&local_100);
              pFVar15 = ::FString::ToLower((FString *)((longlong)iVar11 * 0x50 + lVar24),&local_110)
              ;
              iVar22 = (pFVar14->Data).ArrayNum;
              iVar2 = (pFVar15->Data).ArrayNum;
              if (iVar2 == iVar22) {
                if (iVar2 < 2) {
                  bVar10 = true;
                }
                else {
                  iVar22 = FGenericPlatformStricmp::Stricmp
                                     ((wchar_t *)(pFVar15->Data).AllocatorInstance.Data,
                                      (wchar_t *)(pFVar14->Data).AllocatorInstance.Data);
                  bVar10 = iVar22 == 0;
                }
              }
              else {
                bVar10 = iVar22 + iVar2 == 1;
              }
              if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_110.Data.AllocatorInstance.Data);
              }
              if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100.Data.AllocatorInstance.Data);
              }
              pTVar25 = local_2b8;
              if (bVar10) {
                if (iVar11 != -1) {
                  lVar24 = (longlong)iVar11 * 0x50 + *(longlong *)&local_2b8->Elements;
                  if (lVar24 == 0) goto LAB_14a27985a;
                  goto LAB_14a279880;
                }
                break;
              }
            }
          }
          lVar24 = 0;
LAB_14a27985a:
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L"");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
LAB_14a279880:
          *(undefined8 *)(pFVar3 + uVar29 + 0x30) = *(undefined8 *)(lVar24 + 0x40);
          if (((int)local_21c != -1) && (local_228 != (void *)0x0)) {
            FMemory::Free(local_228);
          }
          if ((local_22c != -1) && (local_238 != (void *)0x0)) {
            FMemory::Free(local_238);
          }
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          ::FString::Reset((FString *)(pFVar3 + uVar29 + 0x20),0);
        }
        uVar29 = uVar29 + 0x2d0;
        iVar11 = (this->Modules).ArrayNum;
        uVar23 = (ulonglong)(uVar26 + 1);
      } while ((int)(uVar26 + 1) < iVar11);
      local_2b8 = (TSet<TTuple<FRigHierarchyModulePath,FName>,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>,FDefaultSetAllocator>
                   *)&this->PreviousModulePaths;
    }
    uVar20 = 0;
    local_res18 = local_res18 & 0xffffffff00000000;
    if (0 < iVar11) {
      local_2b0 = 0;
      do {
        lVar24 = local_2b0;
        uVar21 = 0;
        if ((int)uVar20 < iVar11) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->Modules).AllocatorInstance.Data;
        iStack_190 = 0;
        local_178 = 0;
        uStack_18c = 1;
        local_188 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar3 + lVar24 + 0x268);
        iVar11 = *(int *)(pFVar3 + lVar24 + 0x280);
        local_1b0 = pFVar3 + lVar24 + 600;
        iStack_17c = 0;
        if (iVar11 != 0) {
          pTVar27 = local_188;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar3 + lVar24 + 0x278) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar27 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar3 + lVar24 + 0x278);
          }
          uVar20 = *(uint *)(pTVar27->AllocatorInstance).InlineData;
          while (uVar20 == 0) {
            lVar16 = (longlong)iStack_190;
            local_178 = local_178 + 0x20;
            iStack_190 = iStack_190 + 1;
            iStack_17c = iVar11;
            if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
            goto LAB_14a2799ef;
            uVar20 = *(uint *)((pTVar27->AllocatorInstance).InlineData + lVar16 * 4 + 4);
          }
          uStack_18c = -uVar20 & uVar20;
          uVar23 = (ulonglong)uStack_18c * 2 + 1;
          lVar16 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          local_1c8 = (int)lVar16;
          iStack_17c = local_178 + -1 + local_1c8;
          if (iVar11 < iStack_17c) {
            iStack_17c = iVar11;
          }
        }
LAB_14a2799ef:
        uStack_174 = local_4c;
        iStack_170 = *(int *)(pFVar3 + lVar24 + 0x260) - *(int *)(pFVar3 + lVar24 + 0x28c);
        uVar20 = *(uint *)(pFVar3 + lVar24 + 0x280);
        TStack_160._padding_ = CONCAT44(uStack_18c,iStack_190);
        uStack_180 = 0xffffffff;
        TStack_160.CurrentBitIndex = iStack_17c;
        TStack_160.UnvisitedBitMask = 0xffffffff;
        uVar21 = uVar20 & 0xffffffe0;
        iVar22 = (int)uVar20 >> 5;
        TStack_160._28_4_ = local_4c;
        TStack_160.BaseBitIndex = local_178;
        uStack_140 = CONCAT44(uStack_16c,iStack_170);
        local_198 = local_1b0;
        local_168 = local_1b0;
        TStack_160.Array = local_188;
        if ((((int)uVar20 < 0) || (iVar11 < (int)uVar20)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar7 = local_1b0;
        pTVar25 = local_2b8;
        uVar26 = *(uint *)(pFVar3 + lVar24 + 0x280);
        if (uVar20 != uVar26) {
          pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar3 + lVar24 + 0x268);
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar3 + lVar24 + 0x278) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar27 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar3 + lVar24 + 0x278);
          }
          uVar20 = -1 << ((byte)uVar20 & 0x1f) &
                   *(uint *)((pTVar27->AllocatorInstance).InlineData + (longlong)iVar22 * 4);
          while (uVar20 == 0) {
            lVar16 = (longlong)iVar22;
            uVar21 = uVar21 + 0x20;
            iVar22 = iVar22 + 1;
            uVar20 = uVar26;
            if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
            goto LAB_14a279b40;
            uVar20 = *(uint *)((pTVar27->AllocatorInstance).InlineData + lVar16 * 4 + 4);
          }
          uVar23 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          local_1c4 = (int)lVar16;
          uVar20 = local_1c4 + -1 + uVar21;
          if ((int)uVar26 < (int)uVar20) {
            uVar20 = uVar26;
          }
        }
LAB_14a279b40:
        while( true ) {
          pFVar8 = local_168;
          if (*(int *)(local_168 + 8) - *(int *)(local_168 + 0x34) != (int)uStack_140) {
            local_res10[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (((TStack_160.CurrentBitIndex == uVar20) &&
              (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar3 + lVar24 + 0x268)
              )) && (pFVar8 == pFVar7)) break;
          pFVar12 = (FRigHierarchyModulePath *)
                    (*(longlong *)pFVar8 + 8 + (longlong)TStack_160.CurrentBitIndex * 0x20);
          ::FString::FString(&local_288.ModulePath,(FString *)pFVar12);
          local_288.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
          local_288.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_288.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_288.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_288.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_288.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
          local_288.CachedElementFName.field0_0x0.TypedValue.Number = 0;
          local_288._44_8_ = 0xffffffffffffffff;
          local_288.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
               (FNameEntryId)0xffffffff;
          bVar10 = FRigHierarchyModulePath::ConvertToModuleNameFormatInline
                             (&local_288,
                              (TMap<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
                               *)pTVar25);
          iVar11 = local_288.ModulePath.Data.ArrayNum;
          FVar17.Data = local_288.ModulePath.Data.AllocatorInstance.Data;
          if ((bVar10) && (pFVar12 != &local_288)) {
            lVar16 = (longlong)local_288.ModulePath.Data.ArrayNum;
            piVar1 = &(pFVar12->ModulePath).Data.ArrayMax;
            (pFVar12->ModulePath).Data.ArrayNum = local_288.ModulePath.Data.ArrayNum;
            if ((local_288.ModulePath.Data.ArrayNum == 0) && (*piVar1 == 0)) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_288.ModulePath.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar12
                         ,local_288.ModulePath.Data.ArrayNum,piVar1);
              if (iVar11 != 0) {
                memcpy((pFVar12->ModulePath).Data.AllocatorInstance.Data,FVar17.Data,lVar16 * 2);
              }
            }
          }
          if ((local_288.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_288.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_288.CachedElementNameString.field0_0x0.TypedValue.Data.
                                  AllocatorInstance.Data);
          }
          if ((local_288.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_288.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_288.CachedModuleNameString.field0_0x0.TypedValue.Data.
                                  AllocatorInstance.Data);
          }
          if (local_288.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.ModulePath.Data.AllocatorInstance.Data);
          }
          TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
        }
        uVar20 = (int)local_res18 + 1;
        local_2b0 = local_2b0 + 0x2d0;
        local_res18 = CONCAT44(local_res18._4_4_,uVar20);
        iVar11 = (this->Modules).ArrayNum;
      } while ((int)uVar20 < iVar11);
    }
    if ((FName *)local_2d8.Data != (FName *)0x0) {
      FMemory::Free(local_2d8.Data);
    }
    DestructItems<FString,int>((FString *)local_2c8.Data,(int)local_2c0);
    if ((FRigHierarchyModulePath *)local_2c8.Data != (FRigHierarchyModulePath *)0x0) {
      FMemory::Free(local_2c8.Data);
    }
  }
  UpdateCachedChildren(this);
  FModularRigConnections::PatchOnLoad(&this->Connections,&this->PreviousModulePaths);
  FModularRigConnections::UpdateFromConnectionList(&this->Connections);
  iVar11 = (this->Modules).ArrayNum;
  uVar20 = 0;
  if (0 < iVar11) {
    do {
      uVar21 = 0;
      if ((int)uVar20 < iVar11) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FRigModuleReference::PatchModelsOnLoad
                ((FRigModuleReference *)
                 ((this->Modules).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x2d0));
      iVar11 = (this->Modules).ArrayNum;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar11);
  }
  return;
}

// SetOuterClientHost @ 14a295120

void __thiscall FModularRigModel::SetOuterClientHost(FModularRigModel *this,UObject *param_1)

{
  UObject *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&(this->OuterClientHost).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// SortModuleNames @ 14a297620

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FModularRigModel::SortModuleNames
          (FModularRigModel *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_20;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_18;
  undefined8 local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FModularRigModel::SortModuleNames'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FModularRigModel::SortModuleNames'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
                ::Call;
  local_20 = param_1;
  local_18 = __return_storage_ptr__;
  ForEachModule(this,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_38,true);
  return __return_storage_ptr__;
}

// TraverseModules @ 14a29db20

bool __cdecl
FModularRigModel::TraverseModules
          (FRigModuleReference *param_1,
          TFunction<bool___cdecl(FRigModuleReference_const_*)> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  FRigModuleReference *pFVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  FScriptContainerElement *pFVar11;
  longlong *plVar12;
  undefined1 local_78 [8];
  FRigModuleReference *local_70;
  TFunction<bool___cdecl(FRigModuleReference_const_*)> local_68;
  
  local_70 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  plVar12 = (longlong *)&param_2->field_0x10;
  pcVar3 = *(code **)param_2;
  plVar9 = plVar12;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar9 = *(longlong **)&param_2->field_0x28;
  }
  uVar8 = (**(code **)(*plVar9 + 8))();
  cVar6 = (*pcVar3)(uVar8,&local_70);
  if (cVar6 == '\0') {
    lVar4 = *(longlong *)param_2;
  }
  else {
    pFVar11 = (param_1->CachedChildren).AllocatorInstance.Data;
    iVar2 = (param_1->CachedChildren).ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->CachedChildren).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FRigModuleReference_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_78);
      }
      if (pFVar11 == pFVar1) {
        if (*(longlong *)param_2 != 0) {
          if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
            plVar12 = *(longlong **)&param_2->field_0x28;
          }
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
        return true;
      }
      local_68._0_8_ = *(undefined8 *)param_2;
      pFVar5 = *(FRigModuleReference **)pFVar11;
      local_68._40_8_ = 0;
      if (local_68._0_8_ != 0) {
        puVar10 = *(undefined8 **)&param_2->field_0x28;
        if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
          puVar10 = plVar12;
        }
        (**(code **)*puVar10)(puVar10,&local_68.field_0x10);
      }
      bVar7 = TraverseModules(pFVar5,&local_68);
      if (!bVar7) break;
      pFVar11 = pFVar11 + 8;
    }
    lVar4 = *(longlong *)param_2;
  }
  if (lVar4 != 0) {
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar12 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  return false;
}

// UpdateCachedChildren @ 14a2a1ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FModularRigModel::UpdateCachedChildren(FModularRigModel *this)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  uint uVar14;
  FRigModuleReference *this_00;
  ForAnyElementType *pFVar15;
  FRigModuleReference *pFVar16;
  int *piVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_218 [32];
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  FScriptContainerElement *local_1b0;
  uint local_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a0;
  undefined4 local_198;
  uint uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  int local_184;
  undefined1 local_180 [8];
  FName local_178;
  FRigModuleReference *local_170;
  FRigModuleReference *local_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  FName *local_138;
  FRigModuleReference **local_130;
  FRigHierarchyModulePath *local_128;
  FRigModuleReference **local_120;
  FRigHierarchyModulePath local_118;
  undefined1 local_d8 [32];
  ForElementType<unsigned_int> local_b8;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  TSet<TTuple<FString,FRigModuleReference_*>,TDefaultMapHashableKeyFuncs<FString,FRigModuleReference_*,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  uVar14 = (this->Modules).ArrayNum;
  uVar9 = 0;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (ForElementType<unsigned_int>)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = -1;
  local_a4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  if (uVar14 == 0) goto LAB_14a2a1f91;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_d8,uVar14);
  if (uVar14 < 4) {
    uVar14 = 1;
  }
  else {
    uVar20 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_188 = (undefined4)lVar11;
    uVar14 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_90 != 0) && ((int)uVar14 <= (int)local_90)) goto LAB_14a2a1f91;
  local_90 = uVar14;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
  }
  if (uVar14 != 0) {
    uVar19 = uVar14;
    if (uVar14 < 2) {
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_14a2a1dde;
      }
    }
    else {
LAB_14a2a1dde:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar19,4);
    }
    if (0 < (int)uVar14) {
      uVar21 = (ulonglong)uVar14;
      uVar20 = uVar9;
      do {
        FVar8.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_98.Data;
        }
        uVar6 = uVar20 & (longlong)(int)uVar14 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(FVar8.Data + uVar6 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  if (local_90 != 0) {
    pTStack_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
    local_1a8 = 0;
    uStack_1a4 = 1;
    uStack_194 = 0;
    uStack_190 = 0;
    if (local_b0 != 0) {
      FVar22 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
      if (local_b8 != (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_b8;
      }
      uVar14 = *(uint *)FVar22;
      uVar20 = uVar9;
      while (uVar14 == 0) {
        uStack_190 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_190;
        iVar7 = (int)uVar9;
        local_1a8 = iVar7 + 1;
        uVar9 = (ulonglong)local_1a8;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1a8)
        goto LAB_14a2a1eed;
        uVar14 = ((uint *)((longlong)FVar22 + 4))[iVar7];
      }
      uStack_1a4 = -uVar14 & uVar14;
      uVar9 = (ulonglong)uStack_1a4 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_184 = (int)lVar11;
      uStack_194 = local_184 + -1 + uStack_190;
      uVar9 = (ulonglong)uStack_194;
      if ((int)local_b0 < (int)uStack_194) {
LAB_14a2a1eed:
        uVar9 = (ulonglong)local_b0;
        uStack_194 = local_b0;
      }
    }
    local_198 = 0xffffffff;
    local_160 = (longlong *)local_d8;
    local_158._padding_ = CONCAT44(uStack_1a4,local_1a8);
    local_158.CurrentBitIndex = uStack_194;
    local_158.UnvisitedBitMask = 0xffffffff;
    local_158._28_4_ = uStack_18c;
    local_158.BaseBitIndex = uStack_190;
    local_158.Array = pTStack_1a0;
    if ((int)uVar9 < (int)local_b0) {
      do {
        iVar7 = (int)uVar9;
        uVar1 = *(undefined8 *)(*local_160 + (longlong)iVar7 * 0x18);
        lVar11 = *local_160 + (longlong)iVar7 * 0x18;
        uVar14 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
        uVar14 = local_90 - 1 & uVar14 + (int)((ulonglong)uVar1 >> 0x20);
        *(uint *)(lVar11 + 0x14) = uVar14;
        FVar8.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_98.Data;
        }
        uVar9 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(lVar11 + 0x10) = *(undefined4 *)(FVar8.Data + uVar9 * 4);
        *(int *)(FVar8.Data + uVar9 * 4) = iVar7;
        local_158.UnvisitedBitMask = local_158.UnvisitedBitMask & ~local_158._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_158);
        uVar9 = (ulonglong)(uint)local_158.CurrentBitIndex;
      } while (local_158.CurrentBitIndex < (local_158.Array)->NumBits);
    }
  }
LAB_14a2a1f91:
  this_00 = (FRigModuleReference *)(this->Modules).AllocatorInstance.Data;
  iVar7 = (this->Modules).ArrayNum;
  local_88.Elements._0_8_ = 0;
  piVar17 = &(this_00->CachedChildren).ArrayNum;
  pFVar16 = this_00 + iVar7;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  while( true ) {
    if ((this->Modules).ArrayNum != iVar7) {
      local_1c8 = 0;
      `TCheckedPointerIterator<FRigModuleReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1c8);
    }
    if (this_00 == pFVar16) break;
    *piVar17 = 0;
    if (piVar17[1] < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(piVar17 + -2),0,piVar17 + 1);
    }
    if (piVar17[-0xa6] < 2) {
      local_178 = this_00->Name;
      local_138 = &local_178;
      local_130 = &local_170;
      local_170 = this_00;
      TSet<TTuple<FName,FRigModuleReference_*>,TDefaultMapHashableKeyFuncs<FName,FRigModuleReference_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,FRigModuleReference_*_&&>_>
                ((TSet<TTuple<FName,FRigModuleReference_*>,TDefaultMapHashableKeyFuncs<FName,FRigModuleReference_*,0>,FDefaultSetAllocator>
                  *)local_d8,(TPairInitializer<FName_&&,FRigModuleReference_*_&&> *)local_180,
                 (bool *)&local_138);
      this_00 = this_00 + 1;
      piVar17 = piVar17 + 0xb4;
    }
    else {
      local_168 = this_00;
      local_128 = FRigModuleReference::GetModulePath(this_00,&local_118);
      local_120 = &local_168;
      TSet<TTuple<FString,FRigModuleReference_*>,TDefaultMapHashableKeyFuncs<FString,FRigModuleReference_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FRigModuleReference_*_&&>_>
                (&local_88,
                 (TPairInitializer<FString_const_&,FRigModuleReference_*_&&> *)(local_180 + 4),
                 (bool *)&local_128);
      if ((local_118.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_118.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_118.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if ((local_118.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_118.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_118.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if (local_118.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.ModulePath.Data.AllocatorInstance.Data);
      }
      this_00 = this_00 + 1;
      piVar17 = piVar17 + 0xb4;
    }
  }
  piVar17 = &(this->RootModules).ArrayMax;
  (this->RootModules).ArrayNum = 0;
  if ((this->RootModules).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RootModules).AllocatorInstance,0,piVar17);
  }
  iVar7 = (this->Modules).ArrayNum;
  pFVar18 = (this->Modules).AllocatorInstance.Data;
  pFVar23 = pFVar18 + (longlong)iVar7 * 0x2d0;
LAB_14a2a2150:
  do {
    while( true ) {
      if ((this->Modules).ArrayNum != iVar7) {
        local_1c7[0] = 0;
        `TCheckedPointerIterator<FRigModuleReference,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1c7);
      }
      if (pFVar18 == pFVar23) {
        local_88.HashSize = 0;
        if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_88.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FRigModuleReference_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FRigModuleReference_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_88.Elements);
        local_90 = 0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FRigModuleReference_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FRigModuleReference_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,FRigModuleReference_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_d8);
        return;
      }
      lVar11 = *(longlong *)(pFVar18 + 0x30);
      if ((lVar11 != 0) || (1 < *(int *)(pFVar18 + 0x28))) break;
      pFVar2 = (this->RootModules).AllocatorInstance.Data;
      local_1c0 = pFVar18;
      if (((pFVar2 <= (FScriptContainerElement *)&local_1c0) &&
          ((FScriptContainerElement *)&local_1c0 < pFVar2 + (longlong)*piVar17 * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->RootModules).ArrayNum;
      if (iVar5 == *piVar17) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->RootModules).AllocatorInstance,piVar17);
      }
      pFVar18 = pFVar18 + 0x2d0;
      (this->RootModules).ArrayNum = iVar5 + 1;
      *(FScriptContainerElement **)
       ((this->RootModules).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_1c0;
    }
    uVar14 = ::GetTypeHash((FNameEntryId)(uint)lVar11);
    if (local_d8._8_4_ != local_a4) {
      FVar8.Data = local_a0;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FVar8.Data = local_98.Data;
      }
      iVar5 = *(int *)(FVar8.Data +
                      (ulonglong)(local_90 - 1 & (int)((ulonglong)lVar11 >> 0x20) + uVar14) * 4);
      while (iVar5 != -1) {
        pFVar2 = (FScriptContainerElement *)(local_d8._0_8_ + (longlong)iVar5 * 0x18);
        if (*(longlong *)(local_d8._0_8_ + (longlong)iVar5 * 0x18) == lVar11) {
          pFVar10 = pFVar2 + 8;
          if (pFVar2 == (FScriptContainerElement *)0x0) {
            pFVar10 = (FScriptContainerElement *)0x0;
          }
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            lVar11 = *(longlong *)pFVar10;
            pFVar15 = (ForAnyElementType *)(lVar11 + 0x2b8);
            local_1b8 = pFVar18;
            if (((pFVar15->Data <= (FScriptContainerElement *)&local_1b8) &&
                ((FScriptContainerElement *)&local_1b8 <
                 pFVar15->Data + (longlong)*(int *)(lVar11 + 0x2c4) * 8)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = *(int *)(lVar11 + 0x2c0);
            if (iVar5 == *(int *)(lVar11 + 0x2c4)) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,pFVar15,(int *)(lVar11 + 0x2c4));
            }
            *(int *)(lVar11 + 0x2c0) = iVar5 + 1;
            pFVar18 = pFVar18 + 0x2d0;
            *(FScriptContainerElement **)(pFVar15->Data + (longlong)iVar5 * 8) = local_1b8;
            goto LAB_14a2a2150;
          }
          break;
        }
        iVar5 = *(int *)(pFVar2 + 0x10);
      }
    }
    iVar5 = *(int *)(pFVar18 + 0x28) + -1;
    if (*(int *)(pFVar18 + 0x28) == 0) {
      pwVar13 = L"";
      iVar5 = 0;
    }
    else {
      pwVar13 = *(wchar_t **)(pFVar18 + 0x20);
    }
    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar13);
    iVar5 = TSet<TTuple<FString,FRigModuleReference_*>,TDefaultMapHashableKeyFuncs<FString,FRigModuleReference_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(&local_88,uVar14,(FString *)(pFVar18 + 0x20));
    if (iVar5 != -1) {
      lVar11 = (longlong)iVar5 * 0x20 + local_88.Elements._0_8_;
      plVar12 = (longlong *)(lVar11 + 0x10);
      if (lVar11 == 0) {
        plVar12 = (longlong *)0x0;
      }
      if (plVar12 != (longlong *)0x0) {
        lVar11 = *plVar12;
        pFVar15 = (ForAnyElementType *)(lVar11 + 0x2b8);
        local_1b0 = pFVar18;
        if (((pFVar15->Data <= (FScriptContainerElement *)&local_1b0) &&
            ((FScriptContainerElement *)&local_1b0 <
             pFVar15->Data + (longlong)*(int *)(lVar11 + 0x2c4) * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = *(int *)(lVar11 + 0x2c0);
        if (iVar5 == *(int *)(lVar11 + 0x2c4)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar15,(int *)(lVar11 + 0x2c4));
        }
        *(int *)(lVar11 + 0x2c0) = iVar5 + 1;
        *(FScriptContainerElement **)(pFVar15->Data + (longlong)iVar5 * 8) = local_1b0;
      }
    }
    pFVar18 = pFVar18 + 0x2d0;
  } while( true );
}

