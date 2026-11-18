// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// ForgetComponent @ 149751010

void __thiscall UPCGManagedComponent::ForgetComponent(UPCGManagedComponent *this)

{
  *(undefined8 *)&(this->GeneratedComponent).SoftObjectPtr = 0;
  *(undefined8 *)&(this->GeneratedComponent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->GeneratedComponent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->GeneratedComponent).SoftObjectPtr.field_0x18,0);
  return;
}

// GetComponentsArray @ 149754a20

TArrayView<TSoftObjectPtr<UActorComponent>,int> * __thiscall
UPCGManagedComponent::GetComponentsArray
          (UPCGManagedComponent *this,
          TArrayView<TSoftObjectPtr<UActorComponent>,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->ArrayNum = 1;
  __return_storage_ptr__->DataPtr = &this->GeneratedComponent;
  return __return_storage_ptr__;
}

// GetComponentsCount @ 149754a40

int __thiscall UPCGManagedComponent::GetComponentsCount(UPCGManagedComponent *this)

{
  return 1;
}

// StaticClass @ 149778570

UClass * __cdecl UPCGManagedComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedComponent",
               &Z_Registration_Info_UClass_UPCGManagedComponent.InnerSingleton,
               StaticRegisterNativesUPCGManagedComponent,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGManagedComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedComponent>,aFStackX_8,
               UPCGManagedComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponent.InnerSingleton;
}

// UPCGManagedComponent @ 149f32590

UPCGManagedComponent * __thiscall
UPCGManagedComponent::UPCGManagedComponent(UPCGManagedComponent *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->GeneratedComponent).SoftObjectPtr.field_0x18;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGManagedComponent__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->GeneratedComponent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->GeneratedComponent).SoftObjectPtr = 0;
  *(undefined8 *)&(this->GeneratedComponent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->GeneratedComponent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// UPCGManagedComponent @ 149f325e0

UPCGManagedComponent * __thiscall
UPCGManagedComponent::UPCGManagedComponent(UPCGManagedComponent *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->GeneratedComponent).SoftObjectPtr.field_0x18;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGManagedComponent__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->GeneratedComponent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->GeneratedComponent).SoftObjectPtr = 0;
  *(undefined8 *)&(this->GeneratedComponent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->GeneratedComponent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// ~UPCGManagedComponent @ 149f34860

void __thiscall UPCGManagedComponent::~UPCGManagedComponent(UPCGManagedComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGManagedComponent__6B_;
  pvVar1 = *(void **)&(this->GeneratedComponent).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149f4d440

UClass * __cdecl UPCGManagedComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedComponent",
               &Z_Registration_Info_UClass_UPCGManagedComponent.InnerSingleton,
               StaticRegisterNativesUPCGManagedComponent,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGManagedComponent>,
               InternalVTableHelperCtorCaller<UPCGManagedComponent>,local_res8,
               UPCGManagedComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponent.InnerSingleton;
}

// Release @ 149f5c210

bool __thiscall
UPCGManagedComponent::Release
          (UPCGManagedComponent *this,bool param_1,
          TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
          *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  bool bVar8;
  bool bVar9;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId436,"UPCGManagedComponent::Release",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGManagedResource.cpp"
               ,0x1b4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId436);
  }
  cVar2 = (**(code **)(this->_padding_ + 800))(this);
  if ((param_1) || (cVar2 == '\0')) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->GeneratedComponent);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar5 = (int)pUVar7->_padding_;
    if ((iVar5 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
        &pUVar7->_padding_)) {
      if (bVar8 == false) {
        PCGGeneratedResourcesLogging::LogManagedResourceSoftRelease((UPCGManagedResource *)this);
        *(undefined1 *)&this->_padding_ = 1;
        pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)&this->GeneratedComponent);
        if (pUVar6 == (UObject *)0x0) {
LAB_149f5c370:
          pUVar6 = (UObject *)0x0;
        }
        else {
          pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
          iVar5 = (int)pUVar7->_padding_;
          if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar5) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
              &pUVar7->_padding_)) goto LAB_149f5c370;
        }
        if (((*(ulonglong *)&pUVar6[2].field_0x18 < 0x1552922a1) &&
            (&PCGHelpers::MarkedForCleanupPCGTag <
             (FName *)(*(ulonglong *)&pUVar6[2].field_0x18 +
                      (longlong)*(int *)&pUVar6[2].field_0x24 * 8))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        iVar5 = *(int *)&pUVar6[2].field_0x20;
        if (iVar5 == *(int *)&pUVar6[2].field_0x24) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)&pUVar6[2].field_0x18,
                             (int *)&pUVar6[2].field_0x24);
        }
        *(int *)&pUVar6[2].field_0x20 = iVar5 + 1;
        *(FName *)(*(longlong *)&pUVar6[2].field_0x18 + (longlong)iVar5 * 8) =
             PCGHelpers::MarkedForCleanupPCGTag;
        goto LAB_149f5c415;
      }
      PCGGeneratedResourcesLogging::LogManagedResourceHardRelease((UPCGManagedResource *)this);
      pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->GeneratedComponent);
      if (pUVar6 == (UObject *)0x0) {
LAB_149f5c312:
        pUVar6 = (UObject *)0x0;
      }
      else {
        pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
        iVar5 = (int)pUVar7->_padding_;
        if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar5) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar7->_padding_)) goto LAB_149f5c312;
      }
      (**(code **)(*(longlong *)pUVar6 + 0x4a0))(pUVar6,0);
      (**(code **)(this->_padding_ + 0x300))(this);
      goto LAB_149f5c415;
    }
  }
  PCGGeneratedResourcesLogging::LogManagedComponentDeleteNull((UPCGManagedResource *)this);
  bVar8 = true;
LAB_149f5c415:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar8;
}

// ReleaseIfUnused @ 149f5c8f0

bool __thiscall
UPCGManagedComponent::ReleaseIfUnused
          (UPCGManagedComponent *this,
          TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
          *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  if ((char)this->_padding_ == '\0') {
    pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->GeneratedComponent);
    if (pUVar2 != (UObject *)0x0) {
      pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return false;
      }
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2b8))(this,1,param_1);
  }
  return true;
}

// SetGeneratedComponentFromBP @ 149f60a80

void __thiscall
UPCGManagedComponent::SetGeneratedComponentFromBP
          (UPCGManagedComponent *this,TSoftObjectPtr<UActorComponent> *param_1)

{
  void *pvVar1;
  undefined1 local_38 [48];
  
  *(undefined8 *)&(this->GeneratedComponent).SoftObjectPtr = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->GeneratedComponent).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  local_38._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_38 + 8),
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  UPCGManagedComponentBase::SetupGeneratedComponentFromBP
            ((UPCGManagedComponentBase *)this,(TSoftObjectPtr<UActorComponent> *)local_38);
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// StaticRegisterNativesUPCGManagedComponent @ 149f63990

void __cdecl UPCGManagedComponent::StaticRegisterNativesUPCGManagedComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPCGManagedComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetGeneratedComponentFromBP @ 149f725e0

void __cdecl
UPCGManagedComponent::execSetGeneratedComponentFromBP
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  undefined1 auVar3 [8];
  size_t sVar4;
  FSoftObjectPath local_80;
  undefined1 local_60 [8];
  FName local_58;
  FName FStack_50;
  FUtf8String local_48;
  undefined1 local_38 [16];
  FName FStack_28;
  ForAnyElementType local_20;
  int local_18;
  int local_14 [3];
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_60 = (undefined1  [8])0x0;
  FStack_50.ComparisonIndex.Value = 0;
  FStack_50.Number = 0;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FUtf8String::Reset(&local_48,0);
  FSoftObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_60);
  }
  FVar2.Data = local_48.Data.AllocatorInstance.Data;
  auVar3 = local_60;
  local_80.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  sVar4 = (size_t)local_48.Data.ArrayNum;
  local_80.SubPathString.Data.ArrayNum = local_48.Data.ArrayNum;
  local_80.AssetPath.PackageName = local_58;
  local_80.AssetPath.AssetName = FStack_50;
  if (local_48.Data.ArrayNum == 0) {
    local_80.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_80.SubPathString,
               local_48.Data.ArrayNum,&local_80.SubPathString.Data.ArrayMax);
    memcpy(local_80.SubPathString.Data.AllocatorInstance.Data,FVar2.Data,sVar4);
  }
  *(undefined1 (*) [8])&param_1[1].field_0x10 = auVar3;
  FSoftObjectPath::operator=((FSoftObjectPath *)&param_1[1].field_0x18,&local_80);
  FVar2.Data = local_80.SubPathString.Data.AllocatorInstance.Data;
  sVar4 = (size_t)local_80.SubPathString.Data.ArrayNum;
  local_38._0_8_ = auVar3;
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18 = local_80.SubPathString.Data.ArrayNum;
  local_38._8_4_ = local_80.AssetPath.PackageName.ComparisonIndex.Value;
  local_38._12_4_ = local_80.AssetPath.PackageName.Number;
  FStack_28 = local_80.AssetPath.AssetName;
  if (local_80.SubPathString.Data.ArrayNum == 0) {
    local_14[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_80.SubPathString.Data.ArrayNum,0,&local_20,
               local_80.SubPathString.Data.ArrayNum,local_14);
    memcpy(local_20.Data,FVar2.Data,sVar4);
  }
  UPCGManagedComponentBase::SetupGeneratedComponentFromBP
            ((UPCGManagedComponentBase *)param_1,(TSoftObjectPtr<UActorComponent> *)local_38);
  if (local_80.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

