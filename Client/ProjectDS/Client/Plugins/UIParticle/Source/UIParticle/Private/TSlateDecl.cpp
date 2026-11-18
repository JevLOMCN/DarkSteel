// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 2

// TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs> @ 14ac8e830

TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  EWidgetUpdateFlags EVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  SUIParticle *pSVar10;
  EWidgetUpdateFlags EVar11;
  SUIParticle *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SUIParticle *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar7 = ::operator_new(0x260);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pSVar10 = (SUIParticle *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSUIParticle___00_SharedPointerInternals__6B_;
    SLeafWidget::SLeafWidget((SLeafWidget *)(pTVar7 + 1));
    pTVar7[1]._padding_ = (longlong)&___7SUIParticle__6B_;
    pTVar7[0x23]._padding_ = 0;
    pTVar7[0x23].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x23].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x24]._padding_ = 0;
    pTVar7[0x24].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x24].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x25]._padding_ = 0;
    EVar3 = *(EWidgetUpdateFlags *)&pTVar7[4].SharedReferenceCount;
    EVar11 = EVar3 & ~NeedsTick;
    *(EWidgetUpdateFlags *)&pTVar7[4].SharedReferenceCount = EVar11;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&pTVar7[2].SharedReferenceCount,(SWidget *)(pTVar7 + 1),EVar3,
               EVar11);
    *(byte *)&pTVar7[4]._padding_ = (byte)pTVar7[4]._padding_ & 0xfe;
    pSVar10 = (SUIParticle *)(pTVar7 + 1);
    pTVar9 = pTVar7;
    if (pSVar10 == (SUIParticle *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_14ac8e99e;
    }
  }
  if (((pSVar10->_padding_ == 0) || (pSVar10->_padding_ == 0)) ||
     (*(int *)(pSVar10->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar10->_padding_ = (longlong)pSVar10;
    if (pTVar9 != (TReferenceControllerBase<1> *)pSVar10->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pSVar10->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pSVar10->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_14ac8e99e:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar10;
  local_30.ReferenceController = pTVar9;
  if (this != (TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar10;
    local_38 = (SUIParticle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if ((this->_Widget).Object == (SUIParticle *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SUIParticle,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x250);
  return this;
}

// TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs> @ 14ac8ea60

TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  EWidgetUpdateFlags EVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  SUIParticleEmitter *pSVar10;
  EWidgetUpdateFlags EVar11;
  SUIParticleEmitter *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SUIParticleEmitter *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar7 = ::operator_new(0x260);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pSVar10 = (SUIParticleEmitter *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSUIParticleEmitter___00_SharedPointerInternals__6B_;
    SLeafWidget::SLeafWidget((SLeafWidget *)(pTVar7 + 1));
    pTVar7[1]._padding_ = (longlong)&___7SUIParticleEmitter__6B_;
    pTVar7[0x23]._padding_ = 0;
    pTVar7[0x23].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x23].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x24]._padding_ = 0;
    pTVar7[0x24].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x24].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[0x25]._padding_ = 0;
    EVar3 = *(EWidgetUpdateFlags *)&pTVar7[4].SharedReferenceCount;
    EVar11 = EVar3 & ~NeedsTick;
    *(EWidgetUpdateFlags *)&pTVar7[4].SharedReferenceCount = EVar11;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&pTVar7[2].SharedReferenceCount,(SWidget *)(pTVar7 + 1),EVar3,
               EVar11);
    *(byte *)&pTVar7[4]._padding_ = (byte)pTVar7[4]._padding_ & 0xfe;
    pSVar10 = (SUIParticleEmitter *)(pTVar7 + 1);
    pTVar9 = pTVar7;
    if (pSVar10 == (SUIParticleEmitter *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_14ac8ebce;
    }
  }
  if (((pSVar10->_padding_ == 0) || (pSVar10->_padding_ == 0)) ||
     (*(int *)(pSVar10->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar10->_padding_ = (longlong)pSVar10;
    if (pTVar9 != (TReferenceControllerBase<1> *)pSVar10->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pSVar10->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pSVar10->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_14ac8ebce:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar10;
  local_30.ReferenceController = pTVar9;
  if (this != (TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar10;
    local_38 = (SUIParticleEmitter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if ((this->_Widget).Object == (SUIParticleEmitter *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SUIParticleEmitter,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x250);
  return this;
}

