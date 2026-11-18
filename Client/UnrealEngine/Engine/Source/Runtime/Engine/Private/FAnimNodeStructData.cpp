// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147497fc0

UScriptStruct * __cdecl FAnimNodeStructData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNodeStructData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNodeStructData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeStructData,(UObject *)pUVar1,
                         L"AnimNodeStructData");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNodeStructData.OuterSingleton;
}

// FAnimNodeStructData @ 1474b0c40

FAnimNodeStructData * __thiscall
FAnimNodeStructData::FAnimNodeStructData(FAnimNodeStructData *this,UScriptStruct *param_1)

{
  void *pvVar1;
  code *pcVar2;
  FProperty *pFVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FAnimNodeStructData *pFVar8;
  longlong lVar9;
  uint local_res8 [2];
  TPairInitializer<FName_&&,int_const_&> local_res10;
  FProperty *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  int **local_40;
  uint *local_38;
  TFieldIterator<FProperty> local_30;
  
  *(undefined8 *)&this->NameToIndexMap = 0;
  *(undefined8 *)&(this->NameToIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->NameToIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->NameToIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->NameToIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameToIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameToIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->NameToIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->NameToIndexMap).field_0x48 = 0;
  this->NumProperties = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  if (param_1 == (UScriptStruct *)0x0) {
    local_30.Field = (FField *)0x0;
  }
  else {
    local_30.Field = (FField *)param_1->_padding_;
  }
  local_30.InterfaceIndex = -1;
  local_30.bIncludeSuper = true;
  local_30.bIncludeDeprecated = true;
  local_30.bIncludeInterface = false;
  local_30.Struct = (UStruct *)param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_30);
  pFVar3 = (FProperty *)local_30.Field;
  while (local_30.Field = (FField *)pFVar3, pFVar3 != (FProperty *)0x0) {
    local_58 = pFVar3;
    if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
        (local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20), lVar9 = (longlong)local_48._4_4_,
        (FScriptContainerElement *)&local_58 < local_50.Data + lVar9 * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FAnimNodeStructData *)(*pcVar2)();
      return pFVar8;
    }
    iVar6 = (int)local_48;
    if ((int)local_48 == local_48._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_50,(int *)((longlong)&local_48 + 4));
    }
    local_48 = CONCAT44(local_48._4_4_,iVar6 + 1);
    *(FProperty **)(local_50.Data + (longlong)iVar6 * 8) = local_58;
    local_30.Field = (FField *)pFVar3->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_30);
    pFVar3 = (FProperty *)local_30.Field;
  }
  iVar6 = (int)local_48;
  AlgoImpl::
  IntroSortInternal<FProperty_*,int,FIdentityFunctor,_FAnimNodeStructData::FAnimNodeStructData_::__l2::<lambda_1>_>
            ((FProperty **)local_50.Data,iVar6,local_res8[0]._0_1_,(<lambda_1>)local_res8[0]._0_1_);
  local_res8[0] = 0;
  if (0 < (int)local_48) {
    do {
      uVar4 = local_res8[0];
      uVar7 = 0;
      if ((int)local_res8[0] < (int)local_48) {
        uVar7 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FAnimNodeStructData *)(*pcVar2)();
        return pFVar8;
      }
      pvVar1 = *(void **)(local_50.Data + (longlong)(int)uVar4 * 8);
      bVar5 = IsThisNotNull(pvVar1,"FField::GetFName");
      if (bVar5) {
        local_res10.Value = *(int **)((longlong)pvVar1 + 0x20);
      }
      else {
        local_res10.Value = (int *)0x0;
      }
      local_40 = &local_res10.Value;
      local_38 = local_res8;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_&&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)this,&local_res10,(bool *)&local_40);
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < (int)local_48);
  }
  this->NumProperties = local_res8[0];
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return this;
}

// GetNumProperties @ 1474dc500

int __thiscall FAnimNodeStructData::GetNumProperties(FAnimNodeStructData *this)

{
  return this->NumProperties;
}

// GetPropertyIndex @ 1474dd9d0

int __thiscall FAnimNodeStructData::GetPropertyIndex(FAnimNodeStructData *this,FName param_1)

{
  int *piVar1;
  
  piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this,param_1);
  if (piVar1 != (int *)0x0) {
    return *piVar1;
  }
  return -1;
}

