// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 18

// StaticClass @ 14cf2fc00

UClass * __cdecl UARFaceGeometry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARFaceGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARFaceGeometry",
               &Z_Registration_Info_UClass_UARFaceGeometry.InnerSingleton,
               StaticRegisterNativesUARFaceGeometry,0x2c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARFaceGeometry>,
               InternalVTableHelperCtorCaller<UARFaceGeometry>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARFaceGeometry.InnerSingleton;
}

// UARFaceGeometry @ 14cf41370

UARFaceGeometry * __thiscall
UARFaceGeometry::UARFaceGeometry(UARFaceGeometry *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this,param_1);
  this->_padding_ = (longlong)&___7UARFaceGeometry__6B_;
  *(undefined8 *)&this->BlendShapes = 0;
  *(undefined8 *)&(this->BlendShapes).field_0x8 = 0;
  *(undefined8 *)&(this->BlendShapes).field_0x20 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x28 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x2c = 0x80;
  *(undefined4 *)&(this->BlendShapes).field_0x34 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BlendShapes).field_0x40 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x48 = 0;
  (this->VertexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexBuffer).ArrayNum = 0;
  (this->VertexBuffer).ArrayMax = 0;
  (this->IndexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexBuffer).ArrayNum = 0;
  (this->IndexBuffer).ArrayMax = 0;
  (this->UVs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVs).ArrayNum = 0;
  (this->UVs).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LeftEyeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LeftEyeTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LeftEyeTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LeftEyeTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LeftEyeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LeftEyeTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LeftEyeTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LeftEyeTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LeftEyeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LeftEyeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LeftEyeTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LeftEyeTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->RightEyeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RightEyeTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->RightEyeTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RightEyeTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RightEyeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RightEyeTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->RightEyeTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RightEyeTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->RightEyeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RightEyeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->RightEyeTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->RightEyeTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// UARFaceGeometry @ 14cf414c0

UARFaceGeometry * __thiscall UARFaceGeometry::UARFaceGeometry(UARFaceGeometry *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this);
  this->_padding_ = (longlong)&___7UARFaceGeometry__6B_;
  *(undefined8 *)&this->BlendShapes = 0;
  *(undefined8 *)&(this->BlendShapes).field_0x8 = 0;
  *(undefined8 *)&(this->BlendShapes).field_0x20 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x28 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x2c = 0x80;
  *(undefined4 *)&(this->BlendShapes).field_0x34 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BlendShapes).field_0x40 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x48 = 0;
  (this->VertexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexBuffer).ArrayNum = 0;
  (this->VertexBuffer).ArrayMax = 0;
  (this->IndexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexBuffer).ArrayNum = 0;
  (this->IndexBuffer).ArrayMax = 0;
  (this->UVs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVs).ArrayNum = 0;
  (this->UVs).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LeftEyeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LeftEyeTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LeftEyeTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LeftEyeTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LeftEyeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LeftEyeTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LeftEyeTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LeftEyeTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LeftEyeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LeftEyeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LeftEyeTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LeftEyeTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->RightEyeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RightEyeTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->RightEyeTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RightEyeTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RightEyeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RightEyeTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->RightEyeTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RightEyeTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->RightEyeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RightEyeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->RightEyeTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->RightEyeTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~UARFaceGeometry @ 14cf44240

void __thiscall UARFaceGeometry::~UARFaceGeometry(UARFaceGeometry *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UARFaceGeometry__6B_;
  pFVar1 = (this->UVs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IndexBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->BlendShapes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BlendShapes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->BlendShapes);
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  return;
}

// DebugDraw @ 14cf4cb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UARFaceGeometry::DebugDraw
          (UARFaceGeometry *this,UWorld *param_1,FLinearColor *param_2,float param_3,float param_4)

{
  undefined1 auStackY_128 [32];
  TVector<double>_u_0 local_e8;
  TQuat<double> local_c8;
  TRotator<double> local_a8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_88);
  local_e8._s_0.X = local_88.Translation.XY.m128d_f64[0];
  local_e8._s_0.Y = local_88.Translation.XY.m128d_f64[1];
  local_e8._s_0.Z = local_88.Translation.ZW.m128d_f64[0];
  local_c8.X = local_88.Rotation.XY.m128d_f64[0];
  local_c8.Y = local_88.Rotation.XY.m128d_f64[1];
  local_c8.Z = local_88.Rotation.ZW.m128d_f64[0];
  local_c8.W = local_88.Rotation.ZW.m128d_f64[1];
  UE::Math::TRotator<double>::TRotator<double>(&local_a8,&local_c8);
  DrawDebugCoordinateSystem
            (param_1,(TVector<double> *)&local_e8._s_0,&local_a8,
             (float)local_88.Scale3D.XY.m128d_f64[0],true,param_4,'\0',param_3);
  return;
}

// GetBlendShapeValue @ 14cf50590

float __thiscall
UARFaceGeometry::GetBlendShapeValue(UARFaceGeometry *this,EARFaceBlendShape param_1)

{
  longlong lVar1;
  int iVar2;
  float *pfVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->BlendShapes).field_0x8 != *(int *)&(this->BlendShapes).field_0x34) {
    puVar4 = *(undefined1 **)&(this->BlendShapes).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->BlendShapes).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->BlendShapes).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->BlendShapes;
      do {
        if (*(EARFaceBlendShape *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          pfVar3 = TMapBase<enum_EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>_>
                   ::FindChecked(&this->BlendShapes,param_1);
          return *pfVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0.0;
}

// GetBlendShapes @ 14cf50610

TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
* __thiscall
UARFaceGeometry::GetBlendShapes
          (UARFaceGeometry *this,
          TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
          *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  TSet<TTuple<enum_EARFaceBlendShape,float>,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>,FDefaultSetAllocator>
  ::operator=(__return_storage_ptr__,
              (TSet<TTuple<EARFaceBlendShape,float>,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>,FDefaultSetAllocator>
               *)&this->BlendShapes);
  return __return_storage_ptr__;
}

// GetLocalSpaceEyeTransform @ 14cf51d40

TTransform<double> * __thiscall
UARFaceGeometry::GetLocalSpaceEyeTransform(UARFaceGeometry *this,EAREye param_1)

{
  TTransform<double> *pTVar1;
  
  pTVar1 = &this->RightEyeTransform;
  if (param_1 == LeftEye) {
    pTVar1 = &this->LeftEyeTransform;
  }
  return pTVar1;
}

// GetNetworkPayload @ 14cf52570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARFaceGeometry::GetNetworkPayload(UARFaceGeometry *this,FARFaceUpdatePayload *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStack_108 [32];
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_108;
  UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_e8);
  auVar40._0_8_ =
       (this->LeftEyeTransform).Translation.ZW.m128d_f64[0] * local_e8.Scale3D.ZW.m128d_f64[0];
  auVar40._8_8_ = local_e8.Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar34 = (this->LeftEyeTransform).Translation.XY.m128d_f64[0] * local_e8.Scale3D.XY.m128d_f64[0];
  dVar39 = (this->LeftEyeTransform).Translation.XY.m128d_f64[1] * local_e8.Scale3D.XY.m128d_f64[1];
  dVar6 = local_e8.Rotation.ZW.m128d_f64[0];
  dVar5 = local_e8.Rotation.XY.m128d_f64[1];
  auVar30._8_4_ = SUB84(dVar39,0);
  auVar30._0_8_ = dVar34;
  uVar29 = (undefined4)((ulonglong)dVar39 >> 0x20);
  auVar30._12_4_ = uVar29;
  dVar7 = local_e8.Rotation.ZW.m128d_f64[1];
  auVar10._8_4_ = SUB84(dVar39,0);
  auVar10._0_8_ = dVar34;
  auVar10._12_4_ = uVar29;
  auVar11 = blendpd(auVar10,auVar40,2);
  dVar4 = local_e8.Rotation.XY.m128d_f64[0];
  auVar44 = blendpd((undefined1  [16])local_e8.Rotation.XY.m128d_f64,
                    (undefined1  [16])local_e8.Rotation.ZW.m128d_f64,2);
  auVar31._0_8_ = auVar30._8_8_ * dVar4 - dVar5 * dVar34;
  auVar31._8_8_ = auVar40._0_8_ * dVar5 - dVar6 * dVar39;
  dVar8 = auVar44._0_8_;
  dVar9 = auVar44._8_8_;
  auVar12._0_8_ = auVar11._0_8_ * dVar6 - dVar8 * auVar40._0_8_;
  auVar12._8_8_ = auVar11._8_8_ * dVar7 - dVar9 * auVar40._8_8_;
  auVar11 = blendpd(auVar31,auVar12,2);
  dVar2 = auVar31._8_8_ + auVar31._8_8_;
  dVar3 = auVar12._0_8_ + auVar12._0_8_;
  uVar29 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar32._0_8_ = auVar11._0_8_ + auVar11._0_8_;
  auVar32._8_8_ = auVar11._8_8_ + auVar11._8_8_;
  auVar23._8_4_ = SUB84(dVar3,0);
  auVar23._0_8_ = dVar2;
  auVar23._12_4_ = uVar29;
  auVar13._8_4_ = SUB84(dVar3,0);
  auVar13._0_8_ = dVar2;
  auVar13._12_4_ = uVar29;
  auVar11 = blendpd(auVar13,auVar32,2);
  auVar24._0_8_ = auVar23._8_8_ * dVar4 - dVar2 * dVar5;
  auVar24._8_8_ = auVar32._0_8_ * dVar5 - dVar3 * dVar6;
  auVar14._0_8_ = auVar11._0_8_ * dVar6 - auVar32._0_8_ * dVar8;
  auVar14._8_8_ = auVar11._8_8_ * dVar7 - auVar32._8_8_ * dVar9;
  auVar44 = blendpd(auVar24,auVar14,2);
  dVar3 = dVar3 * dVar7 + dVar39 + auVar14._0_8_ + local_e8.Translation.XY.m128d_f64[1];
  auVar11._8_4_ = SUB84(dVar3,0);
  auVar11._0_8_ = dVar2 * dVar7 + dVar34 + auVar24._8_8_ + local_e8.Translation.XY.m128d_f64[0];
  auVar11._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&(param_1->LeftEyePosition).field0_0x0 = auVar11;
  (param_1->LeftEyePosition).field0_0x0._s_0.Z =
       auVar32._0_8_ * dVar7 + auVar40._0_8_ + auVar44._0_8_ + local_e8.Translation.ZW.m128d_f64[0];
  auVar35._0_8_ =
       (this->RightEyeTransform).Translation.ZW.m128d_f64[0] * local_e8.Scale3D.ZW.m128d_f64[0];
  auVar35._8_8_ = local_e8.Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar34 = (this->RightEyeTransform).Translation.XY.m128d_f64[0] * local_e8.Scale3D.XY.m128d_f64[0];
  dVar39 = (this->RightEyeTransform).Translation.XY.m128d_f64[1] * local_e8.Scale3D.XY.m128d_f64[1];
  auVar41._8_4_ = SUB84(dVar39,0);
  auVar41._0_8_ = dVar34;
  uVar29 = (undefined4)((ulonglong)dVar39 >> 0x20);
  auVar41._12_4_ = uVar29;
  auVar15._8_4_ = SUB84(dVar39,0);
  auVar15._0_8_ = dVar34;
  auVar15._12_4_ = uVar29;
  auVar11 = blendpd(auVar15,auVar35,2);
  auVar42._0_8_ = auVar41._8_8_ * dVar4 - dVar34 * dVar5;
  auVar42._8_8_ = auVar35._0_8_ * dVar5 - dVar39 * dVar6;
  auVar16._0_8_ = auVar11._0_8_ * dVar6 - auVar35._0_8_ * dVar8;
  auVar16._8_8_ = auVar11._8_8_ * dVar7 - auVar35._8_8_ * dVar9;
  dVar2 = auVar42._8_8_ + auVar42._8_8_;
  dVar3 = auVar16._0_8_ + auVar16._0_8_;
  uVar29 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar11 = blendpd(auVar42,auVar16,2);
  auVar25._8_4_ = SUB84(dVar3,0);
  auVar25._0_8_ = dVar2;
  auVar25._12_4_ = uVar29;
  auVar43._0_8_ = auVar11._0_8_ + auVar11._0_8_;
  auVar43._8_8_ = auVar11._8_8_ + auVar11._8_8_;
  auVar17._8_4_ = SUB84(dVar3,0);
  auVar17._0_8_ = dVar2;
  auVar17._12_4_ = uVar29;
  auVar11 = blendpd(auVar17,auVar43,2);
  auVar26._0_8_ = auVar25._8_8_ * dVar4 - dVar2 * dVar5;
  auVar26._8_8_ = auVar43._0_8_ * dVar5 - dVar3 * dVar6;
  auVar18._0_8_ = auVar11._0_8_ * dVar6 - auVar43._0_8_ * dVar8;
  auVar18._8_8_ = auVar11._8_8_ * dVar7 - auVar43._8_8_ * dVar9;
  auVar11 = blendpd(auVar26,auVar18,2);
  dVar3 = dVar3 * dVar7 + dVar39 + auVar18._0_8_ + local_e8.Translation.XY.m128d_f64[1];
  auVar44._8_4_ = SUB84(dVar3,0);
  auVar44._0_8_ = dVar2 * dVar7 + dVar34 + auVar26._8_8_ + local_e8.Translation.XY.m128d_f64[0];
  auVar44._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&(param_1->RightEyePosition).field0_0x0 = auVar44;
  (param_1->RightEyePosition).field0_0x0._s_0.Z =
       auVar43._0_8_ * dVar7 + auVar35._0_8_ + auVar11._0_8_ + local_e8.Translation.ZW.m128d_f64[0];
  auVar33._0_8_ = (this->LookAtTarget).field0_0x0._s_0.Z * local_e8.Scale3D.ZW.m128d_f64[0];
  auVar33._8_8_ = local_e8.Scale3D.ZW.m128d_f64[1] * 0.0;
  local_e8.Scale3D.XY.m128d_f64[0] =
       local_e8.Scale3D.XY.m128d_f64[0] * (this->LookAtTarget).field0_0x0._s_0.X;
  local_e8.Scale3D.XY.m128d_f64[1] =
       local_e8.Scale3D.XY.m128d_f64[1] * (this->LookAtTarget).field0_0x0._s_0.Y;
  uVar29 = (undefined4)((ulonglong)local_e8.Scale3D.XY.m128d_f64[1] >> 0x20);
  auVar36._8_4_ = SUB84(local_e8.Scale3D.XY.m128d_f64[1],0);
  auVar36._0_8_ = local_e8.Scale3D.XY.m128d_f64[0];
  auVar36._12_4_ = uVar29;
  auVar19._8_4_ = SUB84(local_e8.Scale3D.XY.m128d_f64[1],0);
  auVar19._0_8_ = local_e8.Scale3D.XY.m128d_f64[0];
  auVar19._12_4_ = uVar29;
  auVar11 = blendpd(auVar19,auVar33,2);
  auVar37._0_8_ = auVar36._8_8_ * dVar4 - local_e8.Scale3D.XY.m128d_f64[0] * dVar5;
  auVar37._8_8_ = auVar33._0_8_ * dVar5 - local_e8.Scale3D.XY.m128d_f64[1] * dVar6;
  auVar20._0_8_ = auVar11._0_8_ * dVar6 - auVar33._0_8_ * dVar8;
  auVar20._8_8_ = auVar11._8_8_ * dVar7 - auVar33._8_8_ * dVar9;
  auVar11 = blendpd(auVar37,auVar20,2);
  dVar2 = auVar37._8_8_ + auVar37._8_8_;
  dVar3 = auVar20._0_8_ + auVar20._0_8_;
  uVar29 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar38._0_8_ = auVar11._0_8_ + auVar11._0_8_;
  auVar38._8_8_ = auVar11._8_8_ + auVar11._8_8_;
  auVar27._8_4_ = SUB84(dVar3,0);
  auVar27._0_8_ = dVar2;
  auVar27._12_4_ = uVar29;
  auVar21._8_4_ = SUB84(dVar3,0);
  auVar21._0_8_ = dVar2;
  auVar21._12_4_ = uVar29;
  auVar11 = blendpd(auVar21,auVar38,2);
  auVar28._0_8_ = auVar27._8_8_ * dVar4 - dVar2 * dVar5;
  auVar28._8_8_ = auVar38._0_8_ * dVar5 - dVar3 * dVar6;
  auVar22._0_8_ = auVar11._0_8_ * dVar6 - auVar38._0_8_ * dVar8;
  auVar22._8_8_ = auVar11._8_8_ * dVar7 - auVar38._8_8_ * dVar9;
  auVar11 = blendpd(auVar28,auVar22,2);
  local_e8.Translation.XY.m128d_f64[1] =
       dVar3 * dVar7 + local_e8.Scale3D.XY.m128d_f64[1] + auVar22._0_8_ +
       local_e8.Translation.XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(local_e8.Translation.XY.m128d_f64[1],0);
  auVar1._0_8_ = dVar2 * dVar7 + local_e8.Scale3D.XY.m128d_f64[0] + auVar28._8_8_ +
                 local_e8.Translation.XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)local_e8.Translation.XY.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])&(param_1->LookAtTarget).field0_0x0 = auVar1;
  (param_1->LookAtTarget).field0_0x0._s_0.Z =
       auVar38._0_8_ * dVar7 + auVar33._0_8_ + auVar11._0_8_ + local_e8.Translation.ZW.m128d_f64[0];
  UARTrackedGeometry::UpdateSessionPayload((UARTrackedGeometry *)this,&param_1->SessionPayload);
  return;
}

// GetPrivateStaticClass @ 14cf54510

UClass * __cdecl UARFaceGeometry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARFaceGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARFaceGeometry",
               &Z_Registration_Info_UClass_UARFaceGeometry.InnerSingleton,
               StaticRegisterNativesUARFaceGeometry,0x2c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARFaceGeometry>,
               InternalVTableHelperCtorCaller<UARFaceGeometry>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARFaceGeometry.InnerSingleton;
}

// GetWorldSpaceEyeTransform @ 14cf568e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UARFaceGeometry::GetWorldSpaceEyeTransform
          (UARFaceGeometry *this,TTransform<double> *__return_storage_ptr__,EAREye param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TTransform<double> *pTVar4;
  TTransform<double> *pTVar5;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1 == LeftEye) {
    pTVar4 = UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_78);
    pTVar5 = &this->LeftEyeTransform;
  }
  else {
    pTVar4 = UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_78);
    pTVar5 = &this->RightEyeTransform;
  }
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar3;
  UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,pTVar5,pTVar4);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUARFaceGeometry @ 14cf61030

void __cdecl UARFaceGeometry::StaticRegisterNativesUARFaceGeometry(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UARFaceGeometry_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateFaceGeometry @ 14cf66390

void __thiscall
UARFaceGeometry::UpdateFaceGeometry
          (UARFaceGeometry *this,TSharedRef<FARSupportInterface,1> *param_1,uint param_2,
          double param_3,TTransform<double> *param_4,TTransform<double> *param_5,
          TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
          *param_6,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_7,
          TArray<int,TSizedDefaultAllocator<32>_> *param_8,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_9,
          TTransform<double> *param_10,TTransform<double> *param_11,TVector<double> *param_12)

{
  undefined1 *_Dst;
  int *piVar1;
  TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
  *pTVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  void *pvVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  
  UARTrackedGeometry::UpdateTrackedGeometry
            ((UARTrackedGeometry *)this,param_1,param_2,param_3,param_4,param_5);
  pTVar2 = &this->BlendShapes;
  if (pTVar2 != param_6) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    *(undefined8 *)pTVar2 = *(undefined8 *)param_6;
    _Dst = &(this->BlendShapes).field_0x10;
    *(undefined8 *)param_6 = 0;
    *(undefined4 *)&(this->BlendShapes).field_0x8 = *(undefined4 *)&param_6->field_0x8;
    *(undefined4 *)&(this->BlendShapes).field_0xc = *(undefined4 *)&param_6->field_0xc;
    *(undefined8 *)&param_6->field_0x8 = 0;
    if (_Dst != &param_6->field_0x10) {
      if (*(longlong *)&param_6->field_0x20 == 0) {
        memmove(_Dst,&param_6->field_0x10,0x10);
      }
      pvVar7 = *(void **)&(this->BlendShapes).field_0x20;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      *(undefined8 *)&(this->BlendShapes).field_0x20 = *(undefined8 *)&param_6->field_0x20;
      *(undefined8 *)&param_6->field_0x20 = 0;
      *(undefined4 *)&(this->BlendShapes).field_0x28 = *(undefined4 *)&param_6->field_0x28;
      *(undefined4 *)&(this->BlendShapes).field_0x2c = *(undefined4 *)&param_6->field_0x2c;
      *(undefined8 *)&param_6->field_0x28 = 0;
    }
    *(undefined4 *)&(this->BlendShapes).field_0x30 = *(undefined4 *)&param_6->field_0x30;
    *(undefined4 *)&(this->BlendShapes).field_0x34 = *(undefined4 *)&param_6->field_0x34;
    *(undefined4 *)&param_6->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_6->field_0x34 = 0;
    if (*(longlong *)&param_6->field_0x40 == 0) {
      *(undefined4 *)&(this->BlendShapes).field_0x38 = *(undefined4 *)&param_6->field_0x38;
    }
    pvVar7 = *(void **)&(this->BlendShapes).field_0x40;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    *(undefined8 *)&(this->BlendShapes).field_0x40 = *(undefined8 *)&param_6->field_0x40;
    *(undefined8 *)&param_6->field_0x40 = 0;
    *(undefined4 *)&(this->BlendShapes).field_0x48 = *(undefined4 *)&param_6->field_0x48;
    *(undefined4 *)&param_6->field_0x48 = 0;
  }
  pTVar3 = &this->VertexBuffer;
  if (pTVar3 != param_7) {
    pFVar8 = (pTVar3->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar3->AllocatorInstance).Data = (param_7->AllocatorInstance).Data;
    (param_7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->VertexBuffer).ArrayNum = param_7->ArrayNum;
    (this->VertexBuffer).ArrayMax = param_7->ArrayMax;
    param_7->ArrayNum = 0;
    param_7->ArrayMax = 0;
  }
  pTVar4 = &this->UVs;
  if (pTVar4 != param_9) {
    pFVar8 = (pTVar4->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar4->AllocatorInstance).Data = (param_9->AllocatorInstance).Data;
    (param_9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UVs).ArrayNum = param_9->ArrayNum;
    (this->UVs).ArrayMax = param_9->ArrayMax;
    param_9->ArrayNum = 0;
    param_9->ArrayMax = 0;
  }
  if ((this->IndexBuffer).ArrayNum == 0) {
    pTVar5 = &this->IndexBuffer;
    if (pTVar5 != param_8) {
      iVar6 = param_8->ArrayNum;
      piVar1 = &(this->IndexBuffer).ArrayMax;
      pFVar8 = (param_8->AllocatorInstance).Data;
      (this->IndexBuffer).ArrayNum = iVar6;
      if ((iVar6 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar6,*piVar1,&pTVar5->AllocatorInstance,iVar6,piVar1);
        if (iVar6 != 0) {
          memcpy((pTVar5->AllocatorInstance).Data,pFVar8,(longlong)iVar6 << 2);
        }
      }
    }
  }
  dVar9 = (param_10->Rotation).XY.m128d_f64[1];
  (this->LeftEyeTransform).Rotation.XY.m128d_f64[0] = (param_10->Rotation).XY.m128d_f64[0];
  (this->LeftEyeTransform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_10->Rotation).ZW.m128d_f64[1];
  (this->LeftEyeTransform).Rotation.ZW.m128d_f64[0] = (param_10->Rotation).ZW.m128d_f64[0];
  (this->LeftEyeTransform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_10->Translation).XY.m128d_f64[1];
  (this->LeftEyeTransform).Translation.XY.m128d_f64[0] = (param_10->Translation).XY.m128d_f64[0];
  (this->LeftEyeTransform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_10->Translation).ZW.m128d_f64[1];
  (this->LeftEyeTransform).Translation.ZW.m128d_f64[0] = (param_10->Translation).ZW.m128d_f64[0];
  (this->LeftEyeTransform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_10->Scale3D).XY.m128d_f64[1];
  (this->LeftEyeTransform).Scale3D.XY.m128d_f64[0] = (param_10->Scale3D).XY.m128d_f64[0];
  (this->LeftEyeTransform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_10->Scale3D).ZW.m128d_f64[1];
  (this->LeftEyeTransform).Scale3D.ZW.m128d_f64[0] = (param_10->Scale3D).ZW.m128d_f64[0];
  (this->LeftEyeTransform).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_11->Rotation).XY.m128d_f64[1];
  (this->RightEyeTransform).Rotation.XY.m128d_f64[0] = (param_11->Rotation).XY.m128d_f64[0];
  (this->RightEyeTransform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_11->Rotation).ZW.m128d_f64[1];
  (this->RightEyeTransform).Rotation.ZW.m128d_f64[0] = (param_11->Rotation).ZW.m128d_f64[0];
  (this->RightEyeTransform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_11->Translation).XY.m128d_f64[1];
  (this->RightEyeTransform).Translation.XY.m128d_f64[0] = (param_11->Translation).XY.m128d_f64[0];
  (this->RightEyeTransform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_11->Translation).ZW.m128d_f64[1];
  (this->RightEyeTransform).Translation.ZW.m128d_f64[0] = (param_11->Translation).ZW.m128d_f64[0];
  (this->RightEyeTransform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_11->Scale3D).XY.m128d_f64[1];
  (this->RightEyeTransform).Scale3D.XY.m128d_f64[0] = (param_11->Scale3D).XY.m128d_f64[0];
  (this->RightEyeTransform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_11->Scale3D).ZW.m128d_f64[1];
  (this->RightEyeTransform).Scale3D.ZW.m128d_f64[0] = (param_11->Scale3D).ZW.m128d_f64[0];
  (this->RightEyeTransform).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_12->field0_0x0)._s_0.Y;
  (this->LookAtTarget).field0_0x0._s_0.X = (param_12->field0_0x0)._s_0.X;
  (this->LookAtTarget).field0_0x0._s_0.Y = dVar9;
  (this->LookAtTarget).field0_0x0._s_0.Z = (param_12->field0_0x0)._s_0.Z;
  *(undefined1 *)&this->_padding_ = 7;
  return;
}

// __VTableCtorCaller @ 14cf6a490

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UARFaceGeometry::__VTableCtorCaller(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UARTrackedGeometry *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = GetPrivateStaticClass();
  this = (UARTrackedGeometry *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this,param_1);
    *(undefined ***)this = &___7UARFaceGeometry__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined4 *)this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64 = 0;
    *(undefined4 *)((longlong)this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64 + 4) = 0x80;
    *(undefined4 *)(this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64 + 0xc) = 0;
    this[1].LocalToTrackingTransform.Rotation.ZW.m128d_f64[1] = 0.0;
    *(undefined4 *)this[1].LocalToTrackingTransform.Translation.XY.m128d_f64 = 0;
    this[1].LocalToTrackingTransform.Translation.XY.m128d_f64[1] = 0.0;
    this[1].LocalToTrackingTransform.Translation.ZW.m128d_f64[0] = 0.0;
    this[1].LocalToTrackingTransform.Translation.ZW.m128d_f64[1] = 0.0;
    this[1].LocalToTrackingTransform.Scale3D.XY.m128d_f64[0] = 0.0;
    this[1].LocalToTrackingTransform.Scale3D.XY.m128d_f64[1] = 0.0;
    this[1].LocalToTrackingTransform.Scale3D.ZW.m128d_f64[0] = 0.0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1].LocalToAlignedTrackingTransform.Rotation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1].LocalToAlignedTrackingTransform.Rotation.XY.m128d_f64[1] = (double)fVar1;
    this[1].LocalToAlignedTrackingTransform.Rotation.ZW.m128d_f64[0] = (double)fVar2;
    this[1].LocalToAlignedTrackingTransform.Rotation.ZW.m128d_f64[1] = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1].LocalToAlignedTrackingTransform.Translation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1].LocalToAlignedTrackingTransform.Translation.XY.m128d_f64[1] = (double)fVar1;
    this[1].LocalToAlignedTrackingTransform.Translation.ZW.m128d_f64[0] = (double)fVar2;
    this[1].LocalToAlignedTrackingTransform.Translation.ZW.m128d_f64[1] = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1].LocalToAlignedTrackingTransform.Scale3D.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1].LocalToAlignedTrackingTransform.Scale3D.XY.m128d_f64[1] = (double)fVar1;
    this[1].LocalToAlignedTrackingTransform.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
    this[1].LocalToAlignedTrackingTransform.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[1].TrackingState = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1].NativeResource.Ptr = (IARRef *)(double)fVar1;
    this[1].UnderlyingMesh.field0_0x0 = (TObjectPtr<UMRMeshComponent>_u_0)(double)fVar2;
    *(double *)&this[1].ObjectClassification = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1].ARSystem.Object =
         (FARSupportInterface *)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1].ARSystem.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(double)fVar1;
    *(double *)&this[1].LastUpdateFrameNumber = (double)fVar2;
    this[1].LastUpdateTimestamp = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1].DebugName = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1].AnchorName.Data.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar1;
    *(double *)&this[1].AnchorName.Data.ArrayNum = (double)fVar2;
    *(double *)&this[1].field_0x158 = (double)fVar3;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execGetBlendShapeValue @ 14cf6d570

void __cdecl UARFaceGeometry::execGetBlendShapeValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  int iVar3;
  float *pfVar4;
  undefined1 *puVar5;
  float fVar6;
  EARFaceBlendShape local_res8 [8];
  
  local_res8[0] = EyeBlinkLeft;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar6 = 0.0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[9].field_0x18 != *(int *)&param_1[10].field_0x1c) {
    puVar5 = *(undefined1 **)(param_1 + 0xb);
    if (*(undefined1 **)(param_1 + 0xb) == (undefined1 *)0x0) {
      puVar5 = &param_1[10].field_0x20;
    }
    iVar3 = *(int *)(puVar5 + ((ulonglong)(*(int *)&param_1[0xb].field_0x8 - 1) &
                              (ulonglong)local_res8[0]) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&param_1[9].field_0x10;
      do {
        if (*(EARFaceBlendShape *)(lVar2 + (longlong)iVar3 * 0x10) == local_res8[0]) {
          pfVar4 = TMapBase<enum_EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>_>
                   ::FindChecked(&param_1[9].field_0x10,local_res8[0]);
          fVar6 = *pfVar4;
          break;
        }
        iVar3 = *(int *)(lVar2 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  *(float *)param_3 = fVar6;
  return;
}

// execGetBlendShapes @ 14cf6d660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UARFaceGeometry::execGetBlendShapes(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  TSet<TTuple<enum_EARFaceBlendShape,float>,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>,FDefaultSetAllocator>
  ::operator=(local_78,(TSet<TTuple<EARFaceBlendShape,float>,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>,FDefaultSetAllocator>
                        *)&param_1[9].field_0x10);
  TSet<TTuple<enum_EARFaceBlendShape,float>,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>,FDefaultSetAllocator>
  ::operator=(param_3,(TSet<TTuple<EARFaceBlendShape,float>,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>,FDefaultSetAllocator>
                       *)local_78);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execGetLocalSpaceEyeTransform @ 14cf6e530

void __cdecl
UARFaceGeometry::execGetLocalSpaceEyeTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  longlong lVar3;
  char local_res10 [8];
  
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = 0x260;
  if (local_res10[0] == '\0') {
    lVar3 = 0x200;
  }
  uVar2 = *(undefined8 *)((longlong)(&param_1->field_0x0 + lVar3) + 8);
  *(undefined8 *)param_3 = *(undefined8 *)(&param_1->field_0x0 + lVar3);
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)(&param_1->field_0x10 + lVar3) + 8);
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)(&param_1->field_0x10 + lVar3);
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)((longlong)(&param_1->field_0x20 + lVar3) + 8);
  *(undefined8 *)((longlong)param_3 + 0x20) = *(undefined8 *)(&param_1->field_0x20 + lVar3);
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar2;
  uVar2 = *(undefined8 *)((longlong)(&param_1[1].field_0x8 + lVar3) + 8);
  *(undefined8 *)((longlong)param_3 + 0x30) = *(undefined8 *)(&param_1[1].field_0x8 + lVar3);
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar2;
  uVar2 = *(undefined8 *)((longlong)(&param_1[1].field_0x18 + lVar3) + 8);
  *(undefined8 *)((longlong)param_3 + 0x40) = *(undefined8 *)(&param_1[1].field_0x18 + lVar3);
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar2;
  uVar2 = *(undefined8 *)((longlong)(&param_1[2].field_0x0 + lVar3) + 8);
  *(undefined8 *)((longlong)param_3 + 0x50) = *(undefined8 *)(&param_1[2].field_0x0 + lVar3);
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar2;
  return;
}

// execGetWorldSpaceEyeTransform @ 14cf6ff70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARFaceGeometry::execGetWorldSpaceEyeTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TTransform<double> *pTVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_118 [32];
  char local_f8 [16];
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_f8[0] == '\0') {
    pTVar2 = UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)param_1,&local_88);
    pTVar3 = (TTransform<double> *)&param_1[0xc].field_0x20;
  }
  else {
    pTVar2 = UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)param_1,&local_88);
    pTVar3 = (TTransform<double> *)&param_1[0xf].field_0x8;
  }
  local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_e8,pTVar3,pTVar2);
  *(double *)param_3 = local_e8.Rotation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = local_e8.Rotation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = local_e8.Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = local_e8.Rotation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = local_e8.Translation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = local_e8.Translation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = local_e8.Translation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = local_e8.Translation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = local_e8.Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = local_e8.Scale3D.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = local_e8.Scale3D.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = local_e8.Scale3D.ZW.m128d_f64[1];
  return;
}

