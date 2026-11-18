// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b4ad4d0

UClass * __cdecl UDS_InputConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InputConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InputConfig",
               &Z_Registration_Info_UClass_UDS_InputConfig.InnerSingleton,
               StaticRegisterNativesUDS_InputConfig,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InputConfig>,InternalVTableHelperCtorCaller<UDS_InputConfig>,
               local_res8,UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InputConfig.InnerSingleton;
}

// UDS_InputConfig @ 14b4b2960

UDS_InputConfig * __thiscall
UDS_InputConfig::UDS_InputConfig(UDS_InputConfig *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InputConfig__6B_;
  (this->NativeInputActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeInputActions).ArrayNum = 0;
  (this->NativeInputActions).ArrayMax = 0;
  (this->AbilityInputActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbilityInputActions).ArrayNum = 0;
  (this->AbilityInputActions).ArrayMax = 0;
  return this;
}

// ~UDS_InputConfig @ 14b4b3a00

void __thiscall UDS_InputConfig::~UDS_InputConfig(UDS_InputConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_InputConfig__6B_;
  pFVar1 = (this->AbilityInputActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NativeInputActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b7b40

UClass * __cdecl UDS_InputConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InputConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InputConfig",
               &Z_Registration_Info_UClass_UDS_InputConfig.InnerSingleton,
               StaticRegisterNativesUDS_InputConfig,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InputConfig>,InternalVTableHelperCtorCaller<UDS_InputConfig>,
               local_res8,UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InputConfig.InnerSingleton;
}

// StaticRegisterNativesUDS_InputConfig @ 14b4b8660

void __cdecl UDS_InputConfig::StaticRegisterNativesUDS_InputConfig(void)

{
  return;
}

// UDS_InputConfig @ 14b999a40

UDS_InputConfig * __thiscall
UDS_InputConfig::UDS_InputConfig(UDS_InputConfig *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UDataAsset::UDataAsset((UDataAsset *)this,pFVar1);
  this->_padding_ = (longlong)&___7UDS_InputConfig__6B_;
  (this->NativeInputActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeInputActions).ArrayNum = 0;
  (this->NativeInputActions).ArrayMax = 0;
  (this->AbilityInputActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbilityInputActions).ArrayNum = 0;
  (this->AbilityInputActions).ArrayMax = 0;
  return this;
}

// FindKeyActionType @ 14b9aa030

/* WARNING: Enum "Type": Some values do not have unique names */

EDS_KeyActionType __thiscall
UDS_InputConfig::FindKeyActionType(UDS_InputConfig *this,UInputAction *param_1,bool param_2)

{
  int iVar1;
  EDS_KeyActionType EVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UInputAction *)0x0) {
LAB_14b9aa15b:
    EVar2 = None;
  }
  else {
    iVar1 = (this->NativeInputActions).ArrayNum;
    pFVar3 = (this->NativeInputActions).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->NativeInputActions).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FDS_InputAction,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if (pFVar3 == pFVar4) {
        if ((param_2) && (1 < (byte)LogTemp._0_1_)) {
          if (this == (UDS_InputConfig *)0x0) {
            ::FString::FString(&local_38,L"None");
          }
          else {
            local_res10 = (FName)this->_padding_;
            ::FName::ToString(&local_res10,&local_38);
          }
          local_res10 = (FName)param_1->_padding_;
          ::FName::ToString(&local_res10,&local_28);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14b9aa15b;
      }
      if (((*(UInputAction **)pFVar3 != (UInputAction *)0x0) &&
          (EVar2 = *(EDS_KeyActionType *)(pFVar3 + 8), EVar2 != None)) &&
         (*(UInputAction **)pFVar3 == param_1)) break;
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return EVar2;
}

// FindNativeInputAction @ 14b9aa180

/* WARNING: Enum "Type": Some values do not have unique names */

UInputAction * __thiscall
UDS_InputConfig::FindNativeInputAction(UDS_InputConfig *this,EDS_KeyActionType param_1,bool param_2)

{
  int iVar1;
  UInputAction *pUVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [16];
  FName local_res20;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_1 == None) {
LAB_14b9aa2b6:
    pUVar2 = (UInputAction *)0x0;
  }
  else {
    iVar1 = (this->NativeInputActions).ArrayNum;
    pFVar3 = (this->NativeInputActions).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->NativeInputActions).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FDS_InputAction_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar3 == pFVar4) {
        if ((param_2) && (1 < (byte)LogTemp._0_1_)) {
          if (this == (UDS_InputConfig *)0x0) {
            ::FString::FString(&local_58,L"None");
          }
          else {
            local_res20 = (FName)this->_padding_;
            ::FName::ToString(&local_res20,&local_58);
          }
          ::FString::FString(&local_48,"EDS_KeyActionType");
          DS_Util::GetEnumToString(&local_38,&local_48,(longlong)(int)param_1);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14b9aa2b6;
      }
      pUVar2 = *(UInputAction **)pFVar3;
      if ((pUVar2 != (UInputAction *)0x0) && (*(EDS_KeyActionType *)(pFVar3 + 8) == param_1)) break;
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return pUVar2;
}

