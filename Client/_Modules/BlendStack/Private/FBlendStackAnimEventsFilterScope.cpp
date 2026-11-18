// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 4

// FBlendStackAnimEventsFilterScope @ 14a8612f0

FBlendStackAnimEventsFilterScope * __thiscall
UE::Anim::FBlendStackAnimEventsFilterScope::FBlendStackAnimEventsFilterScope
          (FBlendStackAnimEventsFilterScope *this,
          TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1> *param_1,
          TSharedPtr<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FBlendStackAnimEventsFilterScope *pFVar4;
  
  this->_padding_ = (longlong)&___7FBlendStackAnimEventsFilterScope_Anim_UE__6B_;
  if (param_1->Object == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBlendStackAnimEventsFilterScope *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->FiredNotifies).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->FiredNotifies).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->FiredNotifies).Object == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBlendStackAnimEventsFilterScope *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (param_2->Object ==
      (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBlendStackAnimEventsFilterScope *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->NotifyBanList).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->NotifyBanList).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->NotifyBanList).Object ==
      (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBlendStackAnimEventsFilterScope *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

// FBlendStackAnimEventsFilterScope @ 14a861410

FBlendStackAnimEventsFilterScope * __thiscall
UE::Anim::FBlendStackAnimEventsFilterScope::FBlendStackAnimEventsFilterScope
          (FBlendStackAnimEventsFilterScope *this,
          TSharedRef<TArray<FName,TSizedDefaultAllocator<32>_>,1> *param_1,
          TSharedRef<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FBlendStackAnimEventsFilterScope_Anim_UE__6B_;
  (this->FiredNotifies).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->FiredNotifies).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->NotifyBanList).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->NotifyBanList).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// GetTypeName @ 14a866db0

FName __thiscall
UE::Anim::FBlendStackAnimEventsFilterScope::GetTypeName(FBlendStackAnimEventsFilterScope *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// MakeUniqueEventContextData @ 14a868170

TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
 __thiscall
UE::Anim::FBlendStackAnimEventsFilterScope::MakeUniqueEventContextData
          (FBlendStackAnimEventsFilterScope *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IAnimNotifyEventContextDataInterface IVar2;
  IAnimNotifyEventContextDataInterface *in_RDX;
  
  IVar2 = (IAnimNotifyEventContextDataInterface)::operator_new(0x28);
  if (IVar2 != (IAnimNotifyEventContextDataInterface)0x0) {
    *(undefined ***)IVar2 = &___7FBlendStackAnimEventsFilterContext_Anim_UE__6B_;
    *(TArray<FName,TSizedDefaultAllocator<32>_> **)((longlong)IVar2 + 8) =
         (this->FiredNotifies).Object;
    pTVar1 = (this->FiredNotifies).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)IVar2 + 0x10) = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> **)
     ((longlong)IVar2 + 0x18) = (this->NotifyBanList).Object;
    pTVar1 = (this->NotifyBanList).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)IVar2 + 0x20) = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    *in_RDX = IVar2;
    return (TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
            )in_RDX;
  }
  *in_RDX = (IAnimNotifyEventContextDataInterface)0x0;
  return (TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
          )in_RDX;
}

