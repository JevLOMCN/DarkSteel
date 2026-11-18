// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 27

// StaticClass @ 148702700

UClass * __cdecl USparseVolumeTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USparseVolumeTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SparseVolumeTexture",
               &Z_Registration_Info_UClass_USparseVolumeTexture.InnerSingleton,
               StaticRegisterNativesUSparseVolumeTexture,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USparseVolumeTexture>,
               InternalVTableHelperCtorCaller<USparseVolumeTexture>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USparseVolumeTexture.InnerSingleton;
}

// USparseVolumeTexture @ 148712f90

USparseVolumeTexture * __thiscall
USparseVolumeTexture::USparseVolumeTexture(USparseVolumeTexture *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USparseVolumeTexture__6B_;
  return this;
}

// USparseVolumeTexture @ 148712fc0

USparseVolumeTexture * __thiscall
USparseVolumeTexture::USparseVolumeTexture(USparseVolumeTexture *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USparseVolumeTexture__6B_;
  return this;
}

// ~USparseVolumeTexture @ 148714c70

void __thiscall USparseVolumeTexture::~USparseVolumeTexture(USparseVolumeTexture *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetFallbackValue @ 14873baf0

TVector4<float> * __thiscall
USparseVolumeTexture::GetFallbackValue
          (USparseVolumeTexture *this,TVector4<float> *__return_storage_ptr__,int param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetFormat @ 14873bd10

EPixelFormat __thiscall USparseVolumeTexture::GetFormat(USparseVolumeTexture *this,int param_1)

{
  return PF_Unknown;
}

// GetFrameTransform @ 14873c020

TTransform<double> * __thiscall
USparseVolumeTexture::GetFrameTransform
          (USparseVolumeTexture *this,TTransform<double> *__return_storage_ptr__)

{
  __m128d _Var1;
  __m128d _Var2;
  
  _Var1.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var2.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var2.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var1.m128d_f64;
  return __return_storage_ptr__;
}

// GetNumFrames @ 14873cd00

int __thiscall USparseVolumeTexture::GetNumFrames(USparseVolumeTexture *this)

{
  return 0;
}

// GetNumMipLevels @ 14873cd60

int __thiscall USparseVolumeTexture::GetNumMipLevels(USparseVolumeTexture *this)

{
  return 0;
}

// GetOptimalStreamingMipLevel @ 14873d590

float __thiscall
USparseVolumeTexture::GetOptimalStreamingMipLevel
          (USparseVolumeTexture *this,TBoxSphereBounds<double,double> *param_1,float param_2)

{
  code *pcVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FStreamingManagerCollection *pFVar14;
  int *piVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  undefined8 extraout_XMM0_Qa;
  double dVar21;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar22 [16];
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 local_b8 [176];
  
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                          ,0x3db,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    fVar19 = (float)(*pcVar1)();
    return fVar19;
  }
  pFVar14 = IStreamingManager::Get_Concurrent();
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3ff0000000000000;
  if (pFVar14 == (FStreamingManagerCollection *)0x0) {
    fVar19 = 0.0;
  }
  else {
    uVar16 = 0;
    lVar18 = (longlong)IStreamingManager::CurrentViewInfos.ArrayNum;
    fVar19 = __real_7f7fffff;
    if (0 < IStreamingManager::CurrentViewInfos.ArrayNum) {
      lVar17 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar16 < IStreamingManager::CurrentViewInfos.ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar1 = (code *)swi(3);
          fVar19 = (float)(*pcVar1)();
          return fVar19;
        }
        dVar21 = (param_1->BoxExtent).field0_0x0._s_0.Y;
        uVar24 = SUB84(dVar21,0);
        uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
        dVar5 = *(double *)(IStreamingManager::CurrentViewInfos.AllocatorInstance.Data + lVar17 + 8)
                - (param_1->Origin).field0_0x0._s_0.Y;
        dVar4 = *(double *)(IStreamingManager::CurrentViewInfos.AllocatorInstance.Data + lVar17) -
                (param_1->Origin).field0_0x0._s_0.X;
        dVar2 = *(double *)
                 (IStreamingManager::CurrentViewInfos.AllocatorInstance.Data + lVar17 + 0x10) -
                (param_1->Origin).field0_0x0._s_0.Z;
        fVar20 = *(float *)(IStreamingManager::CurrentViewInfos.AllocatorInstance.Data +
                           lVar17 + 0x1c);
        dVar6 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar10,SUB84(dVar5,0) & uVar9) -
                dVar21;
        dVar5 = *(double *)&(param_1->BoxExtent).field0_0x0;
        if (dVar21 <= dVar5) {
          uVar24 = SUB84(dVar5,0);
          uVar25 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar10,SUB84(dVar4,0) & uVar9) -
                (param_1->BoxExtent).field0_0x0._s_0.X;
        dVar5 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar10,SUB84(dVar2,0) & uVar9) -
                (param_1->BoxExtent).field0_0x0._s_0.Z;
        dVar21 = *(double *)((longlong)&(param_1->BoxExtent).field0_0x0 + 0x10);
        if ((double)CONCAT44(uVar25,uVar24) <= dVar21) {
          uVar24 = SUB84(dVar21,0);
          uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
        }
        piVar15 = (int *)(**(code **)(*(longlong *)this + 0x2e0))(this,local_b8);
        auVar22._8_8_ = extraout_XMM0_Qb;
        auVar22._0_8_ = extraout_XMM0_Qa;
        iVar13 = piVar15[1];
        if (*piVar15 < piVar15[1]) {
          iVar13 = *piVar15;
        }
        iVar7 = piVar15[2];
        if (iVar13 < piVar15[2]) {
          iVar7 = iVar13;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = dVar4 * dVar4 + dVar6 * dVar6 + dVar5 * dVar5;
        auVar22 = sqrtpd(auVar22,auVar3);
        dVar21 = auVar22._0_8_;
        if (auVar22._0_8_ <= dVar8) {
          dVar21 = dVar8;
        }
        fVar20 = logf((float)iVar7 /
                      (float)(((double)CONCAT44(uVar25,uVar24) + (double)CONCAT44(uVar25,uVar24)) /
                             (double)((float)dVar21 * (__real_40000000 / fVar20))));
        fVar23 = fVar20 * __real_3fb8aa3b + param_2 + GSVTStreamingRequestMipBias;
        iVar13 = (**(code **)(*(longlong *)this + 0x2d0))(this);
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 0x40;
        fVar20 = (float)iVar13 - __real_3f800000;
        if (fVar23 <= (float)iVar13 - __real_3f800000) {
          fVar20 = fVar23;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        if (fVar19 <= fVar20) {
          fVar20 = fVar19;
        }
        fVar19 = fVar20;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
  }
  return fVar19;
}

// GetPrivateStaticClass @ 14873e810

UClass * __cdecl USparseVolumeTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USparseVolumeTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SparseVolumeTexture",
               &Z_Registration_Info_UClass_USparseVolumeTexture.InnerSingleton,
               StaticRegisterNativesUSparseVolumeTexture,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USparseVolumeTexture>,
               InternalVTableHelperCtorCaller<USparseVolumeTexture>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USparseVolumeTexture.InnerSingleton;
}

// GetSizeX @ 14873f6e0

int __thiscall USparseVolumeTexture::GetSizeX(USparseVolumeTexture *this)

{
  int *piVar1;
  undefined1 local_18 [24];
  
  piVar1 = (int *)(**(code **)(*(longlong *)this + 0x2e0))(this,local_18);
  return *piVar1;
}

// GetSizeY @ 14873f700

int __thiscall USparseVolumeTexture::GetSizeY(USparseVolumeTexture *this)

{
  longlong lVar1;
  undefined1 local_18 [24];
  
  lVar1 = (**(code **)(*(longlong *)this + 0x2e0))(this,local_18);
  return *(int *)(lVar1 + 4);
}

// GetSizeZ @ 14873f720

int __thiscall USparseVolumeTexture::GetSizeZ(USparseVolumeTexture *this)

{
  longlong lVar1;
  undefined1 local_18 [24];
  
  lVar1 = (**(code **)(*(longlong *)this + 0x2e0))(this,local_18);
  return *(int *)(lVar1 + 8);
}

// GetTextureAddressX @ 148740550

TextureAddress __thiscall USparseVolumeTexture::GetTextureAddressX(USparseVolumeTexture *this)

{
  return TA_Wrap;
}

// GetTextureAddressY @ 148740590

TextureAddress __thiscall USparseVolumeTexture::GetTextureAddressY(USparseVolumeTexture *this)

{
  return TA_Wrap;
}

// GetTextureAddressZ @ 1487405d0

TextureAddress __thiscall USparseVolumeTexture::GetTextureAddressZ(USparseVolumeTexture *this)

{
  return TA_Wrap;
}

// GetTextureRenderResources @ 1487406b0

FTextureRenderResources * __thiscall
USparseVolumeTexture::GetTextureRenderResources(USparseVolumeTexture *this)

{
  return (FTextureRenderResources *)0x0;
}

// GetUniformParameterType @ 148741480

EValueType __cdecl USparseVolumeTexture::GetUniformParameterType(int param_1)

{
  code *pcVar1;
  bool bVar2;
  EValueType EVar3;
  
  if (param_1 == 0) {
    return Float1;
  }
  if (((param_1 != 1) && (param_1 != 2)) && (param_1 != 3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                       ,0x406,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Float4;
  }
  return Float3;
}

// GetVolumeResolution @ 148741ce0

TIntVector3<int> * __thiscall
USparseVolumeTexture::GetVolumeResolution
          (USparseVolumeTexture *this,TIntVector3<int> *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUSparseVolumeTexture @ 14875d140

void __cdecl USparseVolumeTexture::StaticRegisterNativesUSparseVolumeTexture(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_USparseVolumeTexture_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetFrameTransform @ 148761090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USparseVolumeTexture::execGetFrameTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,local_78);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  uVar1 = puVar2[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar1;
  uVar1 = puVar2[5];
  *(undefined8 *)((longlong)param_3 + 0x20) = puVar2[4];
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar1;
  uVar1 = puVar2[7];
  *(undefined8 *)((longlong)param_3 + 0x30) = puVar2[6];
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar1;
  uVar1 = puVar2[9];
  *(undefined8 *)((longlong)param_3 + 0x40) = puVar2[8];
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar1;
  uVar1 = puVar2[0xb];
  *(undefined8 *)((longlong)param_3 + 0x50) = puVar2[10];
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar1;
  return;
}

// execGetNumFrames @ 148761890

void __cdecl USparseVolumeTexture::execGetNumFrames(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetNumMipLevels @ 148761910

void __cdecl
USparseVolumeTexture::execGetNumMipLevels(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetSizeX @ 148761c50

void __cdecl USparseVolumeTexture::execGetSizeX(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetSizeY @ 148761c90

void __cdecl USparseVolumeTexture::execGetSizeY(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b8))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetSizeZ @ 148761cd0

void __cdecl USparseVolumeTexture::execGetSizeZ(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

