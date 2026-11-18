// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// FGameplayDebuggerCategory_PerceptionSystem @ 146f915a0

FGameplayDebuggerCategory_PerceptionSystem * __thiscall
FGameplayDebuggerCategory_PerceptionSystem::FGameplayDebuggerCategory_PerceptionSystem
          (FGameplayDebuggerCategory_PerceptionSystem *this)

{
  FGameplayDebuggerCategory::FGameplayDebuggerCategory((FGameplayDebuggerCategory *)this);
  *(uint *)&this->field_0x34 = *(uint *)&this->field_0x34 & 0xfffffff7;
  *(undefined ***)this = &___7FGameplayDebuggerCategory_PerceptionSystem__6B_;
  return this;
}

// CollectData @ 146f9d6e0

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
FGameplayDebuggerCategory_PerceptionSystem::CollectData
          (FGameplayDebuggerCategory_PerceptionSystem *this,APlayerController *param_1,
          AActor *param_2)

{
  int iVar1;
  UAISystemBase *pUVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  
  pUVar7 = FGameplayDebuggerAddonBase::GetDataWorld
                     ((FGameplayDebuggerAddonBase *)this,param_1,param_2);
  if (pUVar7 == (UWorld *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\GameplayDebugger\\GameplayDebuggerCategory_PerceptionSystem.cpp"
                       ,0x17,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pUVar2 = (pUVar7->AISystem).field0_0x0.DebugPtr;
  if (pUVar2 != (UAISystemBase *)0x0) {
    pUVar8 = Z_Construct_UClass_UAISystem_NoRegister();
    lVar3 = pUVar2->_padding_;
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cast<UAISystem>(World.GetAISystem())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AIPerceptionSystem.cpp"
                         ,0x11e,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)&(pUVar7->AISystem).field0_0x0.DebugPtr[2].bInstantiateAISystemOnClient;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b0))(plVar4,this);
    }
  }
  return;
}

// MakeInstance @ 146fbb920

TSharedRef<FGameplayDebuggerCategory,1> * __cdecl
FGameplayDebuggerCategory_PerceptionSystem::MakeInstance
          (TSharedRef<FGameplayDebuggerCategory,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGameplayDebuggerCategory *this;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar3;
  TRawPtrProxy<FGameplayDebuggerCategory_PerceptionSystem> local_res8;
  
  this = ::operator_new(0x80);
  if (this == (FGameplayDebuggerCategory *)0x0) {
    this = (FGameplayDebuggerCategory *)0x0;
  }
  else {
    FGameplayDebuggerCategory::FGameplayDebuggerCategory(this);
    this->bShowOnlyWithDebugActor = 0;
    this->_padding_ = (longlong)&___7FGameplayDebuggerCategory_PerceptionSystem__6B_;
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
  local_res8.Object = (FGameplayDebuggerCategory_PerceptionSystem *)this;
  TSharedRef<FGameplayDebuggerCategory,1>::
  TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_PerceptionSystem>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

