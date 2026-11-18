// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FromJsonValue @ 142178da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::FPropertyPathNameSegment::FromJsonValue
          (TSharedPtr<FJsonValue,1> *param_1,FPropertyPathNameSegment *param_2)

{
  FJsonValue *pFVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FJsonObject *pFVar6;
  FName *pFVar7;
  int iVar8;
  ForElementType<UE::FPropertyTypeNameNode> FVar9;
  undefined1 auStack_148 [32];
  TStringView<wchar_t> local_128;
  TSharedPtr<FJsonObject,1> *local_118;
  FString local_110;
  FString local_100;
  FPropertyTypeNameBuilder local_e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar1 = param_1->Object;
  bVar4 = false;
  iVar5 = 0;
  local_118 = (TSharedPtr<FJsonObject,1> *)0x0;
  if ((((pFVar1 == (FJsonValue *)0x0) ||
       (cVar2 = (**(code **)(pFVar1->_padding_ + 0x80))(pFVar1,&local_118), cVar2 == '\0')) ||
      (local_118 == (TSharedPtr<FJsonObject,1> *)0x0)) || (local_118->Object == (FJsonObject *)0x0))
  {
    bVar4 = false;
  }
  else {
    local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.Data.ArrayNum = 0;
    local_100.Data.ArrayMax = 0;
    pFVar6 = TSharedPtr<FJsonObject,1>::operator->(local_118);
    local_128.Size = 4;
    local_128.DataPtr = L"Name";
    bVar3 = FJsonObject::TryGetStringField(pFVar6,&local_128,&local_100);
    if (bVar3) {
      iVar8 = local_100.Data.ArrayNum + -1;
      if (local_100.Data.ArrayNum == 0) {
        iVar8 = iVar5;
      }
      pFVar7 = ::FName::FName((FName *)&local_128,iVar8,
                              (wchar_t *)local_100.Data.AllocatorInstance.Data,FNAME_Add);
      param_2->Name = *pFVar7;
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.Data.ArrayNum = 0;
      local_110.Data.ArrayMax = 0;
      pFVar6 = TSharedPtr<FJsonObject,1>::operator->(local_118);
      local_128.DataPtr = L"Type";
      local_128.Size = 4;
      bVar3 = FJsonObject::TryGetStringField(pFVar6,&local_128,&local_110);
      bVar4 = false;
      if (bVar3) {
        local_e8.Nodes.AllocatorInstance.SecondaryData =
             (ForElementType<UE::FPropertyTypeNameNode>)0x0;
        local_e8.Nodes.ArrayNum = 0;
        local_e8.Nodes.ArrayMax = 10;
        local_128.Size = local_110.Data.ArrayNum + -1;
        local_e8.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        if (local_110.Data.ArrayNum == 0) {
          local_128.Size = 0;
        }
        local_e8.OuterNodeIndex.ArrayNum = 0;
        local_128.DataPtr = (wchar_t *)local_110.Data.AllocatorInstance.Data;
        local_e8.OuterNodeIndex.ArrayMax = 10;
        local_e8.ActiveIndex = -1;
        bVar3 = FPropertyTypeNameBuilder::TryParse(&local_e8,&local_128);
        if (bVar3) {
          if (local_e8.Nodes.ArrayNum != 0) {
            FVar9 = (ForElementType<UE::FPropertyTypeNameNode>)&local_e8;
            if (local_e8.Nodes.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
              FVar9 = local_e8.Nodes.AllocatorInstance.SecondaryData;
            }
            iVar5 = FPropertyTypeNameTable::FindOrAddByName
                              (&GPropertyTypeNameTable,(FPropertyTypeNameNode *)FVar9);
          }
          (param_2->Type).Index = iVar5;
          pFVar6 = TSharedPtr<FJsonObject,1>::operator->(local_118);
          local_128.DataPtr = L"Index";
          local_128.Size = 5;
          bVar4 = FJsonObject::TryGetNumberField(pFVar6,&local_128,&param_2->Index);
          if (!bVar4) {
            param_2->Index = -1;
          }
          bVar4 = true;
        }
        if (local_e8.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_e8.OuterNodeIndex.AllocatorInstance.SecondaryData);
        }
        if (local_e8.Nodes.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
          FMemory::Free((void *)local_e8.Nodes.AllocatorInstance.SecondaryData);
        }
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  return bVar4;
}

// ToJsonValue @ 142194630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<FJsonValue,1> * __thiscall
UE::FPropertyPathNameSegment::ToJsonValue
          (FPropertyPathNameSegment *this,TSharedRef<FJsonValue,1> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FJsonValue,1> *pTVar7;
  FString *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *this_00;
  undefined1 auStack_1d8 [32];
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  TSharedPtr<FJsonObject,1> local_188;
  FString local_178;
  FString local_168;
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pTVar6 = ::operator_new(0x60);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    this_00 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    this_00 = pTVar6 + 1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[4]._padding_ + 4) = 0;
    pTVar6[5]._padding_ = 0;
    if (this_00 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedRef<FJsonValue,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  pFVar8 = ::FName::ToString(&this->Name,&local_178);
  ::FString::FString(&local_1b8,L"Name");
  FJsonObject::SetStringField((FJsonObject *)this_00,&local_1b8,pFVar8);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  uVar1 = (this->Type).Index;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_158.End = (wchar_t *)local_38;
  AppendNode(&local_158,
             (FPropertyTypeNameNode *)
             ((longlong)GPropertyTypeNameTable.Blocks[(longlong)(int)uVar1 >> 0xd] +
             (ulonglong)(uVar1 & 0x1fff) * 0xc));
  if (local_158.End < local_158.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
  }
  pwVar4 = local_158.Base;
  *local_158.CurPos = L'\0';
  ::FString::FString(&local_1a8,L"Type");
  pFVar8 = ::FString::FString(&local_168,pwVar4);
  FJsonObject::SetStringField((FJsonObject *)this_00,&local_1a8,pFVar8);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  iVar2 = this->Index;
  if (iVar2 != -1) {
    ::FString::FString(&local_198,L"Index");
    FJsonObject::SetNumberField((FJsonObject *)this_00,&local_198,(double)iVar2);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = ::operator_new(0x30);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_188.Object = (FJsonObject *)this_00;
    local_188.SharedReferenceCount.ReferenceController = pTVar6;
    FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar9 + 1),&local_188);
    if (pTVar9 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedRef<FJsonValue,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar9 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    pTVar10 = pTVar9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

