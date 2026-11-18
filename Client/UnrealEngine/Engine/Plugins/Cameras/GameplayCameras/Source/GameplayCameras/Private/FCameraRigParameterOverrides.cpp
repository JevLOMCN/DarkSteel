// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// StaticStruct @ 14d5751f0

UScriptStruct * __cdecl FCameraRigParameterOverrides::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraRigParameterOverrides.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraRigParameterOverrides.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraRigParameterOverrides,(UObject *)pUVar1,
                         L"CameraRigParameterOverrides");
  }
  return Z_Registration_Info_UScriptStruct_FCameraRigParameterOverrides.OuterSingleton;
}

// FCameraRigParameterOverrides @ 14d58db80

FCameraRigParameterOverrides * __thiscall
FCameraRigParameterOverrides::FCameraRigParameterOverrides
          (FCameraRigParameterOverrides *this,FCameraRigParameterOverrides *param_1)

{
  (this->BooleanOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BooleanOverrides).AllocatorInstance.Data =
       (param_1->BooleanOverrides).AllocatorInstance.Data;
  (param_1->BooleanOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BooleanOverrides).ArrayNum = (param_1->BooleanOverrides).ArrayNum;
  (this->BooleanOverrides).ArrayMax = (param_1->BooleanOverrides).ArrayMax;
  (param_1->BooleanOverrides).ArrayNum = 0;
  (param_1->BooleanOverrides).ArrayMax = 0;
  (this->Integer32Overrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Integer32Overrides).AllocatorInstance.Data =
       (param_1->Integer32Overrides).AllocatorInstance.Data;
  (param_1->Integer32Overrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Integer32Overrides).ArrayNum = (param_1->Integer32Overrides).ArrayNum;
  (this->Integer32Overrides).ArrayMax = (param_1->Integer32Overrides).ArrayMax;
  (param_1->Integer32Overrides).ArrayNum = 0;
  (param_1->Integer32Overrides).ArrayMax = 0;
  (this->FloatOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatOverrides).AllocatorInstance.Data = (param_1->FloatOverrides).AllocatorInstance.Data;
  (param_1->FloatOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatOverrides).ArrayNum = (param_1->FloatOverrides).ArrayNum;
  (this->FloatOverrides).ArrayMax = (param_1->FloatOverrides).ArrayMax;
  (param_1->FloatOverrides).ArrayNum = 0;
  (param_1->FloatOverrides).ArrayMax = 0;
  (this->DoubleOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleOverrides).AllocatorInstance.Data = (param_1->DoubleOverrides).AllocatorInstance.Data
  ;
  (param_1->DoubleOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleOverrides).ArrayNum = (param_1->DoubleOverrides).ArrayNum;
  (this->DoubleOverrides).ArrayMax = (param_1->DoubleOverrides).ArrayMax;
  (param_1->DoubleOverrides).ArrayNum = 0;
  (param_1->DoubleOverrides).ArrayMax = 0;
  (this->Vector2fOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector2fOverrides).AllocatorInstance.Data =
       (param_1->Vector2fOverrides).AllocatorInstance.Data;
  (param_1->Vector2fOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector2fOverrides).ArrayNum = (param_1->Vector2fOverrides).ArrayNum;
  (this->Vector2fOverrides).ArrayMax = (param_1->Vector2fOverrides).ArrayMax;
  (param_1->Vector2fOverrides).ArrayNum = 0;
  (param_1->Vector2fOverrides).ArrayMax = 0;
  (this->Vector2dOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector2dOverrides).AllocatorInstance.Data =
       (param_1->Vector2dOverrides).AllocatorInstance.Data;
  (param_1->Vector2dOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector2dOverrides).ArrayNum = (param_1->Vector2dOverrides).ArrayNum;
  (this->Vector2dOverrides).ArrayMax = (param_1->Vector2dOverrides).ArrayMax;
  (param_1->Vector2dOverrides).ArrayNum = 0;
  (param_1->Vector2dOverrides).ArrayMax = 0;
  (this->Vector3fOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector3fOverrides).AllocatorInstance.Data =
       (param_1->Vector3fOverrides).AllocatorInstance.Data;
  (param_1->Vector3fOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector3fOverrides).ArrayNum = (param_1->Vector3fOverrides).ArrayNum;
  (this->Vector3fOverrides).ArrayMax = (param_1->Vector3fOverrides).ArrayMax;
  (param_1->Vector3fOverrides).ArrayNum = 0;
  (param_1->Vector3fOverrides).ArrayMax = 0;
  (this->Vector3dOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector3dOverrides).AllocatorInstance.Data =
       (param_1->Vector3dOverrides).AllocatorInstance.Data;
  (param_1->Vector3dOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector3dOverrides).ArrayNum = (param_1->Vector3dOverrides).ArrayNum;
  (this->Vector3dOverrides).ArrayMax = (param_1->Vector3dOverrides).ArrayMax;
  (param_1->Vector3dOverrides).ArrayNum = 0;
  (param_1->Vector3dOverrides).ArrayMax = 0;
  (this->Vector4fOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector4fOverrides).AllocatorInstance.Data =
       (param_1->Vector4fOverrides).AllocatorInstance.Data;
  (param_1->Vector4fOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector4fOverrides).ArrayNum = (param_1->Vector4fOverrides).ArrayNum;
  (this->Vector4fOverrides).ArrayMax = (param_1->Vector4fOverrides).ArrayMax;
  (param_1->Vector4fOverrides).ArrayNum = 0;
  (param_1->Vector4fOverrides).ArrayMax = 0;
  (this->Vector4dOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector4dOverrides).AllocatorInstance.Data =
       (param_1->Vector4dOverrides).AllocatorInstance.Data;
  (param_1->Vector4dOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector4dOverrides).ArrayNum = (param_1->Vector4dOverrides).ArrayNum;
  (this->Vector4dOverrides).ArrayMax = (param_1->Vector4dOverrides).ArrayMax;
  (param_1->Vector4dOverrides).ArrayNum = 0;
  (param_1->Vector4dOverrides).ArrayMax = 0;
  (this->Rotator3fOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rotator3fOverrides).AllocatorInstance.Data =
       (param_1->Rotator3fOverrides).AllocatorInstance.Data;
  (param_1->Rotator3fOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rotator3fOverrides).ArrayNum = (param_1->Rotator3fOverrides).ArrayNum;
  (this->Rotator3fOverrides).ArrayMax = (param_1->Rotator3fOverrides).ArrayMax;
  (param_1->Rotator3fOverrides).ArrayNum = 0;
  (param_1->Rotator3fOverrides).ArrayMax = 0;
  (this->Rotator3dOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rotator3dOverrides).AllocatorInstance.Data =
       (param_1->Rotator3dOverrides).AllocatorInstance.Data;
  (param_1->Rotator3dOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rotator3dOverrides).ArrayNum = (param_1->Rotator3dOverrides).ArrayNum;
  (this->Rotator3dOverrides).ArrayMax = (param_1->Rotator3dOverrides).ArrayMax;
  (param_1->Rotator3dOverrides).ArrayNum = 0;
  (param_1->Rotator3dOverrides).ArrayMax = 0;
  (this->Transform3fOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transform3fOverrides).AllocatorInstance.Data =
       (param_1->Transform3fOverrides).AllocatorInstance.Data;
  (param_1->Transform3fOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transform3fOverrides).ArrayNum = (param_1->Transform3fOverrides).ArrayNum;
  (this->Transform3fOverrides).ArrayMax = (param_1->Transform3fOverrides).ArrayMax;
  (param_1->Transform3fOverrides).ArrayNum = 0;
  (param_1->Transform3fOverrides).ArrayMax = 0;
  (this->Transform3dOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transform3dOverrides).AllocatorInstance.Data =
       (param_1->Transform3dOverrides).AllocatorInstance.Data;
  (param_1->Transform3dOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transform3dOverrides).ArrayNum = (param_1->Transform3dOverrides).ArrayNum;
  (this->Transform3dOverrides).ArrayMax = (param_1->Transform3dOverrides).ArrayMax;
  (param_1->Transform3dOverrides).ArrayNum = 0;
  (param_1->Transform3dOverrides).ArrayMax = 0;
  return this;
}

// ~FCameraRigParameterOverrides @ 14d590eb0

void __thiscall
FCameraRigParameterOverrides::~FCameraRigParameterOverrides(FCameraRigParameterOverrides *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FTransform3dCameraRigParameterOverride,int>
            ((FTransform3dCameraRigParameterOverride *)
             (this->Transform3dOverrides).AllocatorInstance.Data,
             (this->Transform3dOverrides).ArrayNum);
  pFVar1 = (this->Transform3dOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FTransform3fCameraRigParameterOverride,int>
            ((FTransform3fCameraRigParameterOverride *)
             (this->Transform3fOverrides).AllocatorInstance.Data,
             (this->Transform3fOverrides).ArrayNum);
  pFVar1 = (this->Transform3fOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRotator3dCameraRigParameterOverride,int>
            ((FRotator3dCameraRigParameterOverride *)
             (this->Rotator3dOverrides).AllocatorInstance.Data,(this->Rotator3dOverrides).ArrayNum);
  pFVar1 = (this->Rotator3dOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRotator3fCameraRigParameterOverride,int>
            ((FRotator3fCameraRigParameterOverride *)
             (this->Rotator3fOverrides).AllocatorInstance.Data,(this->Rotator3fOverrides).ArrayNum);
  pFVar1 = (this->Rotator3fOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVector4dCameraRigParameterOverride,int>
            ((FVector4dCameraRigParameterOverride *)(this->Vector4dOverrides).AllocatorInstance.Data
             ,(this->Vector4dOverrides).ArrayNum);
  pFVar1 = (this->Vector4dOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVector4fCameraRigParameterOverride,int>
            ((FVector4fCameraRigParameterOverride *)(this->Vector4fOverrides).AllocatorInstance.Data
             ,(this->Vector4fOverrides).ArrayNum);
  pFVar1 = (this->Vector4fOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVector3dCameraRigParameterOverride,int>
            ((FVector3dCameraRigParameterOverride *)(this->Vector3dOverrides).AllocatorInstance.Data
             ,(this->Vector3dOverrides).ArrayNum);
  pFVar1 = (this->Vector3dOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVector3fCameraRigParameterOverride,int>
            ((FVector3fCameraRigParameterOverride *)(this->Vector3fOverrides).AllocatorInstance.Data
             ,(this->Vector3fOverrides).ArrayNum);
  pFVar1 = (this->Vector3fOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVector2dCameraRigParameterOverride,int>
            ((FVector2dCameraRigParameterOverride *)(this->Vector2dOverrides).AllocatorInstance.Data
             ,(this->Vector2dOverrides).ArrayNum);
  pFVar1 = (this->Vector2dOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVector2fCameraRigParameterOverride,int>
            ((FVector2fCameraRigParameterOverride *)(this->Vector2fOverrides).AllocatorInstance.Data
             ,(this->Vector2fOverrides).ArrayNum);
  pFVar1 = (this->Vector2fOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDoubleCameraRigParameterOverride,int>
            ((FDoubleCameraRigParameterOverride *)(this->DoubleOverrides).AllocatorInstance.Data,
             (this->DoubleOverrides).ArrayNum);
  pFVar1 = (this->DoubleOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FFloatCameraRigParameterOverride,int>
            ((FFloatCameraRigParameterOverride *)(this->FloatOverrides).AllocatorInstance.Data,
             (this->FloatOverrides).ArrayNum);
  pFVar1 = (this->FloatOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInteger32CameraRigParameterOverride,int>
            ((FInteger32CameraRigParameterOverride *)
             (this->Integer32Overrides).AllocatorInstance.Data,(this->Integer32Overrides).ArrayNum);
  pFVar1 = (this->Integer32Overrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FBooleanCameraRigParameterOverride,int>
            ((FBooleanCameraRigParameterOverride *)(this->BooleanOverrides).AllocatorInstance.Data,
             (this->BooleanOverrides).ArrayNum);
  pFVar1 = (this->BooleanOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14d5924d0

FCameraRigParameterOverrides * __thiscall
FCameraRigParameterOverrides::operator=
          (FCameraRigParameterOverrides *this,FCameraRigParameterOverrides *param_1)

{
  TArray<FInteger32CameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FInteger32CameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FFloatCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FFloatCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FDoubleCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FDoubleCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FVector2fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FVector2fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FVector2dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FVector2dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FVector3fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FVector3fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<FVector3dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<FVector3dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<FVector4fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<FVector4fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<FVector4dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar17;
  TArray<FVector4dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar18;
  TArray<FRotator3fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar19;
  TArray<FRotator3fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar20;
  TArray<FRotator3dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar21;
  TArray<FRotator3dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar22;
  TArray<FTransform3fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar23;
  TArray<FTransform3fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar24;
  TArray<FTransform3dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar25;
  TArray<FTransform3dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar26;
  FScriptContainerElement *pFVar27;
  
  if (this != param_1) {
    DestructItems<FBooleanCameraRigParameterOverride,int>
              ((FBooleanCameraRigParameterOverride *)(this->BooleanOverrides).AllocatorInstance.Data
               ,(this->BooleanOverrides).ArrayNum);
    pFVar27 = (this->BooleanOverrides).AllocatorInstance.Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (this->BooleanOverrides).AllocatorInstance.Data =
         (param_1->BooleanOverrides).AllocatorInstance.Data;
    (param_1->BooleanOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->BooleanOverrides).ArrayNum = (param_1->BooleanOverrides).ArrayNum;
    (this->BooleanOverrides).ArrayMax = (param_1->BooleanOverrides).ArrayMax;
    (param_1->BooleanOverrides).ArrayNum = 0;
    (param_1->BooleanOverrides).ArrayMax = 0;
  }
  pTVar1 = &param_1->Integer32Overrides;
  pTVar2 = &this->Integer32Overrides;
  if (pTVar2 != pTVar1) {
    DestructItems<FInteger32CameraRigParameterOverride,int>
              ((FInteger32CameraRigParameterOverride *)(pTVar2->AllocatorInstance).Data,
               (this->Integer32Overrides).ArrayNum);
    pFVar27 = (pTVar2->AllocatorInstance).Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Integer32Overrides).ArrayNum = (param_1->Integer32Overrides).ArrayNum;
    (this->Integer32Overrides).ArrayMax = (param_1->Integer32Overrides).ArrayMax;
    (param_1->Integer32Overrides).ArrayNum = 0;
    (param_1->Integer32Overrides).ArrayMax = 0;
  }
  pTVar3 = &param_1->FloatOverrides;
  pTVar4 = &this->FloatOverrides;
  if (pTVar4 != pTVar3) {
    DestructItems<FFloatCameraRigParameterOverride,int>
              ((FFloatCameraRigParameterOverride *)(pTVar4->AllocatorInstance).Data,
               (this->FloatOverrides).ArrayNum);
    pFVar27 = (pTVar4->AllocatorInstance).Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->FloatOverrides).ArrayNum = (param_1->FloatOverrides).ArrayNum;
    (this->FloatOverrides).ArrayMax = (param_1->FloatOverrides).ArrayMax;
    (param_1->FloatOverrides).ArrayNum = 0;
    (param_1->FloatOverrides).ArrayMax = 0;
  }
  pTVar5 = &param_1->DoubleOverrides;
  pTVar6 = &this->DoubleOverrides;
  if (pTVar6 != pTVar5) {
    DestructItems<FDoubleCameraRigParameterOverride,int>
              ((FDoubleCameraRigParameterOverride *)(pTVar6->AllocatorInstance).Data,
               (this->DoubleOverrides).ArrayNum);
    pFVar27 = (pTVar6->AllocatorInstance).Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DoubleOverrides).ArrayNum = (param_1->DoubleOverrides).ArrayNum;
    (this->DoubleOverrides).ArrayMax = (param_1->DoubleOverrides).ArrayMax;
    (param_1->DoubleOverrides).ArrayNum = 0;
    (param_1->DoubleOverrides).ArrayMax = 0;
  }
  pTVar7 = &param_1->Vector2fOverrides;
  pTVar8 = &this->Vector2fOverrides;
  if (pTVar8 != pTVar7) {
    DestructItems<FVector2fCameraRigParameterOverride,int>
              ((FVector2fCameraRigParameterOverride *)(pTVar8->AllocatorInstance).Data,
               (this->Vector2fOverrides).ArrayNum);
    pFVar27 = (pTVar8->AllocatorInstance).Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Vector2fOverrides).ArrayNum = (param_1->Vector2fOverrides).ArrayNum;
    (this->Vector2fOverrides).ArrayMax = (param_1->Vector2fOverrides).ArrayMax;
    (param_1->Vector2fOverrides).ArrayNum = 0;
    (param_1->Vector2fOverrides).ArrayMax = 0;
  }
  pTVar9 = &param_1->Vector2dOverrides;
  pTVar10 = &this->Vector2dOverrides;
  if (pTVar10 != pTVar9) {
    DestructItems<FVector2dCameraRigParameterOverride,int>
              ((FVector2dCameraRigParameterOverride *)(pTVar10->AllocatorInstance).Data,
               (this->Vector2dOverrides).ArrayNum);
    pFVar27 = (pTVar10->AllocatorInstance).Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Vector2dOverrides).ArrayNum = (param_1->Vector2dOverrides).ArrayNum;
    (this->Vector2dOverrides).ArrayMax = (param_1->Vector2dOverrides).ArrayMax;
    (param_1->Vector2dOverrides).ArrayNum = 0;
    (param_1->Vector2dOverrides).ArrayMax = 0;
  }
  pTVar11 = &param_1->Vector3fOverrides;
  pTVar12 = &this->Vector3fOverrides;
  if (pTVar12 != pTVar11) {
    DestructItems<FVector3fCameraRigParameterOverride,int>
              ((FVector3fCameraRigParameterOverride *)(pTVar12->AllocatorInstance).Data,
               (this->Vector3fOverrides).ArrayNum);
    pFVar27 = (pTVar12->AllocatorInstance).Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Vector3fOverrides).ArrayNum = (param_1->Vector3fOverrides).ArrayNum;
    (this->Vector3fOverrides).ArrayMax = (param_1->Vector3fOverrides).ArrayMax;
    (param_1->Vector3fOverrides).ArrayNum = 0;
    (param_1->Vector3fOverrides).ArrayMax = 0;
  }
  pTVar13 = &param_1->Vector3dOverrides;
  pTVar14 = &this->Vector3dOverrides;
  if (pTVar14 != pTVar13) {
    DestructItems<FVector3dCameraRigParameterOverride,int>
              ((FVector3dCameraRigParameterOverride *)(pTVar14->AllocatorInstance).Data,
               (this->Vector3dOverrides).ArrayNum);
    pFVar27 = (pTVar14->AllocatorInstance).Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (pTVar14->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Vector3dOverrides).ArrayNum = (param_1->Vector3dOverrides).ArrayNum;
    (this->Vector3dOverrides).ArrayMax = (param_1->Vector3dOverrides).ArrayMax;
    (param_1->Vector3dOverrides).ArrayNum = 0;
    (param_1->Vector3dOverrides).ArrayMax = 0;
  }
  pTVar15 = &param_1->Vector4fOverrides;
  pTVar16 = &this->Vector4fOverrides;
  if (pTVar16 != pTVar15) {
    DestructItems<FVector4fCameraRigParameterOverride,int>
              ((FVector4fCameraRigParameterOverride *)(pTVar16->AllocatorInstance).Data,
               (this->Vector4fOverrides).ArrayNum);
    pFVar27 = (pTVar16->AllocatorInstance).Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (pTVar16->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Vector4fOverrides).ArrayNum = (param_1->Vector4fOverrides).ArrayNum;
    (this->Vector4fOverrides).ArrayMax = (param_1->Vector4fOverrides).ArrayMax;
    (param_1->Vector4fOverrides).ArrayNum = 0;
    (param_1->Vector4fOverrides).ArrayMax = 0;
  }
  pTVar17 = &param_1->Vector4dOverrides;
  pTVar18 = &this->Vector4dOverrides;
  if (pTVar18 != pTVar17) {
    DestructItems<FVector4dCameraRigParameterOverride,int>
              ((FVector4dCameraRigParameterOverride *)(pTVar18->AllocatorInstance).Data,
               (this->Vector4dOverrides).ArrayNum);
    pFVar27 = (pTVar18->AllocatorInstance).Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (pTVar18->AllocatorInstance).Data = (pTVar17->AllocatorInstance).Data;
    (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Vector4dOverrides).ArrayNum = (param_1->Vector4dOverrides).ArrayNum;
    (this->Vector4dOverrides).ArrayMax = (param_1->Vector4dOverrides).ArrayMax;
    (param_1->Vector4dOverrides).ArrayNum = 0;
    (param_1->Vector4dOverrides).ArrayMax = 0;
  }
  pTVar19 = &param_1->Rotator3fOverrides;
  pTVar20 = &this->Rotator3fOverrides;
  if (pTVar20 != pTVar19) {
    DestructItems<FRotator3fCameraRigParameterOverride,int>
              ((FRotator3fCameraRigParameterOverride *)(pTVar20->AllocatorInstance).Data,
               (this->Rotator3fOverrides).ArrayNum);
    pFVar27 = (pTVar20->AllocatorInstance).Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (pTVar20->AllocatorInstance).Data = (pTVar19->AllocatorInstance).Data;
    (pTVar19->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Rotator3fOverrides).ArrayNum = (param_1->Rotator3fOverrides).ArrayNum;
    (this->Rotator3fOverrides).ArrayMax = (param_1->Rotator3fOverrides).ArrayMax;
    (param_1->Rotator3fOverrides).ArrayNum = 0;
    (param_1->Rotator3fOverrides).ArrayMax = 0;
  }
  pTVar21 = &param_1->Rotator3dOverrides;
  pTVar22 = &this->Rotator3dOverrides;
  if (pTVar22 != pTVar21) {
    DestructItems<FRotator3dCameraRigParameterOverride,int>
              ((FRotator3dCameraRigParameterOverride *)(pTVar22->AllocatorInstance).Data,
               (this->Rotator3dOverrides).ArrayNum);
    pFVar27 = (pTVar22->AllocatorInstance).Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (pTVar22->AllocatorInstance).Data = (pTVar21->AllocatorInstance).Data;
    (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Rotator3dOverrides).ArrayNum = (param_1->Rotator3dOverrides).ArrayNum;
    (this->Rotator3dOverrides).ArrayMax = (param_1->Rotator3dOverrides).ArrayMax;
    (param_1->Rotator3dOverrides).ArrayNum = 0;
    (param_1->Rotator3dOverrides).ArrayMax = 0;
  }
  pTVar23 = &param_1->Transform3fOverrides;
  pTVar24 = &this->Transform3fOverrides;
  if (pTVar24 != pTVar23) {
    DestructItems<FTransform3fCameraRigParameterOverride,int>
              ((FTransform3fCameraRigParameterOverride *)(pTVar24->AllocatorInstance).Data,
               (this->Transform3fOverrides).ArrayNum);
    pFVar27 = (pTVar24->AllocatorInstance).Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (pTVar24->AllocatorInstance).Data = (pTVar23->AllocatorInstance).Data;
    (pTVar23->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Transform3fOverrides).ArrayNum = (param_1->Transform3fOverrides).ArrayNum;
    (this->Transform3fOverrides).ArrayMax = (param_1->Transform3fOverrides).ArrayMax;
    (param_1->Transform3fOverrides).ArrayNum = 0;
    (param_1->Transform3fOverrides).ArrayMax = 0;
  }
  pTVar25 = &param_1->Transform3dOverrides;
  pTVar26 = &this->Transform3dOverrides;
  if (pTVar26 != pTVar25) {
    DestructItems<FTransform3dCameraRigParameterOverride,int>
              ((FTransform3dCameraRigParameterOverride *)(pTVar26->AllocatorInstance).Data,
               (this->Transform3dOverrides).ArrayNum);
    pFVar27 = (pTVar26->AllocatorInstance).Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (pTVar26->AllocatorInstance).Data = (pTVar25->AllocatorInstance).Data;
    (pTVar25->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Transform3dOverrides).ArrayNum = (param_1->Transform3dOverrides).ArrayNum;
    (this->Transform3dOverrides).ArrayMax = (param_1->Transform3dOverrides).ArrayMax;
    (param_1->Transform3dOverrides).ArrayNum = 0;
    (param_1->Transform3dOverrides).ArrayMax = 0;
  }
  return this;
}

// operator= @ 14d5928b0

FCameraRigParameterOverrides * __thiscall
FCameraRigParameterOverrides::operator=
          (FCameraRigParameterOverrides *this,FCameraRigParameterOverrides *param_1)

{
  int *piVar1;
  TArray<FInteger32CameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FFloatCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FDoubleCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FVector2fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FVector2dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FVector3fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FVector3dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FVector4fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FVector4dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FRotator3fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FRotator3dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<FTransform3fCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<FTransform3dCameraRigParameterOverride,TSizedDefaultAllocator<32>_> *pTVar14;
  int iVar15;
  FBooleanCameraRigParameterOverride *pFVar16;
  FInteger32CameraRigParameterOverride *pFVar17;
  FFloatCameraRigParameterOverride *pFVar18;
  FDoubleCameraRigParameterOverride *pFVar19;
  FVector2fCameraRigParameterOverride *pFVar20;
  FVector2dCameraRigParameterOverride *pFVar21;
  FVector3fCameraRigParameterOverride *pFVar22;
  FVector3dCameraRigParameterOverride *pFVar23;
  FVector4fCameraRigParameterOverride *pFVar24;
  FVector4dCameraRigParameterOverride *pFVar25;
  FRotator3fCameraRigParameterOverride *pFVar26;
  FRotator3dCameraRigParameterOverride *pFVar27;
  FTransform3fCameraRigParameterOverride *pFVar28;
  FTransform3dCameraRigParameterOverride *pFVar29;
  
  if (this != param_1) {
    DestructItems<FBooleanCameraRigParameterOverride,int>
              ((FBooleanCameraRigParameterOverride *)(this->BooleanOverrides).AllocatorInstance.Data
               ,(this->BooleanOverrides).ArrayNum);
    iVar15 = (param_1->BooleanOverrides).ArrayNum;
    piVar1 = &(this->BooleanOverrides).ArrayMax;
    pFVar16 = (FBooleanCameraRigParameterOverride *)
              (param_1->BooleanOverrides).AllocatorInstance.Data;
    (this->BooleanOverrides).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar15,*piVar1,(ForAnyElementType *)this,iVar15,piVar1);
      ConstructItems<FBooleanCameraRigParameterOverride,FBooleanCameraRigParameterOverride,int>
                ((this->BooleanOverrides).AllocatorInstance.Data,pFVar16,iVar15);
    }
  }
  pTVar2 = &this->Integer32Overrides;
  if (pTVar2 != &param_1->Integer32Overrides) {
    DestructItems<FInteger32CameraRigParameterOverride,int>
              ((FInteger32CameraRigParameterOverride *)(pTVar2->AllocatorInstance).Data,
               (this->Integer32Overrides).ArrayNum);
    iVar15 = (param_1->Integer32Overrides).ArrayNum;
    piVar1 = &(this->Integer32Overrides).ArrayMax;
    pFVar17 = (FInteger32CameraRigParameterOverride *)
              (param_1->Integer32Overrides).AllocatorInstance.Data;
    (this->Integer32Overrides).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar15,*piVar1,&pTVar2->AllocatorInstance,iVar15,piVar1);
      ConstructItems<FInteger32CameraRigParameterOverride,FInteger32CameraRigParameterOverride,int>
                ((pTVar2->AllocatorInstance).Data,pFVar17,iVar15);
    }
  }
  pTVar3 = &this->FloatOverrides;
  if (pTVar3 != &param_1->FloatOverrides) {
    DestructItems<FFloatCameraRigParameterOverride,int>
              ((FFloatCameraRigParameterOverride *)(pTVar3->AllocatorInstance).Data,
               (this->FloatOverrides).ArrayNum);
    iVar15 = (param_1->FloatOverrides).ArrayNum;
    piVar1 = &(this->FloatOverrides).ArrayMax;
    pFVar18 = (FFloatCameraRigParameterOverride *)(param_1->FloatOverrides).AllocatorInstance.Data;
    (this->FloatOverrides).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar15,*piVar1,&pTVar3->AllocatorInstance,iVar15,piVar1);
      ConstructItems<FFloatCameraRigParameterOverride,FFloatCameraRigParameterOverride,int>
                ((pTVar3->AllocatorInstance).Data,pFVar18,iVar15);
    }
  }
  pTVar4 = &this->DoubleOverrides;
  if (pTVar4 != &param_1->DoubleOverrides) {
    DestructItems<FDoubleCameraRigParameterOverride,int>
              ((FDoubleCameraRigParameterOverride *)(pTVar4->AllocatorInstance).Data,
               (this->DoubleOverrides).ArrayNum);
    iVar15 = (param_1->DoubleOverrides).ArrayNum;
    piVar1 = &(this->DoubleOverrides).ArrayMax;
    pFVar19 = (FDoubleCameraRigParameterOverride *)(param_1->DoubleOverrides).AllocatorInstance.Data
    ;
    (this->DoubleOverrides).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar15,*piVar1,&pTVar4->AllocatorInstance,iVar15,piVar1);
      ConstructItems<FDoubleCameraRigParameterOverride,FDoubleCameraRigParameterOverride,int>
                ((pTVar4->AllocatorInstance).Data,pFVar19,iVar15);
    }
  }
  pTVar5 = &this->Vector2fOverrides;
  if (pTVar5 != &param_1->Vector2fOverrides) {
    DestructItems<FVector2fCameraRigParameterOverride,int>
              ((FVector2fCameraRigParameterOverride *)(pTVar5->AllocatorInstance).Data,
               (this->Vector2fOverrides).ArrayNum);
    iVar15 = (param_1->Vector2fOverrides).ArrayNum;
    piVar1 = &(this->Vector2fOverrides).ArrayMax;
    pFVar20 = (FVector2fCameraRigParameterOverride *)
              (param_1->Vector2fOverrides).AllocatorInstance.Data;
    (this->Vector2fOverrides).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar15,*piVar1,&pTVar5->AllocatorInstance,iVar15,piVar1);
      ConstructItems<FVector2fCameraRigParameterOverride,FVector2fCameraRigParameterOverride,int>
                ((pTVar5->AllocatorInstance).Data,pFVar20,iVar15);
    }
  }
  pTVar6 = &this->Vector2dOverrides;
  if (pTVar6 != &param_1->Vector2dOverrides) {
    DestructItems<FVector2dCameraRigParameterOverride,int>
              ((FVector2dCameraRigParameterOverride *)(pTVar6->AllocatorInstance).Data,
               (this->Vector2dOverrides).ArrayNum);
    iVar15 = (param_1->Vector2dOverrides).ArrayNum;
    piVar1 = &(this->Vector2dOverrides).ArrayMax;
    pFVar21 = (FVector2dCameraRigParameterOverride *)
              (param_1->Vector2dOverrides).AllocatorInstance.Data;
    (this->Vector2dOverrides).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar15,*piVar1,&pTVar6->AllocatorInstance,iVar15,piVar1);
      ConstructItems<FVector2dCameraRigParameterOverride,FVector2dCameraRigParameterOverride,int>
                ((pTVar6->AllocatorInstance).Data,pFVar21,iVar15);
    }
  }
  pTVar7 = &this->Vector3fOverrides;
  if (pTVar7 != &param_1->Vector3fOverrides) {
    DestructItems<FVector3fCameraRigParameterOverride,int>
              ((FVector3fCameraRigParameterOverride *)(pTVar7->AllocatorInstance).Data,
               (this->Vector3fOverrides).ArrayNum);
    iVar15 = (param_1->Vector3fOverrides).ArrayNum;
    piVar1 = &(this->Vector3fOverrides).ArrayMax;
    pFVar22 = (FVector3fCameraRigParameterOverride *)
              (param_1->Vector3fOverrides).AllocatorInstance.Data;
    (this->Vector3fOverrides).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar15,*piVar1,&pTVar7->AllocatorInstance,iVar15,piVar1);
      ConstructItems<FVector3fCameraRigParameterOverride,FVector3fCameraRigParameterOverride,int>
                ((pTVar7->AllocatorInstance).Data,pFVar22,iVar15);
    }
  }
  pTVar8 = &this->Vector3dOverrides;
  if (pTVar8 != &param_1->Vector3dOverrides) {
    DestructItems<FVector3dCameraRigParameterOverride,int>
              ((FVector3dCameraRigParameterOverride *)(pTVar8->AllocatorInstance).Data,
               (this->Vector3dOverrides).ArrayNum);
    iVar15 = (param_1->Vector3dOverrides).ArrayNum;
    piVar1 = &(this->Vector3dOverrides).ArrayMax;
    pFVar23 = (FVector3dCameraRigParameterOverride *)
              (param_1->Vector3dOverrides).AllocatorInstance.Data;
    (this->Vector3dOverrides).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,iVar15,*piVar1,&pTVar8->AllocatorInstance,iVar15,piVar1);
      ConstructItems<FVector3dCameraRigParameterOverride,FVector3dCameraRigParameterOverride,int>
                ((pTVar8->AllocatorInstance).Data,pFVar23,iVar15);
    }
  }
  pTVar9 = &this->Vector4fOverrides;
  if (pTVar9 != &param_1->Vector4fOverrides) {
    DestructItems<FVector4fCameraRigParameterOverride,int>
              ((FVector4fCameraRigParameterOverride *)(pTVar9->AllocatorInstance).Data,
               (this->Vector4fOverrides).ArrayNum);
    iVar15 = (param_1->Vector4fOverrides).ArrayNum;
    piVar1 = &(this->Vector4fOverrides).ArrayMax;
    pFVar24 = (FVector4fCameraRigParameterOverride *)
              (param_1->Vector4fOverrides).AllocatorInstance.Data;
    (this->Vector4fOverrides).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar15,*piVar1,&pTVar9->AllocatorInstance,iVar15,piVar1);
      ConstructItems<FVector4fCameraRigParameterOverride,FVector4fCameraRigParameterOverride,int>
                ((pTVar9->AllocatorInstance).Data,pFVar24,iVar15);
    }
  }
  pTVar10 = &this->Vector4dOverrides;
  if (pTVar10 != &param_1->Vector4dOverrides) {
    DestructItems<FVector4dCameraRigParameterOverride,int>
              ((FVector4dCameraRigParameterOverride *)(pTVar10->AllocatorInstance).Data,
               (this->Vector4dOverrides).ArrayNum);
    iVar15 = (param_1->Vector4dOverrides).ArrayNum;
    piVar1 = &(this->Vector4dOverrides).ArrayMax;
    pFVar25 = (FVector4dCameraRigParameterOverride *)
              (param_1->Vector4dOverrides).AllocatorInstance.Data;
    (this->Vector4dOverrides).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,iVar15,*piVar1,&pTVar10->AllocatorInstance,iVar15,piVar1);
      ConstructItems<FVector4dCameraRigParameterOverride,FVector4dCameraRigParameterOverride,int>
                ((pTVar10->AllocatorInstance).Data,pFVar25,iVar15);
    }
  }
  pTVar11 = &this->Rotator3fOverrides;
  if (pTVar11 != &param_1->Rotator3fOverrides) {
    DestructItems<FRotator3fCameraRigParameterOverride,int>
              ((FRotator3fCameraRigParameterOverride *)(pTVar11->AllocatorInstance).Data,
               (this->Rotator3fOverrides).ArrayNum);
    iVar15 = (param_1->Rotator3fOverrides).ArrayNum;
    piVar1 = &(this->Rotator3fOverrides).ArrayMax;
    pFVar26 = (FRotator3fCameraRigParameterOverride *)
              (param_1->Rotator3fOverrides).AllocatorInstance.Data;
    (this->Rotator3fOverrides).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar15,*piVar1,&pTVar11->AllocatorInstance,iVar15,piVar1);
      ConstructItems<FRotator3fCameraRigParameterOverride,FRotator3fCameraRigParameterOverride,int>
                ((pTVar11->AllocatorInstance).Data,pFVar26,iVar15);
    }
  }
  pTVar12 = &this->Rotator3dOverrides;
  if (pTVar12 != &param_1->Rotator3dOverrides) {
    DestructItems<FRotator3dCameraRigParameterOverride,int>
              ((FRotator3dCameraRigParameterOverride *)(pTVar12->AllocatorInstance).Data,
               (this->Rotator3dOverrides).ArrayNum);
    iVar15 = (param_1->Rotator3dOverrides).ArrayNum;
    piVar1 = &(this->Rotator3dOverrides).ArrayMax;
    pFVar27 = (FRotator3dCameraRigParameterOverride *)
              (param_1->Rotator3dOverrides).AllocatorInstance.Data;
    (this->Rotator3dOverrides).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,iVar15,*piVar1,&pTVar12->AllocatorInstance,iVar15,piVar1);
      ConstructItems<FRotator3dCameraRigParameterOverride,FRotator3dCameraRigParameterOverride,int>
                ((pTVar12->AllocatorInstance).Data,pFVar27,iVar15);
    }
  }
  pTVar13 = &this->Transform3fOverrides;
  if (pTVar13 != &param_1->Transform3fOverrides) {
    DestructItems<FTransform3fCameraRigParameterOverride,int>
              ((FTransform3fCameraRigParameterOverride *)(pTVar13->AllocatorInstance).Data,
               (this->Transform3fOverrides).ArrayNum);
    iVar15 = (param_1->Transform3fOverrides).ArrayNum;
    piVar1 = &(this->Transform3fOverrides).ArrayMax;
    pFVar28 = (FTransform3fCameraRigParameterOverride *)
              (param_1->Transform3fOverrides).AllocatorInstance.Data;
    (this->Transform3fOverrides).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,iVar15,*piVar1,&pTVar13->AllocatorInstance,iVar15,piVar1);
      ConstructItems<FTransform3fCameraRigParameterOverride,FTransform3fCameraRigParameterOverride,int>
                ((pTVar13->AllocatorInstance).Data,pFVar28,iVar15);
    }
  }
  pTVar14 = &this->Transform3dOverrides;
  if (pTVar14 != &param_1->Transform3dOverrides) {
    DestructItems<FTransform3dCameraRigParameterOverride,int>
              ((FTransform3dCameraRigParameterOverride *)(pTVar14->AllocatorInstance).Data,
               (this->Transform3dOverrides).ArrayNum);
    iVar15 = (param_1->Transform3dOverrides).ArrayNum;
    piVar1 = &(this->Transform3dOverrides).ArrayMax;
    pFVar29 = (FTransform3dCameraRigParameterOverride *)
              (param_1->Transform3dOverrides).AllocatorInstance.Data;
    (this->Transform3dOverrides).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,0x10,iVar15,*piVar1,&pTVar14->AllocatorInstance,iVar15,piVar1);
      ConstructItems<FTransform3dCameraRigParameterOverride,FTransform3dCameraRigParameterOverride,int>
                ((pTVar14->AllocatorInstance).Data,pFVar29,iVar15);
    }
  }
  return this;
}

