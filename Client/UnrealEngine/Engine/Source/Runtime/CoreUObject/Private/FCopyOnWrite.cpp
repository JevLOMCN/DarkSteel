// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// SetIfNull @ 142285560

bool __thiscall Verse::FNativeString::FCopyOnWrite::SetIfNull(FCopyOnWrite *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FCopyOnWriteContents *pFVar10;
  FCopyOnWrite local_28;
  
  if ((this->Payload).Object != (FCopyOnWriteContents *)0x0) {
    return false;
  }
  pTVar7 = ::operator_new(0x28);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar10 = (FCopyOnWriteContents *)&DAT_00000010;
    pTVar7 = pTVar9;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar10 = (FCopyOnWriteContents *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFCopyOnWriteContents_FNativeString_Verse___00_SharedPointerInternals__6B_
    ;
    pTVar7[2]._padding_ = 0;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    if (pFVar10 == (FCopyOnWriteContents *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = pTVar7;
  if (this != &local_28) {
    (this->Payload).Object = pFVar10;
    pTVar3 = (this->Payload).SharedReferenceCount.ReferenceController;
    if (pTVar7 != pTVar3) {
      (this->Payload).SharedReferenceCount.ReferenceController = pTVar7;
      pTVar8 = pTVar9;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar3->_padding_)(pTVar3);
          LOCK();
          paVar1 = &pTVar3->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return true;
}

// Write @ 14228f590

FUtf8String * __thiscall Verse::FNativeString::FCopyOnWrite::Write(FCopyOnWrite *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FUtf8String *pFVar4;
  TSharedRef<Verse::FNativeString::FCopyOnWriteContents,1> *pTVar5;
  TSharedPtr<Verse::FNativeString::FCopyOnWriteContents,1> local_28;
  TSharedRef<Verse::FNativeString::FCopyOnWriteContents,1> local_18;
  
  bVar3 = SetIfNull(this);
  if (!bVar3) {
    pTVar1 = (this->Payload).SharedReferenceCount.ReferenceController;
    if ((pTVar1 == (TReferenceControllerBase<1> *)0x0) ||
       (pTVar1->SharedReferenceCount != (atomic<int>)0x1)) {
      if ((this->Payload).Object == (FCopyOnWriteContents *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FUtf8String *)(*pcVar2)();
          return pFVar4;
        }
      }
      pTVar5 = MakeShared<Verse::FNativeString::FCopyOnWriteContents,1,FUtf8String_&>
                         (&local_18,&((this->Payload).Object)->String);
      local_28.Object = pTVar5->Object;
      local_28.SharedReferenceCount.ReferenceController =
           (pTVar5->SharedReferenceCount).ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TSharedPtr<Verse::FNativeString::FCopyOnWriteContents,1>::operator=(&this->Payload,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    if ((this->Payload).Object == (FCopyOnWriteContents *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FUtf8String *)(*pcVar2)();
        return pFVar4;
      }
    }
    ((this->Payload).Object)->CachedHash = 0;
  }
  if ((this->Payload).Object == (FCopyOnWriteContents *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUtf8String *)(*pcVar2)();
      return pFVar4;
    }
  }
  return &((this->Payload).Object)->String;
}

// Hash @ 14229eb70

/* WARNING: Type propagation algorithm not settling */

int __thiscall Verse::FNativeString::FCopyOnWrite::Hash(FCopyOnWrite *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FCopyOnWriteContents *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  
  SetIfNull(this);
  if (((this->Payload).Object == (FCopyOnWriteContents *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  pFVar3 = (this->Payload).Object;
  uVar7 = pFVar3->CachedHash;
  if (uVar7 == 0) {
    iVar2 = (pFVar3->String).Data.ArrayNum;
    lVar8 = 0;
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar6 = 0;
      pcVar9 = "";
    }
    else {
      pcVar9 = (char *)(pFVar3->String).Data.AllocatorInstance.Data;
    }
    uVar7 = 0xffffffff;
    if (0 < iVar6) {
      do {
        pFVar1 = (FScriptContainerElement *)(pcVar9 + lVar8);
        lVar8 = lVar8 + 1;
        uVar7 = FCrc::CRCTablesSB8[1][(ulonglong)(uVar7 >> 0x10) & 0xff] ^
                FCrc::CRCTablesSB8[2][(ulonglong)(uVar7 >> 8) & 0xff] ^
                FCrc::CRCTablesSB8[0][uVar7 >> 0x18] ^
                FCrc::CRCTablesSB8[3][((ulonglong)(byte)*pFVar1 ^ (ulonglong)uVar7) & 0xff];
      } while (lVar8 < iVar6);
    }
    uVar7 = ~uVar7;
    pFVar3->CachedHash = uVar7;
    if (uVar7 == 0) {
      pFVar3->CachedHash = -1;
      uVar7 = 0xffffffff;
    }
  }
  return uVar7;
}

