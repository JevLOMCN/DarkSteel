// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// AddText @ 1417b3610

TSharedRef<FTokenizedMessage,1> * __thiscall
FTokenizedMessage::AddText
          (FTokenizedMessage *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,
          FText *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedRef<FTextToken,1> *pTVar5;
  TSharedRef<FTokenizedMessage,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FTextToken *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<FTextToken,1> local_18;
  
  pTVar5 = FTextToken::Create(&local_18,param_1,true);
  local_28 = pTVar5->Object;
  local_20 = (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (this->MessageTokens).AllocatorInstance.Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar7 + (longlong)(this->MessageTokens).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  iVar4 = (this->MessageTokens).ArrayNum;
  piVar1 = &(this->MessageTokens).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->MessageTokens).AllocatorInstance,piVar1);
  }
  pFVar7 = (this->MessageTokens).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  (this->MessageTokens).ArrayNum = iVar4 + 1;
  *(FTextToken **)pFVar7 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = local_20;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  TSharedFromThis<FTokenizedMessage,1>::AsShared
            ((TSharedFromThis<FTokenizedMessage,1> *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddToken @ 1417b37a0

TSharedRef<FTokenizedMessage,1> * __thiscall
FTokenizedMessage::AddToken
          (FTokenizedMessage *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,
          TSharedRef<IMessageToken,1> *param_1)

{
  int *piVar1;
  TSharedRef<IMessageToken,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FTokenizedMessage,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar2 = (TSharedRef<IMessageToken,1> *)(this->MessageTokens).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->MessageTokens).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  iVar6 = (this->MessageTokens).ArrayNum;
  piVar1 = &(this->MessageTokens).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->MessageTokens).AllocatorInstance,piVar1);
  }
  (this->MessageTokens).ArrayNum = iVar6 + 1;
  pFVar8 = (this->MessageTokens).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(IMessageToken **)pFVar8 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSharedFromThis<FTokenizedMessage,1>::AsShared
            ((TSharedFromThis<FTokenizedMessage,1> *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Clone @ 1417b86b0

TSharedRef<FTokenizedMessage,1> * __thiscall
FTokenizedMessage::Clone
          (FTokenizedMessage *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__)

{
  TArray<TSharedRef<IMessageToken,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FTokenizedMessage *pFVar4;
  TSharedRef<IMessageToken,1> *pTVar5;
  IMessageToken *pIVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pTVar7 = ::operator_new(0x50);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTokenizedMessage___00_SharedPointerInternals__6B_;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 4;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar7;
  }
  TSharedRef<FTokenizedMessage,1>::TSharedRef<FTokenizedMessage,1>
            (__return_storage_ptr__,(FTokenizedMessage *)(pTVar8 + 1),pTVar8);
  pFVar4 = __return_storage_ptr__->Object;
  pTVar1 = &pFVar4->MessageTokens;
  if (pTVar1 != &this->MessageTokens) {
    DestructItems<TSharedRef<IMessageToken,1>,int>
              ((TSharedRef<IMessageToken,1> *)(pTVar1->AllocatorInstance).Data,
               (pFVar4->MessageTokens).ArrayNum);
    iVar3 = (this->MessageTokens).ArrayNum;
    piVar2 = &(pFVar4->MessageTokens).ArrayMax;
    pTVar5 = (TSharedRef<IMessageToken,1> *)(this->MessageTokens).AllocatorInstance.Data;
    (pFVar4->MessageTokens).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<TSharedRef<IMessageToken,1>,TSharedRef<IMessageToken,1>,int>
                ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
    }
  }
  pTVar8 = (this->MessageLink).SharedReferenceCount.ReferenceController;
  pIVar6 = (this->MessageLink).Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (pFVar4->MessageLink).SharedReferenceCount.ReferenceController;
  (pFVar4->MessageLink).Object = pIVar6;
  (pFVar4->MessageLink).SharedReferenceCount.ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pFVar4->Severity = this->Severity;
  pFVar4->Identifier = this->Identifier;
  return __return_storage_ptr__;
}

// Create @ 1417bea20

TSharedRef<FTokenizedMessage,1> * __cdecl
FTokenizedMessage::Create
          (TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,Type param_1,FText *param_2)

{
  FTokenizedMessage *pFVar1;
  code *pcVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<FSeverityToken,1> *pTVar8;
  TSharedRef<FTokenizedMessage,1> *pTVar9;
  TSharedRef<FTextToken,1> *pTVar10;
  FScriptContainerElement *pFVar11;
  FSeverityToken *local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedRef<IMessageToken,1> local_58;
  TSharedRef<FTokenizedMessage,1> local_48;
  TSharedRef<FSeverityToken,1> local_38;
  TSharedRef<FTokenizedMessage,1> local_28;
  TSharedRef<FTextToken,1> local_18;
  
  pTVar6 = ::operator_new(0x50);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTokenizedMessage___00_SharedPointerInternals__6B_;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 4;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7 = pTVar6;
  }
  TSharedRef<FTokenizedMessage,1>::TSharedRef<FTokenizedMessage,1>
            (__return_storage_ptr__,(FTokenizedMessage *)(pTVar7 + 1),pTVar7);
  SetSeverity(__return_storage_ptr__->Object,param_1);
  pFVar1 = __return_storage_ptr__->Object;
  pTVar8 = FSeverityToken::Create(&local_38,param_1);
  local_68 = pTVar8->Object;
  local_60 = (pTVar8->SharedReferenceCount).ReferenceController;
  if (local_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar11 = (pFVar1->MessageTokens).AllocatorInstance.Data;
  if (((pFVar11 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar11 + (longlong)(pFVar1->MessageTokens).ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar2)();
    return pTVar9;
  }
  iVar5 = (pFVar1->MessageTokens).ArrayNum;
  piVar3 = &(pFVar1->MessageTokens).ArrayMax;
  if (iVar5 == *piVar3) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(pFVar1->MessageTokens).AllocatorInstance,piVar3);
  }
  (pFVar1->MessageTokens).ArrayNum = iVar5 + 1;
  pFVar11 = (pFVar1->MessageTokens).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FSeverityToken **)pFVar11 = local_68;
  *(TReferenceControllerBase<1> **)(pFVar11 + 8) = local_60;
  if (local_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSharedFromThis<FTokenizedMessage,1>::AsShared
            ((TSharedFromThis<FTokenizedMessage,1> *)pFVar1,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  bVar4 = FText::IsEmpty(param_2);
  if (!bVar4) {
    pFVar1 = __return_storage_ptr__->Object;
    pTVar10 = FTextToken::Create(&local_18,param_2,true);
    local_58.Object = (IMessageToken *)pTVar10->Object;
    local_58.SharedReferenceCount.ReferenceController =
         (pTVar10->SharedReferenceCount).ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddToken(pFVar1,&local_28,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetIdentifier @ 1417d4020

FName __thiscall FTokenizedMessage::GetIdentifier(FTokenizedMessage *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->Identifier;
  return in_RDX;
}

// GetMessageLink @ 1417d47e0

TSharedPtr<IMessageToken,1> * __thiscall
FTokenizedMessage::GetMessageLink
          (FTokenizedMessage *this,TSharedPtr<IMessageToken,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->MessageLink).Object;
  pTVar1 = (this->MessageLink).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetMessageTokens @ 1417d4810

TArray<TSharedRef<IMessageToken,1>,TSizedDefaultAllocator<32>_> * __thiscall
FTokenizedMessage::GetMessageTokens(FTokenizedMessage *this)

{
  return &this->MessageTokens;
}

// GetSeverity @ 1417d78f0

Type __thiscall FTokenizedMessage::GetSeverity(FTokenizedMessage *this)

{
  return this->Severity;
}

// GetSeverityIconName @ 1417d7900

FName __cdecl FTokenizedMessage::GetSeverityIconName(Type param_1)

{
  uint in_register_0000000c;
  FName FVar1;
  int in_EDX;
  char *pcVar2;
  FName local_res8 [4];
  
  FVar1.Number = in_register_0000000c;
  FVar1.ComparisonIndex.Value = param_1;
  *(undefined8 *)FVar1 = 0;
  if (in_EDX == 1) {
    pcVar2 = "Icons.ErrorWithColor";
  }
  else if ((in_EDX == 2) || (in_EDX == 3)) {
    pcVar2 = "Icons.WarningWithColor";
  }
  else {
    if (in_EDX != 4) {
      return FVar1;
    }
    pcVar2 = "Icons.BulletPoint";
  }
  ::FName::FName(local_res8,pcVar2);
  *(FName *)FVar1 = local_res8[0];
  return FVar1;
}

// GetSeverityText @ 1417d7960

FText * __cdecl FTokenizedMessage::GetSeverityText(FText *__return_storage_ptr__,Type param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined1 local_res10 [24];
  
  if (param_1 == Error) {
    pwVar4 = L"Error";
    pwVar3 = L"Error";
  }
  else if (param_1 == PerformanceWarning) {
    pwVar4 = L"Performance Warning";
    pwVar3 = L"PerfWarning";
  }
  else if (param_1 == Warning) {
    pwVar4 = L"Warning";
    pwVar3 = L"Warning";
  }
  else {
    if (param_1 != Info) {
      pFVar2 = FText::GetEmpty();
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar1 = (pFVar2->TextData).Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      }
      __return_storage_ptr__->Flags = pFVar2->Flags;
      return __return_storage_ptr__;
    }
    pwVar4 = L"Info";
    pwVar3 = L"Info";
  }
  FText::AsLocalizable_Advanced_LocText(__return_storage_ptr__,L"Core.MessageLog",pwVar3,pwVar4);
  return __return_storage_ptr__;
}

// SetIdentifier @ 1417fd6a0

void __thiscall FTokenizedMessage::SetIdentifier(FTokenizedMessage *this,FName param_1)

{
  this->Identifier = param_1;
  return;
}

// SetMessageLink @ 1417fd890

void __thiscall
FTokenizedMessage::SetMessageLink(FTokenizedMessage *this,TSharedRef<IMessageToken,1> *param_1)

{
  IMessageToken *local_18;
  FSharedReferencer<1> local_10 [2];
  
  local_18 = param_1->Object;
  local_10[0].ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MessageLink != (TSharedPtr<IMessageToken,1> *)&local_18) {
    (this->MessageLink).Object = local_18;
    local_18 = (IMessageToken *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageLink).SharedReferenceCount,local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  return;
}

// SetSeverity @ 1417fdc30

void __thiscall FTokenizedMessage::SetSeverity(FTokenizedMessage *this,Type param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSeverityToken *pFVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int iVar9;
  TSharedRef<FSeverityToken,1> *pTVar10;
  TSharedRef<FSeverityToken,1> local_18;
  
  if (this->Severity != param_1) {
    if (0 < (this->MessageTokens).ArrayNum) {
      iVar9 = (**(code **)(**(longlong **)(this->MessageTokens).AllocatorInstance.Data + 8))();
      if (iVar9 == 7) {
        if ((this->MessageTokens).ArrayNum < 1) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar1 = (this->MessageTokens).AllocatorInstance.Data;
        pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + 8);
        lVar3 = *(longlong *)pFVar1;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (*(Type *)(lVar3 + 0x40) == this->Severity) {
          pTVar10 = FSeverityToken::Create(&local_18,param_1);
          pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
          pFVar5 = pTVar10->Object;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((this->MessageTokens).ArrayNum < 1) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          pFVar1 = (this->MessageTokens).AllocatorInstance.Data;
          pTVar7 = *(TReferenceControllerBase<1> **)(pFVar1 + 8);
          *(FSeverityToken **)pFVar1 = pFVar5;
          *(TReferenceControllerBase<1> **)(pFVar1 + 8) = pTVar4;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
    }
    this->Severity = param_1;
  }
  return;
}

// ToText @ 141807ea0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall FTokenizedMessage::ToText(FTokenizedMessage *this,FText *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FText *pFVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_178;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_168;
  FText local_158;
  FText local_148;
  FTextFormat local_138;
  FText local_128;
  FTextFormat local_118;
  FText local_108;
  FFormatArgumentValue local_f8;
  FFormatArgumentValue local_d8;
  undefined4 local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  
  FText::FText(__return_storage_ptr__);
  uVar16 = 0;
  if (0 < (this->MessageTokens).ArrayNum) {
    iVar8 = (**(code **)(**(longlong **)(this->MessageTokens).AllocatorInstance.Data + 8))();
    if (iVar8 == 7) {
      if ((this->MessageTokens).ArrayNum < 1) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FText *)(*pcVar6)();
          return pFVar10;
        }
      }
      pFVar2 = (this->MessageTokens).AllocatorInstance.Data;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + 8);
      lVar14 = *(longlong *)pFVar2;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar16 = 1;
      if (*(Type *)(lVar14 + 0x40) != this->Severity) {
        pFVar10 = GetSeverityText(&local_68,this->Severity);
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_98,L"Core.MessageLog",L"SeverityMessageTokenFormatter",L"{0}:");
        pFVar12 = FTextFormat::FTextFormat(&local_58,pFVar11,Default);
        local_f8.Type = Text;
        FText::FText((FText *)&local_f8.TextValue,pFVar10);
        if (local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pFVar10 = (FText *)(*pcVar6)();
            return pFVar10;
          }
        }
        local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_178.AllocatorInstance,1,&local_178.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_178.AllocatorInstance.Data,&local_f8,1);
        local_138.TextFormatData.Object = (pFVar12->TextFormatData).Object;
        local_138.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar12->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_138.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_138.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_138.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_128,&local_138,&local_178);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
        if ((FFormatArgumentValue *)local_178.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_178.AllocatorInstance.Data);
        }
        if (local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar12->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar4 = (pFVar10->TextData).Reference;
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))();
        }
        FText::operator=(__return_storage_ptr__,&local_128);
        if (local_128.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
        }
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      goto LAB_1418080f4;
    }
  }
  pFVar10 = GetSeverityText(&local_88,this->Severity);
  FText::operator=(__return_storage_ptr__,pFVar10);
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
LAB_1418080f4:
  piVar1 = &(this->MessageTokens).ArrayNum;
  if ((int)uVar16 < *piVar1) {
    lVar14 = uVar16 << 4;
    do {
      bVar7 = FText::IsEmpty(__return_storage_ptr__);
      iVar8 = (this->MessageTokens).ArrayNum;
      uVar15 = (uint)uVar16;
      if (bVar7) {
        uVar9 = 0;
        if ((int)uVar15 < iVar8) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pFVar10 = (FText *)(*pcVar6)();
            return pFVar10;
          }
        }
        plVar13 = (longlong *)
                  (**(code **)(**(longlong **)
                                 ((this->MessageTokens).AllocatorInstance.Data + lVar14) + 0x10))();
        pIVar4 = (__return_storage_ptr__->TextData).Reference;
        pIVar5 = (ITextData *)*plVar13;
        if (pIVar4 != pIVar5) {
          (__return_storage_ptr__->TextData).Reference = pIVar5;
          if (pIVar5 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res18);
          }
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
          }
        }
        __return_storage_ptr__->Flags = *(uint *)(plVar13 + 1);
      }
      else {
        uVar9 = 0;
        if ((int)uVar15 < iVar8) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pFVar10 = (FText *)(*pcVar6)();
            return pFVar10;
          }
        }
        plVar13 = (longlong *)
                  (**(code **)(**(longlong **)
                                 ((this->MessageTokens).AllocatorInstance.Data + lVar14) + 0x10))();
        local_158.TextData.Reference = (ITextData *)*plVar13;
        if (local_158.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_158.TextData.Reference + 8))
                    (local_158.TextData.Reference,local_res8);
        }
        local_148.TextData.Reference = (__return_storage_ptr__->TextData).Reference;
        local_158.Flags = *(uint *)(plVar13 + 1);
        if (local_148.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_148.TextData.Reference + 8))
                    (local_148.TextData.Reference,local_res10);
        }
        local_148.Flags = __return_storage_ptr__->Flags;
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_78,L"Core.MessageLog",L"AggregateMessageTokenFormatter",
                             L"{0} {1}");
        pFVar12 = FTextFormat::FTextFormat(&local_48,pFVar10,Default);
        local_d8.Type = Text;
        FText::FText((FText *)&local_d8.TextValue,&local_148);
        if (local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pFVar10 = (FText *)(*pcVar6)();
            return pFVar10;
          }
        }
        local_b8 = 4;
        FText::FText(&local_a8,&local_158);
        if (local_a8.TextData.Reference == (ITextData *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pFVar10 = (FText *)(*pcVar6)();
            return pFVar10;
          }
        }
        local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_168.AllocatorInstance,2,&local_168.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_168.AllocatorInstance.Data,&local_d8,2);
        local_118.TextFormatData.Object = (pFVar12->TextFormatData).Object;
        local_118.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar12->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_118.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_118.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_118.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_108,&local_118,&local_168);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
        if ((FFormatArgumentValue *)local_168.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_168.AllocatorInstance.Data);
        }
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        if (local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar12->TextFormatData).SharedReferenceCount.ReferenceController);
        if (local_148.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
        }
        if (local_158.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
        }
        FText::operator=(__return_storage_ptr__,&local_108);
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        }
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      lVar14 = lVar14 + 0x10;
    } while ((int)(uVar15 + 1) < *piVar1);
  }
  return __return_storage_ptr__;
}

