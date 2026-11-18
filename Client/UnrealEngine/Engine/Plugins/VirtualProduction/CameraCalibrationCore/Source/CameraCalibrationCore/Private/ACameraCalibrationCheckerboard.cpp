// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 10

// StaticClass @ 14d678f60

UClass * __cdecl ACameraCalibrationCheckerboard::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraCalibrationCheckerboard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraCalibrationCheckerboard",
               &Z_Registration_Info_UClass_ACameraCalibrationCheckerboard.InnerSingleton,
               StaticRegisterNativesACameraCalibrationCheckerboard,0x318,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACameraCalibrationCheckerboard>,
               InternalVTableHelperCtorCaller<ACameraCalibrationCheckerboard>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraCalibrationCheckerboard.InnerSingleton;
}

// ACameraCalibrationCheckerboard @ 14d6a6850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ACameraCalibrationCheckerboard * __thiscall
ACameraCalibrationCheckerboard::ACameraCalibrationCheckerboard
          (ACameraCalibrationCheckerboard *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->NumCornerRows = 2;
  this->_padding_ = (longlong)&___7ACameraCalibrationCheckerboard__6B_;
  (this->Root).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->TopLeft).field0_0x0.DebugPtr = (UCalibrationPointComponent *)0x0;
  (this->TopRight).field0_0x0.DebugPtr = (UCalibrationPointComponent *)0x0;
  (this->BottomLeft).field0_0x0.DebugPtr = (UCalibrationPointComponent *)0x0;
  (this->BottomRight).field0_0x0.DebugPtr = (UCalibrationPointComponent *)0x0;
  (this->Center).field0_0x0.DebugPtr = (UCalibrationPointComponent *)0x0;
  (this->CubeMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->OddCubeMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->EvenCubeMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->NumCornerCols = 2;
  this->SquareSideLength = 3.2089;
  this->Thickness = 0.1;
  return this;
}

// ACameraCalibrationCheckerboard @ 14d6a68e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ACameraCalibrationCheckerboard * __thiscall
ACameraCalibrationCheckerboard::ACameraCalibrationCheckerboard(ACameraCalibrationCheckerboard *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USceneComponent *pUVar4;
  UCalibrationPointComponent *pUVar5;
  UStaticMesh *pUVar6;
  UMaterialInterface *pUVar7;
  FName local_res8;
  FString local_48;
  FGCObject local_38;
  UStaticMesh *local_28;
  
  AActor::AActor((AActor *)this);
  this->NumCornerRows = 2;
  this->NumCornerCols = 2;
  this->_padding_ = (longlong)&___7ACameraCalibrationCheckerboard__6B_;
  (this->Root).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->TopLeft).field0_0x0.DebugPtr = (UCalibrationPointComponent *)0x0;
  (this->TopRight).field0_0x0.DebugPtr = (UCalibrationPointComponent *)0x0;
  (this->BottomLeft).field0_0x0.DebugPtr = (UCalibrationPointComponent *)0x0;
  (this->BottomRight).field0_0x0.DebugPtr = (UCalibrationPointComponent *)0x0;
  (this->Center).field0_0x0.DebugPtr = (UCalibrationPointComponent *)0x0;
  (this->CubeMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->OddCubeMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->EvenCubeMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->SquareSideLength = 3.2089;
  this->Thickness = 0.1;
  pFVar2 = ::FName::FName(&local_res8,L"Root");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar4 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Root).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar4 = (this->Root).field0_0x0.DebugPtr;
  this->_padding_ = (longlong)pUVar4;
  USceneComponent::SetVisibility(pUVar4,true,DirtyOnly);
  pFVar2 = ::FName::FName(&local_res8,L"TopLeft");
  FVar1 = *pFVar2;
  pUVar3 = UCalibrationPointComponent::StaticClass();
  pUVar5 = (UCalibrationPointComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UCalibrationPointComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->TopLeft).field0_0x0.DebugPtr = pUVar5;
  pFVar2 = ::FName::FName(&local_res8,L"TopRight");
  FVar1 = *pFVar2;
  pUVar3 = UCalibrationPointComponent::StaticClass();
  pUVar5 = (UCalibrationPointComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UCalibrationPointComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->TopRight).field0_0x0.DebugPtr = pUVar5;
  pFVar2 = ::FName::FName(&local_res8,L"BottomLeft");
  FVar1 = *pFVar2;
  pUVar3 = UCalibrationPointComponent::StaticClass();
  pUVar5 = (UCalibrationPointComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UCalibrationPointComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->BottomLeft).field0_0x0.DebugPtr = pUVar5;
  pFVar2 = ::FName::FName(&local_res8,L"BottomRight");
  FVar1 = *pFVar2;
  pUVar3 = UCalibrationPointComponent::StaticClass();
  pUVar5 = (UCalibrationPointComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UCalibrationPointComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->BottomRight).field0_0x0.DebugPtr = pUVar5;
  pFVar2 = ::FName::FName(&local_res8,L"Center");
  FVar1 = *pFVar2;
  pUVar3 = UCalibrationPointComponent::StaticClass();
  pUVar5 = (UCalibrationPointComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UCalibrationPointComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Center).field0_0x0.DebugPtr = pUVar5;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->TopLeft).field0_0x0.DebugPtr,
             (USceneComponent *)this->_padding_,(FName)0x0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->TopRight).field0_0x0.DebugPtr,
             (USceneComponent *)this->_padding_,(FName)0x0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->BottomLeft).field0_0x0.DebugPtr,
             (USceneComponent *)this->_padding_,(FName)0x0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->BottomRight).field0_0x0.DebugPtr,
             (USceneComponent *)this->_padding_,(FName)0x0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->Center).field0_0x0.DebugPtr,
             (USceneComponent *)this->_padding_,(FName)0x0);
  if ((this->CubeMesh).field0_0x0.DebugPtr == (UStaticMesh *)0x0) {
    local_38._padding_ = (longlong)&___7FGCObject__6B_;
    local_38.bCanMakeInitialReferences = false;
    local_38.bReferenceAdded = false;
    FGCObject::RegisterGCObject(&local_38);
    local_28 = (UStaticMesh *)0x0;
    local_38._padding_ = (longlong)&___7__FObjectFinder_VUStaticMesh___ConstructorHelpers__6B_;
    ConstructorHelpers::CheckIfIsInConstructor(L"StaticMesh\'/Engine/BasicShapes/Cube.Cube\'");
    ::FString::FString(&local_48,L"StaticMesh\'/Engine/BasicShapes/Cube.Cube\'");
    ConstructorHelpers::StripObjectClass(&local_48,true);
    pUVar6 = ConstructorHelpersInternal::FindOrLoadObject<UStaticMesh>(&local_48,0x2002);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar6 == (UStaticMesh *)0x0)) {
      local_28 = pUVar6;
      if (pUVar6 == (UStaticMesh *)0x0) {
        ConstructorHelpers::FailedToFind(L"StaticMesh\'/Engine/BasicShapes/Cube.Cube\'");
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
      local_28 = pUVar6;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_28 != (UStaticMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_28);
      }
      (this->CubeMesh).field0_0x0.DebugPtr = local_28;
    }
    local_38._padding_ = (longlong)&___7FGCObject__6B_;
    FGCObject::UnregisterGCObject(&local_38);
  }
  if ((this->OddCubeMaterial).field0_0x0.DebugPtr == (UMaterialInterface *)0x0) {
    local_38._padding_ = (longlong)&___7FGCObject__6B_;
    local_38.bCanMakeInitialReferences = false;
    local_38.bReferenceAdded = false;
    FGCObject::RegisterGCObject(&local_38);
    local_38._padding_ =
         (longlong)&___7__FObjectFinder_VUMaterialInterface___ConstructorHelpers__6B_;
    local_28 = (UStaticMesh *)0x0;
    ConstructorHelpers::CheckIfIsInConstructor
              (L"Material\'/CameraCalibrationCore/Materials/M_DefaultOddSquare.M_DefaultOddSquare\'"
              );
    ::FString::FString(&local_48,
                       L"Material\'/CameraCalibrationCore/Materials/M_DefaultOddSquare.M_DefaultOddSquare\'"
                      );
    ConstructorHelpers::StripObjectClass(&local_48,true);
    pUVar6 = (UStaticMesh *)
             ConstructorHelpersInternal::FindOrLoadObject<UMaterialInterface>(&local_48,0x2002);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar6 == (UStaticMesh *)0x0)) {
      local_28 = pUVar6;
      if (pUVar6 == (UStaticMesh *)0x0) {
        ConstructorHelpers::FailedToFind
                  (
                  L"Material\'/CameraCalibrationCore/Materials/M_DefaultOddSquare.M_DefaultOddSquare\'"
                  );
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
      local_28 = pUVar6;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_28 != (UStaticMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_28);
      }
      (this->OddCubeMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)local_28;
    }
    local_38._padding_ = (longlong)&___7FGCObject__6B_;
    FGCObject::UnregisterGCObject(&local_38);
  }
  if ((this->EvenCubeMaterial).field0_0x0.DebugPtr == (UMaterialInterface *)0x0) {
    local_38._padding_ = (longlong)&___7FGCObject__6B_;
    local_38.bCanMakeInitialReferences = false;
    local_38.bReferenceAdded = false;
    FGCObject::RegisterGCObject(&local_38);
    local_38._padding_ =
         (longlong)&___7__FObjectFinder_VUMaterialInterface___ConstructorHelpers__6B_;
    local_28 = (UStaticMesh *)0x0;
    ConstructorHelpers::CheckIfIsInConstructor
              (
              L"Material\'/CameraCalibrationCore/Materials/M_DefaultEvenSquare.M_DefaultEvenSquare\'"
              );
    ::FString::FString(&local_48,
                       L"Material\'/CameraCalibrationCore/Materials/M_DefaultEvenSquare.M_DefaultEvenSquare\'"
                      );
    ConstructorHelpers::StripObjectClass(&local_48,true);
    pUVar7 = ConstructorHelpersInternal::FindOrLoadObject<UMaterialInterface>(&local_48,0x2002);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar7 == (UMaterialInterface *)0x0)) {
      local_28 = (UStaticMesh *)pUVar7;
      if (pUVar7 == (UMaterialInterface *)0x0) {
        ConstructorHelpers::FailedToFind
                  (
                  L"Material\'/CameraCalibrationCore/Materials/M_DefaultEvenSquare.M_DefaultEvenSquare\'"
                  );
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
      local_28 = (UStaticMesh *)pUVar7;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_28 != (UStaticMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_28);
      }
      (this->EvenCubeMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)local_28;
    }
    local_38._padding_ = (longlong)&___7FGCObject__6B_;
    FGCObject::UnregisterGCObject(&local_38);
  }
  return this;
}

// ~ACameraCalibrationCheckerboard @ 14d6abe60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ACameraCalibrationCheckerboard::~ACameraCalibrationCheckerboard
          (ACameraCalibrationCheckerboard *this)

{
  this->_padding_ = (longlong)&___7ACameraCalibrationCheckerboard__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// ClearInstanceCheckeboardMeshComponents @ 14d6bab50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ACameraCalibrationCheckerboard::ClearInstanceCheckeboardMeshComponents
          (ACameraCalibrationCheckerboard *this)

{
  int iVar1;
  longlong *plVar2;
  UStaticMesh *pUVar3;
  ForAnyElementType FVar4;
  int iVar5;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar6;
  UClass *pUVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  pTVar6 = AActor::GetInstanceComponents((AActor *)this);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = pTVar6->ArrayNum;
  lVar8 = (longlong)local_20;
  pFVar9 = (pTVar6->AllocatorInstance).Data;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar9,lVar8 << 3);
  }
  iVar5 = local_20;
  FVar4.Data = local_28.Data;
  pFVar9 = local_28.Data + (longlong)local_20 * 8;
  while( true ) {
    if (local_20 != iVar5) {
      `TCheckedPointerIterator<UActorComponent_*,int,1>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 == FVar4.Data) break;
    plVar2 = *(longlong **)(pFVar9 + -8);
    if (plVar2 != (longlong *)0x0) {
      pUVar7 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) {
        pUVar3 = (UStaticMesh *)plVar2[0xb4];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        if (pUVar3 == (this->CubeMesh).field0_0x0.DebugPtr) {
          (**(code **)(*plVar2 + 0x4a0))(plVar2,0);
        }
      }
    }
    pFVar9 = pFVar9 + -8;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14d6d7a40

UClass * __cdecl ACameraCalibrationCheckerboard::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraCalibrationCheckerboard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraCalibrationCheckerboard",
               &Z_Registration_Info_UClass_ACameraCalibrationCheckerboard.InnerSingleton,
               StaticRegisterNativesACameraCalibrationCheckerboard,0x318,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACameraCalibrationCheckerboard>,
               InternalVTableHelperCtorCaller<ACameraCalibrationCheckerboard>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraCalibrationCheckerboard.InnerSingleton;
}

// OnConstruction @ 14d6e4b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
ACameraCalibrationCheckerboard::OnConstruction
          (ACameraCalibrationCheckerboard *this,TTransform<double> *param_1)

{
  float fVar1;
  FScriptContainerElement *_Src;
  UStaticMesh *pUVar2;
  UCalibrationPointComponent *pUVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar9;
  UClass *pUVar10;
  USceneComponent *this_00;
  TQuat<double> *pTVar11;
  longlong *plVar12;
  int iVar13;
  UMaterialInterface *pUVar14;
  int iVar15;
  void *pvVar16;
  undefined1 auStackY_208 [32];
  TVector<double>_u_0 TStack_1c8;
  undefined1 auStack_1a8 [48];
  TQuat<double> TStack_178;
  undefined1 auStack_158 [128];
  TTransform<double> TStack_d8;
  ulonglong uStack_78;
  
  uStack_78 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar9 = AActor::GetInstanceComponents((AActor *)this);
  TStack_1c8._s_0.X = 0.0;
  iVar13 = pTVar9->ArrayNum;
  _Src = (pTVar9->AllocatorInstance).Data;
  TStack_1c8._8_4_ = iVar13;
  if (iVar13 == 0) {
    TStack_1c8._s_0.Y = 0.0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar13,0,(ForAnyElementType *)&TStack_1c8._s_0,iVar13,
               (int *)((longlong)&TStack_1c8._s_0.Y + 4));
    memcpy((void *)TStack_1c8._s_0.X,_Src,(longlong)iVar13 << 3);
  }
  uVar7 = TStack_1c8._s_0.X;
  uVar8 = TStack_1c8._8_4_;
  pvVar16 = (void *)((longlong)TStack_1c8._s_0.X + (longlong)(int)TStack_1c8._8_4_ * 8);
  while( true ) {
    if (TStack_1c8._8_4_ != uVar8) {
      `TCheckedPointerIterator<UActorComponent_*,int,1>::operator!='::__l2::<lambda_1>::operator()
                (auStack_1a8);
    }
    if (pvVar16 == (void *)uVar7) break;
    plVar12 = *(longlong **)((longlong)pvVar16 + -8);
    if (plVar12 != (longlong *)0x0) {
      pUVar10 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      iVar13 = (int)pUVar10->_padding_;
      if ((iVar13 <= *(int *)(plVar12[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar12[2] + 0x30) + (longlong)iVar13 * 8) ==
          &pUVar10->_padding_)) {
        pUVar2 = (UStaticMesh *)plVar12[0xb4];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        if (pUVar2 == (this->CubeMesh).field0_0x0.DebugPtr) {
          (**(code **)(*plVar12 + 0x4a0))(plVar12,0);
        }
      }
    }
    pvVar16 = (void *)((longlong)pvVar16 + -8);
  }
  if ((void *)TStack_1c8._s_0.X != (void *)0x0) {
    FMemory::Free((void *)TStack_1c8._s_0.X);
  }
  dVar6 = __real_4049000000000000;
  dVar4 = __real_3f847ae147ae147b;
  if ((this->CubeMesh).field0_0x0.DebugPtr != (UStaticMesh *)0x0) {
    iVar13 = this->NumCornerRows;
    iVar15 = 0;
    if (0 < iVar13 + 1) {
      do {
        if (0 < this->NumCornerCols + 1) {
          iVar13 = 0;
          do {
            fVar1 = this->SquareSideLength;
            TStack_d8.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            TStack_d8.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            dVar5 = (double)this->Thickness * dVar4;
            TStack_d8.Scale3D.ZW.m128d_f64[0] = (double)fVar1 * dVar4;
            TStack_d8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(TStack_d8.Scale3D.ZW.m128d_f64[0],0);
            TStack_d8.Scale3D.XY.m128d_f64[0] = dVar5;
            TStack_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)TStack_d8.Scale3D.ZW.m128d_f64[0] >> 0x20);
            TStack_d8.Translation.XY.m128d_f64[0] = (double)this->Thickness - dVar5 * dVar6;
            TStack_d8.Scale3D.ZW.m128d_f64[1] = 0.0;
            TStack_d8.Translation.XY.m128d_f64[1] =
                 (double)((float)iVar13 * fVar1) - TStack_d8.Scale3D.ZW.m128d_f64[0] * dVar6;
            TStack_d8.Translation.ZW.m128d_f64[0] =
                 (double)((float)iVar15 * fVar1) - TStack_d8.Scale3D.ZW.m128d_f64[0] * dVar6;
            TStack_d8.Translation.ZW.m128d_f64[1] = 0.0;
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)this,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar10 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)auStack_158,pUVar10);
            auStack_158._8_8_ = this;
            this_00 = (USceneComponent *)
                      StaticConstructObject_Internal
                                ((FStaticConstructObjectParameters *)auStack_158);
            if (auStack_158._64_8_ != 0) {
              plVar12 = (longlong *)(auStack_158 + 0x50);
              if ((longlong *)auStack_158._104_8_ != (longlong *)0x0) {
                plVar12 = (longlong *)auStack_158._104_8_;
              }
              (**(code **)(*plVar12 + 0x10))();
            }
            if (this_00 == (USceneComponent *)0x0) break;
            AActor::AddInstanceComponent((AActor *)this,(UActorComponent *)this_00);
            (**(code **)(this_00->_padding_ + 0x4a8))(this_00);
            TStack_1c8._s_0.X = 0.0;
            (**(code **)(this_00->_padding_ + 0x508))(this_00,this->_padding_);
            USceneComponent::SetRelativeTransform(this_00,&TStack_d8,false,(FHitResult *)0x0,None);
            UActorComponent::RegisterComponent((UActorComponent *)this_00);
            (**(code **)(this_00->_padding_ + 0xb28))(this_00,(this->CubeMesh).field0_0x0.DebugPtr);
            if ((iVar13 + iVar15 & 1U) == 0) {
              pUVar14 = (this->EvenCubeMaterial).field0_0x0.DebugPtr;
            }
            else {
              pUVar14 = (this->OddCubeMaterial).field0_0x0.DebugPtr;
            }
            if (pUVar14 != (UMaterialInterface *)0x0) {
              (**(code **)(this_00->_padding_ + 0x6b8))(this_00,0);
            }
            USceneComponent::SetVisibility(this_00,true,DirtyOnly);
            iVar13 = iVar13 + 1;
          } while (iVar13 < this->NumCornerCols + 1);
        }
        iVar13 = this->NumCornerRows;
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar13 + 1);
    }
    pUVar3 = (this->TopLeft).field0_0x0.DebugPtr;
    if (pUVar3 != (UCalibrationPointComponent *)0x0) {
      fVar1 = this->SquareSideLength;
      TStack_1c8._s_0.Z = (double)pUVar3->_padding_;
      TStack_1c8._s_0.X = ((TRotator<double> *)&pUVar3->_padding_)->Pitch;
      TStack_1c8._s_0.Y = (double)pUVar3->_padding_;
      pTVar11 = FRotationConversionCache::RotatorToQuat
                          ((FRotationConversionCache *)&pUVar3->_padding_,&TStack_178,
                           (TRotator<double> *)&TStack_1c8._s_0);
      TStack_1c8._s_0.X = 0.0;
      TStack_1c8._s_0.Y = 0.0;
      TStack_1c8._s_0.Z = (double)fVar1 * (double)(iVar13 + -1);
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)pUVar3,(TVector<double> *)&TStack_1c8._s_0,pTVar11,false,
                 (FHitResult *)0x0,None);
    }
    pUVar3 = (this->TopRight).field0_0x0.DebugPtr;
    if (pUVar3 != (UCalibrationPointComponent *)0x0) {
      iVar13 = this->NumCornerCols;
      fVar1 = this->SquareSideLength;
      TStack_1c8._s_0.Z = (double)pUVar3->_padding_;
      iVar15 = this->NumCornerRows;
      TStack_1c8._s_0.X = ((TRotator<double> *)&pUVar3->_padding_)->Pitch;
      TStack_1c8._s_0.Y = (double)pUVar3->_padding_;
      pTVar11 = FRotationConversionCache::RotatorToQuat
                          ((FRotationConversionCache *)&pUVar3->_padding_,&TStack_178,
                           (TRotator<double> *)&TStack_1c8._s_0);
      TStack_1c8._s_0.X = 0.0;
      TStack_1c8._s_0.Y = (double)(iVar13 + -1) * (double)fVar1;
      TStack_1c8._s_0.Z = (double)(iVar15 + -1) * (double)fVar1;
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)pUVar3,(TVector<double> *)&TStack_1c8._s_0,pTVar11,false,
                 (FHitResult *)0x0,None);
    }
    pUVar3 = (this->BottomLeft).field0_0x0.DebugPtr;
    if (pUVar3 != (UCalibrationPointComponent *)0x0) {
      TStack_1c8._s_0.X = ((TRotator<double> *)&pUVar3->_padding_)->Pitch;
      TStack_1c8._s_0.Y = (double)pUVar3->_padding_;
      TStack_1c8._s_0.Z = (double)pUVar3->_padding_;
      pTVar11 = FRotationConversionCache::RotatorToQuat
                          ((FRotationConversionCache *)&pUVar3->_padding_,&TStack_178,
                           (TRotator<double> *)&TStack_1c8._s_0);
      TStack_1c8._s_0.X = 0.0;
      TStack_1c8._s_0.Y = 0.0;
      TStack_1c8._s_0.Z = 0.0;
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)pUVar3,(TVector<double> *)&TStack_1c8._s_0,pTVar11,false,
                 (FHitResult *)0x0,None);
    }
    pUVar3 = (this->BottomRight).field0_0x0.DebugPtr;
    if (pUVar3 != (UCalibrationPointComponent *)0x0) {
      iVar13 = this->NumCornerCols;
      fVar1 = this->SquareSideLength;
      TStack_1c8._s_0.Z = (double)pUVar3->_padding_;
      TStack_1c8._s_0.X = ((TRotator<double> *)&pUVar3->_padding_)->Pitch;
      TStack_1c8._s_0.Y = (double)pUVar3->_padding_;
      pTVar11 = FRotationConversionCache::RotatorToQuat
                          ((FRotationConversionCache *)&pUVar3->_padding_,&TStack_178,
                           (TRotator<double> *)&TStack_1c8._s_0);
      TStack_1c8._s_0.X = 0.0;
      TStack_1c8._s_0.Z = 0.0;
      TStack_1c8._s_0.Y = (double)(iVar13 + -1) * (double)fVar1;
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)pUVar3,(TVector<double> *)&TStack_1c8._s_0,pTVar11,false,
                 (FHitResult *)0x0,None);
    }
    pUVar3 = (this->Center).field0_0x0.DebugPtr;
    if (pUVar3 != (UCalibrationPointComponent *)0x0) {
      iVar13 = this->NumCornerCols;
      dVar4 = (double)(this->SquareSideLength * __real_3f000000);
      TStack_1c8._s_0.X = ((TRotator<double> *)&pUVar3->_padding_)->Pitch;
      TStack_1c8._s_0.Y = (double)pUVar3->_padding_;
      iVar15 = this->NumCornerRows;
      TStack_1c8._s_0.Z = (double)pUVar3->_padding_;
      pTVar11 = FRotationConversionCache::RotatorToQuat
                          ((FRotationConversionCache *)&pUVar3->_padding_,&TStack_178,
                           (TRotator<double> *)&TStack_1c8._s_0);
      TStack_1c8._s_0.X = 0.0;
      TStack_1c8._s_0.Y = (double)(iVar13 + -1) * dVar4;
      TStack_1c8._s_0.Z = (double)(iVar15 + -1) * dVar4;
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)pUVar3,(TVector<double> *)&TStack_1c8._s_0,pTVar11,false,
                 (FHitResult *)0x0,None);
    }
  }
  return;
}

// Rebuild @ 14d6e5ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ACameraCalibrationCheckerboard::Rebuild(ACameraCalibrationCheckerboard *this)

{
  float fVar1;
  FScriptContainerElement *_Src;
  UStaticMesh *pUVar2;
  UCalibrationPointComponent *pUVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar9;
  UClass *pUVar10;
  USceneComponent *this_00;
  TQuat<double> *pTVar11;
  longlong *plVar12;
  int iVar13;
  UMaterialInterface *pUVar14;
  int iVar15;
  void *pvVar16;
  undefined1 auStackY_208 [32];
  TVector<double>_u_0 local_1c8;
  undefined1 local_1a8 [48];
  TQuat<double> local_178;
  undefined1 local_158 [128];
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar9 = AActor::GetInstanceComponents((AActor *)this);
  local_1c8._s_0.X = 0.0;
  iVar13 = pTVar9->ArrayNum;
  _Src = (pTVar9->AllocatorInstance).Data;
  local_1c8._8_4_ = iVar13;
  if (iVar13 == 0) {
    local_1c8._s_0.Y = 0.0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar13,0,(ForAnyElementType *)&local_1c8._s_0,iVar13,
               (int *)((longlong)&local_1c8._s_0.Y + 4));
    memcpy((void *)local_1c8._s_0.X,_Src,(longlong)iVar13 << 3);
  }
  uVar7 = local_1c8._s_0.X;
  uVar8 = local_1c8._8_4_;
  pvVar16 = (void *)((longlong)local_1c8._s_0.X + (longlong)(int)local_1c8._8_4_ * 8);
  while( true ) {
    if (local_1c8._8_4_ != uVar8) {
      `TCheckedPointerIterator<UActorComponent_*,int,1>::operator!='::__l2::<lambda_1>::operator()
                (local_1a8);
    }
    if (pvVar16 == (void *)uVar7) break;
    plVar12 = *(longlong **)((longlong)pvVar16 + -8);
    if (plVar12 != (longlong *)0x0) {
      pUVar10 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      iVar13 = (int)pUVar10->_padding_;
      if ((iVar13 <= *(int *)(plVar12[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar12[2] + 0x30) + (longlong)iVar13 * 8) ==
          &pUVar10->_padding_)) {
        pUVar2 = (UStaticMesh *)plVar12[0xb4];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        if (pUVar2 == (this->CubeMesh).field0_0x0.DebugPtr) {
          (**(code **)(*plVar12 + 0x4a0))(plVar12,0);
        }
      }
    }
    pvVar16 = (void *)((longlong)pvVar16 + -8);
  }
  if ((void *)local_1c8._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_1c8._s_0.X);
  }
  dVar6 = __real_4049000000000000;
  dVar4 = __real_3f847ae147ae147b;
  if ((this->CubeMesh).field0_0x0.DebugPtr != (UStaticMesh *)0x0) {
    iVar13 = this->NumCornerRows;
    iVar15 = 0;
    if (0 < iVar13 + 1) {
      do {
        if (0 < this->NumCornerCols + 1) {
          iVar13 = 0;
          do {
            fVar1 = this->SquareSideLength;
            local_d8.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_d8.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            dVar5 = (double)this->Thickness * dVar4;
            local_d8.Scale3D.ZW.m128d_f64[0] = (double)fVar1 * dVar4;
            local_d8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(local_d8.Scale3D.ZW.m128d_f64[0],0);
            local_d8.Scale3D.XY.m128d_f64[0] = dVar5;
            local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)local_d8.Scale3D.ZW.m128d_f64[0] >> 0x20);
            local_d8.Translation.XY.m128d_f64[0] = (double)this->Thickness - dVar5 * dVar6;
            local_d8.Scale3D.ZW.m128d_f64[1] = 0.0;
            local_d8.Translation.XY.m128d_f64[1] =
                 (double)((float)iVar13 * fVar1) - local_d8.Scale3D.ZW.m128d_f64[0] * dVar6;
            local_d8.Translation.ZW.m128d_f64[0] =
                 (double)((float)iVar15 * fVar1) - local_d8.Scale3D.ZW.m128d_f64[0] * dVar6;
            local_d8.Translation.ZW.m128d_f64[1] = 0.0;
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)this,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar10 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_158,pUVar10);
            local_158._8_8_ = this;
            this_00 = (USceneComponent *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_158);
            if (local_158._64_8_ != 0) {
              plVar12 = (longlong *)(local_158 + 0x50);
              if ((longlong *)local_158._104_8_ != (longlong *)0x0) {
                plVar12 = (longlong *)local_158._104_8_;
              }
              (**(code **)(*plVar12 + 0x10))();
            }
            if (this_00 == (USceneComponent *)0x0) break;
            AActor::AddInstanceComponent((AActor *)this,(UActorComponent *)this_00);
            (**(code **)(this_00->_padding_ + 0x4a8))(this_00);
            local_1c8._s_0.X = 0.0;
            (**(code **)(this_00->_padding_ + 0x508))(this_00,this->_padding_);
            USceneComponent::SetRelativeTransform(this_00,&local_d8,false,(FHitResult *)0x0,None);
            UActorComponent::RegisterComponent((UActorComponent *)this_00);
            (**(code **)(this_00->_padding_ + 0xb28))(this_00,(this->CubeMesh).field0_0x0.DebugPtr);
            if ((iVar13 + iVar15 & 1U) == 0) {
              pUVar14 = (this->EvenCubeMaterial).field0_0x0.DebugPtr;
            }
            else {
              pUVar14 = (this->OddCubeMaterial).field0_0x0.DebugPtr;
            }
            if (pUVar14 != (UMaterialInterface *)0x0) {
              (**(code **)(this_00->_padding_ + 0x6b8))(this_00,0);
            }
            USceneComponent::SetVisibility(this_00,true,DirtyOnly);
            iVar13 = iVar13 + 1;
          } while (iVar13 < this->NumCornerCols + 1);
        }
        iVar13 = this->NumCornerRows;
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar13 + 1);
    }
    pUVar3 = (this->TopLeft).field0_0x0.DebugPtr;
    if (pUVar3 != (UCalibrationPointComponent *)0x0) {
      fVar1 = this->SquareSideLength;
      local_1c8._s_0.Z = (double)pUVar3->_padding_;
      local_1c8._s_0.X = ((TRotator<double> *)&pUVar3->_padding_)->Pitch;
      local_1c8._s_0.Y = (double)pUVar3->_padding_;
      pTVar11 = FRotationConversionCache::RotatorToQuat
                          ((FRotationConversionCache *)&pUVar3->_padding_,&local_178,
                           (TRotator<double> *)&local_1c8._s_0);
      local_1c8._s_0.X = 0.0;
      local_1c8._s_0.Y = 0.0;
      local_1c8._s_0.Z = (double)fVar1 * (double)(iVar13 + -1);
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)pUVar3,(TVector<double> *)&local_1c8._s_0,pTVar11,false,
                 (FHitResult *)0x0,None);
    }
    pUVar3 = (this->TopRight).field0_0x0.DebugPtr;
    if (pUVar3 != (UCalibrationPointComponent *)0x0) {
      iVar13 = this->NumCornerCols;
      fVar1 = this->SquareSideLength;
      local_1c8._s_0.Z = (double)pUVar3->_padding_;
      iVar15 = this->NumCornerRows;
      local_1c8._s_0.X = ((TRotator<double> *)&pUVar3->_padding_)->Pitch;
      local_1c8._s_0.Y = (double)pUVar3->_padding_;
      pTVar11 = FRotationConversionCache::RotatorToQuat
                          ((FRotationConversionCache *)&pUVar3->_padding_,&local_178,
                           (TRotator<double> *)&local_1c8._s_0);
      local_1c8._s_0.X = 0.0;
      local_1c8._s_0.Y = (double)(iVar13 + -1) * (double)fVar1;
      local_1c8._s_0.Z = (double)(iVar15 + -1) * (double)fVar1;
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)pUVar3,(TVector<double> *)&local_1c8._s_0,pTVar11,false,
                 (FHitResult *)0x0,None);
    }
    pUVar3 = (this->BottomLeft).field0_0x0.DebugPtr;
    if (pUVar3 != (UCalibrationPointComponent *)0x0) {
      local_1c8._s_0.X = ((TRotator<double> *)&pUVar3->_padding_)->Pitch;
      local_1c8._s_0.Y = (double)pUVar3->_padding_;
      local_1c8._s_0.Z = (double)pUVar3->_padding_;
      pTVar11 = FRotationConversionCache::RotatorToQuat
                          ((FRotationConversionCache *)&pUVar3->_padding_,&local_178,
                           (TRotator<double> *)&local_1c8._s_0);
      local_1c8._s_0.X = 0.0;
      local_1c8._s_0.Y = 0.0;
      local_1c8._s_0.Z = 0.0;
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)pUVar3,(TVector<double> *)&local_1c8._s_0,pTVar11,false,
                 (FHitResult *)0x0,None);
    }
    pUVar3 = (this->BottomRight).field0_0x0.DebugPtr;
    if (pUVar3 != (UCalibrationPointComponent *)0x0) {
      iVar13 = this->NumCornerCols;
      fVar1 = this->SquareSideLength;
      local_1c8._s_0.Z = (double)pUVar3->_padding_;
      local_1c8._s_0.X = ((TRotator<double> *)&pUVar3->_padding_)->Pitch;
      local_1c8._s_0.Y = (double)pUVar3->_padding_;
      pTVar11 = FRotationConversionCache::RotatorToQuat
                          ((FRotationConversionCache *)&pUVar3->_padding_,&local_178,
                           (TRotator<double> *)&local_1c8._s_0);
      local_1c8._s_0.X = 0.0;
      local_1c8._s_0.Z = 0.0;
      local_1c8._s_0.Y = (double)(iVar13 + -1) * (double)fVar1;
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)pUVar3,(TVector<double> *)&local_1c8._s_0,pTVar11,false,
                 (FHitResult *)0x0,None);
    }
    pUVar3 = (this->Center).field0_0x0.DebugPtr;
    if (pUVar3 != (UCalibrationPointComponent *)0x0) {
      iVar13 = this->NumCornerCols;
      dVar4 = (double)(this->SquareSideLength * __real_3f000000);
      local_1c8._s_0.X = ((TRotator<double> *)&pUVar3->_padding_)->Pitch;
      local_1c8._s_0.Y = (double)pUVar3->_padding_;
      iVar15 = this->NumCornerRows;
      local_1c8._s_0.Z = (double)pUVar3->_padding_;
      pTVar11 = FRotationConversionCache::RotatorToQuat
                          ((FRotationConversionCache *)&pUVar3->_padding_,&local_178,
                           (TRotator<double> *)&local_1c8._s_0);
      local_1c8._s_0.X = 0.0;
      local_1c8._s_0.Y = (double)(iVar13 + -1) * dVar4;
      local_1c8._s_0.Z = (double)(iVar15 + -1) * dVar4;
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)pUVar3,(TVector<double> *)&local_1c8._s_0,pTVar11,false,
                 (FHitResult *)0x0,None);
    }
  }
  return;
}

// StaticRegisterNativesACameraCalibrationCheckerboard @ 14d6f0030

void __cdecl
ACameraCalibrationCheckerboard::StaticRegisterNativesACameraCalibrationCheckerboard(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execRebuild @ 14d6fa500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ACameraCalibrationCheckerboard::execRebuild(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Rebuild((ACameraCalibrationCheckerboard *)param_1);
  return;
}

