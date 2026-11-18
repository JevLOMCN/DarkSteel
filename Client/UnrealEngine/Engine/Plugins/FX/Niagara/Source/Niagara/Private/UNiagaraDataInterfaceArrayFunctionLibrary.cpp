// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 102

// StaticClass @ 14907dc00

UClass * __cdecl UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArrayFunctionLibrary",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceArrayFunctionLibrary,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceArrayFunctionLibrary>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFunctionLibrary.InnerSingleton;
}

// UNiagaraDataInterfaceArrayFunctionLibrary @ 1490b3750

UNiagaraDataInterfaceArrayFunctionLibrary * __thiscall
UNiagaraDataInterfaceArrayFunctionLibrary::UNiagaraDataInterfaceArrayFunctionLibrary
          (UNiagaraDataInterfaceArrayFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataInterfaceArrayFunctionLibrary__6B_;
  return this;
}

// UNiagaraDataInterfaceArrayFunctionLibrary @ 1490b3780

UNiagaraDataInterfaceArrayFunctionLibrary * __thiscall
UNiagaraDataInterfaceArrayFunctionLibrary::UNiagaraDataInterfaceArrayFunctionLibrary
          (UNiagaraDataInterfaceArrayFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataInterfaceArrayFunctionLibrary__6B_;
  return this;
}

// ~UNiagaraDataInterfaceArrayFunctionLibrary @ 1490b8e30

void __thiscall
UNiagaraDataInterfaceArrayFunctionLibrary::~UNiagaraDataInterfaceArrayFunctionLibrary
          (UNiagaraDataInterfaceArrayFunctionLibrary *this)

{
  *(undefined ***)this = &___7UNiagaraDataInterfaceArrayFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetNiagaraArrayBool @ 149106170

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TArray<bool,TSizedDefaultAllocator<32>_> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBool
          (TArray<bool,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UNiagaraComponent *param_1,FName param_2)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = UNiagaraDataInterfaceArrayBool::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::GetArrayDataCopy<bool>
              ((FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool> *)(pUVar2->Proxy).Ptr,
               __return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNiagaraArrayBoolValue @ 1491061e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBoolValue
          (UNiagaraComponent *param_1,FName param_2,int param_3)

{
  bool bVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *pUVar3;
  
  pUVar2 = UNiagaraDataInterfaceArrayBool::StaticClass();
  pUVar3 = UNiagaraFunctionLibrary::GetDataInterface(pUVar2,param_1,param_2);
  if (pUVar3 != (UNiagaraDataInterface *)0x0) {
    bVar1 = FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::GetArrayValue<bool>
                      ((FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool> *)
                       (pUVar3->Proxy).Ptr,param_3);
    return bVar1;
  }
  return false;
}

// GetNiagaraArrayColor @ 149106240

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TArray<FLinearColor,TSizedDefaultAllocator<32>_> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColor
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UNiagaraComponent *param_1,FName param_2)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = UNiagaraDataInterfaceArrayColor::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::GetArrayDataCopy<FLinearColor>
              ((FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor> *)
               (pUVar2->Proxy).Ptr,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNiagaraArrayColorValue @ 1491062b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FLinearColor * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColorValue
          (FLinearColor *__return_storage_ptr__,UNiagaraComponent *param_1,FName param_2,int param_3
          )

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = UNiagaraDataInterfaceArrayColor::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 == (UNiagaraDataInterface *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  }
  else {
    FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::GetArrayValue<FLinearColor>
              ((FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor> *)
               (pUVar2->Proxy).Ptr,__return_storage_ptr__,param_3);
  }
  return __return_storage_ptr__;
}

// GetNiagaraArrayFloat @ 149106320

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloat
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UNiagaraComponent *param_1,FName param_2)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = UNiagaraDataInterfaceArrayFloat::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::GetArrayDataCopy<float>
              ((FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat> *)(pUVar2->Proxy).Ptr,
               __return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNiagaraArrayFloatValue @ 149106390

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

float __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloatValue
          (UNiagaraComponent *param_1,FName param_2,int param_3)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  float fVar3;
  
  pUVar1 = UNiagaraDataInterfaceArrayFloat::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    fVar3 = FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::GetArrayValue<float>
                      ((FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat> *)
                       (pUVar2->Proxy).Ptr,param_3);
    return fVar3;
  }
  return 0.0;
}

// GetNiagaraArrayInt32 @ 149106400

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UNiagaraComponent *param_1,FName param_2)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = UNiagaraDataInterfaceArrayInt32::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::GetArrayDataCopy<int>
              ((FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32> *)(pUVar2->Proxy).Ptr,
               __return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNiagaraArrayInt32Value @ 149106470

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

int __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32Value
          (UNiagaraComponent *param_1,FName param_2,int param_3)

{
  int iVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *pUVar3;
  
  pUVar2 = UNiagaraDataInterfaceArrayInt32::StaticClass();
  pUVar3 = UNiagaraFunctionLibrary::GetDataInterface(pUVar2,param_1,param_2);
  if (pUVar3 != (UNiagaraDataInterface *)0x0) {
    iVar1 = FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::GetArrayValue<int>
                      ((FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32> *)
                       (pUVar3->Proxy).Ptr,param_3);
    return iVar1;
  }
  return 0;
}

// GetNiagaraArrayMatrix @ 1491064d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayMatrix
          (TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UNiagaraComponent *param_1,FName param_2,bool param_3)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraSystemInstanceController *pFVar3;
  double dVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  TMatrix<double> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  TVector<double>_u_0 local_e8;
  FNiagaraLWCConverter local_c8;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  pUVar5 = UNiagaraDataInterfaceArrayMatrix::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,param_1,param_2);
  if (pUVar6 == (UNiagaraDataInterface *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::
    GetArrayDataCopy<UE::Math::TMatrix<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix> *)
               (pUVar6->Proxy).Ptr,__return_storage_ptr__);
  }
  if (param_3) {
    if (param_1 == (UNiagaraComponent *)0x0) {
      local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FNiagaraLWCConverter::FNiagaraLWCConverter(&local_c8,(TVector<double> *)&local_e8._s_0);
    }
    else {
      pTVar2 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
      pFVar3 = (param_1->SystemInstanceController).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 == (FNiagaraSystemInstanceController *)0x0) {
        local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FNiagaraLWCConverter::FNiagaraLWCConverter(&local_c8,(TVector<double> *)&local_e8._s_0);
      }
      else {
        FNiagaraSystemInstance::GetLWCConverter((pFVar3->SystemInstance).Object,&local_c8,false);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    iVar1 = __return_storage_ptr__->ArrayNum;
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x80;
    while( true ) {
      if (__return_storage_ptr__->ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Math::TMatrix<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (pFVar8 == pFVar9) break;
      pTVar7 = FNiagaraLWCConverter::ConvertSimulationToWorldMatrix
                         (&local_c8,&local_a8,(TMatrix<double> *)pFVar8);
      dVar4 = pTVar7->M[0][1];
      *(double *)&pFVar8->field_0x0 = pTVar7->M[0][0];
      *(double *)(pFVar8 + 8) = dVar4;
      dVar4 = pTVar7->M[0][3];
      *(double *)(pFVar8 + 0x10) = pTVar7->M[0][2];
      *(double *)(pFVar8 + 0x18) = dVar4;
      dVar4 = pTVar7->M[1][1];
      *(double *)(pFVar8 + 0x20) = pTVar7->M[1][0];
      *(double *)(pFVar8 + 0x28) = dVar4;
      dVar4 = pTVar7->M[1][3];
      *(double *)(pFVar8 + 0x30) = pTVar7->M[1][2];
      *(double *)(pFVar8 + 0x38) = dVar4;
      dVar4 = pTVar7->M[2][1];
      *(double *)(pFVar8 + 0x40) = pTVar7->M[2][0];
      *(double *)(pFVar8 + 0x48) = dVar4;
      dVar4 = pTVar7->M[2][3];
      *(double *)(pFVar8 + 0x50) = pTVar7->M[2][2];
      *(double *)(pFVar8 + 0x58) = dVar4;
      dVar4 = pTVar7->M[3][1];
      *(double *)(pFVar8 + 0x60) = pTVar7->M[3][0];
      *(double *)(pFVar8 + 0x68) = dVar4;
      dVar4 = pTVar7->M[3][3];
      *(double *)(pFVar8 + 0x70) = pTVar7->M[3][2];
      *(double *)(pFVar8 + 0x78) = dVar4;
      pFVar8 = pFVar8 + 0x80;
    }
  }
  return __return_storage_ptr__;
}

// GetNiagaraArrayMatrixValue @ 149106670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TMatrix<double> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayMatrixValue
          (TMatrix<double> *__return_storage_ptr__,UNiagaraComponent *param_1,FName param_2,
          int param_3,bool param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FNiagaraSystemInstanceController *pFVar2;
  double dVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  TMatrix<double> *pTVar6;
  undefined1 auStack_108 [32];
  TVector<double>_u_0 local_e8;
  FNiagaraLWCConverter local_c8;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar4 = UNiagaraDataInterfaceArrayMatrix::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,param_1,param_2);
  if (pUVar5 == (UNiagaraDataInterface *)0x0) {
    __return_storage_ptr__->M[0][0] = 0.0;
    __return_storage_ptr__->M[0][1] = 0.0;
    __return_storage_ptr__->M[0][2] = 0.0;
    __return_storage_ptr__->M[0][3] = 0.0;
    __return_storage_ptr__->M[1][0] = 0.0;
    __return_storage_ptr__->M[1][1] = 0.0;
    __return_storage_ptr__->M[1][2] = 0.0;
    __return_storage_ptr__->M[1][3] = 0.0;
    __return_storage_ptr__->M[2][0] = 0.0;
    __return_storage_ptr__->M[2][1] = 0.0;
    __return_storage_ptr__->M[2][2] = 0.0;
    __return_storage_ptr__->M[2][3] = 0.0;
    __return_storage_ptr__->M[3][0] = 0.0;
    __return_storage_ptr__->M[3][1] = 0.0;
    __return_storage_ptr__->M[3][2] = 0.0;
    __return_storage_ptr__->M[3][3] = 0.0;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::
    GetArrayValue<UE::Math::TMatrix<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix> *)
               (pUVar5->Proxy).Ptr,__return_storage_ptr__,param_3);
  }
  if (param_4) {
    if (param_1 == (UNiagaraComponent *)0x0) {
      local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FNiagaraLWCConverter::FNiagaraLWCConverter(&local_c8,(TVector<double> *)&local_e8._s_0);
    }
    else {
      pTVar1 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
      pFVar2 = (param_1->SystemInstanceController).Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar2 == (FNiagaraSystemInstanceController *)0x0) {
        local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FNiagaraLWCConverter::FNiagaraLWCConverter(&local_c8,(TVector<double> *)&local_e8._s_0);
      }
      else {
        FNiagaraSystemInstance::GetLWCConverter((pFVar2->SystemInstance).Object,&local_c8,false);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
    pTVar6 = FNiagaraLWCConverter::ConvertSimulationToWorldMatrix
                       (&local_c8,&local_a8,__return_storage_ptr__);
    dVar3 = pTVar6->M[0][1];
    __return_storage_ptr__->M[0][0] = pTVar6->M[0][0];
    __return_storage_ptr__->M[0][1] = dVar3;
    dVar3 = pTVar6->M[0][3];
    __return_storage_ptr__->M[0][2] = pTVar6->M[0][2];
    __return_storage_ptr__->M[0][3] = dVar3;
    dVar3 = pTVar6->M[1][1];
    __return_storage_ptr__->M[1][0] = pTVar6->M[1][0];
    __return_storage_ptr__->M[1][1] = dVar3;
    dVar3 = pTVar6->M[1][3];
    __return_storage_ptr__->M[1][2] = pTVar6->M[1][2];
    __return_storage_ptr__->M[1][3] = dVar3;
    dVar3 = pTVar6->M[2][1];
    __return_storage_ptr__->M[2][0] = pTVar6->M[2][0];
    __return_storage_ptr__->M[2][1] = dVar3;
    dVar3 = pTVar6->M[2][3];
    __return_storage_ptr__->M[2][2] = pTVar6->M[2][2];
    __return_storage_ptr__->M[2][3] = dVar3;
    dVar3 = pTVar6->M[3][1];
    __return_storage_ptr__->M[3][0] = pTVar6->M[3][0];
    __return_storage_ptr__->M[3][1] = dVar3;
    dVar3 = pTVar6->M[3][3];
    __return_storage_ptr__->M[3][2] = pTVar6->M[3][2];
    __return_storage_ptr__->M[3][3] = dVar3;
  }
  return __return_storage_ptr__;
}

// GetNiagaraArrayPosition @ 149106810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayPosition
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UNiagaraComponent *param_1,FName param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNiagaraSystemInstanceController *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  UClass *pUVar10;
  UNiagaraDataInterface *pUVar11;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  TVector<double> *pTVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_> local_d8;
  FNiagaraPosition local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  FNiagaraLWCConverter local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TVector<double> local_48;
  
  pUVar10 = UNiagaraDataInterfaceArrayPosition::StaticClass();
  pUVar11 = UNiagaraFunctionLibrary::GetDataInterface(pUVar10,param_1,param_2);
  uVar16 = 0;
  if (pUVar11 == (UNiagaraDataInterface *)0x0) {
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
  }
  else {
    FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::
    GetArrayDataCopy<FNiagaraPosition>
              ((FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition> *)
               (pUVar11->Proxy).Ptr,&local_d8);
  }
  if (param_1 == (UNiagaraComponent *)0x0) {
    local_88._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_88._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_88._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FNiagaraLWCConverter::FNiagaraLWCConverter(&local_a8,(TVector<double> *)&local_88._s_0);
  }
  else {
    pTVar4 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
    pFVar5 = (param_1->SystemInstanceController).Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar5 == (FNiagaraSystemInstanceController *)0x0) {
      local_68._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_68._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FNiagaraLWCConverter::FNiagaraLWCConverter(&local_a8,(TVector<double> *)&local_68._s_0);
    }
    else {
      FNiagaraSystemInstance::GetLWCConverter((pFVar5->SystemInstance).Object,&local_a8,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  uVar14 = local_d8._8_8_ & 0xffffffff;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (local_d8.ArrayNum < 1) {
    if (local_d8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar14);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_d8.ArrayNum,&__return_storage_ptr__->AllocatorInstance,piVar1,
               &__return_storage_ptr__->ArrayMax);
    uVar14 = local_d8._8_8_ & 0xffffffff;
  }
  uVar17 = uVar16;
  uVar18 = uVar16;
  if (0 < (int)uVar14) {
    do {
      uVar15 = (uint)uVar16;
      uVar9 = 0;
      if ((int)uVar15 < (int)uVar14) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar12;
      }
      local_c8._0_8_ = *(undefined8 *)(local_d8.AllocatorInstance.Data + uVar17);
      local_c8._8_4_ = *(undefined4 *)(local_d8.AllocatorInstance.Data + uVar17 + 8);
      pTVar13 = FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                          (&local_a8,&local_48,&local_c8);
      local_b8 = *(undefined4 *)&pTVar13->field0_0x0;
      uStack_b4 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 4);
      uStack_b0 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 8);
      uStack_ac = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 0xc);
      dVar3 = (pTVar13->field0_0x0)._s_0.Z;
      uVar9 = 0;
      if ((int)uVar15 < *piVar1) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar12;
      }
      pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
      uVar16 = (ulonglong)(uVar15 + 1);
      pFVar2 = pFVar6 + uVar18;
      *(undefined4 *)pFVar2 = local_b8;
      *(undefined4 *)(pFVar2 + 4) = uStack_b4;
      *(undefined4 *)(pFVar2 + 8) = uStack_b0;
      *(undefined4 *)(pFVar2 + 0xc) = uStack_ac;
      *(double *)(pFVar6 + uVar18 + 0x10) = dVar3;
      uVar14 = local_d8._8_8_ & 0xffffffff;
      uVar17 = uVar17 + 0xc;
      uVar18 = uVar18 + 0x18;
    } while ((int)(uVar15 + 1) < local_d8.ArrayNum);
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNiagaraArrayPositionValue @ 149106ab0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TVector<double> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayPositionValue
          (TVector<double> *__return_storage_ptr__,UNiagaraComponent *param_1,FName param_2,
          int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FNiagaraSystemInstanceController *pFVar2;
  UClass *pUVar3;
  UNiagaraDataInterface *pUVar4;
  double local_58 [2];
  TVector<double>_u_0 local_48;
  FNiagaraLWCConverter local_28;
  
  pUVar3 = UNiagaraDataInterfaceArrayPosition::StaticClass();
  pUVar4 = UNiagaraFunctionLibrary::GetDataInterface(pUVar3,param_1,param_2);
  if (pUVar4 != (UNiagaraDataInterface *)0x0) {
    FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::
    GetArrayValue<FNiagaraPosition>
              ((FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition> *)
               (pUVar4->Proxy).Ptr,(FNiagaraPosition *)local_58,param_3);
  }
  if (param_1 == (UNiagaraComponent *)0x0) {
    local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FNiagaraLWCConverter::FNiagaraLWCConverter(&local_28,(TVector<double> *)&local_48._s_0);
  }
  else {
    pTVar1 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
    pFVar2 = (param_1->SystemInstanceController).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 == (FNiagaraSystemInstanceController *)0x0) {
      local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FNiagaraLWCConverter::FNiagaraLWCConverter(&local_28,(TVector<double> *)&local_48._s_0);
    }
    else {
      FNiagaraSystemInstance::GetLWCConverter((pFVar2->SystemInstance).Object,&local_28,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  local_48._s_0.X = local_58[0];
  local_48._8_4_ = local_58[1]._0_4_;
  FNiagaraLWCConverter::ConvertSimulationPositionToWorld
            (&local_28,__return_storage_ptr__,(FNiagaraPosition *)&local_48._s_0);
  return __return_storage_ptr__;
}

// GetNiagaraArrayQuat @ 149106bd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuat
          (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UNiagaraComponent *param_1,FName param_2)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = UNiagaraDataInterfaceArrayQuat::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::
    GetArrayDataCopy<UE::Math::TQuat<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat> *)
               (pUVar2->Proxy).Ptr,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNiagaraArrayQuatValue @ 149106c40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TQuat<double> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuatValue
          (TQuat<double> *__return_storage_ptr__,UNiagaraComponent *param_1,FName param_2,
          int param_3)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = UNiagaraDataInterfaceArrayQuat::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 == (UNiagaraDataInterface *)0x0) {
    __return_storage_ptr__->X = 0.0;
    __return_storage_ptr__->Y = 0.0;
    __return_storage_ptr__->Z = 0.0;
    __return_storage_ptr__->W = 0.0;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::
    GetArrayValue<UE::Math::TQuat<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat> *)
               (pUVar2->Proxy).Ptr,__return_storage_ptr__,param_3);
  }
  return __return_storage_ptr__;
}

// GetNiagaraArrayUInt8 @ 149106cc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayUInt8
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UNiagaraComponent *param_1,FName param_2)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = UNiagaraDataInterfaceArrayUInt8::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::GetArrayDataCopy<int>
              ((FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8> *)
               (pUVar2->Proxy).Ptr,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNiagaraArrayUInt8Value @ 149106d30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

int __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayUInt8Value
          (UNiagaraComponent *param_1,FName param_2,int param_3)

{
  int iVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *pUVar3;
  
  pUVar2 = UNiagaraDataInterfaceArrayUInt8::StaticClass();
  pUVar3 = UNiagaraFunctionLibrary::GetDataInterface(pUVar2,param_1,param_2);
  if (pUVar3 != (UNiagaraDataInterface *)0x0) {
    iVar1 = FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::GetArrayValue<int>
                      ((FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8> *)
                       (pUVar3->Proxy).Ptr,param_3);
    return iVar1;
  }
  return 0;
}

// GetNiagaraArrayVector2D @ 149106d90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2D
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UNiagaraComponent *param_1,FName param_2)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = UNiagaraDataInterfaceArrayFloat2::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::
    GetArrayDataCopy<UE::Math::TVector2<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2> *)
               (pUVar2->Proxy).Ptr,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNiagaraArrayVector2DValue @ 149106e00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TVector2<double> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2DValue
          (TVector2<double> *__return_storage_ptr__,UNiagaraComponent *param_1,FName param_2,
          int param_3)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = UNiagaraDataInterfaceArrayFloat2::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 == (UNiagaraDataInterface *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::
    GetArrayValue<UE::Math::TVector2<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2> *)
               (pUVar2->Proxy).Ptr,__return_storage_ptr__,param_3);
  }
  return __return_storage_ptr__;
}

// GetNiagaraArrayVector4 @ 149106e70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UNiagaraComponent *param_1,FName param_2)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = UNiagaraDataInterfaceArrayFloat4::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::
    GetArrayDataCopy<UE::Math::TVector4<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4> *)
               (pUVar2->Proxy).Ptr,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNiagaraArrayVector4Value @ 149106ee0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TVector4<double> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4Value
          (TVector4<double> *__return_storage_ptr__,UNiagaraComponent *param_1,FName param_2,
          int param_3)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = UNiagaraDataInterfaceArrayFloat4::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 == (UNiagaraDataInterface *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::
    GetArrayValue<UE::Math::TVector4<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4> *)
               (pUVar2->Proxy).Ptr,__return_storage_ptr__,param_3);
  }
  return __return_storage_ptr__;
}

// GetNiagaraArrayVector @ 149106f60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UNiagaraComponent *param_1,FName param_2)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = UNiagaraDataInterfaceArrayFloat3::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::
    GetArrayDataCopy<UE::Math::TVector<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3> *)
               (pUVar2->Proxy).Ptr,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNiagaraArrayVectorValue @ 149106fd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TVector<double> * __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVectorValue
          (TVector<double> *__return_storage_ptr__,UNiagaraComponent *param_1,FName param_2,
          int param_3)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = UNiagaraDataInterfaceArrayFloat3::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 == (UNiagaraDataInterface *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::
    GetArrayValue<UE::Math::TVector<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3> *)
               (pUVar2->Proxy).Ptr,__return_storage_ptr__,param_3);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149109120

UClass * __cdecl UNiagaraDataInterfaceArrayFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArrayFunctionLibrary",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceArrayFunctionLibrary,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceArrayFunctionLibrary>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFunctionLibrary.InnerSingleton;
}

// SetNiagaraArrayBool @ 14912e370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBool
          (UNiagaraComponent *param_1,FName param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool> *this;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  
  iVar1 = param_3->ArrayNum;
  _Src = (param_3->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar4 = UNiagaraDataInterfaceArrayBool::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,param_1,param_2);
  if (pUVar5 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool> *)(pUVar5->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->BoolData,iVar1,Default);
      memcpy((this->Owner->BoolData).AllocatorInstance.Data,_Src,(longlong)iVar1);
    }
    else {
      FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::BeginSetArrayFromBP(this,false);
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&this->Owner->BoolData,iVar1,Default);
      memcpy((this->Owner->BoolData).AllocatorInstance.Data,_Src,(longlong)iVar1);
      FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::EndSetArrayFromBP(this);
    }
  }
  return;
}

// SetNiagaraArrayBoolValue @ 14912e460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBoolValue
          (UNiagaraComponent *param_1,FName param_2,int param_3,bool *param_4,bool param_5)

{
  int *piVar1;
  FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool> *this;
  UNiagaraDataInterfaceArrayBool *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UNiagaraDataInterface *pUVar7;
  int iVar8;
  
  pUVar6 = UNiagaraDataInterfaceArrayBool::StaticClass();
  pUVar7 = UNiagaraFunctionLibrary::GetDataInterface(pUVar6,param_1,param_2);
  if (pUVar7 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool> *)(pUVar7->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::BeginSetArrayFromBP(this,true);
  pUVar2 = this->Owner;
  piVar1 = &(pUVar2->BoolData).ArrayNum;
  if ((param_3 < 0) || (*piVar1 <= param_3)) {
    if (!param_5) goto LAB_14912e542;
    iVar8 = (param_3 - *piVar1) + 1;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar8,&(pUVar2->BoolData).AllocatorInstance,piVar1,
                       &(pUVar2->BoolData).ArrayMax);
    memset((pUVar2->BoolData).AllocatorInstance.Data + iVar5,0,(longlong)iVar8);
  }
  (pUVar2->BoolData).AllocatorInstance.Data[param_3] = (FScriptContainerElement)*param_4;
LAB_14912e542:
  FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::EndSetArrayFromBP(this);
  return;
}

// SetNiagaraArrayColor @ 14912e570

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColor
          (UNiagaraComponent *param_1,FName param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor> *this;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  
  iVar1 = param_3->ArrayNum;
  _Src = (param_3->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar4 = UNiagaraDataInterfaceArrayColor::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,param_1,param_2);
  if (pUVar5 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor> *)(pUVar5->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->ColorData,iVar1,Default);
      memcpy((this->Owner->ColorData).AllocatorInstance.Data,_Src,(longlong)iVar1 << 4);
    }
    else {
      FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::BeginSetArrayFromBP
                (this,false);
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->ColorData,iVar1,Default);
      memcpy((this->Owner->ColorData).AllocatorInstance.Data,_Src,(longlong)iVar1 << 4);
      FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::EndSetArrayFromBP(this);
    }
  }
  return;
}

// SetNiagaraArrayColorValue @ 14912e660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColorValue
          (UNiagaraComponent *param_1,FName param_2,int param_3,FLinearColor *param_4,bool param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor> *this;
  UNiagaraDataInterfaceArrayColor *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  UClass *pUVar7;
  UNiagaraDataInterface *pUVar8;
  
  pUVar7 = UNiagaraDataInterfaceArrayColor::StaticClass();
  pUVar8 = UNiagaraFunctionLibrary::GetDataInterface(pUVar7,param_1,param_2);
  if (pUVar8 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor> *)(pUVar8->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::BeginSetArrayFromBP(this,true);
  pUVar3 = this->Owner;
  piVar1 = &(pUVar3->ColorData).ArrayNum;
  if ((param_3 < 0) || (*piVar1 <= param_3)) {
    if (!param_5) goto LAB_14912e735;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,(param_3 - *piVar1) + 1,&(pUVar3->ColorData).AllocatorInstance,piVar1,
               &(pUVar3->ColorData).ArrayMax);
  }
  uVar5 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar2 = (pUVar3->ColorData).AllocatorInstance.Data + (longlong)param_3 * 0x10;
  *(undefined8 *)pFVar2 = *(undefined8 *)&param_4->field0_0x0;
  *(undefined8 *)(pFVar2 + 8) = uVar5;
LAB_14912e735:
  FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::EndSetArrayFromBP(this);
  return;
}

// SetNiagaraArrayFloat @ 14912e760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloat
          (UNiagaraComponent *param_1,FName param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat> *this;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  
  iVar1 = param_3->ArrayNum;
  _Src = (param_3->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar4 = UNiagaraDataInterfaceArrayFloat::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,param_1,param_2);
  if (pUVar5 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat> *)(pUVar5->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->FloatData,iVar1,Default);
      memcpy((this->Owner->FloatData).AllocatorInstance.Data,_Src,(longlong)iVar1 << 2);
    }
    else {
      FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::BeginSetArrayFromBP(this,false);
      TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->Owner->FloatData,iVar1,Default);
      memcpy((this->Owner->FloatData).AllocatorInstance.Data,_Src,(longlong)iVar1 << 2);
      FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::EndSetArrayFromBP(this);
    }
  }
  return;
}

// SetNiagaraArrayFloat @ 14912e850

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloat
          (UNiagaraComponent *param_1,FName param_2,TArrayView<double_const_,int> *param_3)

{
  FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat> *this;
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  int iVar3;
  
  pUVar1 = UNiagaraDataInterfaceArrayFloat::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat> *)(pUVar2->Proxy).Ptr;
    iVar3 = param_3->ArrayNum;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->FloatData,iVar3,Default);
      FNDIArrayImplHelper<float>::CopyCpuToCpuMemory
                ((float *)(this->Owner->FloatData).AllocatorInstance.Data,param_3->DataPtr,iVar3);
      return;
    }
    FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::BeginSetArrayFromBP(this,false);
    iVar3 = (int)*(undefined8 *)&param_3->ArrayNum;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->Owner->FloatData,iVar3,Default);
    FNDIArrayImplHelper<float>::CopyCpuToCpuMemory
              ((float *)(this->Owner->FloatData).AllocatorInstance.Data,param_3->DataPtr,iVar3);
    FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::EndSetArrayFromBP(this);
  }
  return;
}

// SetNiagaraArrayFloatValue @ 14912e930

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloatValue
          (UNiagaraComponent *param_1,FName param_2,int param_3,float param_4,bool param_5)

{
  FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat> *this;
  UNiagaraDataInterfaceArrayFloat *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  
  pUVar4 = UNiagaraDataInterfaceArrayFloat::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,param_1,param_2);
  if (pUVar5 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat> *)(pUVar5->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::BeginSetArrayFromBP(this,true);
  pUVar1 = this->Owner;
  if ((param_3 < 0) || ((pUVar1->FloatData).ArrayNum <= param_3)) {
    if (!param_5) goto LAB_14912e9e3;
    TArray<float,TSizedDefaultAllocator<32>_>::AddDefaulted
              (&pUVar1->FloatData,(param_3 - (pUVar1->FloatData).ArrayNum) + 1);
  }
  *(float *)((pUVar1->FloatData).AllocatorInstance.Data + (longlong)param_3 * 4) = param_4;
LAB_14912e9e3:
  FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::EndSetArrayFromBP(this);
  return;
}

// SetNiagaraArrayInt32 @ 14912ea10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32
          (UNiagaraComponent *param_1,FName param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3
          )

{
  int iVar1;
  FScriptContainerElement *_Src;
  FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32> *this;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  
  iVar1 = param_3->ArrayNum;
  _Src = (param_3->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar4 = UNiagaraDataInterfaceArrayInt32::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,param_1,param_2);
  if (pUVar5 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32> *)(pUVar5->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->IntData,iVar1,Default);
      memcpy((this->Owner->IntData).AllocatorInstance.Data,_Src,(longlong)iVar1 << 2);
    }
    else {
      FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::BeginSetArrayFromBP(this,false);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->Owner->IntData,iVar1,Default);
      memcpy((this->Owner->IntData).AllocatorInstance.Data,_Src,(longlong)iVar1 << 2);
      FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::EndSetArrayFromBP(this);
    }
  }
  return;
}

// SetNiagaraArrayInt32 @ 14912eb00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32
          (UNiagaraComponent *param_1,FName param_2,TArrayView<__int64_const_,int> *param_3)

{
  FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32> *this;
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  int iVar3;
  
  pUVar1 = UNiagaraDataInterfaceArrayInt32::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32> *)(pUVar2->Proxy).Ptr;
    iVar3 = param_3->ArrayNum;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->IntData,iVar3,Default);
      FNDIArrayImplHelper<int>::CopyCpuToCpuMemory
                ((int *)(this->Owner->IntData).AllocatorInstance.Data,param_3->DataPtr,iVar3);
      return;
    }
    FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::BeginSetArrayFromBP(this,false);
    iVar3 = (int)*(undefined8 *)&param_3->ArrayNum;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->Owner->IntData,iVar3,Default);
    FNDIArrayImplHelper<int>::CopyCpuToCpuMemory
              ((int *)(this->Owner->IntData).AllocatorInstance.Data,param_3->DataPtr,iVar3);
    FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::EndSetArrayFromBP(this);
  }
  return;
}

// SetNiagaraArrayInt32Value @ 14912ebe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32Value
          (UNiagaraComponent *param_1,FName param_2,int param_3,int param_4,bool param_5)

{
  int *piVar1;
  FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32> *this;
  UNiagaraDataInterfaceArrayInt32 *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UNiagaraDataInterface *pUVar7;
  int iVar8;
  
  pUVar6 = UNiagaraDataInterfaceArrayInt32::StaticClass();
  pUVar7 = UNiagaraFunctionLibrary::GetDataInterface(pUVar6,param_1,param_2);
  if (pUVar7 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32> *)(pUVar7->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::BeginSetArrayFromBP(this,true);
  pUVar2 = this->Owner;
  piVar1 = &(pUVar2->IntData).ArrayNum;
  if ((param_3 < 0) || (*piVar1 <= param_3)) {
    if (!param_5) goto LAB_14912ecc5;
    iVar8 = (param_3 - *piVar1) + 1;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar8,&(pUVar2->IntData).AllocatorInstance,piVar1,
                       &(pUVar2->IntData).ArrayMax);
    memset((pUVar2->IntData).AllocatorInstance.Data + (longlong)iVar5 * 4,0,(longlong)iVar8 << 2);
  }
  *(int *)((pUVar2->IntData).AllocatorInstance.Data + (longlong)param_3 * 4) = param_4;
LAB_14912ecc5:
  FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::EndSetArrayFromBP(this);
  return;
}

// SetNiagaraArrayMatrix @ 14912ecf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayMatrix
          (UNiagaraComponent *param_1,FName param_2,
          TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FNiagaraSystemInstanceController *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  uint uVar21;
  TMatrix<double> *pTVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  undefined1 auStackY_228 [32];
  ForAnyElementType local_1f8;
  int local_1f0 [2];
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FNiagaraLWCConverter local_1c8;
  TArrayView<UE::Math::TMatrix<double>_const_,int> local_1a8;
  TArrayView<UE::Math::TMatrix<double>_const_,int> local_198;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if (param_4) {
    if (param_1 == (UNiagaraComponent *)0x0) {
      local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FNiagaraLWCConverter::FNiagaraLWCConverter(&local_1c8,(TVector<double> *)&local_188._s_0);
    }
    else {
      pTVar1 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
      pFVar2 = (param_1->SystemInstanceController).Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar2 == (FNiagaraSystemInstanceController *)0x0) {
        local_168._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_168._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_168._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FNiagaraLWCConverter::FNiagaraLWCConverter(&local_1c8,(TVector<double> *)&local_168._s_0);
      }
      else {
        FNiagaraSystemInstance::GetLWCConverter((pFVar2->SystemInstance).Object,&local_1c8,false);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
    uVar24 = param_3->ArrayNum;
    local_1f8.Data = (FScriptContainerElement *)0x0;
    local_1f0[0] = 0;
    local_1f0[1] = 0;
    if ((int)uVar24 < 1) {
      if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,uVar24,&local_1f8,local_1f0,local_1f0 + 1);
    }
    iVar23 = param_3->ArrayNum;
    uVar24 = 0;
    if (0 < iVar23) {
      lVar25 = 0;
      do {
        uVar21 = 0;
        if ((int)uVar24 < iVar23) {
          uVar21 = ~uVar24 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar22 = FNiagaraLWCConverter::ConvertWorldToSimulationMatrix
                            (&local_1c8,&local_148,
                             (TMatrix<double> *)
                             ((param_3->AllocatorInstance).Data + (longlong)(int)uVar24 * 0x80));
        dVar4 = pTVar22->M[0][0];
        dVar5 = pTVar22->M[0][1];
        dVar6 = pTVar22->M[0][2];
        dVar7 = pTVar22->M[0][3];
        dVar8 = pTVar22->M[1][0];
        dVar9 = pTVar22->M[1][1];
        dVar10 = pTVar22->M[1][2];
        dVar11 = pTVar22->M[1][3];
        dVar12 = pTVar22->M[2][0];
        dVar13 = pTVar22->M[2][1];
        dVar14 = pTVar22->M[2][2];
        dVar15 = pTVar22->M[2][3];
        dVar16 = pTVar22->M[3][0];
        dVar17 = pTVar22->M[3][1];
        dVar18 = pTVar22->M[3][2];
        dVar19 = pTVar22->M[3][3];
        uVar21 = 0;
        if ((int)uVar24 < local_1f0[0]) {
          uVar21 = ~uVar24 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = uVar24 + 1;
        *(double *)(local_1f8.Data + lVar25) = dVar4;
        *(double *)(local_1f8.Data + lVar25 + 8) = dVar5;
        *(double *)(local_1f8.Data + lVar25 + 0x10) = dVar6;
        *(double *)(local_1f8.Data + lVar25 + 0x10 + 8) = dVar7;
        *(double *)(local_1f8.Data + lVar25 + 0x20) = dVar8;
        *(double *)(local_1f8.Data + lVar25 + 0x20 + 8) = dVar9;
        *(double *)(local_1f8.Data + lVar25 + 0x30) = dVar10;
        *(double *)(local_1f8.Data + lVar25 + 0x30 + 8) = dVar11;
        *(double *)(local_1f8.Data + lVar25 + 0x40) = dVar12;
        *(double *)(local_1f8.Data + lVar25 + 0x40 + 8) = dVar13;
        *(double *)(local_1f8.Data + lVar25 + 0x50) = dVar14;
        *(double *)(local_1f8.Data + lVar25 + 0x50 + 8) = dVar15;
        *(double *)(local_1f8.Data + lVar25 + 0x60) = dVar16;
        *(double *)(local_1f8.Data + lVar25 + 0x60 + 8) = dVar17;
        *(double *)(local_1f8.Data + lVar25 + 0x70) = dVar18;
        *(double *)(local_1f8.Data + lVar25 + 0x70 + 8) = dVar19;
        lVar25 = lVar25 + 0x80;
        iVar23 = param_3->ArrayNum;
      } while ((int)uVar24 < iVar23);
    }
    iVar23 = local_1f0[0];
    local_1e8 = local_1f8.Data;
    if ((local_1f0[0] < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iStack_1e0 = iVar23;
    local_1a8._12_4_ = uStack_1dc;
    local_1a8.ArrayNum = iVar23;
    local_1a8.DataPtr = (TMatrix<double> *)local_1e8;
    SetNiagaraArray<UE::Math::TMatrix<double>,UNiagaraDataInterfaceArrayMatrix>
              (param_1,param_2,&local_1a8);
    if (local_1f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data);
    }
  }
  else {
    local_1d8 = (param_3->AllocatorInstance).Data;
    iVar23 = param_3->ArrayNum;
    if ((iVar23 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_198._12_4_ = uStack_1cc;
    local_198.ArrayNum = iVar23;
    local_198.DataPtr = (TMatrix<double> *)local_1d8;
    iStack_1d0 = iVar23;
    SetNiagaraArray<UE::Math::TMatrix<double>,UNiagaraDataInterfaceArrayMatrix>
              (param_1,param_2,&local_198);
  }
  return;
}

// SetNiagaraArrayMatrix @ 14912f0d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayMatrix
          (UNiagaraComponent *param_1,FName param_2,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *param_3)

{
  FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix> *this;
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  int iVar3;
  
  pUVar1 = UNiagaraDataInterfaceArrayMatrix::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix> *)
           (pUVar2->Proxy).Ptr;
    iVar3 = param_3->ArrayNum;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalMatrixData,iVar3,Default);
      memcpy((this->Owner->InternalMatrixData).AllocatorInstance.Data,param_3->DataPtr,
             (longlong)iVar3 << 6);
      return;
    }
    FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::
    BeginSetArrayFromBP(this,false);
    iVar3 = (int)*(undefined8 *)&param_3->ArrayNum;
    TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Owner->InternalMatrixData,iVar3,Default);
    memcpy((this->Owner->InternalMatrixData).AllocatorInstance.Data,param_3->DataPtr,
           (longlong)iVar3 << 6);
    FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::EndSetArrayFromBP
              (this);
  }
  return;
}

// SetNiagaraArrayMatrixValue @ 14912f1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayMatrixValue
          (UNiagaraComponent *param_1,FName param_2,int param_3,TMatrix<double> *param_4,
          bool param_5,bool param_6)

{
  FNiagaraSystemInstanceController *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined1 auStack_128 [32];
  TVector<double>_u_0 local_f8;
  FNiagaraLWCConverter local_d8;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (param_6) {
    if (param_1 == (UNiagaraComponent *)0x0) {
      local_f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FNiagaraLWCConverter::FNiagaraLWCConverter(&local_d8,(TVector<double> *)&local_f8._s_0);
    }
    else {
      pFVar1 = (param_1->SystemInstanceController).Object;
      pTVar2 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 == (FNiagaraSystemInstanceController *)0x0) {
        local_f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FNiagaraLWCConverter::FNiagaraLWCConverter(&local_d8,(TVector<double> *)&local_f8._s_0);
      }
      else {
        FNiagaraSystemInstance::GetLWCConverter((pFVar1->SystemInstance).Object,&local_d8,false);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    param_4 = FNiagaraLWCConverter::ConvertWorldToSimulationMatrix(&local_d8,&local_b8,param_4);
  }
  SetNiagaraArrayValue<UE::Math::TMatrix<double>,UNiagaraDataInterfaceArrayMatrix>
            (param_1,param_2,param_3,param_4,param_5);
  return;
}

// SetNiagaraArrayPosition @ 14912f2e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayPosition
          (UNiagaraComponent *param_1,FName param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNiagaraSystemInstanceController *pFVar5;
  FScriptContainerElement *pFVar6;
  FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition> *this;
  code *pcVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  FNiagaraPosition *pFVar11;
  UClass *pUVar12;
  UNiagaraDataInterface *pUVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_> local_d8;
  FNiagaraLWCConverter local_c8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  FNiagaraPosition local_48;
  ulonglong uVar16;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    local_a8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_a8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FNiagaraLWCConverter::FNiagaraLWCConverter(&local_c8,(TVector<double> *)&local_a8._s_0);
  }
  else {
    pTVar4 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
    pFVar5 = (param_1->SystemInstanceController).Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar5 == (FNiagaraSystemInstanceController *)0x0) {
      local_88._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_88._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_88._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FNiagaraLWCConverter::FNiagaraLWCConverter(&local_c8,(TVector<double> *)&local_88._s_0);
    }
    else {
      FNiagaraSystemInstance::GetLWCConverter((pFVar5->SystemInstance).Object,&local_c8,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  uVar17 = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_d8,param_3->ArrayNum,Default);
  iVar14 = param_3->ArrayNum;
  uVar16 = uVar17;
  uVar18 = uVar17;
  uVar20 = uVar17;
  if (0 < iVar14) {
    do {
      uVar15 = (uint)uVar16;
      uVar10 = 0;
      if ((int)uVar15 < iVar14) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_3->AllocatorInstance).Data;
      pFVar1 = pFVar6 + uVar20;
      local_68._s_0.X = (double)*(undefined8 *)pFVar1;
      local_68._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      local_68._s_0.Z = (double)*(undefined8 *)(pFVar6 + uVar20 + 0x10);
      pFVar11 = FNiagaraLWCConverter::ConvertWorldToSimulationPosition
                          (&local_c8,&local_48,(TVector<double> *)&local_68._s_0);
      uVar2 = *(undefined8 *)pFVar11;
      uVar3 = *(undefined4 *)&pFVar11->field_0x8;
      uVar10 = 0;
      if ((int)uVar15 < local_d8.ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)(local_d8.AllocatorInstance.Data + uVar18) = uVar2;
      *(undefined4 *)(local_d8.AllocatorInstance.Data + uVar18 + 8) = uVar3;
      iVar14 = param_3->ArrayNum;
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar18 = uVar18 + 0xc;
      uVar20 = uVar20 + 0x18;
    } while ((int)(uVar15 + 1) < iVar14);
  }
  FVar8.Data = local_d8.AllocatorInstance.Data;
  iVar14 = local_d8.ArrayNum;
  lVar19 = (longlong)local_d8.ArrayNum;
  if ((local_d8.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar12 = UNiagaraDataInterfaceArrayPosition::StaticClass();
  pUVar13 = UNiagaraFunctionLibrary::GetDataInterface(pUVar12,param_1,param_2);
  if (pUVar13 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition> *)
           (pUVar13->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->PositionData,iVar14,Default);
      pFVar1 = (this->Owner->PositionData).AllocatorInstance.Data;
      if (0 < iVar14) {
        do {
          *(undefined8 *)(pFVar1 + uVar17) = *(undefined8 *)(FVar8.Data + uVar17);
          *(undefined4 *)(pFVar1 + uVar17 + 8) = *(undefined4 *)(FVar8.Data + uVar17 + 8);
          uVar17 = uVar17 + 0xc;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
    }
    else {
      FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::BeginSetArrayFromBP
                (this,false);
      TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->PositionData,iVar14,Default);
      pFVar1 = (this->Owner->PositionData).AllocatorInstance.Data;
      if (0 < iVar14) {
        do {
          *(undefined8 *)(pFVar1 + uVar17) = *(undefined8 *)(FVar8.Data + uVar17);
          *(undefined4 *)(pFVar1 + uVar17 + 8) = *(undefined4 *)(FVar8.Data + uVar17 + 8);
          uVar17 = uVar17 + 0xc;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::EndSetArrayFromBP
                (this);
    }
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return;
}

// SetNiagaraArrayPositionValue @ 14912f660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayPositionValue
          (UNiagaraComponent *param_1,FName param_2,int param_3,TVector<double> *param_4,
          bool param_5)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraSystemInstanceController *pFVar3;
  FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition> *this;
  UNiagaraDataInterfaceArrayPosition *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  UClass *pUVar8;
  UNiagaraDataInterface *pUVar9;
  FNiagaraPosition local_98;
  FNiagaraLWCConverter local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    local_68._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_68._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FNiagaraLWCConverter::FNiagaraLWCConverter(&local_88,(TVector<double> *)&local_68._s_0);
  }
  else {
    pTVar2 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
    pFVar3 = (param_1->SystemInstanceController).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 == (FNiagaraSystemInstanceController *)0x0) {
      local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FNiagaraLWCConverter::FNiagaraLWCConverter(&local_88,(TVector<double> *)&local_48._s_0);
    }
    else {
      FNiagaraSystemInstance::GetLWCConverter((pFVar3->SystemInstance).Object,&local_88,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  local_28._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  FNiagaraLWCConverter::ConvertWorldToSimulationPosition
            (&local_88,&local_98,(TVector<double> *)&local_28._s_0);
  pUVar8 = UNiagaraDataInterfaceArrayPosition::StaticClass();
  pUVar9 = UNiagaraFunctionLibrary::GetDataInterface(pUVar8,param_1,param_2);
  if (pUVar9 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition> *)
         (pUVar9->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::BeginSetArrayFromBP
            (this,true);
  pUVar4 = this->Owner;
  piVar1 = &(pUVar4->PositionData).ArrayNum;
  if ((param_3 < 0) || (*piVar1 <= param_3)) {
    if (!param_5) goto LAB_14912f823;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(param_3 - *piVar1) + 1,&(pUVar4->PositionData).AllocatorInstance,piVar1,
               &(pUVar4->PositionData).ArrayMax);
  }
  pFVar5 = (pUVar4->PositionData).AllocatorInstance.Data;
  *(undefined8 *)(pFVar5 + (longlong)param_3 * 0xc) = local_98._0_8_;
  *(undefined4 *)(pFVar5 + (longlong)param_3 * 0xc + 8) = local_98._8_4_;
LAB_14912f823:
  FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::EndSetArrayFromBP(this);
  return;
}

// SetNiagaraArrayQuat @ 14912f850

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat
          (UNiagaraComponent *param_1,FName param_2,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  TQuat<double> *pTVar2;
  FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat> *this;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  
  iVar1 = param_3->ArrayNum;
  pTVar2 = (TQuat<double> *)(param_3->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar5 = UNiagaraDataInterfaceArrayQuat::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,param_1,param_2);
  if (pUVar6 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat> *)
           (pUVar6->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalQuatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TQuat<float>_>::CopyCpuToCpuMemory
                ((TQuat<float> *)(this->Owner->InternalQuatData).AllocatorInstance.Data,pTVar2,iVar1
                );
    }
    else {
      FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::BeginSetArrayFromBP
                (this,false);
      TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->InternalQuatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TQuat<float>_>::CopyCpuToCpuMemory
                ((TQuat<float> *)(this->Owner->InternalQuatData).AllocatorInstance.Data,pTVar2,iVar1
                );
      FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::EndSetArrayFromBP
                (this);
    }
  }
  return;
}

// SetNiagaraArrayQuat @ 14912f940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat
          (UNiagaraComponent *param_1,FName param_2,
          TArrayView<UE::Math::TQuat<float>_const_,int> *param_3)

{
  FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat> *this;
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  int iVar3;
  
  pUVar1 = UNiagaraDataInterfaceArrayQuat::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat> *)
           (pUVar2->Proxy).Ptr;
    iVar3 = param_3->ArrayNum;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalQuatData,iVar3,Default);
      memcpy((this->Owner->InternalQuatData).AllocatorInstance.Data,param_3->DataPtr,
             (longlong)iVar3 << 4);
      return;
    }
    FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::BeginSetArrayFromBP
              (this,false);
    iVar3 = (int)*(undefined8 *)&param_3->ArrayNum;
    TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Owner->InternalQuatData,iVar3,Default);
    memcpy((this->Owner->InternalQuatData).AllocatorInstance.Data,param_3->DataPtr,
           (longlong)iVar3 << 4);
    FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::EndSetArrayFromBP
              (this);
  }
  return;
}

// SetNiagaraArrayQuatValue @ 14912fa20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuatValue
          (UNiagaraComponent *param_1,FName param_2,int param_3,TQuat<double> *param_4,bool param_5)

{
  int *piVar1;
  FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat> *this;
  UNiagaraDataInterfaceArrayQuat *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  
  pUVar5 = UNiagaraDataInterfaceArrayQuat::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,param_1,param_2);
  if (pUVar6 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat> *)
         (pUVar6->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::BeginSetArrayFromBP
            (this,true);
  pUVar2 = this->Owner;
  piVar1 = &(pUVar2->InternalQuatData).ArrayNum;
  if ((param_3 < 0) || (*piVar1 <= param_3)) {
    if (!param_5) goto LAB_14912faf9;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,(param_3 - *piVar1) + 1,&(pUVar2->InternalQuatData).AllocatorInstance,
               piVar1,&(pUVar2->InternalQuatData).ArrayMax);
  }
  FNDIArrayImplHelper<UE::Math::TQuat<float>_>::CopyCpuToCpuMemory
            ((TQuat<float> *)
             ((pUVar2->InternalQuatData).AllocatorInstance.Data + (longlong)param_3 * 0x10),param_4,
             1);
LAB_14912faf9:
  FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::EndSetArrayFromBP(this)
  ;
  return;
}

// SetNiagaraArrayUInt8 @ 14912fb20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayUInt8
          (UNiagaraComponent *param_1,FName param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8> *this;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  
  iVar1 = param_3->ArrayNum;
  pFVar2 = (param_3->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar5 = UNiagaraDataInterfaceArrayUInt8::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,param_1,param_2);
  if (pUVar6 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8> *)(pUVar6->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalIntData,iVar1,Default);
      FNDIArrayImplHelper<unsigned_char>::CopyCpuToCpuMemory
                ((uchar *)(this->Owner->InternalIntData).AllocatorInstance.Data,(int *)pFVar2,iVar1)
      ;
    }
    else {
      FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::BeginSetArrayFromBP
                (this,false);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->InternalIntData,iVar1,Default);
      FNDIArrayImplHelper<unsigned_char>::CopyCpuToCpuMemory
                ((uchar *)(this->Owner->InternalIntData).AllocatorInstance.Data,(int *)pFVar2,iVar1)
      ;
      FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::EndSetArrayFromBP(this);
    }
  }
  return;
}

// SetNiagaraArrayUInt8 @ 14912fc10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayUInt8
          (UNiagaraComponent *param_1,FName param_2,TArrayView<unsigned_char_const_,int> *param_3)

{
  FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8> *this;
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  int iVar3;
  
  pUVar1 = UNiagaraDataInterfaceArrayUInt8::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8> *)(pUVar2->Proxy).Ptr;
    iVar3 = param_3->ArrayNum;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalIntData,iVar3,Default);
      memcpy((this->Owner->InternalIntData).AllocatorInstance.Data,param_3->DataPtr,(longlong)iVar3)
      ;
      return;
    }
    FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::BeginSetArrayFromBP
              (this,false);
    iVar3 = (int)*(undefined8 *)&param_3->ArrayNum;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Owner->InternalIntData,iVar3,Default);
    memcpy((this->Owner->InternalIntData).AllocatorInstance.Data,param_3->DataPtr,(longlong)iVar3);
    FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::EndSetArrayFromBP(this);
  }
  return;
}

// SetNiagaraArrayUInt8Value @ 14912fcf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayUInt8Value
          (UNiagaraComponent *param_1,FName param_2,int param_3,int param_4,bool param_5)

{
  int *piVar1;
  FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8> *this;
  UNiagaraDataInterfaceArrayUInt8 *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UNiagaraDataInterface *pUVar7;
  int iVar8;
  
  pUVar6 = UNiagaraDataInterfaceArrayUInt8::StaticClass();
  pUVar7 = UNiagaraFunctionLibrary::GetDataInterface(pUVar6,param_1,param_2);
  if (pUVar7 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8> *)(pUVar7->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::BeginSetArrayFromBP(this,true);
  pUVar2 = this->Owner;
  piVar1 = &(pUVar2->InternalIntData).ArrayNum;
  if ((param_3 < 0) || (*piVar1 <= param_3)) {
    if (!param_5) goto LAB_14912fdce;
    iVar8 = (param_3 - *piVar1) + 1;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar8,&(pUVar2->InternalIntData).AllocatorInstance,piVar1,
                       &(pUVar2->InternalIntData).ArrayMax);
    memset((pUVar2->InternalIntData).AllocatorInstance.Data + iVar5,0,(longlong)iVar8);
  }
  (pUVar2->InternalIntData).AllocatorInstance.Data[param_3] = SUB41(param_4,0);
LAB_14912fdce:
  FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::EndSetArrayFromBP(this);
  return;
}

// SetNiagaraArrayVector2D @ 14912fe00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2D
          (UNiagaraComponent *param_1,FName param_2,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2> *this;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  
  iVar1 = param_3->ArrayNum;
  pFVar2 = (param_3->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar5 = UNiagaraDataInterfaceArrayFloat2::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,param_1,param_2);
  if (pUVar6 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2> *)
           (pUVar6->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalFloatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TVector2<float>_>::CopyCpuToCpuMemory
                ((TVector2<float> *)(this->Owner->InternalFloatData).AllocatorInstance.Data,
                 (TVector2<double> *)pFVar2,iVar1);
    }
    else {
      FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::
      BeginSetArrayFromBP(this,false);
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->InternalFloatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TVector2<float>_>::CopyCpuToCpuMemory
                ((TVector2<float> *)(this->Owner->InternalFloatData).AllocatorInstance.Data,
                 (TVector2<double> *)pFVar2,iVar1);
      FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::
      EndSetArrayFromBP(this);
    }
  }
  return;
}

// SetNiagaraArrayVector2D @ 14912fef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2D
          (UNiagaraComponent *param_1,FName param_2,
          TArrayView<UE::Math::TVector2<float>_const_,int> *param_3)

{
  FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2> *this;
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  int iVar3;
  
  pUVar1 = UNiagaraDataInterfaceArrayFloat2::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2> *)
           (pUVar2->Proxy).Ptr;
    iVar3 = param_3->ArrayNum;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalFloatData,iVar3,Default);
      memcpy((this->Owner->InternalFloatData).AllocatorInstance.Data,param_3->DataPtr,
             (longlong)iVar3 << 3);
      return;
    }
    FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::
    BeginSetArrayFromBP(this,false);
    iVar3 = (int)*(undefined8 *)&param_3->ArrayNum;
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Owner->InternalFloatData,iVar3,Default);
    memcpy((this->Owner->InternalFloatData).AllocatorInstance.Data,param_3->DataPtr,
           (longlong)iVar3 << 3);
    FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::
    EndSetArrayFromBP(this);
  }
  return;
}

// SetNiagaraArrayVector2DValue @ 14912ffd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2DValue
          (UNiagaraComponent *param_1,FName param_2,int param_3,TVector2<double> *param_4,
          bool param_5)

{
  int *piVar1;
  FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2> *this;
  UNiagaraDataInterfaceArrayFloat2 *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  
  pUVar5 = UNiagaraDataInterfaceArrayFloat2::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,param_1,param_2);
  if (pUVar6 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2> *)
         (pUVar6->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::
  BeginSetArrayFromBP(this,true);
  pUVar2 = this->Owner;
  piVar1 = &(pUVar2->InternalFloatData).ArrayNum;
  if ((param_3 < 0) || (*piVar1 <= param_3)) {
    if (!param_5) goto LAB_1491300a9;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(param_3 - *piVar1) + 1,&(pUVar2->InternalFloatData).AllocatorInstance,piVar1,
               &(pUVar2->InternalFloatData).ArrayMax);
  }
  FNDIArrayImplHelper<UE::Math::TVector2<float>_>::CopyCpuToCpuMemory
            ((TVector2<float> *)
             ((pUVar2->InternalFloatData).AllocatorInstance.Data + (longlong)param_3 * 8),param_4,1)
  ;
LAB_1491300a9:
  FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::EndSetArrayFromBP
            (this);
  return;
}

// SetNiagaraArrayVector4 @ 1491300d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4
          (UNiagaraComponent *param_1,FName param_2,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4> *this;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  
  iVar1 = param_3->ArrayNum;
  pFVar2 = (param_3->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar5 = UNiagaraDataInterfaceArrayFloat4::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,param_1,param_2);
  if (pUVar6 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4> *)
           (pUVar6->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalFloatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TVector4<float>_>::CopyCpuToCpuMemory
                ((TVector4<float> *)(this->Owner->InternalFloatData).AllocatorInstance.Data,
                 (TVector4<double> *)pFVar2,iVar1);
    }
    else {
      FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::
      BeginSetArrayFromBP(this,false);
      TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->InternalFloatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TVector4<float>_>::CopyCpuToCpuMemory
                ((TVector4<float> *)(this->Owner->InternalFloatData).AllocatorInstance.Data,
                 (TVector4<double> *)pFVar2,iVar1);
      FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::
      EndSetArrayFromBP(this);
    }
  }
  return;
}

// SetNiagaraArrayVector4 @ 1491301c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4
          (UNiagaraComponent *param_1,FName param_2,
          TArrayView<UE::Math::TVector4<float>_const_,int> *param_3)

{
  FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4> *this;
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  int iVar3;
  
  pUVar1 = UNiagaraDataInterfaceArrayFloat4::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4> *)
           (pUVar2->Proxy).Ptr;
    iVar3 = param_3->ArrayNum;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalFloatData,iVar3,Default);
      memcpy((this->Owner->InternalFloatData).AllocatorInstance.Data,param_3->DataPtr,
             (longlong)iVar3 << 4);
      return;
    }
    FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::
    BeginSetArrayFromBP(this,false);
    iVar3 = (int)*(undefined8 *)&param_3->ArrayNum;
    TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Owner->InternalFloatData,iVar3,Default);
    memcpy((this->Owner->InternalFloatData).AllocatorInstance.Data,param_3->DataPtr,
           (longlong)iVar3 << 4);
    FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::
    EndSetArrayFromBP(this);
  }
  return;
}

// SetNiagaraArrayVector4Value @ 1491302a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4Value
          (UNiagaraComponent *param_1,FName param_2,int param_3,TVector4<double> *param_4,
          bool param_5)

{
  int *piVar1;
  int iVar2;
  FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4> *this;
  UNiagaraDataInterfaceArrayFloat4 *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UNiagaraDataInterface *pUVar8;
  
  pUVar7 = UNiagaraDataInterfaceArrayFloat4::StaticClass();
  pUVar8 = UNiagaraFunctionLibrary::GetDataInterface(pUVar7,param_1,param_2);
  if (pUVar8 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4> *)
         (pUVar8->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::
  BeginSetArrayFromBP(this,true);
  pUVar3 = this->Owner;
  piVar1 = &(pUVar3->InternalFloatData).ArrayNum;
  if ((param_3 < 0) || (*piVar1 <= param_3)) {
    if (!param_5) goto LAB_149130391;
    iVar2 = *piVar1;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,0x10,(param_3 - iVar2) + 1,
                       &(pUVar3->InternalFloatData).AllocatorInstance,piVar1,
                       &(pUVar3->InternalFloatData).ArrayMax);
    DefaultConstructItems<UE::Math::TVector4<float>,int>
              ((pUVar3->InternalFloatData).AllocatorInstance.Data + (longlong)iVar6 * 0x10,
               (param_3 - iVar2) + 1);
  }
  FNDIArrayImplHelper<UE::Math::TVector4<float>_>::CopyCpuToCpuMemory
            ((TVector4<float> *)
             ((pUVar3->InternalFloatData).AllocatorInstance.Data + (longlong)param_3 * 0x10),param_4
             ,1);
LAB_149130391:
  FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::EndSetArrayFromBP
            (this);
  return;
}

// SetNiagaraArrayVector @ 1491303c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector
          (UNiagaraComponent *param_1,FName param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3> *this;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  
  iVar1 = param_3->ArrayNum;
  pFVar2 = (param_3->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar5 = UNiagaraDataInterfaceArrayFloat3::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,param_1,param_2);
  if (pUVar6 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3> *)
           (pUVar6->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalFloatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TVector<float>_>::CopyCpuToCpuMemory
                ((TVector<float> *)(this->Owner->InternalFloatData).AllocatorInstance.Data,
                 (TVector<double> *)pFVar2,iVar1);
    }
    else {
      FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::
      BeginSetArrayFromBP(this,false);
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->InternalFloatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TVector<float>_>::CopyCpuToCpuMemory
                ((TVector<float> *)(this->Owner->InternalFloatData).AllocatorInstance.Data,
                 (TVector<double> *)pFVar2,iVar1);
      FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::
      EndSetArrayFromBP(this);
    }
  }
  return;
}

// SetNiagaraArrayVector @ 1491304b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector
          (UNiagaraComponent *param_1,FName param_2,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_3)

{
  FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3> *this;
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  int iVar3;
  
  pUVar1 = UNiagaraDataInterfaceArrayFloat3::StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (pUVar2 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3> *)
           (pUVar2->Proxy).Ptr;
    iVar3 = param_3->ArrayNum;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalFloatData,iVar3,Default);
      memcpy((this->Owner->InternalFloatData).AllocatorInstance.Data,param_3->DataPtr,
             (longlong)iVar3 * 0xc);
      return;
    }
    FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::
    BeginSetArrayFromBP(this,false);
    iVar3 = (int)*(undefined8 *)&param_3->ArrayNum;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Owner->InternalFloatData,iVar3,Default);
    memcpy((this->Owner->InternalFloatData).AllocatorInstance.Data,param_3->DataPtr,
           (longlong)iVar3 * 0xc);
    FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::EndSetArrayFromBP
              (this);
  }
  return;
}

// SetNiagaraArrayVectorValue @ 1491305a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVectorValue
          (UNiagaraComponent *param_1,FName param_2,int param_3,TVector<double> *param_4,
          bool param_5)

{
  int *piVar1;
  FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3> *this;
  UNiagaraDataInterfaceArrayFloat3 *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  
  pUVar5 = UNiagaraDataInterfaceArrayFloat3::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,param_1,param_2);
  if (pUVar6 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3> *)
         (pUVar6->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::BeginSetArrayFromBP
            (this,true);
  pUVar2 = this->Owner;
  piVar1 = &(pUVar2->InternalFloatData).ArrayNum;
  if ((param_3 < 0) || (*piVar1 <= param_3)) {
    if (!param_5) goto LAB_14913067d;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(param_3 - *piVar1) + 1,&(pUVar2->InternalFloatData).AllocatorInstance,piVar1,
               &(pUVar2->InternalFloatData).ArrayMax);
  }
  FNDIArrayImplHelper<UE::Math::TVector<float>_>::CopyCpuToCpuMemory
            ((TVector<float> *)
             ((pUVar2->InternalFloatData).AllocatorInstance.Data + (longlong)param_3 * 0xc),param_4,
             1);
LAB_14913067d:
  FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::EndSetArrayFromBP
            (this);
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceArrayFunctionLibrary @ 149139eb0

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::
StaticRegisterNativesUNiagaraDataInterfaceArrayFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x2c;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetNiagaraArrayBool @ 14914eac0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayBool
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UNiagaraComponent *pUVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  FName local_res10;
  UNiagaraComponent *local_res18 [2];
  TArray<bool,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18[0];
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = UNiagaraDataInterfaceArrayBool::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,pUVar3,FVar2);
  if (pUVar5 == (UNiagaraDataInterface *)0x0) {
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::GetArrayDataCopy<bool>
              ((FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool> *)(pUVar5->Proxy).Ptr,
               &local_28);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.ArrayNum;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetNiagaraArrayBoolValue @ 14914ec10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayBoolValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName FVar3;
  UNiagaraComponent *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  UNiagaraDataInterface *pUVar7;
  int local_res10 [2];
  FName local_res18;
  UNiagaraComponent *local_res20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_res20;
  FVar3 = local_res18;
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar6 = UNiagaraDataInterfaceArrayBool::StaticClass();
  pUVar7 = UNiagaraFunctionLibrary::GetDataInterface(pUVar6,pUVar4,FVar3);
  if (pUVar7 != (UNiagaraDataInterface *)0x0) {
    bVar5 = FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::GetArrayValue<bool>
                      ((FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool> *)
                       (pUVar7->Proxy).Ptr,iVar2);
    *(bool *)param_3 = bVar5;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetNiagaraArrayColor @ 14914ed50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UNiagaraComponent *pUVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  FName local_res10;
  UNiagaraComponent *local_res18 [2];
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18[0];
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = UNiagaraDataInterfaceArrayColor::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,pUVar3,FVar2);
  if (pUVar5 == (UNiagaraDataInterface *)0x0) {
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::GetArrayDataCopy<FLinearColor>
              ((FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor> *)
               (pUVar5->Proxy).Ptr,&local_28);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.ArrayNum;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetNiagaraArrayColorValue @ 14914eea0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayColorValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName FVar3;
  UNiagaraComponent *pUVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  int local_res10 [2];
  FName local_res18;
  UNiagaraComponent *local_res20;
  FLinearColor_u_0 local_28;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_res20;
  FVar3 = local_res18;
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = UNiagaraDataInterfaceArrayColor::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,pUVar4,FVar3);
  if (pUVar6 != (UNiagaraDataInterface *)0x0) {
    FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::GetArrayValue<FLinearColor>
              ((FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor> *)
               (pUVar6->Proxy).Ptr,(FLinearColor *)&local_28._s_0,iVar2);
    *(undefined8 *)param_3 = local_28._0_8_;
    *(undefined8 *)((longlong)param_3 + 8) = local_28._8_8_;
    return;
  }
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return;
}

// execGetNiagaraArrayFloat @ 14914eff0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayFloat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UNiagaraComponent *pUVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  FName local_res10;
  UNiagaraComponent *local_res18 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18[0];
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = UNiagaraDataInterfaceArrayFloat::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,pUVar3,FVar2);
  if (pUVar5 == (UNiagaraDataInterface *)0x0) {
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::GetArrayDataCopy<float>
              ((FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat> *)(pUVar5->Proxy).Ptr,
               &local_28);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.ArrayNum;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetNiagaraArrayFloatValue @ 14914f140

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayFloatValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName FVar3;
  UNiagaraComponent *pUVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  float fVar7;
  int local_res10 [2];
  FName local_res18;
  UNiagaraComponent *local_res20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_res20;
  FVar3 = local_res18;
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = UNiagaraDataInterfaceArrayFloat::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,pUVar4,FVar3);
  if (pUVar6 != (UNiagaraDataInterface *)0x0) {
    fVar7 = FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::GetArrayValue<float>
                      ((FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat> *)
                       (pUVar6->Proxy).Ptr,iVar2);
    *(float *)param_3 = fVar7;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNiagaraArrayInt32 @ 14914f280

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayInt32
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UNiagaraComponent *pUVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  FName local_res10;
  UNiagaraComponent *local_res18 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18[0];
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = UNiagaraDataInterfaceArrayInt32::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,pUVar3,FVar2);
  if (pUVar5 == (UNiagaraDataInterface *)0x0) {
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::GetArrayDataCopy<int>
              ((FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32> *)(pUVar5->Proxy).Ptr,
               &local_28);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.ArrayNum;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetNiagaraArrayInt32Value @ 14914f3d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayInt32Value
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UNiagaraComponent *pUVar3;
  int iVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  int local_res10 [2];
  FName local_res18;
  UNiagaraComponent *local_res20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_res20;
  FVar2 = local_res18;
  iVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = UNiagaraDataInterfaceArrayInt32::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,pUVar3,FVar2);
  if (pUVar6 != (UNiagaraDataInterface *)0x0) {
    iVar4 = FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::GetArrayValue<int>
                      ((FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32> *)
                       (pUVar6->Proxy).Ptr,iVar4);
    *(int *)param_3 = iVar4;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNiagaraArrayMatrix @ 14914f510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayMatrix
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraSystemInstanceController *pFVar3;
  double dVar4;
  int iVar5;
  FName FVar6;
  UNiagaraComponent *pUVar7;
  UClass *pUVar8;
  UNiagaraDataInterface *pUVar9;
  TMatrix<double> *pTVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  int local_124;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> local_120;
  FName local_110;
  UNiagaraComponent *local_108 [2];
  TVector<double>_u_0 local_f8;
  FNiagaraLWCConverter local_d8;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_108[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_124 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_124,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_124);
  }
  pUVar7 = local_108[0];
  FVar6 = local_110;
  bVar13 = local_124 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar8 = UNiagaraDataInterfaceArrayMatrix::StaticClass();
  pUVar9 = UNiagaraFunctionLibrary::GetDataInterface(pUVar8,pUVar7,FVar6);
  if (pUVar9 == (UNiagaraDataInterface *)0x0) {
    local_120.ArrayNum = 0;
    local_120.ArrayMax = 0;
    local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::
    GetArrayDataCopy<UE::Math::TMatrix<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix> *)
               (pUVar9->Proxy).Ptr,&local_120);
  }
  if (bVar13) {
    if (pUVar7 == (UNiagaraComponent *)0x0) {
      local_f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FNiagaraLWCConverter::FNiagaraLWCConverter(&local_d8,(TVector<double> *)&local_f8._s_0);
    }
    else {
      pTVar2 = (pUVar7->SystemInstanceController).SharedReferenceCount.ReferenceController;
      pFVar3 = (pUVar7->SystemInstanceController).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 == (FNiagaraSystemInstanceController *)0x0) {
        local_f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FNiagaraLWCConverter::FNiagaraLWCConverter(&local_d8,(TVector<double> *)&local_f8._s_0);
      }
      else {
        FNiagaraSystemInstance::GetLWCConverter((pFVar3->SystemInstance).Object,&local_d8,false);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    iVar5 = local_120.ArrayNum;
    pFVar12 = local_120.AllocatorInstance.Data + (longlong)local_120.ArrayNum * 0x80;
    FVar11.Data = local_120.AllocatorInstance.Data;
    while( true ) {
      if (local_120.ArrayNum != iVar5) {
        `TCheckedPointerIterator<UE::Math::TMatrix<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_128);
      }
      if (FVar11.Data == pFVar12) break;
      pTVar10 = FNiagaraLWCConverter::ConvertSimulationToWorldMatrix
                          (&local_d8,&local_b8,(TMatrix<double> *)FVar11.Data);
      dVar4 = pTVar10->M[0][1];
      *(double *)FVar11.Data = pTVar10->M[0][0];
      *(double *)(FVar11.Data + 8) = dVar4;
      dVar4 = pTVar10->M[0][3];
      *(double *)(FVar11.Data + 0x10) = pTVar10->M[0][2];
      *(double *)(FVar11.Data + 0x18) = dVar4;
      dVar4 = pTVar10->M[1][1];
      *(double *)(FVar11.Data + 0x20) = pTVar10->M[1][0];
      *(double *)(FVar11.Data + 0x28) = dVar4;
      dVar4 = pTVar10->M[1][3];
      *(double *)(FVar11.Data + 0x30) = pTVar10->M[1][2];
      *(double *)(FVar11.Data + 0x38) = dVar4;
      dVar4 = pTVar10->M[2][1];
      *(double *)(FVar11.Data + 0x40) = pTVar10->M[2][0];
      *(double *)(FVar11.Data + 0x48) = dVar4;
      dVar4 = pTVar10->M[2][3];
      *(double *)(FVar11.Data + 0x50) = pTVar10->M[2][2];
      *(double *)(FVar11.Data + 0x58) = dVar4;
      dVar4 = pTVar10->M[3][1];
      *(double *)(FVar11.Data + 0x60) = pTVar10->M[3][0];
      *(double *)(FVar11.Data + 0x68) = dVar4;
      dVar4 = pTVar10->M[3][3];
      *(double *)(FVar11.Data + 0x70) = pTVar10->M[3][2];
      *(double *)(FVar11.Data + 0x78) = dVar4;
      FVar11.Data = FVar11.Data + 0x80;
    }
  }
  if (param_3 != &local_120) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_120.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_120.ArrayNum;
    local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_120.ArrayMax;
    local_120.ArrayNum = 0;
    local_120.ArrayMax = 0;
  }
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  return;
}

// execGetNiagaraArrayMatrixValue @ 14914f800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayMatrixValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraSystemInstanceController *pFVar3;
  int iVar4;
  FName FVar5;
  UNiagaraComponent *pUVar6;
  UClass *pUVar7;
  UNiagaraDataInterface *pUVar8;
  TMatrix<double> *pTVar9;
  bool bVar10;
  undefined1 auStack_1d8 [32];
  int local_1b8;
  int local_1b4;
  FName local_1b0;
  UNiagaraComponent *local_1a8 [2];
  TVector<double>_u_0 local_198;
  FNiagaraLWCConverter local_178;
  TMatrix<double> local_158;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_1a8[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1a8);
  }
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  local_1b4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b4);
  }
  local_1b8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  pUVar6 = local_1a8[0];
  FVar5 = local_1b0;
  iVar4 = local_1b4;
  bVar10 = local_1b8 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar7 = UNiagaraDataInterfaceArrayMatrix::StaticClass();
  pUVar8 = UNiagaraFunctionLibrary::GetDataInterface(pUVar7,pUVar6,FVar5);
  if (pUVar8 == (UNiagaraDataInterface *)0x0) {
    local_158.M[3][2]._0_4_ = 0;
    local_158.M[3][2]._4_4_ = 0;
    local_158.M[3][3]._0_4_ = 0;
    local_158.M[3][3]._4_4_ = 0;
    local_158.M[0][0]._0_4_ = 0;
    local_158.M[0][0]._4_4_ = 0;
    local_158.M[0][1]._0_4_ = 0;
    local_158.M[0][1]._4_4_ = 0;
    local_158.M[0][2]._0_4_ = 0;
    local_158.M[0][2]._4_4_ = 0;
    local_158.M[0][3]._0_4_ = 0;
    local_158.M[0][3]._4_4_ = 0;
    local_158.M[0][0] = 0.0;
    local_158.M[0][1] = 0.0;
    local_158.M[1][0]._0_4_ = 0;
    local_158.M[1][0]._4_4_ = 0;
    local_158.M[1][1]._0_4_ = 0;
    local_158.M[1][1]._4_4_ = 0;
    local_158.M[0][2] = 0.0;
    local_158.M[0][3] = 0.0;
    local_158.M[1][2]._0_4_ = 0;
    local_158.M[1][2]._4_4_ = 0;
    local_158.M[1][3]._0_4_ = 0;
    local_158.M[1][3]._4_4_ = 0;
    local_158.M[1][0] = 0.0;
    local_158.M[1][1] = 0.0;
    local_158.M[2][0]._0_4_ = 0;
    local_158.M[2][0]._4_4_ = 0;
    local_158.M[2][1]._0_4_ = 0;
    local_158.M[2][1]._4_4_ = 0;
    local_158.M[1][2] = 0.0;
    local_158.M[1][3] = 0.0;
    local_158.M[2][2]._0_4_ = 0;
    local_158.M[2][2]._4_4_ = 0;
    local_158.M[2][3]._0_4_ = 0;
    local_158.M[2][3]._4_4_ = 0;
    local_158.M[2][0] = 0.0;
    local_158.M[2][1] = 0.0;
    local_158.M[3][0]._0_4_ = 0;
    local_158.M[3][0]._4_4_ = 0;
    local_158.M[3][1]._0_4_ = 0;
    local_158.M[3][1]._4_4_ = 0;
    local_158.M[2][2] = 0.0;
    local_158.M[2][3] = 0.0;
    local_158.M[3][0] = 0.0;
    local_158.M[3][1] = 0.0;
    local_158.M[3][2] = 0.0;
    local_158.M[3][3] = 0.0;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::
    GetArrayValue<UE::Math::TMatrix<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix> *)
               (pUVar8->Proxy).Ptr,&local_158,iVar4);
  }
  if (bVar10) {
    if (pUVar6 == (UNiagaraComponent *)0x0) {
      local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FNiagaraLWCConverter::FNiagaraLWCConverter(&local_178,(TVector<double> *)&local_198._s_0);
    }
    else {
      pTVar2 = (pUVar6->SystemInstanceController).SharedReferenceCount.ReferenceController;
      pFVar3 = (pUVar6->SystemInstanceController).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 == (FNiagaraSystemInstanceController *)0x0) {
        local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FNiagaraLWCConverter::FNiagaraLWCConverter(&local_178,(TVector<double> *)&local_198._s_0);
      }
      else {
        FNiagaraSystemInstance::GetLWCConverter((pFVar3->SystemInstance).Object,&local_178,false);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    pTVar9 = FNiagaraLWCConverter::ConvertSimulationToWorldMatrix(&local_178,&local_d8,&local_158);
    local_158.M[0][0]._0_4_ = *(undefined4 *)pTVar9->M[0];
    local_158.M[0][0]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[0] + 4);
    local_158.M[0][1]._0_4_ = *(undefined4 *)(pTVar9->M[0] + 1);
    local_158.M[0][1]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[0] + 0xc);
    local_158.M[0][2]._0_4_ = *(undefined4 *)(pTVar9->M[0] + 2);
    local_158.M[0][2]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[0] + 0x14);
    local_158.M[0][3]._0_4_ = *(undefined4 *)(pTVar9->M[0] + 3);
    local_158.M[0][3]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[0] + 0x1c);
    local_158.M[1][0]._0_4_ = *(undefined4 *)pTVar9->M[1];
    local_158.M[1][0]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[1] + 4);
    local_158.M[1][1]._0_4_ = *(undefined4 *)(pTVar9->M[1] + 1);
    local_158.M[1][1]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[1] + 0xc);
    local_158.M[1][2]._0_4_ = *(undefined4 *)(pTVar9->M[1] + 2);
    local_158.M[1][2]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[1] + 0x14);
    local_158.M[1][3]._0_4_ = *(undefined4 *)(pTVar9->M[1] + 3);
    local_158.M[1][3]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[1] + 0x1c);
    local_158.M[2][0]._0_4_ = *(undefined4 *)pTVar9->M[2];
    local_158.M[2][0]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[2] + 4);
    local_158.M[2][1]._0_4_ = *(undefined4 *)(pTVar9->M[2] + 1);
    local_158.M[2][1]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[2] + 0xc);
    local_158.M[2][2]._0_4_ = *(undefined4 *)(pTVar9->M[2] + 2);
    local_158.M[2][2]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[2] + 0x14);
    local_158.M[2][3]._0_4_ = *(undefined4 *)(pTVar9->M[2] + 3);
    local_158.M[2][3]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[2] + 0x1c);
    local_158.M[3][0]._0_4_ = *(undefined4 *)pTVar9->M[3];
    local_158.M[3][0]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[3] + 4);
    local_158.M[3][1]._0_4_ = *(undefined4 *)(pTVar9->M[3] + 1);
    local_158.M[3][1]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[3] + 0xc);
    local_158.M[3][2]._0_4_ = *(undefined4 *)(pTVar9->M[3] + 2);
    local_158.M[3][2]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[3] + 0x14);
    local_158.M[3][3]._0_4_ = *(undefined4 *)(pTVar9->M[3] + 3);
    local_158.M[3][3]._4_4_ = *(undefined4 *)((longlong)pTVar9->M[3] + 0x1c);
  }
  *(undefined4 *)param_3 = local_158.M[0][0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_158.M[0][0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_158.M[0][1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_158.M[0][1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_158.M[0][2]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_158.M[0][2]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_158.M[0][3]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x1c) = local_158.M[0][3]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_158.M[1][0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x24) = local_158.M[1][0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x28) = local_158.M[1][1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x2c) = local_158.M[1][1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x30) = local_158.M[1][2]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x34) = local_158.M[1][2]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x38) = local_158.M[1][3]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x3c) = local_158.M[1][3]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x40) = local_158.M[2][0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x44) = local_158.M[2][0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x48) = local_158.M[2][1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x4c) = local_158.M[2][1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x50) = local_158.M[2][2]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x54) = local_158.M[2][2]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x58) = local_158.M[2][3]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x5c) = local_158.M[2][3]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x60) = local_158.M[3][0]._0_4_;
  *(undefined4 *)((longlong)param_3 + 100) = local_158.M[3][0]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x68) = local_158.M[3][1]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x6c) = local_158.M[3][1]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x70) = local_158.M[3][2]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x74) = local_158.M[3][2]._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x78) = local_158.M[3][3]._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x7c) = local_158.M[3][3]._4_4_;
  return;
}

// execGetNiagaraArrayPosition @ 14914fb20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FName local_res10;
  UNiagaraComponent *local_res18;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_res18 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetNiagaraArrayPosition(&local_18,local_res18,local_res10);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetNiagaraArrayPositionValue @ 14914fc30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayPositionValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraSystemInstanceController *pFVar3;
  int iVar4;
  FName FVar5;
  UNiagaraComponent *pUVar6;
  UClass *pUVar7;
  UNiagaraDataInterface *pUVar8;
  int local_res10 [2];
  FName local_res18;
  UNiagaraComponent *local_res20;
  double local_88 [2];
  TVector<double>_u_0 local_78;
  FNiagaraLWCConverter local_58;
  TVector<double>_u_0 local_40;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar6 = local_res20;
  FVar5 = local_res18;
  iVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar7 = UNiagaraDataInterfaceArrayPosition::StaticClass();
  pUVar8 = UNiagaraFunctionLibrary::GetDataInterface(pUVar7,pUVar6,FVar5);
  if (pUVar8 != (UNiagaraDataInterface *)0x0) {
    FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::
    GetArrayValue<FNiagaraPosition>
              ((FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition> *)
               (pUVar8->Proxy).Ptr,(FNiagaraPosition *)local_88,iVar4);
  }
  if (pUVar6 == (UNiagaraComponent *)0x0) {
    local_78._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_78._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_78._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FNiagaraLWCConverter::FNiagaraLWCConverter(&local_58,(TVector<double> *)&local_78._s_0);
  }
  else {
    pTVar2 = (pUVar6->SystemInstanceController).SharedReferenceCount.ReferenceController;
    pFVar3 = (pUVar6->SystemInstanceController).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 == (FNiagaraSystemInstanceController *)0x0) {
      local_78._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_78._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_78._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FNiagaraLWCConverter::FNiagaraLWCConverter(&local_58,(TVector<double> *)&local_78._s_0);
    }
    else {
      FNiagaraSystemInstance::GetLWCConverter((pFVar3->SystemInstance).Object,&local_58,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  local_78._s_0.X = local_88[0];
  local_78._8_4_ = local_88[1]._0_4_;
  FNiagaraLWCConverter::ConvertSimulationPositionToWorld
            (&local_58,(TVector<double> *)&local_40._s_0,(FNiagaraPosition *)&local_78._s_0);
  *(double *)param_3 = local_40._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_40._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_40._s_0.Z;
  return;
}

// execGetNiagaraArrayQuat @ 14914fe10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayQuat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UNiagaraComponent *pUVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  FName local_res10;
  UNiagaraComponent *local_res18 [2];
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18[0];
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = UNiagaraDataInterfaceArrayQuat::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,pUVar3,FVar2);
  if (pUVar5 == (UNiagaraDataInterface *)0x0) {
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::
    GetArrayDataCopy<UE::Math::TQuat<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat> *)
               (pUVar5->Proxy).Ptr,&local_28);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.ArrayNum;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetNiagaraArrayQuatValue @ 14914ff60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayQuatValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName FVar3;
  UNiagaraComponent *pUVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  int local_res10 [2];
  FName local_res18;
  UNiagaraComponent *local_res20;
  TQuat<double> local_38;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_res20;
  FVar3 = local_res18;
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = UNiagaraDataInterfaceArrayQuat::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,pUVar4,FVar3);
  if (pUVar6 == (UNiagaraDataInterface *)0x0) {
    local_38.Z._0_4_ = 0;
    local_38.Z._4_4_ = 0;
    local_38.W._0_4_ = 0;
    local_38.W._4_4_ = 0;
    local_38.X._0_4_ = 0;
    local_38.X._4_4_ = 0;
    local_38.Y._0_4_ = 0;
    local_38.Y._4_4_ = 0;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::
    GetArrayValue<UE::Math::TQuat<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat> *)
               (pUVar6->Proxy).Ptr,&local_38,iVar2);
  }
  *(undefined4 *)param_3 = local_38.X._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_38.X._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_38.Y._0_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_38.Y._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_38.Z._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_38.Z._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_38.W._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x1c) = local_38.W._4_4_;
  return;
}

// execGetNiagaraArrayUInt8 @ 1491500b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayUInt8
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UNiagaraComponent *pUVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  FName local_res10;
  UNiagaraComponent *local_res18 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18[0];
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = UNiagaraDataInterfaceArrayUInt8::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,pUVar3,FVar2);
  if (pUVar5 == (UNiagaraDataInterface *)0x0) {
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::GetArrayDataCopy<int>
              ((FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8> *)
               (pUVar5->Proxy).Ptr,&local_28);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.ArrayNum;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetNiagaraArrayUInt8Value @ 149150200

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayUInt8Value
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UNiagaraComponent *pUVar3;
  int iVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  int local_res10 [2];
  FName local_res18;
  UNiagaraComponent *local_res20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_res20;
  FVar2 = local_res18;
  iVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = UNiagaraDataInterfaceArrayUInt8::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,pUVar3,FVar2);
  if (pUVar6 != (UNiagaraDataInterface *)0x0) {
    iVar4 = FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::GetArrayValue<int>
                      ((FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8> *)
                       (pUVar6->Proxy).Ptr,iVar4);
    *(int *)param_3 = iVar4;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNiagaraArrayVector2D @ 149150340

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UNiagaraComponent *pUVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  FName local_res10;
  UNiagaraComponent *local_res18 [2];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18[0];
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = UNiagaraDataInterfaceArrayFloat2::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,pUVar3,FVar2);
  if (pUVar5 == (UNiagaraDataInterface *)0x0) {
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::
    GetArrayDataCopy<UE::Math::TVector2<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2> *)
               (pUVar5->Proxy).Ptr,&local_28);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.ArrayNum;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetNiagaraArrayVector2DValue @ 149150490

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector2DValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName FVar3;
  UNiagaraComponent *pUVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  int local_res10 [2];
  FName local_res18;
  UNiagaraComponent *local_res20;
  TVector2<double>_u_0 local_28;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_res20;
  FVar3 = local_res18;
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = UNiagaraDataInterfaceArrayFloat2::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,pUVar4,FVar3);
  if (pUVar6 != (UNiagaraDataInterface *)0x0) {
    FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::
    GetArrayValue<UE::Math::TVector2<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2> *)
               (pUVar6->Proxy).Ptr,(TVector2<double> *)&local_28._s_0,iVar2);
    *(double *)param_3 = local_28._s_0.X;
    *(double *)((longlong)param_3 + 8) = local_28._s_0.Y;
    return;
  }
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return;
}

// execGetNiagaraArrayVector4 @ 1491505e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector4
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UNiagaraComponent *pUVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  FName local_res10;
  UNiagaraComponent *local_res18 [2];
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18[0];
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = UNiagaraDataInterfaceArrayFloat4::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,pUVar3,FVar2);
  if (pUVar5 == (UNiagaraDataInterface *)0x0) {
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::
    GetArrayDataCopy<UE::Math::TVector4<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4> *)
               (pUVar5->Proxy).Ptr,&local_28);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.ArrayNum;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetNiagaraArrayVector4Value @ 149150730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector4Value
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName FVar3;
  UNiagaraComponent *pUVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  int local_res10 [2];
  FName local_res18;
  UNiagaraComponent *local_res20;
  TVector4<double>_u_0 local_38;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_res20;
  FVar3 = local_res18;
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = UNiagaraDataInterfaceArrayFloat4::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,pUVar4,FVar3);
  if (pUVar6 == (UNiagaraDataInterface *)0x0) {
    local_38._0_4_ = 0;
    local_38._4_4_ = 0;
    local_38._8_4_ = 0;
    local_38._12_4_ = 0;
    local_38._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_38._s_0.W = _UNK_15061cbc8;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::
    GetArrayValue<UE::Math::TVector4<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4> *)
               (pUVar6->Proxy).Ptr,(TVector4<double> *)&local_38._s_0,iVar2);
  }
  *(undefined4 *)param_3 = local_38._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_38._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_38._8_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_38._12_4_;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_38._s_0.Z;
  *(undefined8 *)((longlong)param_3 + 0x18) = local_38._s_0.W;
  return;
}

// execGetNiagaraArrayVector @ 149150880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UNiagaraComponent *pUVar3;
  UClass *pUVar4;
  UNiagaraDataInterface *pUVar5;
  FName local_res10;
  UNiagaraComponent *local_res18 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18[0];
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = UNiagaraDataInterfaceArrayFloat3::StaticClass();
  pUVar5 = UNiagaraFunctionLibrary::GetDataInterface(pUVar4,pUVar3,FVar2);
  if (pUVar5 == (UNiagaraDataInterface *)0x0) {
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::
    GetArrayDataCopy<UE::Math::TVector<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3> *)
               (pUVar5->Proxy).Ptr,&local_28);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.ArrayNum;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetNiagaraArrayVectorValue @ 1491509d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVectorValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName FVar3;
  UNiagaraComponent *pUVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  int local_res10 [2];
  FName local_res18;
  UNiagaraComponent *local_res20;
  TVector<double>_u_0 local_38;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_res20;
  FVar3 = local_res18;
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = UNiagaraDataInterfaceArrayFloat3::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,pUVar4,FVar3);
  if (pUVar6 == (UNiagaraDataInterface *)0x0) {
    local_38._0_4_ = 0;
    local_38._4_4_ = 0;
    local_38._8_4_ = 0;
    local_38._12_4_ = 0;
    local_38._s_0.Z = 0.0;
  }
  else {
    FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::
    GetArrayValue<UE::Math::TVector<double>_>
              ((FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3> *)
               (pUVar6->Proxy).Ptr,(TVector<double> *)&local_38._s_0,iVar2);
  }
  *(undefined4 *)param_3 = local_38._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_38._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_38._8_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_38._12_4_;
  *(double *)((longlong)param_3 + 0x10) = local_38._s_0.Z;
  return;
}

// execSetNiagaraArrayBool @ 149153e10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayBool
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  void *_Src;
  FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool> *this;
  code *pcVar3;
  FName FVar4;
  UNiagaraComponent *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  UNiagaraDataInterface *pUVar8;
  void **ppvVar9;
  FName local_res10 [2];
  UNiagaraComponent *local_res20;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar5 = local_res20;
  FVar4 = local_res10[0];
  ppvVar9 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar9 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppvVar9 + 1);
  _Src = *ppvVar9;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar7 = UNiagaraDataInterfaceArrayBool::StaticClass();
  pUVar8 = UNiagaraFunctionLibrary::GetDataInterface(pUVar7,pUVar5,FVar4);
  if (pUVar8 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool> *)(pUVar8->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->BoolData,iVar1,Default);
      memcpy((this->Owner->BoolData).AllocatorInstance.Data,_Src,(longlong)iVar1);
    }
    else {
      FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::BeginSetArrayFromBP(this,false);
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&this->Owner->BoolData,iVar1,Default);
      memcpy((this->Owner->BoolData).AllocatorInstance.Data,_Src,(longlong)iVar1);
      FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::EndSetArrayFromBP(this);
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetNiagaraArrayBoolValue @ 149153ff0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayBoolValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool> *this;
  UNiagaraDataInterfaceArrayBool *pUVar4;
  code *pcVar5;
  FName FVar6;
  UNiagaraComponent *pUVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UNiagaraDataInterface *pUVar11;
  int iVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  FScriptContainerElement local_res10 [16];
  int local_res20 [2];
  int local_48 [2];
  FName local_40;
  UNiagaraComponent *local_38 [2];
  
  local_38[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res10[0] = (FScriptContainerElement)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  pFVar14 = local_res10;
  if ((FScriptContainerElement *)param_2->MostRecentPropertyAddress !=
      (FScriptContainerElement *)0x0) {
    pFVar14 = (FScriptContainerElement *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pUVar7 = local_38[0];
  FVar6 = local_40;
  iVar9 = local_48[0];
  bVar15 = local_res20[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar13 = (longlong)local_48[0];
  pUVar10 = UNiagaraDataInterfaceArrayBool::StaticClass();
  pUVar11 = UNiagaraFunctionLibrary::GetDataInterface(pUVar10,pUVar7,FVar6);
  if (pUVar11 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool> *)(pUVar11->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::BeginSetArrayFromBP(this,true);
  pUVar4 = this->Owner;
  piVar1 = &(pUVar4->BoolData).ArrayNum;
  if ((iVar9 < 0) || (*piVar1 <= iVar9)) {
    if (bVar15) goto LAB_14915422b;
    iVar12 = (iVar9 - *piVar1) + 1;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar12,&(pUVar4->BoolData).AllocatorInstance,piVar1,
                       &(pUVar4->BoolData).ArrayMax);
    memset((pUVar4->BoolData).AllocatorInstance.Data + iVar9,0,(longlong)iVar12);
  }
  (pUVar4->BoolData).AllocatorInstance.Data[lVar13] = *pFVar14;
LAB_14915422b:
  FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::EndSetArrayFromBP(this);
  return;
}

// execSetNiagaraArrayColor @ 149154250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  void *_Src;
  FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor> *this;
  code *pcVar3;
  FName FVar4;
  UNiagaraComponent *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  UNiagaraDataInterface *pUVar8;
  void **ppvVar9;
  FName local_res10 [2];
  UNiagaraComponent *local_res20;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar5 = local_res20;
  FVar4 = local_res10[0];
  ppvVar9 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar9 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppvVar9 + 1);
  _Src = *ppvVar9;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar7 = UNiagaraDataInterfaceArrayColor::StaticClass();
  pUVar8 = UNiagaraFunctionLibrary::GetDataInterface(pUVar7,pUVar5,FVar4);
  if (pUVar8 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor> *)(pUVar8->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->ColorData,iVar1,Default);
      memcpy((this->Owner->ColorData).AllocatorInstance.Data,_Src,(longlong)iVar1 << 4);
    }
    else {
      FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::BeginSetArrayFromBP
                (this,false);
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->ColorData,iVar1,Default);
      memcpy((this->Owner->ColorData).AllocatorInstance.Data,_Src,(longlong)iVar1 << 4);
      FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::EndSetArrayFromBP(this);
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetNiagaraArrayColorValue @ 149154430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayColorValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FScriptContainerElement *pFVar3;
  FProperty *pFVar4;
  FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor> *this;
  UNiagaraDataInterfaceArrayColor *pUVar5;
  code *pcVar6;
  undefined8 uVar7;
  int iVar8;
  FName FVar9;
  UNiagaraComponent *pUVar10;
  bool bVar11;
  UClass *pUVar12;
  UNiagaraDataInterface *pUVar13;
  uchar *puVar14;
  longlong lVar15;
  bool bVar16;
  int local_res10 [2];
  int local_res20 [2];
  FName local_38;
  UNiagaraComponent *local_30;
  uchar local_28 [16];
  
  local_30 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = 0;
  puVar14 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar14 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar10 = local_30;
  FVar9 = local_38;
  iVar8 = local_res20[0];
  bVar16 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar15 = (longlong)local_res20[0];
  pUVar12 = UNiagaraDataInterfaceArrayColor::StaticClass();
  pUVar13 = UNiagaraFunctionLibrary::GetDataInterface(pUVar12,pUVar10,FVar9);
  if (pUVar13 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor> *)(pUVar13->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5472541801216737864>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                          ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::BeginSetArrayFromBP(this,true);
  pUVar5 = this->Owner;
  piVar1 = &(pUVar5->ColorData).ArrayNum;
  if ((iVar8 < 0) || (*piVar1 <= iVar8)) {
    if (bVar16) goto LAB_149154655;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,(iVar8 - *piVar1) + 1,&(pUVar5->ColorData).AllocatorInstance,piVar1,
               &(pUVar5->ColorData).ArrayMax);
  }
  uVar7 = *(undefined8 *)(puVar14 + 8);
  pFVar3 = (pUVar5->ColorData).AllocatorInstance.Data + lVar15 * 0x10;
  *(undefined8 *)pFVar3 = *(undefined8 *)puVar14;
  *(undefined8 *)(pFVar3 + 8) = uVar7;
LAB_149154655:
  FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::EndSetArrayFromBP(this);
  return;
}

// execSetNiagaraArrayFloat @ 149154680

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayFloat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  void *_Src;
  FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat> *this;
  code *pcVar3;
  FName FVar4;
  UNiagaraComponent *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  UNiagaraDataInterface *pUVar8;
  void **ppvVar9;
  FName local_res10 [2];
  UNiagaraComponent *local_res20;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar5 = local_res20;
  FVar4 = local_res10[0];
  ppvVar9 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar9 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppvVar9 + 1);
  _Src = *ppvVar9;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar7 = UNiagaraDataInterfaceArrayFloat::StaticClass();
  pUVar8 = UNiagaraFunctionLibrary::GetDataInterface(pUVar7,pUVar5,FVar4);
  if (pUVar8 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat> *)(pUVar8->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->FloatData,iVar1,Default);
      memcpy((this->Owner->FloatData).AllocatorInstance.Data,_Src,(longlong)iVar1 << 2);
    }
    else {
      FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::BeginSetArrayFromBP(this,false);
      TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->Owner->FloatData,iVar1,Default);
      memcpy((this->Owner->FloatData).AllocatorInstance.Data,_Src,(longlong)iVar1 << 2);
      FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::EndSetArrayFromBP(this);
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetNiagaraArrayFloatValue @ 149154860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayFloatValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat> *this;
  UNiagaraDataInterfaceArrayFloat *pUVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  FName FVar7;
  UNiagaraComponent *pUVar8;
  bool bVar9;
  UClass *pUVar10;
  UNiagaraDataInterface *pUVar11;
  longlong lVar12;
  bool bVar13;
  int local_res10 [2];
  undefined4 local_res20 [2];
  int local_48 [2];
  FName local_40;
  UNiagaraComponent *local_38 [4];
  
  local_38[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar8 = local_38[0];
  FVar7 = local_40;
  iVar6 = local_48[0];
  uVar5 = local_res20[0];
  bVar13 = local_res10[0] == 0;
  lVar12 = (longlong)local_48[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar10 = UNiagaraDataInterfaceArrayFloat::StaticClass();
  pUVar11 = UNiagaraFunctionLibrary::GetDataInterface(pUVar10,pUVar8,FVar7);
  if (pUVar11 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat> *)(pUVar11->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::BeginSetArrayFromBP(this,true);
  pUVar3 = this->Owner;
  if ((iVar6 < 0) || ((pUVar3->FloatData).ArrayNum <= iVar6)) {
    if (bVar13) goto LAB_149154a63;
    TArray<float,TSizedDefaultAllocator<32>_>::AddDefaulted
              (&pUVar3->FloatData,(iVar6 - (pUVar3->FloatData).ArrayNum) + 1);
  }
  *(undefined4 *)((pUVar3->FloatData).AllocatorInstance.Data + lVar12 * 4) = uVar5;
LAB_149154a63:
  FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::EndSetArrayFromBP(this);
  return;
}

// execSetNiagaraArrayInt32 @ 149154a90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayInt32
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  void *_Src;
  FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32> *this;
  code *pcVar3;
  FName FVar4;
  UNiagaraComponent *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  UNiagaraDataInterface *pUVar8;
  void **ppvVar9;
  FName local_res10 [2];
  UNiagaraComponent *local_res20;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar5 = local_res20;
  FVar4 = local_res10[0];
  ppvVar9 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar9 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppvVar9 + 1);
  _Src = *ppvVar9;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar7 = UNiagaraDataInterfaceArrayInt32::StaticClass();
  pUVar8 = UNiagaraFunctionLibrary::GetDataInterface(pUVar7,pUVar5,FVar4);
  if (pUVar8 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32> *)(pUVar8->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->IntData,iVar1,Default);
      memcpy((this->Owner->IntData).AllocatorInstance.Data,_Src,(longlong)iVar1 << 2);
    }
    else {
      FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::BeginSetArrayFromBP(this,false);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->Owner->IntData,iVar1,Default);
      memcpy((this->Owner->IntData).AllocatorInstance.Data,_Src,(longlong)iVar1 << 2);
      FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::EndSetArrayFromBP(this);
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetNiagaraArrayInt32Value @ 149154c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayInt32Value
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32> *this;
  UNiagaraDataInterfaceArrayInt32 *pUVar4;
  code *pcVar5;
  undefined4 uVar6;
  FName FVar7;
  UNiagaraComponent *pUVar8;
  bool bVar9;
  int iVar10;
  UClass *pUVar11;
  UNiagaraDataInterface *pUVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  int local_res10 [4];
  undefined4 local_res20 [2];
  int local_48 [2];
  FName local_40;
  UNiagaraComponent *local_38 [2];
  
  local_38[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar8 = local_38[0];
  FVar7 = local_40;
  iVar10 = local_48[0];
  uVar6 = local_res20[0];
  bVar15 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar14 = (longlong)local_48[0];
  pUVar11 = UNiagaraDataInterfaceArrayInt32::StaticClass();
  pUVar12 = UNiagaraFunctionLibrary::GetDataInterface(pUVar11,pUVar8,FVar7);
  if (pUVar12 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32> *)(pUVar12->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::BeginSetArrayFromBP(this,true);
  pUVar4 = this->Owner;
  piVar1 = &(pUVar4->IntData).ArrayNum;
  if ((iVar10 < 0) || (*piVar1 <= iVar10)) {
    if (bVar15) goto LAB_149154ea1;
    iVar13 = (iVar10 - *piVar1) + 1;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar13,&(pUVar4->IntData).AllocatorInstance,piVar1,
                        &(pUVar4->IntData).ArrayMax);
    memset((pUVar4->IntData).AllocatorInstance.Data + (longlong)iVar10 * 4,0,(longlong)iVar13 << 2);
  }
  *(undefined4 *)((pUVar4->IntData).AllocatorInstance.Data + lVar14 * 4) = uVar6;
LAB_149154ea1:
  FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::EndSetArrayFromBP(this);
  return;
}

// execSetNiagaraArrayMatrix @ 149154ed0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayMatrix
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  FName local_res20;
  UNiagaraComponent *local_28;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> local_20;
  
  local_28 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_res10[0] = 0;
  pTVar2 = &local_20;
  if ((TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetNiagaraArrayMatrix(local_28,local_res20,pTVar2,local_res10[0] != 0);
  if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// execSetNiagaraArrayMatrixValue @ 149155050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayMatrixValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraSystemInstanceController *pFVar3;
  int iVar4;
  FName FVar5;
  UNiagaraComponent *pUVar6;
  TMatrix<double> *pTVar7;
  bool bVar8;
  undefined1 auStack_1c8 [32];
  int local_198;
  int local_194;
  int local_190 [2];
  FName local_188;
  UNiagaraComponent *local_180;
  TVector<double>_u_0 local_178;
  FNiagaraLWCConverter local_158;
  TMatrix<double> local_138;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_180 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_194 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_194,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_194);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_198 = 0;
  pTVar7 = &local_138;
  if ((TMatrix<double> *)param_2->MostRecentPropertyAddress != (TMatrix<double> *)0x0) {
    pTVar7 = (TMatrix<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  bVar8 = local_198 != 0;
  local_190[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_190,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_190);
  }
  pUVar6 = local_180;
  FVar5 = local_188;
  iVar4 = local_194;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_190[0] != 0) {
    if (local_180 == (UNiagaraComponent *)0x0) {
      local_178._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_178._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_178._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FNiagaraLWCConverter::FNiagaraLWCConverter(&local_158,(TVector<double> *)&local_178._s_0);
    }
    else {
      pTVar2 = (local_180->SystemInstanceController).SharedReferenceCount.ReferenceController;
      pFVar3 = (local_180->SystemInstanceController).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 == (FNiagaraSystemInstanceController *)0x0) {
        local_178._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_178._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_178._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FNiagaraLWCConverter::FNiagaraLWCConverter(&local_158,(TVector<double> *)&local_178._s_0);
      }
      else {
        FNiagaraSystemInstance::GetLWCConverter((pFVar3->SystemInstance).Object,&local_158,false);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    pTVar7 = FNiagaraLWCConverter::ConvertWorldToSimulationMatrix(&local_158,&local_b8,pTVar7);
  }
  SetNiagaraArrayValue<UE::Math::TMatrix<double>,UNiagaraDataInterfaceArrayMatrix>
            (pUVar6,FVar5,iVar4,pTVar7,bVar8);
  return;
}

// execSetNiagaraArrayPosition @ 149155330

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FName local_res10 [2];
  UNiagaraComponent *local_res20;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetNiagaraArrayPosition(local_res20,local_res10[0],pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetNiagaraArrayPositionValue @ 149155460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayPositionValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNiagaraSystemInstanceController *pFVar5;
  FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition> *this;
  UNiagaraDataInterfaceArrayPosition *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  int iVar9;
  FName FVar10;
  UNiagaraComponent *pUVar11;
  bool bVar12;
  UClass *pUVar13;
  UNiagaraDataInterface *pUVar14;
  longlong lVar15;
  double *pdVar16;
  bool bVar17;
  int local_res10 [2];
  int local_res20 [2];
  FName local_d8;
  UNiagaraComponent *local_d0;
  FNiagaraPosition local_c8;
  FNiagaraLWCConverter local_b8;
  double local_a0 [3];
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  
  local_d0 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  local_res10[0] = 0;
  pdVar16 = local_a0;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar16 = (double *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar11 = local_d0;
  FVar10 = local_d8;
  iVar9 = local_res20[0];
  bVar17 = local_res10[0] == 0;
  lVar15 = (longlong)local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_d0 == (UNiagaraComponent *)0x0) {
    local_88._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_88._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_88._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FNiagaraLWCConverter::FNiagaraLWCConverter(&local_b8,(TVector<double> *)&local_88._s_0);
  }
  else {
    pTVar4 = (local_d0->SystemInstanceController).SharedReferenceCount.ReferenceController;
    pFVar5 = (local_d0->SystemInstanceController).Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar5 == (FNiagaraSystemInstanceController *)0x0) {
      local_68._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_68._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FNiagaraLWCConverter::FNiagaraLWCConverter(&local_b8,(TVector<double> *)&local_68._s_0);
    }
    else {
      FNiagaraSystemInstance::GetLWCConverter((pFVar5->SystemInstance).Object,&local_b8,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  local_48._s_0.X = *pdVar16;
  local_48._s_0.Y = pdVar16[1];
  local_48._s_0.Z = pdVar16[2];
  FNiagaraLWCConverter::ConvertWorldToSimulationPosition
            (&local_b8,&local_c8,(TVector<double> *)&local_48._s_0);
  pUVar13 = UNiagaraDataInterfaceArrayPosition::StaticClass();
  pUVar14 = UNiagaraFunctionLibrary::GetDataInterface(pUVar13,pUVar11,FVar10);
  if (pUVar14 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition> *)
         (pUVar14->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5472541801216737864>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                          ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::BeginSetArrayFromBP
            (this,true);
  pUVar6 = this->Owner;
  piVar1 = &(pUVar6->PositionData).ArrayNum;
  if ((iVar9 < 0) || (*piVar1 <= iVar9)) {
    if (bVar17) goto LAB_149155727;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(iVar9 - *piVar1) + 1,&(pUVar6->PositionData).AllocatorInstance,piVar1,
               &(pUVar6->PositionData).ArrayMax);
  }
  pFVar7 = (pUVar6->PositionData).AllocatorInstance.Data;
  *(undefined8 *)(pFVar7 + lVar15 * 0xc) = local_c8._0_8_;
  *(undefined4 *)(pFVar7 + lVar15 * 0xc + 8) = local_c8._8_4_;
LAB_149155727:
  FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::EndSetArrayFromBP(this);
  return;
}

// execSetNiagaraArrayQuat @ 149155760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayQuat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TQuat<double> *pTVar3;
  FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat> *this;
  code *pcVar4;
  FName FVar5;
  UNiagaraComponent *pUVar6;
  bool bVar7;
  UClass *pUVar8;
  UNiagaraDataInterface *pUVar9;
  void **ppvVar10;
  FName local_res10 [2];
  UNiagaraComponent *local_res20;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar6 = local_res20;
  FVar5 = local_res10[0];
  ppvVar10 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar10 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppvVar10 + 1);
  pTVar3 = *ppvVar10;
  if (iVar1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar8 = UNiagaraDataInterfaceArrayQuat::StaticClass();
  pUVar9 = UNiagaraFunctionLibrary::GetDataInterface(pUVar8,pUVar6,FVar5);
  if (pUVar9 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat> *)
           (pUVar9->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalQuatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TQuat<float>_>::CopyCpuToCpuMemory
                ((TQuat<float> *)(this->Owner->InternalQuatData).AllocatorInstance.Data,pTVar3,iVar1
                );
    }
    else {
      FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::BeginSetArrayFromBP
                (this,false);
      TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->InternalQuatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TQuat<float>_>::CopyCpuToCpuMemory
                ((TQuat<float> *)(this->Owner->InternalQuatData).AllocatorInstance.Data,pTVar3,iVar1
                );
      FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::EndSetArrayFromBP
                (this);
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetNiagaraArrayQuatValue @ 149155940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayQuatValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat> *this;
  UNiagaraDataInterfaceArrayQuat *pUVar4;
  code *pcVar5;
  int iVar6;
  FName FVar7;
  UNiagaraComponent *pUVar8;
  bool bVar9;
  UClass *pUVar10;
  UNiagaraDataInterface *pUVar11;
  TQuat<double> *pTVar12;
  longlong lVar13;
  bool bVar14;
  int local_res10 [2];
  int local_res20 [2];
  FName local_48;
  UNiagaraComponent *local_40;
  TQuat<double> local_38;
  
  local_40 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  pTVar12 = &local_38;
  if ((TQuat<double> *)param_2->MostRecentPropertyAddress != (TQuat<double> *)0x0) {
    pTVar12 = (TQuat<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar8 = local_40;
  FVar7 = local_48;
  iVar6 = local_res20[0];
  bVar14 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar13 = (longlong)local_res20[0];
  pUVar10 = UNiagaraDataInterfaceArrayQuat::StaticClass();
  pUVar11 = UNiagaraFunctionLibrary::GetDataInterface(pUVar10,pUVar8,FVar7);
  if (pUVar11 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat> *)
         (pUVar11->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::BeginSetArrayFromBP
            (this,true);
  pUVar4 = this->Owner;
  piVar1 = &(pUVar4->InternalQuatData).ArrayNum;
  if ((iVar6 < 0) || (*piVar1 <= iVar6)) {
    if (bVar14) goto LAB_149155b75;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,(iVar6 - *piVar1) + 1,&(pUVar4->InternalQuatData).AllocatorInstance,piVar1,
               &(pUVar4->InternalQuatData).ArrayMax);
  }
  FNDIArrayImplHelper<UE::Math::TQuat<float>_>::CopyCpuToCpuMemory
            ((TQuat<float> *)((pUVar4->InternalQuatData).AllocatorInstance.Data + lVar13 * 0x10),
             pTVar12,1);
LAB_149155b75:
  FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::EndSetArrayFromBP(this)
  ;
  return;
}

// execSetNiagaraArrayUInt8 @ 149155ba0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayUInt8
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  int *piVar3;
  FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8> *this;
  code *pcVar4;
  FName FVar5;
  UNiagaraComponent *pUVar6;
  bool bVar7;
  UClass *pUVar8;
  UNiagaraDataInterface *pUVar9;
  void **ppvVar10;
  FName local_res10 [2];
  UNiagaraComponent *local_res20;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar6 = local_res20;
  FVar5 = local_res10[0];
  ppvVar10 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar10 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppvVar10 + 1);
  piVar3 = *ppvVar10;
  if (iVar1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar8 = UNiagaraDataInterfaceArrayUInt8::StaticClass();
  pUVar9 = UNiagaraFunctionLibrary::GetDataInterface(pUVar8,pUVar6,FVar5);
  if (pUVar9 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8> *)(pUVar9->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalIntData,iVar1,Default);
      FNDIArrayImplHelper<unsigned_char>::CopyCpuToCpuMemory
                ((uchar *)(this->Owner->InternalIntData).AllocatorInstance.Data,piVar3,iVar1);
    }
    else {
      FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::BeginSetArrayFromBP
                (this,false);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->InternalIntData,iVar1,Default);
      FNDIArrayImplHelper<unsigned_char>::CopyCpuToCpuMemory
                ((uchar *)(this->Owner->InternalIntData).AllocatorInstance.Data,piVar3,iVar1);
      FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::EndSetArrayFromBP(this);
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetNiagaraArrayUInt8Value @ 149155d80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayUInt8Value
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8> *this;
  UNiagaraDataInterfaceArrayUInt8 *pUVar4;
  code *pcVar5;
  undefined4 uVar6;
  FName FVar7;
  UNiagaraComponent *pUVar8;
  bool bVar9;
  int iVar10;
  UClass *pUVar11;
  UNiagaraDataInterface *pUVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  int local_res10 [4];
  undefined4 local_res20 [2];
  int local_48 [2];
  FName local_40;
  UNiagaraComponent *local_38 [2];
  
  local_38[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar8 = local_38[0];
  FVar7 = local_40;
  iVar10 = local_48[0];
  uVar6 = local_res20[0];
  bVar15 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar14 = (longlong)local_48[0];
  pUVar11 = UNiagaraDataInterfaceArrayUInt8::StaticClass();
  pUVar12 = UNiagaraFunctionLibrary::GetDataInterface(pUVar11,pUVar8,FVar7);
  if (pUVar12 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8> *)(pUVar12->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::BeginSetArrayFromBP(this,true);
  pUVar4 = this->Owner;
  piVar1 = &(pUVar4->InternalIntData).ArrayNum;
  if ((iVar10 < 0) || (*piVar1 <= iVar10)) {
    if (bVar15) goto LAB_149155fa9;
    iVar13 = (iVar10 - *piVar1) + 1;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar13,&(pUVar4->InternalIntData).AllocatorInstance,piVar1,
                        &(pUVar4->InternalIntData).ArrayMax);
    memset((pUVar4->InternalIntData).AllocatorInstance.Data + iVar10,0,(longlong)iVar13);
  }
  (pUVar4->InternalIntData).AllocatorInstance.Data[lVar14] = SUB41(uVar6,0);
LAB_149155fa9:
  FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::EndSetArrayFromBP(this);
  return;
}

// execSetNiagaraArrayVector2D @ 149155fd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TVector2<double> *pTVar3;
  FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2> *this;
  code *pcVar4;
  FName FVar5;
  UNiagaraComponent *pUVar6;
  bool bVar7;
  UClass *pUVar8;
  UNiagaraDataInterface *pUVar9;
  void **ppvVar10;
  FName local_res10 [2];
  UNiagaraComponent *local_res20;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar6 = local_res20;
  FVar5 = local_res10[0];
  ppvVar10 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar10 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppvVar10 + 1);
  pTVar3 = *ppvVar10;
  if (iVar1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar8 = UNiagaraDataInterfaceArrayFloat2::StaticClass();
  pUVar9 = UNiagaraFunctionLibrary::GetDataInterface(pUVar8,pUVar6,FVar5);
  if (pUVar9 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2> *)
           (pUVar9->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalFloatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TVector2<float>_>::CopyCpuToCpuMemory
                ((TVector2<float> *)(this->Owner->InternalFloatData).AllocatorInstance.Data,pTVar3,
                 iVar1);
    }
    else {
      FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::
      BeginSetArrayFromBP(this,false);
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->InternalFloatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TVector2<float>_>::CopyCpuToCpuMemory
                ((TVector2<float> *)(this->Owner->InternalFloatData).AllocatorInstance.Data,pTVar3,
                 iVar1);
      FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::
      EndSetArrayFromBP(this);
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetNiagaraArrayVector2DValue @ 1491561b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector2DValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2> *this;
  UNiagaraDataInterfaceArrayFloat2 *pUVar4;
  code *pcVar5;
  int iVar6;
  FName FVar7;
  UNiagaraComponent *pUVar8;
  bool bVar9;
  UClass *pUVar10;
  UNiagaraDataInterface *pUVar11;
  TVector2<double> *pTVar12;
  longlong lVar13;
  bool bVar14;
  int local_res10 [2];
  int local_res20 [2];
  FName local_38;
  UNiagaraComponent *local_30;
  TVector2<double> local_28;
  
  local_30 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  pTVar12 = &local_28;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar12 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar8 = local_30;
  FVar7 = local_38;
  iVar6 = local_res20[0];
  bVar14 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar13 = (longlong)local_res20[0];
  pUVar10 = UNiagaraDataInterfaceArrayFloat2::StaticClass();
  pUVar11 = UNiagaraFunctionLibrary::GetDataInterface(pUVar10,pUVar8,FVar7);
  if (pUVar11 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2> *)
         (pUVar11->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::
  BeginSetArrayFromBP(this,true);
  pUVar4 = this->Owner;
  piVar1 = &(pUVar4->InternalFloatData).ArrayNum;
  if ((iVar6 < 0) || (*piVar1 <= iVar6)) {
    if (bVar14) goto LAB_1491563d9;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(iVar6 - *piVar1) + 1,&(pUVar4->InternalFloatData).AllocatorInstance,piVar1,
               &(pUVar4->InternalFloatData).ArrayMax);
  }
  FNDIArrayImplHelper<UE::Math::TVector2<float>_>::CopyCpuToCpuMemory
            ((TVector2<float> *)((pUVar4->InternalFloatData).AllocatorInstance.Data + lVar13 * 8),
             pTVar12,1);
LAB_1491563d9:
  FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::EndSetArrayFromBP
            (this);
  return;
}

// execSetNiagaraArrayVector4 @ 149156400

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector4
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TVector4<double> *pTVar3;
  FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4> *this;
  code *pcVar4;
  FName FVar5;
  UNiagaraComponent *pUVar6;
  bool bVar7;
  UClass *pUVar8;
  UNiagaraDataInterface *pUVar9;
  void **ppvVar10;
  FName local_res10 [2];
  UNiagaraComponent *local_res20;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar6 = local_res20;
  FVar5 = local_res10[0];
  ppvVar10 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar10 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppvVar10 + 1);
  pTVar3 = *ppvVar10;
  if (iVar1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar8 = UNiagaraDataInterfaceArrayFloat4::StaticClass();
  pUVar9 = UNiagaraFunctionLibrary::GetDataInterface(pUVar8,pUVar6,FVar5);
  if (pUVar9 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4> *)
           (pUVar9->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalFloatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TVector4<float>_>::CopyCpuToCpuMemory
                ((TVector4<float> *)(this->Owner->InternalFloatData).AllocatorInstance.Data,pTVar3,
                 iVar1);
    }
    else {
      FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::
      BeginSetArrayFromBP(this,false);
      TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->InternalFloatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TVector4<float>_>::CopyCpuToCpuMemory
                ((TVector4<float> *)(this->Owner->InternalFloatData).AllocatorInstance.Data,pTVar3,
                 iVar1);
      FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::
      EndSetArrayFromBP(this);
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetNiagaraArrayVector4Value @ 1491565e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector4Value
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  int iVar3;
  FProperty *pFVar4;
  FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4> *this;
  UNiagaraDataInterfaceArrayFloat4 *pUVar5;
  code *pcVar6;
  int iVar7;
  FName FVar8;
  UNiagaraComponent *pUVar9;
  bool bVar10;
  int iVar11;
  UClass *pUVar12;
  UNiagaraDataInterface *pUVar13;
  longlong lVar14;
  TVector4<double>_u_0 *pTVar15;
  bool bVar16;
  int local_res10 [4];
  int local_res20 [2];
  FName local_58;
  UNiagaraComponent *local_50;
  TVector4<double>_u_0 local_48;
  
  local_50 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_48._s_0.X = 0.0;
  local_48._s_0.Y = 0.0;
  local_48._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_48._s_0.W = _UNK_15061cbc8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  pTVar15 = &local_48;
  if ((TVector4<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector4<double>_u_0 *)0x0) {
    pTVar15 = (TVector4<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar9 = local_50;
  FVar8 = local_58;
  iVar7 = local_res20[0];
  bVar16 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar14 = (longlong)local_res20[0];
  pUVar12 = UNiagaraDataInterfaceArrayFloat4::StaticClass();
  pUVar13 = UNiagaraFunctionLibrary::GetDataInterface(pUVar12,pUVar9,FVar8);
  if (pUVar13 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4> *)
         (pUVar13->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5472541801216737864>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                          ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::
  BeginSetArrayFromBP(this,true);
  pUVar5 = this->Owner;
  piVar1 = &(pUVar5->InternalFloatData).ArrayNum;
  if ((iVar7 < 0) || (*piVar1 <= iVar7)) {
    if (bVar16) goto LAB_14915683e;
    iVar3 = *piVar1;
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,0x10,(iVar7 - iVar3) + 1,&(pUVar5->InternalFloatData).AllocatorInstance
                        ,piVar1,&(pUVar5->InternalFloatData).ArrayMax);
    DefaultConstructItems<UE::Math::TVector4<float>,int>
              ((pUVar5->InternalFloatData).AllocatorInstance.Data + (longlong)iVar11 * 0x10,
               (iVar7 - iVar3) + 1);
  }
  FNDIArrayImplHelper<UE::Math::TVector4<float>_>::CopyCpuToCpuMemory
            ((TVector4<float> *)((pUVar5->InternalFloatData).AllocatorInstance.Data + lVar14 * 0x10)
             ,(TVector4<double> *)&pTVar15->_s_0,1);
LAB_14915683e:
  FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::EndSetArrayFromBP
            (this);
  return;
}

// execSetNiagaraArrayVector @ 149156860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TVector<double> *pTVar3;
  FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3> *this;
  code *pcVar4;
  FName FVar5;
  UNiagaraComponent *pUVar6;
  bool bVar7;
  UClass *pUVar8;
  UNiagaraDataInterface *pUVar9;
  void **ppvVar10;
  FName local_res10 [2];
  UNiagaraComponent *local_res20;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar6 = local_res20;
  FVar5 = local_res10[0];
  ppvVar10 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar10 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppvVar10 + 1);
  pTVar3 = *ppvVar10;
  if (iVar1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar8 = UNiagaraDataInterfaceArrayFloat3::StaticClass();
  pUVar9 = UNiagaraFunctionLibrary::GetDataInterface(pUVar8,pUVar6,FVar5);
  if (pUVar9 != (UNiagaraDataInterface *)0x0) {
    this = (FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3> *)
           (pUVar9->Proxy).Ptr;
    if (*(int *)&(this->PerInstanceData_GameThread).field_0x8 ==
        *(int *)&(this->PerInstanceData_GameThread).field_0x34) {
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->Owner->InternalFloatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TVector<float>_>::CopyCpuToCpuMemory
                ((TVector<float> *)(this->Owner->InternalFloatData).AllocatorInstance.Data,pTVar3,
                 iVar1);
    }
    else {
      FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::
      BeginSetArrayFromBP(this,false);
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
                (&this->Owner->InternalFloatData,iVar1,Default);
      FNDIArrayImplHelper<UE::Math::TVector<float>_>::CopyCpuToCpuMemory
                ((TVector<float> *)(this->Owner->InternalFloatData).AllocatorInstance.Data,pTVar3,
                 iVar1);
      FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::
      EndSetArrayFromBP(this);
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetNiagaraArrayVectorValue @ 149156a40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVectorValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3> *this;
  UNiagaraDataInterfaceArrayFloat3 *pUVar4;
  code *pcVar5;
  int iVar6;
  FName FVar7;
  UNiagaraComponent *pUVar8;
  bool bVar9;
  UClass *pUVar10;
  UNiagaraDataInterface *pUVar11;
  TVector<double> *pTVar12;
  longlong lVar13;
  bool bVar14;
  int local_res10 [2];
  int local_res20 [2];
  FName local_48;
  UNiagaraComponent *local_40;
  TVector<double> local_38;
  
  local_40 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  pTVar12 = &local_38;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar12 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar8 = local_40;
  FVar7 = local_48;
  iVar6 = local_res20[0];
  bVar14 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar13 = (longlong)local_res20[0];
  pUVar10 = UNiagaraDataInterfaceArrayFloat3::StaticClass();
  pUVar11 = UNiagaraFunctionLibrary::GetDataInterface(pUVar10,pUVar8,FVar7);
  if (pUVar11 == (UNiagaraDataInterface *)0x0) {
    return;
  }
  this = (FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3> *)
         (pUVar11->Proxy).Ptr;
  if ((1 < *(int *)&(this->PerInstanceData_GameThread).field_0x8 -
           *(int *)&(this->PerInstanceData_GameThread).field_0x34) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5472541801216737864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceArrayImpl.h"
                         ,0x248,"PerInstanceData_GameThread.Num() <= 1"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::BeginSetArrayFromBP
            (this,true);
  pUVar4 = this->Owner;
  piVar1 = &(pUVar4->InternalFloatData).ArrayNum;
  if ((iVar6 < 0) || (*piVar1 <= iVar6)) {
    if (bVar14) goto LAB_149156c79;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(iVar6 - *piVar1) + 1,&(pUVar4->InternalFloatData).AllocatorInstance,piVar1,
               &(pUVar4->InternalFloatData).ArrayMax);
  }
  FNDIArrayImplHelper<UE::Math::TVector<float>_>::CopyCpuToCpuMemory
            ((TVector<float> *)((pUVar4->InternalFloatData).AllocatorInstance.Data + lVar13 * 0xc),
             pTVar12,1);
LAB_149156c79:
  FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::EndSetArrayFromBP
            (this);
  return;
}

