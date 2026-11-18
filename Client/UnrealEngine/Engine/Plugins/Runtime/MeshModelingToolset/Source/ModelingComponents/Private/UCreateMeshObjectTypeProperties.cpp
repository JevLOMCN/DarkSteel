// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 17

// StaticClass @ 14cab08b0

UClass * __cdecl UCreateMeshObjectTypeProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCreateMeshObjectTypeProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"CreateMeshObjectTypeProperties",
               &Z_Registration_Info_UClass_UCreateMeshObjectTypeProperties.InnerSingleton,
               StaticRegisterNativesUCreateMeshObjectTypeProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCreateMeshObjectTypeProperties>,
               InternalVTableHelperCtorCaller<UCreateMeshObjectTypeProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCreateMeshObjectTypeProperties.InnerSingleton;
}

// UCreateMeshObjectTypeProperties @ 14caccb70

UCreateMeshObjectTypeProperties * __thiscall
UCreateMeshObjectTypeProperties::UCreateMeshObjectTypeProperties
          (UCreateMeshObjectTypeProperties *this,FVTableHelper *param_1)

{
  UClass *pUVar1;
  
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UCreateMeshObjectTypeProperties__6B_;
  (this->OutputType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputType).Data.ArrayNum = 0;
  (this->OutputType).Data.ArrayMax = 0;
  pUVar1 = Z_Construct_UClass_ABlockingVolume_NoRegister();
  (this->VolumeType).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->OutputTypeNamesList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTypeNamesList).ArrayNum = 0;
  (this->OutputTypeNamesList).ArrayMax = 0;
  this->bShowVolumeList = false;
  return this;
}

// UCreateMeshObjectTypeProperties @ 14caccbf0

UCreateMeshObjectTypeProperties * __thiscall
UCreateMeshObjectTypeProperties::UCreateMeshObjectTypeProperties
          (UCreateMeshObjectTypeProperties *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UCreateMeshObjectTypeProperties__6B_;
  (this->OutputType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputType).Data.ArrayNum = 0;
  (this->OutputType).Data.ArrayMax = 0;
  pUVar1 = Z_Construct_UClass_ABlockingVolume_NoRegister();
  (this->VolumeType).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->OutputTypeNamesList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTypeNamesList).ArrayNum = 0;
  (this->OutputTypeNamesList).ArrayMax = 0;
  this->bShowVolumeList = false;
  return this;
}

// ~UCreateMeshObjectTypeProperties @ 14cad2020

void __thiscall
UCreateMeshObjectTypeProperties::~UCreateMeshObjectTypeProperties
          (UCreateMeshObjectTypeProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCreateMeshObjectTypeProperties__6B_;
  DestructItems<FString,int>
            ((FString *)(this->OutputTypeNamesList).AllocatorInstance.Data,
             (this->OutputTypeNamesList).ArrayNum);
  pFVar1 = (this->OutputTypeNamesList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputType).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// ConfigureCreateMeshObjectParams @ 14caf8140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UCreateMeshObjectTypeProperties::ConfigureCreateMeshObjectParams
          (UCreateMeshObjectTypeProperties *this,FCreateMeshObjectParams *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  bool bVar6;
  
  iVar3 = (this->OutputType).Data.ArrayNum;
  if (iVar3 == AutoIdentifier.Data.ArrayNum) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->OutputType).Data.AllocatorInstance.Data,
                         (wchar_t *)AutoIdentifier.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_14caf8181;
    }
LAB_14caf8188:
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4943235507740999791>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PropertySets\\CreateMeshObjectTypeProperties.cpp"
                       ,0x6f,"OutputType != AutoIdentifier");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  else {
    bVar6 = iVar3 + AutoIdentifier.Data.ArrayNum == 1;
LAB_14caf8181:
    if (bVar6) goto LAB_14caf8188;
  }
  iVar3 = (this->OutputType).Data.ArrayNum;
  if (iVar3 == StaticMeshIdentifier.Data.ArrayNum) {
    if (iVar3 < 2) goto LAB_14caf82fb;
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->OutputType).Data.AllocatorInstance.Data,
                       (wchar_t *)StaticMeshIdentifier.Data.AllocatorInstance.Data);
    bVar6 = iVar3 == 0;
  }
  else {
    bVar6 = iVar3 + StaticMeshIdentifier.Data.ArrayNum == 1;
  }
  if (bVar6) {
LAB_14caf82fb:
    param_1->TypeHint = StaticMesh;
    return true;
  }
  iVar3 = (this->OutputType).Data.ArrayNum;
  if (iVar3 == VolumeIdentifier.Data.ArrayNum) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->OutputType).Data.AllocatorInstance.Data,
                         (wchar_t *)VolumeIdentifier.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_14caf8226;
    }
  }
  else {
    bVar6 = iVar3 + VolumeIdentifier.Data.ArrayNum == 1;
LAB_14caf8226:
    if (!bVar6) {
      iVar3 = (this->OutputType).Data.ArrayNum;
      if (iVar3 == DynamicMeshActorIdentifier.Data.ArrayNum) {
        if (iVar3 < 2) goto LAB_14caf8270;
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(this->OutputType).Data.AllocatorInstance.Data,
                           (wchar_t *)DynamicMeshActorIdentifier.Data.AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar3 + DynamicMeshActorIdentifier.Data.ArrayNum == 1;
      }
      if (!bVar6) {
        return false;
      }
LAB_14caf8270:
      param_1->TypeHint = DynamicMeshActor;
      return true;
    }
  }
  param_1->TypeHint = Volume;
  pUVar5 = (this->VolumeType).Class.field0_0x0.DebugPtr;
  if (pUVar5 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_AVolume_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar3 = (int)pUVar4->_padding_;
      if (((int)pUVar5->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar4->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        pUVar5 = (this->VolumeType).Class.field0_0x0.DebugPtr;
        goto LAB_14caf82cf;
      }
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14caf82cf:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (param_1->TypeHintClass).field0_0x0.DebugPtr = pUVar5;
  return true;
}

// GetCurrentCreateMeshType @ 14cb0eec0

ECreateObjectTypeHint __thiscall
UCreateMeshObjectTypeProperties::GetCurrentCreateMeshType(UCreateMeshObjectTypeProperties *this)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (this->OutputType).Data.ArrayNum;
  if (iVar1 == StaticMeshIdentifier.Data.ArrayNum) {
    if (iVar1 < 2) {
      return StaticMesh;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->OutputType).Data.AllocatorInstance.Data,
                       (wchar_t *)StaticMeshIdentifier.Data.AllocatorInstance.Data);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = iVar1 + StaticMeshIdentifier.Data.ArrayNum == 1;
  }
  if (bVar2) {
    return StaticMesh;
  }
  iVar1 = (this->OutputType).Data.ArrayNum;
  if (iVar1 == VolumeIdentifier.Data.ArrayNum) {
    if (iVar1 < 2) {
      return Volume;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->OutputType).Data.AllocatorInstance.Data,
                       (wchar_t *)VolumeIdentifier.Data.AllocatorInstance.Data);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = iVar1 + VolumeIdentifier.Data.ArrayNum == 1;
  }
  if (bVar2) {
    return Volume;
  }
  iVar1 = (this->OutputType).Data.ArrayNum;
  if (iVar1 != DynamicMeshActorIdentifier.Data.ArrayNum) {
    return -(iVar1 + DynamicMeshActorIdentifier.Data.ArrayNum == 1) & DynamicMeshActor;
  }
  if (iVar1 < 2) {
    return DynamicMeshActor;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp
                    ((wchar_t *)(this->OutputType).Data.AllocatorInstance.Data,
                     (wchar_t *)DynamicMeshActorIdentifier.Data.AllocatorInstance.Data);
  return -(iVar1 == 0) & DynamicMeshActor;
}

// GetOutputTypeNamesFunc @ 14cb119c0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UCreateMeshObjectTypeProperties::GetOutputTypeNamesFunc(UCreateMeshObjectTypeProperties *this)

{
  return &this->OutputTypeNamesList;
}

// GetPrivateStaticClass @ 14cb120d0

UClass * __cdecl UCreateMeshObjectTypeProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCreateMeshObjectTypeProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"CreateMeshObjectTypeProperties",
               &Z_Registration_Info_UClass_UCreateMeshObjectTypeProperties.InnerSingleton,
               StaticRegisterNativesUCreateMeshObjectTypeProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCreateMeshObjectTypeProperties>,
               InternalVTableHelperCtorCaller<UCreateMeshObjectTypeProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCreateMeshObjectTypeProperties.InnerSingleton;
}

// Initialize @ 14cb1c640

void __thiscall
UCreateMeshObjectTypeProperties::Initialize
          (UCreateMeshObjectTypeProperties *this,bool param_1,bool param_2,bool param_3)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  
  if (param_1) {
    pTVar2 = &this->OutputTypeNamesList;
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar8 < (FScriptContainerElement *)
                   ((longlong)&StaticMeshIdentifier.Data.AllocatorInstance.Data + 1)) &&
        (&StaticMeshIdentifier < pFVar8 + (longlong)(this->OutputTypeNamesList).ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->OutputTypeNamesList).ArrayNum;
    piVar1 = &(this->OutputTypeNamesList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->OutputTypeNamesList).ArrayNum = iVar5 + 1;
    pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    iVar5 = StaticMeshIdentifier.Data.ArrayNum;
    FVar7 = StaticMeshIdentifier.Data.AllocatorInstance;
    lVar9 = (longlong)StaticMeshIdentifier.Data.ArrayNum;
    *(int *)(pFVar8 + 8) = StaticMeshIdentifier.Data.ArrayNum;
    if (iVar5 == 0) {
      *(int *)(pFVar8 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,(ForAnyElementType *)pFVar8,iVar5,(int *)(pFVar8 + 0xc));
      memcpy(*(void **)pFVar8,FVar7.Data,lVar9 * 2);
    }
  }
  if (param_2) {
    pTVar2 = &this->OutputTypeNamesList;
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar8 < (FScriptContainerElement *)
                   ((longlong)&VolumeIdentifier.Data.AllocatorInstance.Data + 1)) &&
        (&VolumeIdentifier < pFVar8 + (longlong)(this->OutputTypeNamesList).ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->OutputTypeNamesList).ArrayNum;
    piVar1 = &(this->OutputTypeNamesList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->OutputTypeNamesList).ArrayNum = iVar5 + 1;
    pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    iVar5 = VolumeIdentifier.Data.ArrayNum;
    FVar7 = VolumeIdentifier.Data.AllocatorInstance;
    lVar9 = (longlong)VolumeIdentifier.Data.ArrayNum;
    *(int *)(pFVar8 + 8) = VolumeIdentifier.Data.ArrayNum;
    if (iVar5 == 0) {
      *(int *)(pFVar8 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,(ForAnyElementType *)pFVar8,iVar5,(int *)(pFVar8 + 0xc));
      memcpy(*(void **)pFVar8,FVar7.Data,lVar9 * 2);
    }
  }
  if ((param_3) && (bEnableDynamicMeshActorSupport != false)) {
    pTVar2 = &this->OutputTypeNamesList;
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar8 < (FScriptContainerElement *)
                  ((longlong)&DynamicMeshActorIdentifier.Data.AllocatorInstance.Data + 1)) &&
       ((&DynamicMeshActorIdentifier <
         pFVar8 + (longlong)(this->OutputTypeNamesList).ArrayMax * 0x10 &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->OutputTypeNamesList).ArrayNum;
    piVar1 = &(this->OutputTypeNamesList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->OutputTypeNamesList).ArrayNum = iVar5 + 1;
    pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    iVar5 = DynamicMeshActorIdentifier.Data.ArrayNum;
    FVar7 = DynamicMeshActorIdentifier.Data.AllocatorInstance;
    lVar9 = (longlong)DynamicMeshActorIdentifier.Data.ArrayNum;
    *(int *)(pFVar8 + 8) = DynamicMeshActorIdentifier.Data.ArrayNum;
    if (iVar5 == 0) {
      *(int *)(pFVar8 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,(ForAnyElementType *)pFVar8,iVar5,(int *)(pFVar8 + 0xc));
      memcpy(*(void **)pFVar8,FVar7.Data,lVar9 * 2);
    }
  }
  if ((this->OutputTypeNamesList).ArrayNum != 0) {
    iVar5 = (this->OutputType).Data.ArrayNum;
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    if ((iVar6 == 0) ||
       ((0 < iVar6 &&
        (bVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                           (&this->OutputTypeNamesList,&this->OutputType), !bVar4)))) {
      bVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                        (&this->OutputTypeNamesList,&DefaultObjectTypeIdentifier);
      FVar7 = DefaultObjectTypeIdentifier.Data.AllocatorInstance;
      iVar5 = DefaultObjectTypeIdentifier.Data.ArrayNum;
      if (!bVar4) {
        if (((this->OutputTypeNamesList).ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar8 = (this->OutputTypeNamesList).AllocatorInstance.Data;
        FVar7.Data = *(FScriptContainerElement **)pFVar8;
        iVar5 = *(int *)(pFVar8 + 8);
      }
      iVar6 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      ::FString::AssignRange(&this->OutputType,(wchar_t *)FVar7.Data,iVar6);
    }
  }
  return;
}

// InitializeDefault @ 14cb1d350

void __thiscall
UCreateMeshObjectTypeProperties::InitializeDefault(UCreateMeshObjectTypeProperties *this)

{
  Initialize(this,true,false,true);
  return;
}

// InitializeDefaultWithAuto @ 14cb1d370

void __thiscall
UCreateMeshObjectTypeProperties::InitializeDefaultWithAuto(UCreateMeshObjectTypeProperties *this)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  
  Initialize(this,true,false,true);
  pTVar5 = &this->OutputTypeNamesList;
  pFVar6 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar6 < (FScriptContainerElement *)0x155348c69) &&
     (&AutoIdentifier < pFVar6 + (longlong)(this->OutputTypeNamesList).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->OutputTypeNamesList).ArrayNum;
  piVar1 = &(this->OutputTypeNamesList).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar5->AllocatorInstance,piVar1);
  }
  (this->OutputTypeNamesList).ArrayNum = iVar4 + 1;
  pFVar6 = (pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)&pFVar6->field_0x0 = 0;
  iVar4 = AutoIdentifier.Data.ArrayNum;
  _Src = AutoIdentifier.Data.AllocatorInstance;
  lVar7 = (longlong)AutoIdentifier.Data.ArrayNum;
  *(int *)&pFVar6[8].field_0x0 = AutoIdentifier.Data.ArrayNum;
  if (iVar4 == 0) {
    *(int *)(pFVar6 + 0xc) = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar4,0,(ForAnyElementType *)pFVar6,iVar4,(int *)(pFVar6 + 0xc));
  memcpy(*(void **)&pFVar6->field_0x0,_Src.Data,lVar7 * 2);
  return;
}

// ShouldShowPropertySet @ 14cb3bad0

bool __thiscall
UCreateMeshObjectTypeProperties::ShouldShowPropertySet(UCreateMeshObjectTypeProperties *this)

{
  bool bVar1;
  
  if ((this->OutputTypeNamesList).ArrayNum < 2) {
    bVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                      (&this->OutputTypeNamesList,&VolumeIdentifier);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// StaticRegisterNativesUCreateMeshObjectTypeProperties @ 14cb3ea90

void __cdecl
UCreateMeshObjectTypeProperties::StaticRegisterNativesUCreateMeshObjectTypeProperties(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UCreateMeshObjectTypeProperties_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdatePropertyVisibility @ 14cb48980

void __thiscall
UCreateMeshObjectTypeProperties::UpdatePropertyVisibility(UCreateMeshObjectTypeProperties *this)

{
  int iVar1;
  
  iVar1 = (this->OutputType).Data.ArrayNum;
  if (iVar1 != VolumeIdentifier.Data.ArrayNum) {
    this->bShowVolumeList = iVar1 + VolumeIdentifier.Data.ArrayNum == 1;
    return;
  }
  if (1 < iVar1) {
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->OutputType).Data.AllocatorInstance.Data,
                       (wchar_t *)VolumeIdentifier.Data.AllocatorInstance.Data);
    this->bShowVolumeList = iVar1 == 0;
    return;
  }
  this->bShowVolumeList = true;
  return;
}

// execGetCurrentCreateMeshType @ 14cb50c50

void __cdecl
UCreateMeshObjectTypeProperties::execGetCurrentCreateMeshType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[4].field_0x18;
  if (iVar1 == StaticMeshIdentifier.Data.ArrayNum) {
    if (iVar1 < 2) goto LAB_14cb50d4e;
    iVar1 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)&param_1[4].field_0x10,
                       (wchar_t *)StaticMeshIdentifier.Data.AllocatorInstance.Data);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = iVar1 + StaticMeshIdentifier.Data.ArrayNum == 1;
  }
  if (bVar2) {
LAB_14cb50d4e:
    *(undefined1 *)param_3 = 1;
    return;
  }
  iVar1 = *(int *)&param_1[4].field_0x18;
  if (iVar1 == VolumeIdentifier.Data.ArrayNum) {
    if (iVar1 < 2) goto LAB_14cb50d40;
    iVar1 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)&param_1[4].field_0x10,
                       (wchar_t *)VolumeIdentifier.Data.AllocatorInstance.Data);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = iVar1 + VolumeIdentifier.Data.ArrayNum == 1;
  }
  if (bVar2) {
LAB_14cb50d40:
    *(undefined1 *)param_3 = 2;
    return;
  }
  iVar1 = *(int *)&param_1[4].field_0x18;
  if (iVar1 == DynamicMeshActorIdentifier.Data.ArrayNum) {
    if (iVar1 < 2) goto LAB_14cb50d32;
    iVar1 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)&param_1[4].field_0x10,
                       (wchar_t *)DynamicMeshActorIdentifier.Data.AllocatorInstance.Data);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = iVar1 + DynamicMeshActorIdentifier.Data.ArrayNum == 1;
  }
  if (!bVar2) {
    *(undefined1 *)param_3 = 0;
    return;
  }
LAB_14cb50d32:
  *(undefined1 *)param_3 = 3;
  return;
}

// execGetOutputTypeNamesFunc @ 14cb50e80

void __cdecl
UCreateMeshObjectTypeProperties::execGetOutputTypeNamesFunc
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FString *pFVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != param_1 + 5) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    iVar2 = *(int *)&param_1[5].field_0x8;
    piVar1 = (int *)((longlong)param_3 + 0xc);
    pFVar3 = *(FString **)(param_1 + 5);
    *(int *)((longlong)param_3 + 8) = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,param_3,iVar2,piVar1);
    ConstructItems<FString,FString,int>(*(void **)param_3,pFVar3,iVar2);
  }
  return;
}

// execShouldShowPropertySet @ 14cb51db0

void __cdecl
UCreateMeshObjectTypeProperties::execShouldShowPropertySet
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[5].field_0x8 < 2) {
    bVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                      ((TArray<FString,TSizedDefaultAllocator<32>_> *)(param_1 + 5),
                       &VolumeIdentifier);
    if (!bVar1) {
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  *(undefined1 *)param_3 = 1;
  return;
}

