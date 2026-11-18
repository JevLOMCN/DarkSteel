// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 15

// FTraceControllerCommands @ 148cedb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTraceControllerCommands * __thiscall
FTraceControllerCommands::FTraceControllerCommands
          (FTraceControllerCommands *this,TSharedPtr<IMessageBus,1> *param_1,
          FMessageAddress *param_2)

{
  TSharedPtr<FMessageEndpoint,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  IMessageBus *pIVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  void *pvVar13;
  FTraceControllerCommands *pFVar14;
  FTaskGraphInterface *pFVar15;
  ulong64 uVar16;
  int iVar17;
  undefined1 auStack_218 [32];
  FString local_1f8;
  TSharedPtr<FMessageEndpoint,1> local_1e8;
  undefined1 local_1d8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c0;
  ForAnyElementType FStack_1b8;
  int local_1b0;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  bool local_198;
  FName local_194;
  Type local_18c;
  FName local_188;
  FDestructionSentinel local_180;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_218;
  uVar7 = (param_2->UniqueId).A;
  uVar8 = (param_2->UniqueId).B;
  uVar9 = (param_2->UniqueId).C;
  uVar10 = (param_2->UniqueId).D;
  pTVar1 = &this->MessageEndpoint;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  this->_padding_ = (longlong)&___7FTraceControllerCommands__6B_;
  (this->ServiceAddress).UniqueId.A = uVar7;
  (this->ServiceAddress).UniqueId.B = uVar8;
  (this->ServiceAddress).UniqueId.C = uVar9;
  (this->ServiceAddress).UniqueId.D = uVar10;
  *(undefined8 *)&this->SettableChannels = 0;
  local_168.Base = local_148;
  *(undefined8 *)&(this->SettableChannels).field_0x8 = 0;
  *(undefined8 *)&(this->SettableChannels).field_0x20 = 0;
  pTVar1->Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined4 *)&(this->SettableChannels).field_0x28 = 0;
  *(undefined4 *)&(this->SettableChannels).field_0x2c = 0x80;
  *(undefined4 *)&(this->SettableChannels).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SettableChannels).field_0x34 = 0;
  local_168.CurPos = local_148;
  *(undefined8 *)&(this->SettableChannels).field_0x40 = 0;
  local_168.End = (wchar_t *)local_48;
  *(undefined4 *)&(this->SettableChannels).field_0x48 = 0;
  pvVar13 = FGenericPlatformString::Memcpy(local_148,L"FTraceControllerCommands_",0x32);
  local_168.CurPos = (wchar_t *)((longlong)pvVar13 + 0x32);
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.Data.ArrayNum = 0;
  local_1f8.Data.ArrayMax = 0;
  FGuid::AppendString(&param_2->UniqueId,&local_1f8,Digits);
  FVar11.Data = local_1f8.Data.AllocatorInstance.Data;
  iVar17 = local_1f8.Data.ArrayNum + -1;
  if (local_1f8.Data.ArrayNum == 0) {
    iVar17 = 0;
  }
  uVar16 = (ulong64)iVar17;
  if (local_168.End < local_168.CurPos + uVar16) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar16);
  }
  if (iVar17 != 0) {
    pvVar13 = FGenericPlatformString::Memcpy(local_168.CurPos,FVar11.Data,uVar16 * 2);
    local_168.CurPos = (wchar_t *)((longlong)pvVar13 + uVar16 * 2);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (param_1->Object == (IMessageBus *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FTraceControllerCommands *)(*pcVar6)();
      return pFVar14;
    }
  }
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar5 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar5 == (IMessageBus *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FTraceControllerCommands *)(*pcVar6)();
      return pFVar14;
    }
  }
  if (local_168.End < local_168.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,1);
  }
  *local_168.CurPos = L'\0';
  ::FName::FName(&local_188,local_168.Base);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_1c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1b8.Data = (FScriptContainerElement *)0x0;
  local_194 = local_188;
  local_1d8[0x10] = false;
  local_1b0 = 0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0._0_4_ = 0;
  local_1a0._4_4_ = 0;
  local_198 = false;
  local_1d8._0_8_ = pIVar5;
  local_1d8._8_8_ = pTVar4;
  pFVar15 = FTaskGraphInterface::Get();
  local_18c = (**(code **)((longlong)*pFVar15 + 0x10))(pFVar15,0);
  FMessageEndpointBuilder::Build((FMessageEndpointBuilder *)local_1d8,&local_1e8);
  if (pTVar1 != &local_1e8) {
    pTVar1->Object = local_1e8.Object;
    local_1e8.Object = (FMessageEndpoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageEndpoint).SharedReferenceCount,&local_1e8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<IMessageHandler,1>,int>
            ((TSharedPtr<IMessageHandler,1> *)local_1a8.Data,(int)local_1a0);
  if ((TSharedPtr<IMessageHandler,1> *)local_1a8.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c0,(FWriteAccessScope *)&local_180);
  if ((local_1b0 != 0) && (FStack_1b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1b8,0,0,0x10);
    local_1b0 = 0;
  }
  if (local_180.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
  }
  if (FStack_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c0.AccessDetector);
  if ((TReferenceControllerBase<1> *)local_1d8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = (atomic<int> *)(local_1d8._8_8_ + 0xc);
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)local_1d8._8_8_ + 8))(local_1d8._8_8_,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  return this;
}

// ~FTraceControllerCommands @ 148ceebe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceControllerCommands::~FTraceControllerCommands(FTraceControllerCommands *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FTraceControllerCommands__6B_;
  *(undefined4 *)&(this->SettableChannels).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SettableChannels).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SettableChannels);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ITraceControllerCommands__6B_;
  return;
}

// Bookmark @ 148cf02d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceControllerCommands::Bookmark(FTraceControllerCommands *this,TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  FString *this_01;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar5;
  UScriptStruct *pUVar6;
  longlong lVar7;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_58;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<IMessageAttachment,1> local_38;
  wchar_t *local_28;
  undefined8 uStack_20;
  
  this_01 = FMemory::Malloc(0x10,0);
  local_28 = param_1->DataPtr;
  uStack_20 = *(undefined8 *)&param_1->Size;
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  (this_01->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->Data).ArrayNum = 0;
  (this_01->Data).ArrayMax = 0;
  ::FString::AssignRange(this_01,pwVar2,(int)uVar1);
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  local_res10.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_48.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Array.ArrayNum = 0;
  local_48.Array.ArrayMax = 0;
  pTVar5 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                     (&local_48,&this->ServiceAddress);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = (pTVar5->Array).ArrayNum;
  lVar7 = (longlong)local_58.ArrayNum;
  _Src = (pTVar5->Array).AllocatorInstance.Data;
  if (local_58.ArrayNum == 0) {
    local_58.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_58.ArrayNum,0,&local_58.AllocatorInstance,local_58.ArrayNum,
               &local_58.ArrayMax);
    memcpy(local_58.AllocatorInstance.Data,_Src,lVar7 << 4);
  }
  local_38.Object = (IMessageAttachment *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar6 = FTraceControlBookmark::StaticStruct();
  FMessageEndpoint::Send(this_00,this_01,pUVar6,None,&local_38,&local_58,&local_res10,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Array.AllocatorInstance.Data);
  }
  return;
}

// File @ 148cf1bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceControllerCommands::File
          (FTraceControllerCommands *this,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2,bool param_3,bool param_4)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  FString *this_01;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar5;
  UScriptStruct *pUVar6;
  longlong lVar7;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_78;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<IMessageAttachment,1> local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  
  this_01 = FMemory::Malloc(0x30,0);
  local_48 = param_1->DataPtr;
  uStack_40 = *(undefined8 *)&param_1->Size;
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  (this_01->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->Data).ArrayNum = 0;
  (this_01->Data).ArrayMax = 0;
  this_01[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_01[1].Data.ArrayNum = 0;
  this_01[1].Data.ArrayMax = 0;
  this_01[2].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_01[2].Data.ArrayNum = 0;
  this_01[2].Data.ArrayMax = 0;
  ::FString::AssignRange((FString *)&this_01[1].Data.ArrayNum,pwVar2,(int)uVar1);
  local_38 = param_2->DataPtr;
  uStack_30 = *(undefined8 *)&param_2->Size;
  ::FString::AssignRange(this_01,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  *(bool *)&this_01[2].Data.ArrayNum = param_4;
  *(bool *)&this_01[1].Data.AllocatorInstance.Data = param_3;
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  local_res10.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_68.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Array.ArrayNum = 0;
  local_68.Array.ArrayMax = 0;
  pTVar5 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                     (&local_68,&this->ServiceAddress);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = (pTVar5->Array).ArrayNum;
  lVar7 = (longlong)local_78.ArrayNum;
  _Src = (pTVar5->Array).AllocatorInstance.Data;
  if (local_78.ArrayNum == 0) {
    local_78.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_78.ArrayNum,0,&local_78.AllocatorInstance,local_78.ArrayNum,
               &local_78.ArrayMax);
    memcpy(local_78.AllocatorInstance.Data,_Src,lVar7 << 4);
  }
  local_58.Object = (IMessageAttachment *)0x0;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar6 = FTraceControlFile::StaticStruct();
  FMessageEndpoint::Send(this_00,this_01,pUVar6,None,&local_58,&local_78,&local_res10,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Array.AllocatorInstance.Data);
  }
  return;
}

// OnChannelsDesc @ 148cf4d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceControllerCommands::OnChannelsDesc
          (FTraceControllerCommands *this,FTraceControlChannelsDesc *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  int local_res8 [2];
  undefined1 local_res10 [8];
  ulong64 local_res18;
  undefined4 uStack_5c;
  ulong64 *local_58;
  int *local_50;
  TStringView<wchar_t> local_48;
  
  iVar2 = (param_1->Channels).ArrayNum;
  if ((iVar2 != *(int *)&(this->SettableChannels).field_0x8 -
                *(int *)&(this->SettableChannels).field_0x34) &&
     (uVar11 = 0, uVar13 = uVar11, uVar15 = uVar11, 0 < iVar2)) {
    do {
      uVar12 = (uint)uVar13;
      uVar14 = 0;
      if ((int)uVar12 < (param_1->Ids).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_res8[0] = *(int *)((param_1->Ids).AllocatorInstance.Data + uVar11 * 4);
      pFVar8 = (param_1->ReadOnlyIds).AllocatorInstance.Data;
      pFVar4 = pFVar8 + (longlong)(param_1->ReadOnlyIds).ArrayNum * 4;
      for (; pFVar8 != pFVar4; pFVar8 = pFVar8 + 4) {
        if (*(int *)pFVar8 == local_res8[0]) goto LAB_148cf4f87;
      }
      uVar14 = 0;
      if ((int)uVar12 < (param_1->Channels).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (param_1->Channels).AllocatorInstance.Data;
      local_48.DataPtr = *(wchar_t **)(pFVar4 + uVar15);
      iVar3 = *(int *)(pFVar4 + uVar15 + 8);
      iVar9 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar9 = 0;
      }
      local_48._12_4_ = uStack_5c;
      local_48.Size = iVar9;
      local_res18 = HashName(&local_48);
      uVar14 = (int)(local_res18 >> 0x20) * 0x17 + (int)local_res18;
      if (*(int *)&(this->SettableChannels).field_0x8 !=
          *(int *)&(this->SettableChannels).field_0x34) {
        puVar5 = *(undefined1 **)&(this->SettableChannels).field_0x40;
        puVar10 = &(this->SettableChannels).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar10 = puVar5;
        }
        iVar9 = *(int *)(puVar10 +
                        (ulonglong)(*(int *)&(this->SettableChannels).field_0x48 - 1U & uVar14) * 4)
        ;
        if (iVar9 != -1) {
          do {
            lVar1 = *(longlong *)&this->SettableChannels + (longlong)iVar9 * 0x18;
            if (*(ulong64 *)(*(longlong *)&this->SettableChannels + (longlong)iVar9 * 0x18) ==
                local_res18) {
              if (lVar1 != 0) goto LAB_148cf4f87;
              break;
            }
            iVar9 = *(int *)(lVar1 + 0x10);
          } while (iVar9 != -1);
        }
      }
      local_58 = &local_res18;
      local_50 = local_res8;
      TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                  *)&this->SettableChannels,(uint)local_res10,
                 (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)
                 (ulonglong)uVar14,(bool *)&local_58);
LAB_148cf4f87:
      uVar11 = uVar11 + 1;
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar15 = uVar15 + 0x10;
    } while ((longlong)uVar11 < (longlong)iVar2);
  }
  return;
}

// Pause @ 148cf5b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceControllerCommands::Pause(FTraceControllerCommands *this)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar4;
  UScriptStruct *pUVar5;
  longlong lVar6;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_38;
  TSharedPtr<IMessageAttachment,1> local_28;
  
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  pvVar3 = FMemory::Malloc(1,0);
  local_res10.Ticks = 0;
  local_38.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_38.Array.ArrayNum = 0;
  local_38.Array.ArrayMax = 0;
  pTVar4 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                     (&local_38,&this->ServiceAddress);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = (pTVar4->Array).ArrayNum;
  lVar6 = (longlong)local_48.ArrayNum;
  _Src = (pTVar4->Array).AllocatorInstance.Data;
  if (local_48.ArrayNum == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_48.ArrayNum,0,&local_48.AllocatorInstance,local_48.ArrayNum,
               &local_48.ArrayMax);
    memcpy(local_48.AllocatorInstance.Data,_Src,lVar6 << 4);
  }
  local_28.Object = (IMessageAttachment *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar5 = FTraceControlPause::StaticStruct();
  FMessageEndpoint::Send(this_00,pvVar3,pUVar5,None,&local_28,&local_48,&local_res10,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Array.AllocatorInstance.Data);
  }
  return;
}

// Resume @ 148cf6d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceControllerCommands::Resume(FTraceControllerCommands *this)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar4;
  UScriptStruct *pUVar5;
  longlong lVar6;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_38;
  TSharedPtr<IMessageAttachment,1> local_28;
  
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  pvVar3 = FMemory::Malloc(1,0);
  local_res10.Ticks = 0;
  local_38.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_38.Array.ArrayNum = 0;
  local_38.Array.ArrayMax = 0;
  pTVar4 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                     (&local_38,&this->ServiceAddress);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = (pTVar4->Array).ArrayNum;
  lVar6 = (longlong)local_48.ArrayNum;
  _Src = (pTVar4->Array).AllocatorInstance.Data;
  if (local_48.ArrayNum == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_48.ArrayNum,0,&local_48.AllocatorInstance,local_48.ArrayNum,
               &local_48.ArrayMax);
    memcpy(local_48.AllocatorInstance.Data,_Src,lVar6 << 4);
  }
  local_28.Object = (IMessageAttachment *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar5 = FTraceControlResume::StaticStruct();
  FMessageEndpoint::Send(this_00,pvVar3,pUVar5,None,&local_28,&local_48,&local_res10,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Array.AllocatorInstance.Data);
  }
  return;
}

// Screenshot @ 148cf6f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceControllerCommands::Screenshot
          (FTraceControllerCommands *this,TStringView<wchar_t> *param_1,bool param_2)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  FString *this_01;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar5;
  UScriptStruct *pUVar6;
  longlong lVar7;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_68;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_58;
  TSharedPtr<IMessageAttachment,1> local_48;
  wchar_t *local_38;
  undefined8 uStack_30;
  
  this_01 = FMemory::Malloc(0x18,0);
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  (this_01->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->Data).ArrayNum = 0;
  (this_01->Data).ArrayMax = 0;
  this_01[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38 = param_1->DataPtr;
  uStack_30 = *(undefined8 *)&param_1->Size;
  *(undefined1 *)&this_01[1].Data.AllocatorInstance.Data = 1;
  ::FString::AssignRange(this_01,pwVar2,(int)uVar1);
  *(bool *)&this_01[1].Data.AllocatorInstance.Data = param_2;
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  local_res10.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_58.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Array.ArrayNum = 0;
  local_58.Array.ArrayMax = 0;
  pTVar5 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                     (&local_58,&this->ServiceAddress);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = (pTVar5->Array).ArrayNum;
  lVar7 = (longlong)local_68.ArrayNum;
  _Src = (pTVar5->Array).AllocatorInstance.Data;
  if (local_68.ArrayNum == 0) {
    local_68.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
               &local_68.ArrayMax);
    memcpy(local_68.AllocatorInstance.Data,_Src,lVar7 << 4);
  }
  local_48.Object = (IMessageAttachment *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar6 = FTraceControlScreenshot::StaticStruct();
  FMessageEndpoint::Send(this_00,this_01,pUVar6,None,&local_48,&local_68,&local_res10,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Array.AllocatorInstance.Data);
  }
  return;
}

// Send @ 148cf7480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceControllerCommands::Send
          (FTraceControllerCommands *this,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2,bool param_3)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  FString *this_01;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar5;
  UScriptStruct *pUVar6;
  longlong lVar7;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_78;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<IMessageAttachment,1> local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  
  this_01 = FMemory::Malloc(0x28,0);
  *(undefined4 *)((longlong)&this_01[1].Data.AllocatorInstance.Data + 1) = 0;
  *(undefined2 *)((longlong)&this_01[1].Data.AllocatorInstance.Data + 5) = 0;
  *(undefined1 *)((longlong)&this_01[1].Data.AllocatorInstance.Data + 7) = 0;
  local_48 = param_1->DataPtr;
  uStack_40 = *(undefined8 *)&param_1->Size;
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  (this_01->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->Data).ArrayNum = 0;
  (this_01->Data).ArrayMax = 0;
  *(undefined1 *)&this_01[1].Data.AllocatorInstance.Data = 0;
  this_01[1].Data.ArrayNum = 0;
  this_01[1].Data.ArrayMax = 0;
  this_01[2].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::AssignRange((FString *)&this_01[1].Data.ArrayNum,pwVar2,(int)uVar1);
  local_38 = param_2->DataPtr;
  uStack_30 = *(undefined8 *)&param_2->Size;
  ::FString::AssignRange(this_01,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  *(bool *)&this_01[1].Data.AllocatorInstance.Data = param_3;
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  local_res10.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_68.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Array.ArrayNum = 0;
  local_68.Array.ArrayMax = 0;
  pTVar5 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                     (&local_68,&this->ServiceAddress);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = (pTVar5->Array).ArrayNum;
  lVar7 = (longlong)local_78.ArrayNum;
  _Src = (pTVar5->Array).AllocatorInstance.Data;
  if (local_78.ArrayNum == 0) {
    local_78.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_78.ArrayNum,0,&local_78.AllocatorInstance,local_78.ArrayNum,
               &local_78.ArrayMax);
    memcpy(local_78.AllocatorInstance.Data,_Src,lVar7 << 4);
  }
  local_58.Object = (IMessageAttachment *)0x0;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar6 = FTraceControlSend::StaticStruct();
  FMessageEndpoint::Send(this_00,this_01,pUVar6,None,&local_58,&local_78,&local_res10,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Array.AllocatorInstance.Data);
  }
  return;
}

// SetChannels @ 148cf8fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceControllerCommands::SetChannels
          (FTraceControllerCommands *this,TArrayView<TStringView<wchar_t>_const_,int> *param_1,
          TArrayView<TStringView<wchar_t>_const_,int> *param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FTraceControlChannelsSet *pFVar5;
  FTraceControlChannelsSet *pFVar6;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar7;
  TArrayView<TStringView<wchar_t>_const_,int> local_58;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_48;
  TArrayView<TStringView<wchar_t>_const_,int> local_38;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  
  pFVar5 = FMemory::Malloc(0x20,0);
  local_58.DataPtr = param_1->DataPtr;
  local_58.ArrayNum = param_1->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (pFVar5->ChannelIdsToDisable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &pFVar5->ChannelIdsToDisable;
  (pFVar5->ChannelIdsToDisable).ArrayNum = 0;
  (pFVar5->ChannelIdsToDisable).ArrayMax = 0;
  (pFVar5->ChannelIdsToEnable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar5->ChannelIdsToEnable).ArrayNum = 0;
  (pFVar5->ChannelIdsToEnable).ArrayMax = 0;
  pFVar6 = (FTraceControlChannelsSet *)
           ResolveChannelNames<TStringView<wchar_t>_>(&local_48,&local_58,&this->SettableChannels);
  if (pFVar5 != pFVar6) {
    pFVar2 = (pFVar5->ChannelIdsToEnable).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->ChannelIdsToEnable).AllocatorInstance.Data =
         (pFVar6->ChannelIdsToEnable).AllocatorInstance.Data;
    (pFVar6->ChannelIdsToEnable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->ChannelIdsToEnable).ArrayNum = (pFVar6->ChannelIdsToEnable).ArrayNum;
    (pFVar5->ChannelIdsToEnable).ArrayMax = (pFVar6->ChannelIdsToEnable).ArrayMax;
    (pFVar6->ChannelIdsToEnable).ArrayNum = 0;
    (pFVar6->ChannelIdsToEnable).ArrayMax = 0;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  local_38.DataPtr = param_2->DataPtr;
  local_38.ArrayNum = param_2->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pTVar7 = ResolveChannelNames<TStringView<wchar_t>_>(&local_28,&local_38,&this->SettableChannels);
  if (pTVar1 != pTVar7) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar5->ChannelIdsToDisable).ArrayNum = pTVar7->ArrayNum;
    (pFVar5->ChannelIdsToDisable).ArrayMax = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FMessageEndpoint::Send<FTraceControlChannelsSet>
            ((this->MessageEndpoint).Object,pFVar5,&this->ServiceAddress);
  return;
}

// SetChannels @ 148cf9140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceControllerCommands::SetChannels
          (FTraceControllerCommands *this,TArrayView<FString_const_,int> *param_1,
          TArrayView<FString_const_,int> *param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FTraceControlChannelsSet *pFVar5;
  FTraceControlChannelsSet *pFVar6;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar7;
  TArrayView<FString_const_,int> local_58;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_48;
  TArrayView<FString_const_,int> local_38;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  
  pFVar5 = FMemory::Malloc(0x20,0);
  local_58.DataPtr = param_1->DataPtr;
  local_58.ArrayNum = param_1->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (pFVar5->ChannelIdsToDisable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &pFVar5->ChannelIdsToDisable;
  (pFVar5->ChannelIdsToDisable).ArrayNum = 0;
  (pFVar5->ChannelIdsToDisable).ArrayMax = 0;
  (pFVar5->ChannelIdsToEnable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar5->ChannelIdsToEnable).ArrayNum = 0;
  (pFVar5->ChannelIdsToEnable).ArrayMax = 0;
  pFVar6 = (FTraceControlChannelsSet *)
           ResolveChannelNames<FString>(&local_48,&local_58,&this->SettableChannels);
  if (pFVar5 != pFVar6) {
    pFVar2 = (pFVar5->ChannelIdsToEnable).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->ChannelIdsToEnable).AllocatorInstance.Data =
         (pFVar6->ChannelIdsToEnable).AllocatorInstance.Data;
    (pFVar6->ChannelIdsToEnable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->ChannelIdsToEnable).ArrayNum = (pFVar6->ChannelIdsToEnable).ArrayNum;
    (pFVar5->ChannelIdsToEnable).ArrayMax = (pFVar6->ChannelIdsToEnable).ArrayMax;
    (pFVar6->ChannelIdsToEnable).ArrayNum = 0;
    (pFVar6->ChannelIdsToEnable).ArrayMax = 0;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  local_38.DataPtr = param_2->DataPtr;
  local_38.ArrayNum = param_2->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pTVar7 = ResolveChannelNames<FString>(&local_28,&local_38,&this->SettableChannels);
  if (pTVar1 != pTVar7) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar5->ChannelIdsToDisable).ArrayNum = pTVar7->ArrayNum;
    (pFVar5->ChannelIdsToDisable).ArrayMax = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FMessageEndpoint::Send<FTraceControlChannelsSet>
            ((this->MessageEndpoint).Object,pFVar5,&this->ServiceAddress);
  return;
}

// SetStatNamedEventsEnabled @ 148cf9630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceControllerCommands::SetStatNamedEventsEnabled(FTraceControllerCommands *this,bool param_1)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar4;
  UScriptStruct *pUVar5;
  longlong lVar6;
  FDateTime local_res8;
  FTimespan local_res18;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_38;
  TSharedPtr<IMessageAttachment,1> local_28;
  
  pvVar3 = FMemory::Malloc(1,0);
  *(bool *)pvVar3 = param_1;
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  local_res18.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_38.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Array.ArrayNum = 0;
  local_38.Array.ArrayMax = 0;
  pTVar4 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                     (&local_38,&this->ServiceAddress);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = (pTVar4->Array).ArrayNum;
  lVar6 = (longlong)local_48.ArrayNum;
  _Src = (pTVar4->Array).AllocatorInstance.Data;
  if (local_48.ArrayNum == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_48.ArrayNum,0,&local_48.AllocatorInstance,local_48.ArrayNum,
               &local_48.ArrayMax);
    memcpy(local_48.AllocatorInstance.Data,_Src,lVar6 << 4);
  }
  local_28.Object = (IMessageAttachment *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar5 = FTraceControlSetStatNamedEvents::StaticStruct();
  FMessageEndpoint::Send(this_00,pvVar3,pUVar5,None,&local_28,&local_48,&local_res18,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Array.AllocatorInstance.Data);
  }
  return;
}

// SnapshotFile @ 148cf97b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceControllerCommands::SnapshotFile(FTraceControllerCommands *this,TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  FString *this_01;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar5;
  UScriptStruct *pUVar6;
  longlong lVar7;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_58;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<IMessageAttachment,1> local_38;
  wchar_t *local_28;
  undefined8 uStack_20;
  
  this_01 = FMemory::Malloc(0x10,0);
  local_28 = param_1->DataPtr;
  uStack_20 = *(undefined8 *)&param_1->Size;
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  (this_01->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->Data).ArrayNum = 0;
  (this_01->Data).ArrayMax = 0;
  ::FString::AssignRange(this_01,pwVar2,(int)uVar1);
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  local_res10.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_48.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Array.ArrayNum = 0;
  local_48.Array.ArrayMax = 0;
  pTVar5 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                     (&local_48,&this->ServiceAddress);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = (pTVar5->Array).ArrayNum;
  lVar7 = (longlong)local_58.ArrayNum;
  _Src = (pTVar5->Array).AllocatorInstance.Data;
  if (local_58.ArrayNum == 0) {
    local_58.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_58.ArrayNum,0,&local_58.AllocatorInstance,local_58.ArrayNum,
               &local_58.ArrayMax);
    memcpy(local_58.AllocatorInstance.Data,_Src,lVar7 << 4);
  }
  local_38.Object = (IMessageAttachment *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar6 = FTraceControlSnapshotFile::StaticStruct();
  FMessageEndpoint::Send(this_00,this_01,pUVar6,None,&local_38,&local_58,&local_res10,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Array.AllocatorInstance.Data);
  }
  return;
}

// SnapshotSend @ 148cf9950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceControllerCommands::SnapshotSend(FTraceControllerCommands *this,TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  FString *this_01;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar5;
  UScriptStruct *pUVar6;
  longlong lVar7;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_58;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<IMessageAttachment,1> local_38;
  wchar_t *local_28;
  undefined8 uStack_20;
  
  this_01 = FMemory::Malloc(0x10,0);
  local_28 = param_1->DataPtr;
  uStack_20 = *(undefined8 *)&param_1->Size;
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  (this_01->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->Data).ArrayNum = 0;
  (this_01->Data).ArrayMax = 0;
  ::FString::AssignRange(this_01,pwVar2,(int)uVar1);
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  local_res10.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_48.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Array.ArrayNum = 0;
  local_48.Array.ArrayMax = 0;
  pTVar5 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                     (&local_48,&this->ServiceAddress);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = (pTVar5->Array).ArrayNum;
  lVar7 = (longlong)local_58.ArrayNum;
  _Src = (pTVar5->Array).AllocatorInstance.Data;
  if (local_58.ArrayNum == 0) {
    local_58.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_58.ArrayNum,0,&local_58.AllocatorInstance,local_58.ArrayNum,
               &local_58.ArrayMax);
    memcpy(local_58.AllocatorInstance.Data,_Src,lVar7 << 4);
  }
  local_38.Object = (IMessageAttachment *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar6 = FTraceControlSnapshotSend::StaticStruct();
  FMessageEndpoint::Send(this_00,this_01,pUVar6,None,&local_38,&local_58,&local_res10,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Array.AllocatorInstance.Data);
  }
  return;
}

// Stop @ 148cfa1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceControllerCommands::Stop(FTraceControllerCommands *this)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar4;
  UScriptStruct *pUVar5;
  longlong lVar6;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_38;
  TSharedPtr<IMessageAttachment,1> local_28;
  
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  pvVar3 = FMemory::Malloc(1,0);
  local_res10.Ticks = 0;
  local_38.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_38.Array.ArrayNum = 0;
  local_38.Array.ArrayMax = 0;
  pTVar4 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                     (&local_38,&this->ServiceAddress);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = (pTVar4->Array).ArrayNum;
  lVar6 = (longlong)local_48.ArrayNum;
  _Src = (pTVar4->Array).AllocatorInstance.Data;
  if (local_48.ArrayNum == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_48.ArrayNum,0,&local_48.AllocatorInstance,local_48.ArrayNum,
               &local_48.ArrayMax);
    memcpy(local_48.AllocatorInstance.Data,_Src,lVar6 << 4);
  }
  local_28.Object = (IMessageAttachment *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar5 = FTraceControlStop::StaticStruct();
  FMessageEndpoint::Send(this_00,pvVar3,pUVar5,None,&local_28,&local_48,&local_res10,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Array.AllocatorInstance.Data);
  }
  return;
}

