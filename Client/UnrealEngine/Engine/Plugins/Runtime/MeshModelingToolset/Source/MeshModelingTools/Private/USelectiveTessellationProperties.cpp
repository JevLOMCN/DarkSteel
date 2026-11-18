// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbfdd60

UClass * __cdecl USelectiveTessellationProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USelectiveTessellationProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SelectiveTessellationProperties",
               &Z_Registration_Info_UClass_USelectiveTessellationProperties.InnerSingleton,
               StaticRegisterNativesUSelectiveTessellationProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USelectiveTessellationProperties>,
               InternalVTableHelperCtorCaller<USelectiveTessellationProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USelectiveTessellationProperties.InnerSingleton;
}

// USelectiveTessellationProperties @ 14cc203d0

USelectiveTessellationProperties * __thiscall
USelectiveTessellationProperties::USelectiveTessellationProperties
          (USelectiveTessellationProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SelectionType = None;
  this->_padding_ = (longlong)&___7USelectiveTessellationProperties__6B_;
  (this->ActiveMaterial).ComparisonIndex = 0;
  (this->ActiveMaterial).Number = 0;
  (this->MaterialIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialIDList).ArrayNum = 0;
  (this->MaterialIDList).ArrayMax = 0;
  return this;
}

// USelectiveTessellationProperties @ 14cc20420

USelectiveTessellationProperties * __thiscall
USelectiveTessellationProperties::USelectiveTessellationProperties
          (USelectiveTessellationProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->SelectionType = None;
  this->_padding_ = (longlong)&___7USelectiveTessellationProperties__6B_;
  (this->ActiveMaterial).ComparisonIndex = 0;
  (this->ActiveMaterial).Number = 0;
  (this->MaterialIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialIDList).ArrayNum = 0;
  (this->MaterialIDList).ArrayMax = 0;
  return this;
}

// ~USelectiveTessellationProperties @ 14cc23430

void __thiscall
USelectiveTessellationProperties::~USelectiveTessellationProperties
          (USelectiveTessellationProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USelectiveTessellationProperties__6B_;
  DestructItems<FString,int>
            ((FString *)(this->MaterialIDList).AllocatorInstance.Data,
             (this->MaterialIDList).ArrayNum);
  pFVar1 = (this->MaterialIDList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5d960

UClass * __cdecl USelectiveTessellationProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USelectiveTessellationProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"SelectiveTessellationProperties",
               &Z_Registration_Info_UClass_USelectiveTessellationProperties.InnerSingleton,
               StaticRegisterNativesUSelectiveTessellationProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USelectiveTessellationProperties>,
               InternalVTableHelperCtorCaller<USelectiveTessellationProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USelectiveTessellationProperties.InnerSingleton;
}

// StaticRegisterNativesUSelectiveTessellationProperties @ 14cc826c0

void __cdecl
USelectiveTessellationProperties::StaticRegisterNativesUSelectiveTessellationProperties(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USelectiveTessellationProperties_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetMaterialIDsFunc @ 14cc8af90

void __cdecl
USelectiveTessellationProperties::execGetMaterialIDsFunc
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  int iVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(param_1 + 5);
  pFVar1 = *(FString **)&param_1[4].field_0x20;
  local_10 = CONCAT44(local_10._4_4_,iVar2);
  if (iVar2 == 0) {
    local_10 = 0;
    local_10._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,&local_18,iVar2,(int *)((longlong)&local_10 + 4));
    ConstructItems<FString,FString,int>(local_18.Data,pFVar1,iVar2);
  }
  iVar2 = (int)local_10;
  if (param_3 != &local_18) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    iVar2 = 0;
    *(int *)((longlong)param_3 + 8) = (int)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FString,int>((FString *)local_18.Data,iVar2);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

