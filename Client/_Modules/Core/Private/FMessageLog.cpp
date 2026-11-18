// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// FMessageLog @ 1417a3690

FMessageLog * __thiscall FMessageLog::FMessageLog(FMessageLog *this,FName *param_1)

{
  TSharedPtr<IMessageLog,1> *this_00;
  bool bVar1;
  char cVar2;
  FName FVar3;
  FName FVar4;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  TSharedPtr<IMessageLog,1> local_68;
  IMessageLog *local_58;
  TReferenceControllerBase<1> *local_50;
  FReadAccessScope local_40;
  
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  (this->Messages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_00 = &this->MessageLog;
  (this->Messages).ArrayNum = 0;
  (this->Messages).ArrayMax = 0;
  this_00->Object = (IMessageLog *)0x0;
  (this->MessageLog).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->LogName = *param_1;
  this->bSuppressLoggingToOutputLog = false;
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&GetLog,
             (FReadAccessScope *)&local_58);
  if (((GetLog._16_4_ == 0) || (GetLog._8_8_ == 0)) ||
     (cVar2 = (**(code **)(*(longlong *)GetLog._8_8_ + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_58);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&GetLog,&local_40);
    if (GetLog._16_4_ != 0) {
      FVar4 = (FName)GetLog._8_8_;
    }
    (**(code **)(*(longlong *)FVar4 + 0x60))(FVar4,&local_58,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    local_68.Object = local_58;
    local_68.SharedReferenceCount.ReferenceController = local_50;
    if (local_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != &local_68) {
      this_00->Object = local_58;
      local_68.Object = (IMessageLog *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageLog).SharedReferenceCount,&local_68.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  else {
    FVar3 = (FName)::operator_new(0x20);
    if (FVar3 != (FName)0x0) {
      *(longlong *)((longlong)FVar3 + 8) = 0;
      *(longlong *)((longlong)FVar3 + 0x10) = 0;
      *(undefined ***)FVar3 = &___7FBasicMessageLog__6B_;
      *(FName *)((longlong)FVar3 + 0x18) = *param_1;
      FVar4 = FVar3;
    }
    local_res10 = FVar4;
    TSharedPtr<IMessageLog,1>::operator=<FBasicMessageLog>
              (this_00,(TRawPtrProxy<FBasicMessageLog> *)&local_res10);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// ~FMessageLog @ 1417a7810

void __thiscall FMessageLog::~FMessageLog(FMessageLog *this)

{
  FScriptContainerElement *pFVar1;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  Flush(this);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageLog).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)(this->Messages).AllocatorInstance.Data,
             (this->Messages).ArrayNum);
  pFVar1 = (this->Messages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddMessage @ 1417b2f60

TSharedRef<FTokenizedMessage,1> * __thiscall
FMessageLog::AddMessage(FMessageLog *this,TSharedRef<FTokenizedMessage,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<FTokenizedMessage,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(this->Messages).AllocatorInstance.Data;
  if ((pTVar6 <= param_1) && (param_1 < pTVar6 + (this->Messages).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->Messages).ArrayNum;
  piVar1 = &(this->Messages).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Messages).ArrayNum = iVar5 + 1;
  pFVar7 = (this->Messages).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FTokenizedMessage **)pFVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return param_1;
}

// AddMessages @ 1417b3340

void __thiscall
FMessageLog::AddMessages
          (FMessageLog *this,
          TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  if (this == (FMessageLog *)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,(ForAnyElementType *)this,&(this->Messages).ArrayNum,
                       &(this->Messages).ArrayMax);
    ConstructItems<TSharedRef<FTokenizedMessage,1>,TSharedRef<FTokenizedMessage,1>,int>
              ((this->Messages).AllocatorInstance.Data + (longlong)iVar4 * 0x10,
               (TSharedRef<FTokenizedMessage,1> *)(param_1->AllocatorInstance).Data,iVar1);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CriticalError @ 1417c0fe0

TSharedRef<FTokenizedMessage,1> * __thiscall
FMessageLog::CriticalError
          (FMessageLog *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,FText *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<FTokenizedMessage,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FLLMScope local_res8 [2];
  FName local_res10 [2];
  FMemScope local_res20;
  
  FText::ToString(param_1);
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\MessageLog.cpp"
                     ,0xb8,
                     L"[Deprecated] FMessageLog::CriticalError has been deprecated. Please update callsites. The original error message: \n%s"
                    );
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar3)();
    return pTVar6;
  }
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res10[0] = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_res20,local_res10,true);
  FTokenizedMessage::Create(__return_storage_ptr__,Error,param_1);
  pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(this->Messages).AllocatorInstance.Data;
  if (((pTVar6 <= __return_storage_ptr__) &&
      (__return_storage_ptr__ < pTVar6 + (this->Messages).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar3)();
    return pTVar6;
  }
  iVar5 = (this->Messages).ArrayNum;
  piVar1 = &(this->Messages).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Messages).ArrayNum = iVar5 + 1;
  pFVar7 = (this->Messages).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FTokenizedMessage **)pFVar7 = __return_storage_ptr__->Object;
  pTVar2 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Error @ 1417c6280

TSharedRef<FTokenizedMessage,1> * __thiscall
FMessageLog::Error(FMessageLog *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,
                  FText *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<FTokenizedMessage,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FLLMScope local_res8 [2];
  FName local_res10 [2];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res10[0] = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_res20,local_res10,true);
  FTokenizedMessage::Create(__return_storage_ptr__,Error,param_1);
  pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(this->Messages).AllocatorInstance.Data;
  if ((pTVar6 <= __return_storage_ptr__) &&
     (__return_storage_ptr__ < pTVar6 + (this->Messages).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->Messages).ArrayNum;
  piVar1 = &(this->Messages).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Messages).ArrayNum = iVar5 + 1;
  pFVar7 = (this->Messages).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FTokenizedMessage **)pFVar7 = __return_storage_ptr__->Object;
  pTVar2 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Flush @ 1417ceb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FMessageLog::Flush(FMessageLog *this)

{
  void *this_00;
  int *piVar1;
  atomic<int> *paVar2;
  ForElementType<EMessageSeverity::Type> FVar3;
  atomic<int> aVar4;
  FName FVar5;
  longlong *plVar6;
  TSharedRef<IMessageToken,1> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  IMessageLog *pIVar10;
  code *pcVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  Type TVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_01;
  TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_> *pTVar19;
  ulonglong uVar20;
  Type *pTVar21;
  longlong lVar22;
  ForElementType<EMessageSeverity::Type> FVar23;
  Type TVar24;
  TReferenceControllerBase<1> *pTVar25;
  TReferenceControllerBase<1> *pTVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_108 [32];
  Type local_b4;
  undefined1 local_b0 [4];
  uint local_ac;
  longlong local_a8;
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FMessageLog *local_88;
  FScriptContainerElement *local_80;
  longlong local_78;
  TReferenceControllerBase<1> *pTStack_70;
  ForElementType<EMessageSeverity::Type> local_68;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (0 < (this->Messages).ArrayNum) {
    local_88 = this;
    bVar16 = IsInGameThread();
    lVar22 = 0;
    if (bVar16) {
      FVar5 = this->LogName;
      this_01 = UE::MessageLog::Private::GetOverrideStack();
      pTVar19 = TSortedMap<FName,TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                ::Find(this_01,FVar5);
      if ((pTVar19 != (TArray<FMessageLogScopedOverride_const_*,TSizedDefaultAllocator<32>_> *)0x0)
         && (iVar18 = pTVar19->ArrayNum, 0 < iVar18)) {
        uVar17 = 0;
        if ((int)(iVar18 - 1U) < iVar18) {
          uVar17 = ~(iVar18 - 1U) >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar22 = *(longlong *)
                  ((pTVar19->AllocatorInstance).Data + (longlong)pTVar19->ArrayNum * 8 + -8);
      }
      pTVar13 = _UNK_150651568;
      pTVar12 = ___xmm_00000000000000000000000000000010;
      local_a8 = lVar22;
      if ((lVar22 != 0) && (0 < *(int *)(lVar22 + 0x18))) {
        local_ac = (this->Messages).ArrayNum;
        uVar20 = (ulonglong)(int)local_ac;
        pFVar27 = (this->Messages).AllocatorInstance.Data;
        local_80 = pFVar27 + uVar20 * 0x10;
        while( true ) {
          pFVar14 = local_80;
          pTVar25 = (TReferenceControllerBase<1> *)0x0;
          if ((this->Messages).ArrayNum != (int)uVar20) {
            local_b0[0] = 0;
            `TCheckedPointerIterator<TSharedRef<FTokenizedMessage,1>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_b0);
          }
          if (pFVar27 == pFVar14) break;
          this_00 = (void *)(local_a8 + 0x10);
          local_68.SecondaryData = (ForElementType<EMessageSeverity::Type>)0x0;
          local_50 = 0;
          local_4c = 4;
          local_b4 = *(Type *)(*(longlong *)pFVar27 + 0x30);
          pTVar26 = pTVar25;
          TVar15 = local_b4;
          while( true ) {
            TVar24 = TVar15;
            FVar23 = (ForElementType<EMessageSeverity::Type>)&local_68;
            if (local_68.SecondaryData != (ForElementType<EMessageSeverity::Type>)0x0) {
              FVar23 = local_68.SecondaryData;
            }
            iVar18 = (int)pTVar26;
            if ((ulonglong)FVar23 <= &local_b4) {
              FVar23 = (ForElementType<EMessageSeverity::Type>)&local_68;
              if (local_68.SecondaryData != (ForElementType<EMessageSeverity::Type>)0x0) {
                FVar23 = local_68.SecondaryData;
              }
              if ((&local_b4 < (Type *)((longlong)FVar23 + (longlong)local_4c * 4)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), iVar18 = local_50, bVar16)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (iVar18 == local_4c) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EMessageSeverity::Type>_>
                                 (0x404,&local_68,&local_4c);
            }
            local_50 = iVar18 + 1;
            FVar23 = (ForElementType<EMessageSeverity::Type>)&local_68;
            if (local_68.SecondaryData != (ForElementType<EMessageSeverity::Type>)0x0) {
              FVar23 = local_68.SecondaryData;
            }
            *(Type *)((longlong)FVar23 + (longlong)iVar18 * 4) = local_b4;
            pTVar21 = TSortedMap<enum_EMessageSeverity::Type,enum_EMessageSeverity::Type,TSizedDefaultAllocator<32>,TLess<enum_EMessageSeverity::Type_const_>_>
                      ::Find(this_00,local_b4);
            if (pTVar21 == (Type *)0x0) break;
            pTVar26 = (TReferenceControllerBase<1> *)(longlong)local_50;
            FVar23 = (ForElementType<EMessageSeverity::Type>)&local_68;
            if (local_68.SecondaryData != (ForElementType<EMessageSeverity::Type>)0x0) {
              FVar23 = local_68.SecondaryData;
            }
            FVar3 = (ForElementType<EMessageSeverity::Type>)
                    ((longlong)FVar23 + (longlong)pTVar26 * 4);
            if (FVar23 != FVar3) {
              do {
                local_b4 = TVar24;
                if (*(Type *)FVar23 == *pTVar21) goto LAB_1417cee3a;
                FVar23 = (ForElementType<EMessageSeverity::Type>)((longlong)FVar23 + 4);
              } while (FVar23 != FVar3);
            }
            local_b4 = *pTVar21;
            TVar15 = local_b4;
            if ((int)local_b4 < (int)TVar24) {
              TVar15 = TVar24;
            }
          }
LAB_1417cee3a:
          if (local_68.SecondaryData != (ForElementType<EMessageSeverity::Type>)0x0) {
            FMemory::Free((void *)local_68.SecondaryData);
          }
          TVar15 = local_b4;
          lVar22 = *(longlong *)pFVar27;
          if (local_b4 != *(Type *)(lVar22 + 0x30)) {
            pTStack_90 = ::operator_new(0x50);
            if (pTStack_90 == (TReferenceControllerBase<1> *)0x0) {
              local_98 = pTVar12;
              pTStack_90 = pTVar13;
              pTVar26 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_1417ceef4:
              if (((pTVar26->_padding_ == 0) || (*(longlong *)&pTVar26->SharedReferenceCount == 0))
                 || (*(int *)(*(longlong *)&pTVar26->SharedReferenceCount + 8) < 1)) {
                if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar25->SharedReferenceCount =
                       (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pTVar26->_padding_ = (longlong)pTVar26;
                if (pTVar25 != *(TReferenceControllerBase<1> **)&pTVar26->SharedReferenceCount) {
                  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar25->WeakReferenceCount =
                         (atomic<int>)((int)pTVar25->WeakReferenceCount + 1);
                    UNLOCK();
                  }
                  plVar6 = *(longlong **)&pTVar26->SharedReferenceCount;
                  if (plVar6 != (longlong *)0x0) {
                    LOCK();
                    piVar1 = (int *)((longlong)plVar6 + 0xc);
                    iVar18 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar18 == 1) {
                      (**(code **)(*plVar6 + 8))(plVar6,1);
                    }
                  }
                  *(TReferenceControllerBase<1> **)&pTVar26->SharedReferenceCount = pTVar25;
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar25);
              }
            }
            else {
              pTStack_90->SharedReferenceCount = (atomic<int>)0x1;
              pTVar26 = pTStack_90 + 1;
              pTStack_90->WeakReferenceCount = (atomic<int>)0x1;
              pTStack_90->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFTokenizedMessage___00_SharedPointerInternals__6B_
              ;
              pTStack_90[1]._padding_ = 0;
              pTStack_90[1].SharedReferenceCount = (atomic<int>)0x0;
              pTStack_90[1].WeakReferenceCount = (atomic<int>)0x0;
              pTStack_90[2]._padding_ = 0;
              pTStack_90[2].SharedReferenceCount = (atomic<int>)0x0;
              pTStack_90[2].WeakReferenceCount = (atomic<int>)0x0;
              pTStack_90[3]._padding_ = 0;
              pTStack_90[3].SharedReferenceCount = (atomic<int>)0x0;
              pTStack_90[3].WeakReferenceCount = (atomic<int>)0x0;
              pTStack_90[4]._padding_ = 4;
              pTStack_90[4].SharedReferenceCount = (atomic<int>)0x0;
              pTVar25 = pTStack_90;
              local_98 = pTVar26;
              if (pTVar26 != (TReferenceControllerBase<1> *)0x0) goto LAB_1417ceef4;
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L"");
              if (bVar16) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            pTVar26 = pTVar25 + 2;
            if (pTVar26 != (TReferenceControllerBase<1> *)(lVar22 + 0x10)) {
              DestructItems<TSharedRef<IMessageToken,1>,int>
                        ((TSharedRef<IMessageToken,1> *)pTVar26->_padding_,
                         (int)pTVar25[2].SharedReferenceCount);
              aVar4 = *(atomic<int> *)(lVar22 + 0x18);
              paVar2 = &pTVar25[2].WeakReferenceCount;
              pTVar7 = (TSharedRef<IMessageToken,1> *)
                       ((TReferenceControllerBase<1> *)(lVar22 + 0x10))->_padding_;
              pTVar25[2].SharedReferenceCount = aVar4;
              if ((aVar4 == (atomic<int>)0x0) && (*paVar2 == (atomic<int>)0x0)) {
                *paVar2 = (atomic<int>)0x0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,(int)aVar4,(int)*paVar2,(ForAnyElementType *)pTVar26,(int)aVar4,
                           (int *)paVar2);
                ConstructItems<TSharedRef<IMessageToken,1>,TSharedRef<IMessageToken,1>,int>
                          ((FScriptContainerElement *)pTVar26->_padding_,pTVar7,(int)aVar4);
              }
            }
            lVar8 = *(longlong *)(lVar22 + 0x28);
            lVar9 = *(longlong *)(lVar22 + 0x20);
            if (lVar8 != 0) {
              LOCK();
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
              UNLOCK();
            }
            local_78 = pTVar25[3]._padding_;
            pTStack_70 = *(TReferenceControllerBase<1> **)&pTVar25[3].SharedReferenceCount;
            pTVar25[3]._padding_ = lVar9;
            pTVar25[3].SharedReferenceCount = (atomic<int>)(int)lVar8;
            pTVar25[3].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar8 >> 0x20);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_70);
            *(undefined4 *)&pTVar25[4]._padding_ = *(undefined4 *)(lVar22 + 0x30);
            *(undefined8 *)((longlong)&pTVar25[4]._padding_ + 4) = *(undefined8 *)(lVar22 + 0x34);
            lVar22 = *(longlong *)pFVar27;
            pTVar25 = *(TReferenceControllerBase<1> **)(pFVar27 + 8);
            *(TReferenceControllerBase<1> **)pFVar27 = local_98;
            *(TReferenceControllerBase<1> **)(pFVar27 + 8) = pTStack_90;
            local_98 = (TReferenceControllerBase<1> *)lVar22;
            pTStack_90 = pTVar25;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar25);
            FTokenizedMessage::SetSeverity(*(FTokenizedMessage **)pFVar27,TVar15);
            this = local_88;
          }
          pFVar27 = pFVar27 + 0x10;
          uVar20 = (ulonglong)local_ac;
        }
      }
    }
    if (((this->MessageLog).Object == (IMessageLog *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pIVar10 = (this->MessageLog).Object;
    (**(code **)((longlong)*pIVar10 + 0x10))(pIVar10,this);
    DestructItems<TSharedRef<FTokenizedMessage,1>,int>
              ((TSharedRef<FTokenizedMessage,1> *)(this->Messages).AllocatorInstance.Data,
               (this->Messages).ArrayNum);
    (this->Messages).ArrayNum = 0;
    if ((this->Messages).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this,0,&(this->Messages).ArrayMax);
    }
  }
  return;
}

// GetLogColor @ 1417d42a0

wchar_t * __cdecl FMessageLog::GetLogColor(Type param_1)

{
  if (param_1 == Error) {
    return L"1001";
  }
  if ((param_1 != PerformanceWarning) && (param_1 != Warning)) {
    return (wchar_t *)0x0;
  }
  return L"1101";
}

// GetLogVerbosity @ 1417d42d0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl FMessageLog::GetLogVerbosity(Type param_1)

{
  if (param_1 == Error) {
    return Error;
  }
  if ((param_1 != PerformanceWarning) && (param_1 != Warning)) {
    if (param_1 != Info) {
      return Log;
    }
    return !UE::MessageLog::Private::LogInfoMessagesAtDisplayVerbosity + Display;
  }
  return Warning;
}

// Info @ 1417d9e60

TSharedRef<FTokenizedMessage,1> * __thiscall
FMessageLog::Info(FMessageLog *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,
                 FText *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<FTokenizedMessage,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FLLMScope local_res8 [2];
  FName local_res10 [2];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res10[0] = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_res20,local_res10,true);
  FTokenizedMessage::Create(__return_storage_ptr__,Info,param_1);
  pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(this->Messages).AllocatorInstance.Data;
  if ((pTVar6 <= __return_storage_ptr__) &&
     (__return_storage_ptr__ < pTVar6 + (this->Messages).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->Messages).ArrayNum;
  piVar1 = &(this->Messages).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Messages).ArrayNum = iVar5 + 1;
  pFVar7 = (this->Messages).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FTokenizedMessage **)pFVar7 = __return_storage_ptr__->Object;
  pTVar2 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Message @ 1417e43a0

TSharedRef<FTokenizedMessage,1> * __thiscall
FMessageLog::Message
          (FMessageLog *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,Type param_1,
          FText *param_2)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<FTokenizedMessage,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_28 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(local_28,&local_res10,true);
  FTokenizedMessage::Create(__return_storage_ptr__,param_1,param_2);
  pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(this->Messages).AllocatorInstance.Data;
  if ((pTVar6 <= __return_storage_ptr__) &&
     (__return_storage_ptr__ < pTVar6 + (this->Messages).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->Messages).ArrayNum;
  piVar1 = &(this->Messages).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Messages).ArrayNum = iVar5 + 1;
  pFVar7 = (this->Messages).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FTokenizedMessage **)pFVar7 = __return_storage_ptr__->Object;
  pTVar2 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewPage @ 1417e6f40

void __thiscall FMessageLog::NewPage(FMessageLog *this,FText *param_1)

{
  IMessageLog *pIVar1;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  Flush(this);
  if ((this->MessageLog).Object == (IMessageLog *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->MessageLog).Object;
  (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Notify @ 1417e7890

void __thiscall FMessageLog::Notify(FMessageLog *this,FText *param_1,Type param_2,bool param_3)

{
  IMessageLog *pIVar1;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  Flush(this);
  if ((this->MessageLog).Object == (IMessageLog *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->MessageLog).Object;
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_1,param_2,param_3);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// NumMessages @ 1417e7bc0

int __thiscall FMessageLog::NumMessages(FMessageLog *this,Type param_1)

{
  IMessageLog *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  Flush(this);
  if ((this->MessageLog).Object == (IMessageLog *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pIVar1 = (this->MessageLog).Object;
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return iVar4;
}

// Open @ 1417e8210

void __thiscall FMessageLog::Open(FMessageLog *this,Type param_1,bool param_2)

{
  IMessageLog *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope
            (local_res18,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true)
  ;
  local_res20 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(local_18,&local_res20,true);
  Flush(this);
  pIVar1 = (this->MessageLog).Object;
  if (!param_2) {
    if ((pIVar1 == (IMessageLog *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->MessageLog).Object;
    iVar4 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,param_1);
    if (iVar4 < 1) goto LAB_1417e82ee;
    pIVar1 = (this->MessageLog).Object;
  }
  if ((pIVar1 == (IMessageLog *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)((longlong)*(this->MessageLog).Object + 0x38))();
LAB_1417e82ee:
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// PerformanceWarning @ 1417e9100

TSharedRef<FTokenizedMessage,1> * __thiscall
FMessageLog::PerformanceWarning
          (FMessageLog *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,FText *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<FTokenizedMessage,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FLLMScope local_res8 [2];
  FName local_res10 [2];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res10[0] = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_res20,local_res10,true);
  FTokenizedMessage::Create(__return_storage_ptr__,PerformanceWarning,param_1);
  pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(this->Messages).AllocatorInstance.Data;
  if ((pTVar6 <= __return_storage_ptr__) &&
     (__return_storage_ptr__ < pTVar6 + (this->Messages).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->Messages).ArrayNum;
  piVar1 = &(this->Messages).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Messages).ArrayNum = iVar5 + 1;
  pFVar7 = (this->Messages).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FTokenizedMessage **)pFVar7 = __return_storage_ptr__->Object;
  pTVar2 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// SetCurrentPage @ 1417fca20

void __thiscall FMessageLog::SetCurrentPage(FMessageLog *this,FText *param_1)

{
  IMessageLog *pIVar1;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  Flush(this);
  if ((this->MessageLog).Object == (IMessageLog *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->MessageLog).Object;
  (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SuppressLoggingToOutputLog @ 141801ca0

FMessageLog * __thiscall FMessageLog::SuppressLoggingToOutputLog(FMessageLog *this,bool param_1)

{
  this->bSuppressLoggingToOutputLog = param_1;
  return this;
}

// Warning @ 14180d110

TSharedRef<FTokenizedMessage,1> * __thiscall
FMessageLog::Warning
          (FMessageLog *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,FText *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<FTokenizedMessage,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FLLMScope local_res8 [2];
  FName local_res10 [2];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res10[0] = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_res20,local_res10,true);
  FTokenizedMessage::Create(__return_storage_ptr__,Warning,param_1);
  pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(this->Messages).AllocatorInstance.Data;
  if ((pTVar6 <= __return_storage_ptr__) &&
     (__return_storage_ptr__ < pTVar6 + (this->Messages).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->Messages).ArrayNum;
  piVar1 = &(this->Messages).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Messages).ArrayNum = iVar5 + 1;
  pFVar7 = (this->Messages).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FTokenizedMessage **)pFVar7 = __return_storage_ptr__->Object;
  pTVar2 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

