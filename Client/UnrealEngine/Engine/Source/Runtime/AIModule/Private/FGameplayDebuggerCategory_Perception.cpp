// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// FGameplayDebuggerCategory_Perception @ 146f91570

FGameplayDebuggerCategory_Perception * __thiscall
FGameplayDebuggerCategory_Perception::FGameplayDebuggerCategory_Perception
          (FGameplayDebuggerCategory_Perception *this)

{
  FGameplayDebuggerCategory::FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
  *(undefined ***)this = &___7FGameplayDebuggerCategory_Perception__6B_;
  return this;
}

// CollectData @ 146f9d600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCategory_Perception::CollectData
          (FGameplayDebuggerCategory_Perception *this,APlayerController *param_1,AActor *param_2)

{
  int iVar1;
  AActor *this_00;
  UClass *pUVar2;
  UAIPerceptionComponent *pUVar3;
  
  if (param_2 == (AActor *)0x0) {
    return;
  }
  pUVar2 = Z_Construct_UClass_APawn_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    this_00 = (AActor *)param_2[1].PrimaryActorTick._padding_;
    if (this_00 == (AActor *)0x0) {
LAB_146f9d685:
      pUVar3 = AActor::FindComponentByClass<UAIPerceptionComponent>(param_2);
      if (pUVar3 != (UAIPerceptionComponent *)0x0) goto LAB_146f9d6bc;
      if (this_00 == (AActor *)0x0) goto LAB_146f9d6ac;
      pUVar3 = AActor::FindComponentByClass<UAIPerceptionComponent>(this_00);
    }
    else {
      pUVar2 = Z_Construct_UClass_AAIController_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) goto LAB_146f9d685;
      pUVar3 = (UAIPerceptionComponent *)
               (**(code **)((longlong)this_00[1].AttachmentReplication.RotationOffset.Yaw + 0x10))()
      ;
    }
    if (pUVar3 != (UAIPerceptionComponent *)0x0) goto LAB_146f9d6bc;
    if (param_2 == (AActor *)0x0) {
      return;
    }
  }
LAB_146f9d6ac:
  pUVar3 = AActor::FindComponentByClass<UAIPerceptionComponent>(param_2);
  if (pUVar3 == (UAIPerceptionComponent *)0x0) {
    return;
  }
LAB_146f9d6bc:
  (**(code **)(pUVar3->_padding_ + 0x500))(pUVar3,this);
  return;
}

// MakeInstance @ 146fbb880

TSharedRef<FGameplayDebuggerCategory,1> * __cdecl
FGameplayDebuggerCategory_Perception::MakeInstance
          (TSharedRef<FGameplayDebuggerCategory,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGameplayDebuggerCategory *this;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar3;
  TRawPtrProxy<FGameplayDebuggerCategory_Perception> local_res8;
  
  this = ::operator_new(0x80);
  if (this == (FGameplayDebuggerCategory *)0x0) {
    this = (FGameplayDebuggerCategory *)0x0;
  }
  else {
    FGameplayDebuggerCategory::FGameplayDebuggerCategory(this);
    this->_padding_ = (longlong)&___7FGameplayDebuggerCategory_Perception__6B_;
    if (((this->_padding_ != 0) && (this->_padding_ != 0)) && (0 < *(int *)(this->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FGameplayDebuggerCategory,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  local_res8.Object = (FGameplayDebuggerCategory_Perception *)this;
  TSharedRef<FGameplayDebuggerCategory,1>::
  TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_Perception>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

