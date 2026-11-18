// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// StaticClass @ 146e79d50

UClass * __cdecl UAISenseConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig",
               &Z_Registration_Info_UClass_UAISenseConfig.InnerSingleton,
               StaticRegisterNativesUAISenseConfig,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UAISenseConfig>,
               InternalVTableHelperCtorCaller<UAISenseConfig>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig.InnerSingleton;
}

// UAISenseConfig @ 146e80980

UAISenseConfig * __thiscall
UAISenseConfig::UAISenseConfig(UAISenseConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  (this->CachedSenseName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSenseName).Data.ArrayNum = 0;
  (this->CachedSenseName).Data.ArrayMax = 0;
  return this;
}

// ~UAISenseConfig @ 146e81b90

void __thiscall UAISenseConfig::~UAISenseConfig(UAISenseConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  pFVar1 = (this->CachedSenseName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146e8ebb0

UClass * __cdecl UAISenseConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig",
               &Z_Registration_Info_UClass_UAISenseConfig.InnerSingleton,
               StaticRegisterNativesUAISenseConfig,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UAISenseConfig>,
               InternalVTableHelperCtorCaller<UAISenseConfig>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig.InnerSingleton;
}

// StaticRegisterNativesUAISenseConfig @ 146ea0100

void __cdecl UAISenseConfig::StaticRegisterNativesUAISenseConfig(void)

{
  return;
}

// UAISenseConfig @ 146f93fa0

UAISenseConfig * __thiscall
UAISenseConfig::UAISenseConfig(UAISenseConfig *this,FObjectInitializer *param_1)

{
  FColor FVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  FVar1 = FColor::White;
  this->bStartsEnabled = 1;
  (this->DebugColor).field0_0x0._s_0 = (FColor_u_0_s_0)FVar1.field0_0x0;
  (this->CachedSenseName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSenseName).Data.ArrayNum = 0;
  (this->CachedSenseName).Data.ArrayMax = 0;
  return this;
}

// DescribeSelfToGameplayDebugger @ 146fa29a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UAISenseConfig::DescribeSelfToGameplayDebugger
          (UAISenseConfig *this,UAIPerceptionComponent *param_1,FGameplayDebuggerCategory *param_2)

{
  FColor_u_0 FVar1;
  FScriptContainerElement *_Src;
  FColor_u_0 *pFVar2;
  FString *pFVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  FColor_u_0 local_res18 [4];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_2 != (FGameplayDebuggerCategory *)0x0) {
    FVar1 = (FColor_u_0)(this->DebugColor).field0_0x0.Bits;
    iVar5 = GColorList.ColorsMap._8_4_ - GColorList.ColorsMap._52_4_;
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        pFVar2 = &FColorList::GetFColorByIndex(&GColorList,iVar6)->field0_0x0;
        if (FVar1.Bits == pFVar2->Bits) {
          pFVar3 = FColorList::GetColorNameByIndex(&GColorList,iVar6);
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = (pFVar3->Data).ArrayNum;
          lVar4 = (longlong)local_58.Data.ArrayNum;
          _Src = (pFVar3->Data).AllocatorInstance.Data;
          if (local_58.Data.ArrayNum == 0) {
            local_58.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,
                       local_58.Data.ArrayNum,&local_58.Data.ArrayMax);
            memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
          }
          goto LAB_146fa2a09;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    ::FString::FString(&local_58,L"color");
LAB_146fa2a09:
    local_res18[0] = (this->DebugColor).field0_0x0;
    FColor::ToString((FColor *)&local_res18[0]._s_0,&local_28);
    GetSenseName(this,&local_38);
    ::FString::PrintfImpl(&local_48,L"%s: {%s}%s");
    FGameplayDebuggerCategory::AddTextLine(param_2,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetSenseID @ 146fb4ae0

FAINamedID<FAISenseCounter> * __thiscall
UAISenseConfig::GetSenseID(UAISenseConfig *this,FAINamedID<FAISenseCounter> *__return_storage_ptr__)

{
  UObject *local_res8;
  UObject *local_res10 [3];
  
  (**(code **)(this->_padding_ + 0x2b0))(this,&local_res8);
  local_res10[0] = local_res8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  UAISense::GetSenseID(__return_storage_ptr__,(TSubclassOf<UAISense>)local_res10);
  return __return_storage_ptr__;
}

// GetSenseImplementation @ 146fb4c10

TSubclassOf<UAISense> __thiscall UAISenseConfig::GetSenseImplementation(UAISenseConfig *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UAISense::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UAISense>)in_RDX.field0_0x0;
}

// GetSenseName @ 146fb4ec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
UAISenseConfig::GetSenseName(UAISenseConfig *this,FString *__return_storage_ptr__)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  bool bVar2;
  ulonglong *puVar3;
  UClass *pUVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  FName local_res8;
  undefined1 local_res10 [8];
  FString local_28;
  
  iVar6 = (this->CachedSenseName).Data.ArrayNum;
  this_00 = &this->CachedSenseName;
  uVar5 = 0;
  uVar7 = (ulonglong)(iVar6 - 1);
  if (iVar6 == 0) {
    uVar7 = uVar5;
  }
  if ((int)uVar7 == 0) {
    puVar3 = (ulonglong *)(**(code **)(this->_padding_ + 0x2b0))(this,local_res10);
    uVar7 = *puVar3;
    if ((uVar7 != 0) && (pUVar4 = UAISense::StaticClass(), pUVar4 != (UClass *)0x0)) {
      iVar6 = (int)pUVar4->_padding_;
      if ((*(int *)(uVar7 + 0x38) < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(uVar7 + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar5 = *puVar3;
      }
    }
    local_res8 = *(FName *)(uVar5 + 0x18);
    ::FName::ToString(&local_res8,&local_28);
    if (this_00 != &local_28) {
      pFVar8 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (this_00->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (this->CachedSenseName).Data.ArrayNum = local_28.Data.ArrayNum;
      (this->CachedSenseName).Data.ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::RemoveFromEnd(this_00,L"_C",2,IgnoreCase);
    pFVar1 = (this_00->Data).AllocatorInstance.Data;
    pFVar8 = pFVar1 + (longlong)(this->CachedSenseName).Data.ArrayNum * 2;
    do {
      if (pFVar8 == pFVar1) goto LAB_146fb5003;
      pFVar8 = pFVar8 + -2;
    } while (*(short *)pFVar8 != 0x5f);
    iVar6 = (int)((longlong)pFVar8 - (longlong)pFVar1 >> 1);
    if (iVar6 != -1) {
      ::FString::RemoveAt(this_00,0,iVar6 + 1,No);
    }
  }
LAB_146fb5003:
  ::FString::FString(__return_storage_ptr__,this_00);
  return __return_storage_ptr__;
}

