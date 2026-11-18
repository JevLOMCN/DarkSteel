// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 1

// TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs> @ 14d282990

TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SAppleARKitLiveLinkSourceFactory *pSVar9;
  SAppleARKitLiveLinkSourceFactory *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAppleARKitLiveLinkSourceFactory *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x2d8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SAppleARKitLiveLinkSourceFactory *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSAppleARKitLiveLinkSourceFactory___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x2c8);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar6 + 1));
    pTVar6[1]._padding_ = (longlong)&___7SAppleARKitLiveLinkSourceFactory__6B_;
    pSVar9 = (SAppleARKitLiveLinkSourceFactory *)(pTVar6 + 1);
    pTVar6[0x2b].SharedReferenceCount = (atomic<int>)0x2b67;
    pTVar6[0x2c]._padding_ = 0;
    pTVar6[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x2d]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SAppleARKitLiveLinkSourceFactory *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d282ae9;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d282ae9:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs> *)&local_38
     ) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SAppleARKitLiveLinkSourceFactory *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SAppleARKitLiveLinkSourceFactory *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x2c8);
  return this;
}

