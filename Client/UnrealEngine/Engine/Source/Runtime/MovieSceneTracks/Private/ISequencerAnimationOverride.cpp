// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// GetSequencerAnimOverride @ 146837530

TScriptInterface<ISequencerAnimationOverride> * __cdecl
ISequencerAnimationOverride::GetSequencerAnimOverride
          (TScriptInterface<ISequencerAnimationOverride> *__return_storage_ptr__,
          USkeletalMeshComponent *param_1)

{
  int iVar1;
  UObject *this;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  TScriptInterface<ISequencerAnimationOverride> *pTVar6;
  void *pvVar7;
  
  pUVar4 = USkeletalMeshComponent::GetAnimClass(param_1);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 == (UClass *)0x0) goto LAB_1468376a6;
  }
  else {
    if (pUVar4 == (UClass *)0x0) goto LAB_1468376a6;
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
  if (pUVar5 == (UClass *)0x0) goto LAB_1468376a6;
  iVar1 = (int)pUVar5->_padding_;
  if (((int)pUVar4->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_1468376a6;
  pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
  if (pUVar5 == (UClass *)0x0) {
LAB_1468375d6:
    pUVar4 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1468375d6;
  }
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  this = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(*(longlong *)&this->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TScriptInterface<ISequencerAnimationOverride> *)(*pcVar2)();
      return pTVar6;
    }
  }
  pUVar4 = *(UClass **)&this->field_0x10;
  if (pUVar4 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_USequencerAnimationOverride_NoRegister();
    bVar3 = UClass::ImplementsInterface(pUVar4,pUVar5);
    if (bVar3) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(this);
      }
      pUVar4 = Z_Construct_UClass_USequencerAnimationOverride_NoRegister();
      pvVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar4);
      *(UObject **)__return_storage_ptr__ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(this);
      }
      *(void **)&__return_storage_ptr__->field_0x8 = pvVar7;
      return __return_storage_ptr__;
    }
  }
LAB_1468376a6:
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

