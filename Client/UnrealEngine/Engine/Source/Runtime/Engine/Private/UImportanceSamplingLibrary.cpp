// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// StaticClass @ 147e444c0

UClass * __cdecl UImportanceSamplingLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImportanceSamplingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ImportanceSamplingLibrary",
               &Z_Registration_Info_UClass_UImportanceSamplingLibrary.InnerSingleton,
               StaticRegisterNativesUImportanceSamplingLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UImportanceSamplingLibrary>,
               InternalVTableHelperCtorCaller<UImportanceSamplingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImportanceSamplingLibrary.InnerSingleton;
}

// UImportanceSamplingLibrary @ 147e553f0

UImportanceSamplingLibrary * __thiscall
UImportanceSamplingLibrary::UImportanceSamplingLibrary
          (UImportanceSamplingLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UImportanceSamplingLibrary__6B_;
  return this;
}

// UImportanceSamplingLibrary @ 147e55420

UImportanceSamplingLibrary * __thiscall
UImportanceSamplingLibrary::UImportanceSamplingLibrary
          (UImportanceSamplingLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UImportanceSamplingLibrary__6B_;
  return this;
}

// ~UImportanceSamplingLibrary @ 147e57720

void __thiscall
UImportanceSamplingLibrary::~UImportanceSamplingLibrary(UImportanceSamplingLibrary *this)

{
  *(undefined ***)this = &___7UImportanceSamplingLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// BreakImportanceTexture @ 147e5e520

void __cdecl
UImportanceSamplingLibrary::BreakImportanceTexture
          (FImportanceTexture *param_1,UTexture2D **param_2,
          TEnumAsByte<EImportanceWeight::Type> *param_3)

{
  UTexture2D *pUVar1;
  
  pUVar1 = (UTexture2D *)FWeakObjectPtr::Get(&(param_1->Texture).WeakPtr);
  *param_2 = pUVar1;
  param_3->Value = (param_1->Weighting).Value;
  return;
}

// GetPrivateStaticClass @ 147e698f0

UClass * __cdecl UImportanceSamplingLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImportanceSamplingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ImportanceSamplingLibrary",
               &Z_Registration_Info_UClass_UImportanceSamplingLibrary.InnerSingleton,
               StaticRegisterNativesUImportanceSamplingLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UImportanceSamplingLibrary>,
               InternalVTableHelperCtorCaller<UImportanceSamplingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImportanceSamplingLibrary.InnerSingleton;
}

// ImportanceSample @ 147e6bd70

void __cdecl
UImportanceSamplingLibrary::ImportanceSample
          (FImportanceTexture *param_1,TVector2<double> *param_2,int param_3,float param_4,
          TVector2<double> *param_5,FLinearColor *param_6,float *param_7,float *param_8)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  FLinearColor_u_0 FStack_e0;
  FLinearColor_u_0 FStack_d0;
  TVector2<double>_u_0 TStack_b8;
  TVector2<double>_u_0 aTStack_a8 [8];
  
  bVar6 = FWeakObjectPtr::IsValid(&(param_1->Texture).WeakPtr);
  if (bVar6) {
    uVar14 = (param_1->Size).field0_0x0._s_0.Y;
    uVar7 = 0;
    if ((int)uVar14 < (param_1->MarginalCDF).ArrayNum) {
      uVar7 = ~uVar14 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    lVar10 = (longlong)dVar2;
    dVar16 = dVar2;
    if ((lVar10 != -0x8000000000000000) && ((double)lVar10 != dVar2)) {
      auVar20._8_8_ = dVar2;
      auVar20._0_8_ = dVar2;
      uVar7 = movmskpd(0,auVar20);
      dVar16 = (double)(longlong)(lVar10 - (ulonglong)(uVar7 & 1));
    }
    uVar7 = (param_1->Size).field0_0x0._s_0.Y;
    fVar19 = (float)((dVar2 - dVar16) *
                    (double)*(float *)((param_1->MarginalCDF).AllocatorInstance.Data +
                                      (longlong)(int)uVar14 * 4));
    uVar14 = 0;
    if (0x40 < (int)uVar7) {
      uVar14 = 0;
      do {
        uVar13 = ((int)(uVar7 - uVar14) >> 1) + uVar14;
        uVar8 = 0;
        if ((int)uVar13 < (param_1->MarginalCDF).ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar1 = (param_1->MarginalCDF).AllocatorInstance.Data + (longlong)(int)uVar13 * 4;
        if (*(float *)pFVar1 <= fVar19 && fVar19 != *(float *)pFVar1) {
          uVar14 = uVar13;
          uVar13 = uVar7;
        }
        uVar7 = uVar13;
      } while (0x40 < (int)(uVar7 - uVar14));
    }
    do {
      uVar8 = uVar14;
      if ((int)uVar7 <= (int)uVar8) break;
      uVar14 = uVar8 + 1;
      uVar13 = 0;
      if ((int)uVar14 < (param_1->MarginalCDF).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (param_1->MarginalCDF).AllocatorInstance.Data + (longlong)(int)uVar14 * 4;
    } while (*(float *)pFVar1 <= fVar19 && fVar19 != *(float *)pFVar1);
    uVar13 = uVar8 + 1;
    uVar7 = ((param_1->Size).field0_0x0._s_0.X + 1) * uVar8;
    uVar14 = 0;
    if ((int)uVar7 < (param_1->ConditionalCDF).ArrayNum) {
      uVar14 = ~uVar7 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = (param_1->ConditionalCDF).AllocatorInstance.Data;
    dVar2 = (param_2->field0_0x0)._s_0.X;
    iVar9 = (param_1->Size).field0_0x0._s_0.X;
    lVar10 = (longlong)dVar2;
    dVar16 = dVar2;
    if ((lVar10 != -0x8000000000000000) && ((double)lVar10 != dVar2)) {
      auVar17._8_8_ = dVar2;
      auVar17._0_8_ = dVar2;
      uVar14 = movmskpd(0,auVar17);
      dVar16 = (double)(longlong)(lVar10 - (ulonglong)(uVar14 & 1));
    }
    iVar11 = 0;
    fVar18 = (float)((dVar2 - dVar16) *
                    (double)*(float *)(pFVar1 + (longlong)iVar9 * 4 + (longlong)(int)uVar7 * 4));
    iVar5 = iVar9;
    while (0x40 < iVar9) {
      iVar12 = (iVar5 - iVar11 >> 1) + iVar11;
      if (*(float *)(pFVar1 + (longlong)iVar12 * 4 + (longlong)(int)uVar7 * 4) <= fVar18 &&
          fVar18 != *(float *)(pFVar1 + (longlong)iVar12 * 4 + (longlong)(int)uVar7 * 4)) {
        iVar11 = iVar12;
        iVar12 = iVar5;
      }
      iVar5 = iVar12;
      iVar9 = iVar12 - iVar11;
    }
    do {
      iVar9 = iVar11;
      if (iVar5 <= iVar9) break;
      iVar11 = iVar9 + 1;
    } while (*(float *)(pFVar1 + (longlong)iVar9 * 4 + (longlong)(int)uVar7 * 4 + 4) <= fVar18 &&
             fVar18 != *(float *)(pFVar1 + (longlong)iVar9 * 4 + (longlong)(int)uVar7 * 4 + 4));
    uVar14 = 0;
    if ((int)uVar8 < (param_1->MarginalCDF).ArrayNum) {
      uVar14 = ~uVar8 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar15 = *(float *)(pFVar1 + (longlong)iVar9 * 4 + (longlong)(int)uVar7 * 4);
    dVar2 = (double)*(float *)((param_1->MarginalCDF).AllocatorInstance.Data +
                              (longlong)(int)uVar8 * 4);
    uVar14 = 0;
    if ((int)uVar13 < (param_1->MarginalCDF).ArrayNum) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TVar3 = (param_1->Size).field0_0x0._s_0;
    fVar21 = *(float *)((param_1->MarginalCDF).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
    dVar16 = (double)*(float *)(pFVar1 + (longlong)(iVar9 + 1) * 4 + (longlong)(int)uVar7 * 4) -
             (double)fVar15;
    (param_5->field0_0x0)._s_0.X =
         (((double)fVar18 - (double)fVar15) / dVar16 + (double)iVar9) / (double)TVar3.X;
    (param_5->field0_0x0)._s_0.Y =
         (((double)fVar19 - dVar2) / ((double)fVar21 - dVar2) + (double)(int)uVar8) /
         (double)TVar3.Y;
    uVar14 = (param_1->Size).field0_0x0._s_0.Y;
    uVar7 = 0;
    if ((int)uVar14 < (param_1->MarginalCDF).ArrayNum) {
      uVar7 = ~uVar14 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar18 = __real_3f800000;
    fVar22 = (float)((param_1->Size).field0_0x0._s_0.Y * (param_1->Size).field0_0x0._s_0.X) /
             *(float *)((param_1->MarginalCDF).AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
    fVar21 = __real_3f800000 / ((float)((double)fVar22 * dVar16) * (float)param_3);
    *param_8 = SQRT(fVar21 * __real_3f000000) * __real_40800000;
    fVar15 = logf((float)((param_1->Size).field0_0x0._s_0.Y * (param_1->Size).field0_0x0._s_0.X) *
                  fVar21);
    dVar2 = (param_5->field0_0x0)._s_0.X;
    dVar16 = (param_5->field0_0x0)._s_0.Y;
    fVar15 = fVar15 * __real_3f38aa3b;
    auVar20 = roundps(ZEXT416((uint)fVar19),ZEXT416((uint)fVar15),1);
    fVar19 = auVar20._0_4_;
    TStack_b8._s_0.X = dVar2;
    TStack_b8._s_0.Y = dVar16;
    FImportanceTexture::GetColorBilinear
              (param_1,(FLinearColor *)&FStack_d0._s_0,(TVector2<double> *)&TStack_b8._s_0,
               (int)fVar19);
    aTStack_a8[0]._0_8_ = dVar2;
    aTStack_a8[0]._8_8_ = dVar16;
    FImportanceTexture::GetColorBilinear
              (param_1,(FLinearColor *)&FStack_e0._s_0,(TVector2<double> *)&aTStack_a8[0]._s_0,
               (int)(fVar19 + fVar18));
    fVar15 = fVar15 - fVar19;
    (param_6->field0_0x0)._s_0.R = (FStack_e0._s_0.R - FStack_d0._s_0.R) * fVar15 + FStack_d0._s_0.R
    ;
    (param_6->field0_0x0)._s_0.G = (FStack_e0._s_0.G - FStack_d0._s_0.G) * fVar15 + FStack_d0._s_0.G
    ;
    (param_6->field0_0x0)._s_0.B = (FStack_e0._s_0.B - FStack_d0._s_0.B) * fVar15 + FStack_d0._s_0.B
    ;
    (param_6->field0_0x0)._s_0.A = (FStack_e0._s_0.A - FStack_d0._s_0.A) * fVar15 + FStack_d0._s_0.A
    ;
    *param_7 = fVar21 * param_4 * fVar22;
  }
  return;
}

// MakeImportanceTexture @ 147e70590

FImportanceTexture * __cdecl
UImportanceSamplingLibrary::MakeImportanceTexture
          (FImportanceTexture *__return_storage_ptr__,UTexture2D *param_1,
          TEnumAsByte<EImportanceWeight::Type> param_2)

{
  (__return_storage_ptr__->MarginalCDF).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->MarginalCDF).ArrayNum = 0;
  (__return_storage_ptr__->MarginalCDF).ArrayMax = 0;
  (__return_storage_ptr__->ConditionalCDF).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ConditionalCDF).ArrayNum = 0;
  (__return_storage_ptr__->ConditionalCDF).ArrayMax = 0;
  (__return_storage_ptr__->TextureData_DEPRECATED).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TextureData_DEPRECATED).ArrayNum = 0;
  (__return_storage_ptr__->TextureData_DEPRECATED).ArrayMax = 0;
  (__return_storage_ptr__->LinearTextureData).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->LinearTextureData).ArrayNum = 0;
  (__return_storage_ptr__->LinearTextureData).ArrayMax = 0;
  (__return_storage_ptr__->Texture).WeakPtr = (FWeakObjectPtr)0x0;
  FImportanceTexture::Initialize(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// NextSobolCell2D @ 147e71150

TVector2<double> * __cdecl
UImportanceSamplingLibrary::NextSobolCell2D
          (TVector2<double> *__return_storage_ptr__,int param_1,int param_2,
          TVector2<double> *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  TVector2<double>_u_0 local_18;
  
  iVar2 = 1;
  if (param_2 != 0) {
    iVar2 = param_2;
  }
  uVar1 = FGenericPlatformMath::CountLeadingZeros(iVar2 - 1);
  local_18._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  iVar2 = 0xf;
  if ((int)(0x20 - uVar1) < 0xf) {
    iVar2 = 0x20 - uVar1;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  FSobol::Next(__return_storage_ptr__,param_1,iVar3,(TVector2<double> *)&local_18._s_0);
  return __return_storage_ptr__;
}

// NextSobolCell3D @ 147e711d0

TVector<double> * __cdecl
UImportanceSamplingLibrary::NextSobolCell3D
          (TVector<double> *__return_storage_ptr__,int param_1,int param_2,TVector<double> *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  TVector<double>_u_0 local_28;
  
  iVar2 = 1;
  if (param_2 != 0) {
    iVar2 = param_2;
  }
  uVar1 = FGenericPlatformMath::CountLeadingZeros(iVar2 - 1);
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  iVar2 = 10;
  if ((int)(0x20 - uVar1) < 10) {
    iVar2 = 0x20 - uVar1;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  FSobol::Next(__return_storage_ptr__,param_1,iVar3,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// NextSobolFloat @ 147e71260

float __cdecl UImportanceSamplingLibrary::NextSobolFloat(int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = 0xf;
  if (param_2 < 0xf) {
    iVar1 = param_2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  fVar3 = FSobol::Next(param_1,iVar2,param_3);
  return fVar3;
}

// RandomSobolCell2D @ 147e76b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector2<double> * __cdecl
UImportanceSamplingLibrary::RandomSobolCell2D
          (TVector2<double> *__return_storage_ptr__,int param_1,int param_2,
          TVector2<double> *param_3,TVector2<double> *param_4)

{
  uint uVar1;
  TIntPoint<int> TVar2;
  TIntPoint<int> TVar3;
  int iVar4;
  int iVar5;
  TVector2<double>_u_0 local_28;
  
  iVar4 = 1;
  if (param_2 != 0) {
    iVar4 = param_2;
  }
  uVar1 = FGenericPlatformMath::CountLeadingZeros(iVar4 - 1);
  iVar4 = 0xf;
  if ((int)(0x20 - uVar1) < 0xf) {
    iVar4 = 0x20 - uVar1;
  }
  local_28._s_0.X = ___xmm_41700000000000004170000000000000 * (param_4->field0_0x0)._s_0.X;
  local_28._s_0.Y = _UNK_15197a198 * (param_4->field0_0x0)._s_0.Y;
  TVar2 = UE::Math::TVector2<double>::IntPoint((TVector2<double> *)&local_28._s_0);
  TVar2.field0_0x0 = *(TIntPoint<int>_u_0 *)TVar2.field0_0x0;
  TVar3 = UE::Math::TVector2<double>::IntPoint(param_3);
  iVar5 = 0;
  if (0 < iVar4) {
    iVar5 = iVar4;
  }
  FSobol::Evaluate(__return_storage_ptr__,param_1,iVar5,
                   (TIntPoint<int>)*(TIntPoint<int>_u_0 *)TVar3.field0_0x0,TVar2);
  return __return_storage_ptr__;
}

// RandomSobolCell3D @ 147e76c00

TVector<double> * __cdecl
UImportanceSamplingLibrary::RandomSobolCell3D
          (TVector<double> *__return_storage_ptr__,int param_1,int param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  TIntVector3<int>_u_0 local_28;
  TIntVector3<int>_u_0 local_18;
  
  iVar3 = 1;
  if (param_2 != 0) {
    iVar3 = param_2;
  }
  uVar2 = FGenericPlatformMath::CountLeadingZeros(iVar3 - 1);
  iVar3 = 10;
  if ((int)(0x20 - uVar2) < 10) {
    iVar3 = 0x20 - uVar2;
  }
  iVar1 = 0;
  if (0 < iVar3) {
    iVar1 = iVar3;
  }
  local_28._s_0.X = (int)((param_4->field0_0x0)._s_0.X * __real_4170000000000000);
  local_28._s_0.Y = (int)((param_4->field0_0x0)._s_0.Y * __real_4170000000000000);
  local_28._s_0.Z = (int)((param_4->field0_0x0)._s_0.Z * __real_4170000000000000);
  local_18._s_0.X = (int)(param_3->field0_0x0)._s_0.X;
  local_18._s_0.Y = (int)(param_3->field0_0x0)._s_0.Y;
  local_18._s_0.Z = (int)(param_3->field0_0x0)._s_0.Z;
  FSobol::Evaluate(__return_storage_ptr__,param_1,iVar1,(TIntVector3<int> *)&local_18._s_0,
                   (TIntVector3<int> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// RandomSobolFloat @ 147e76ce0

float __cdecl UImportanceSamplingLibrary::RandomSobolFloat(int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = 0xf;
  if (param_2 < 0xf) {
    iVar1 = param_2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  fVar3 = FSobol::Evaluate(param_1,iVar2,(int)(param_3 * __real_4b800000));
  return fVar3;
}

// StaticRegisterNativesUImportanceSamplingLibrary @ 147e82240

void __cdecl UImportanceSamplingLibrary::StaticRegisterNativesUImportanceSamplingLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UImportanceSamplingLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBreakImportanceTexture @ 147e87f70

void __cdecl
UImportanceSamplingLibrary::execBreakImportanceTexture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar local_res10 [16];
  uchar local_res20 [8];
  undefined8 local_98 [2];
  uchar local_88 [16];
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  FWeakObjectPtr local_38;
  undefined1 local_30;
  
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_98[0] = 0;
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)local_98);
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar5 = local_88;
  if (puVar3 != (uchar *)0x0) {
    puVar5 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_res20;
  if (puVar3 != (uchar *)0x0) {
    puVar4 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar5 + 0x50));
  *(UObject **)puVar4 = pUVar2;
  *puVar3 = puVar5[0x58];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar4);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execImportanceSample @ 147e8a4b0

void __cdecl
UImportanceSamplingLibrary::execImportanceSample(UObject *param_1,FFrame *param_2,void *param_3)

{
  TIntPoint<int>_u_0 *pTVar1;
  TVector2<double> *pTVar2;
  FLinearColor *pFVar3;
  FProperty *pFVar4;
  float *pfVar5;
  float *pfVar6;
  TVector2<double> *pTVar7;
  TIntPoint<int>_u_0 *this;
  FLinearColor *pFVar8;
  TVector2<double> *pTVar9;
  float local_res10 [4];
  float local_res20 [2];
  float local_e8;
  int local_e4 [3];
  TIntPoint<int>_u_0 local_d8;
  undefined4 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  FWeakObjectPtr local_88;
  undefined1 local_80;
  undefined8 local_78;
  TVector2<double> local_70;
  TVector2<double> local_60;
  FLinearColor local_50;
  
  local_d8 = (TIntPoint<int>_u_0)0x0;
  local_d0 = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88.ObjectIndex = 0;
  local_88.ObjectSerialNumber = 0;
  local_78 = 0;
  FWeakObjectPtr::operator=(&local_88,(FObjectPtr)&local_78);
  local_80 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pTVar1 = (TIntPoint<int>_u_0 *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = &local_d8;
  if (pTVar1 != (TIntPoint<int>_u_0 *)0x0) {
    this = pTVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_e4[0] = 0;
  pTVar7 = &local_70;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar7 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e4,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e4);
  }
  local_e8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pTVar2 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar9 = &local_60;
  if (pTVar2 != (TVector2<double> *)0x0) {
    pTVar9 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pFVar3 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar8 = &local_50;
  if (pFVar3 != (FLinearColor *)0x0) {
    pFVar8 = pFVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar6 = (float *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar5 = local_res10;
  if (pfVar6 != (float *)0x0) {
    pfVar5 = pfVar6;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar6 = local_res20;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar6 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FImportanceTexture::ImportanceSample
            ((FImportanceTexture *)&this->_s_0,pTVar7,local_e4[0],local_e8,pTVar9,pFVar8,pfVar5,
             pfVar6);
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// execMakeImportanceTexture @ 147e8a9f0

void __cdecl
UImportanceSamplingLibrary::execMakeImportanceTexture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ForAnyElementType *pFVar1;
  FProperty *pFVar2;
  TEnumAsByte<EImportanceWeight::Type> local_res10 [8];
  UTexture2D *local_res18 [2];
  TIntPoint<int>_u_0 local_78;
  undefined4 local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  
  local_res18[0] = (UTexture2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0].Value = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  uStack_28 = 0;
  FImportanceTexture::Initialize((FImportanceTexture *)&local_78._s_0,local_res18[0],local_res10[0])
  ;
  pFVar1 = (ForAnyElementType *)((longlong)param_3 + 0x10);
  *(TIntPoint<int>_u_0 *)param_3 = local_78;
  *(undefined4 *)((longlong)param_3 + 8) = local_70;
  if (pFVar1 != &local_68) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_68.Data;
    *(undefined4 *)((longlong)param_3 + 0x18) = (undefined4)local_60;
    *(undefined4 *)((longlong)param_3 + 0x1c) = local_60._4_4_;
    local_60 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
  }
  pFVar1 = (ForAnyElementType *)((longlong)param_3 + 0x20);
  if (pFVar1 != &local_58) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_58.Data;
    *(undefined4 *)((longlong)param_3 + 0x28) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_3 + 0x2c) = local_50._4_4_;
    local_50 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
  }
  pFVar1 = (ForAnyElementType *)((longlong)param_3 + 0x30);
  if (pFVar1 != &local_48) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_48.Data;
    *(undefined4 *)((longlong)param_3 + 0x38) = (undefined4)local_40;
    *(undefined4 *)((longlong)param_3 + 0x3c) = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  pFVar1 = (ForAnyElementType *)((longlong)param_3 + 0x40);
  if (pFVar1 != &local_38) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_38.Data;
    *(undefined4 *)((longlong)param_3 + 0x48) = (undefined4)local_30;
    *(undefined4 *)((longlong)param_3 + 0x4c) = local_30._4_4_;
    local_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  *(undefined8 *)((longlong)param_3 + 0x50) = uStack_28;
  *(undefined1 *)((longlong)param_3 + 0x58) = local_20;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// execNextSobolCell2D @ 147e8ac20

void __cdecl
UImportanceSamplingLibrary::execNextSobolCell2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_res10 [2];
  int local_res18 [2];
  double local_38;
  double dStack_30;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  uVar5 = 0;
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = 1;
  if (local_res10[0] != 0) {
    iVar2 = local_res10[0];
  }
  uVar4 = iVar2 - 1;
  if (uVar4 != 0) {
    uVar5 = 0x10;
    if (uVar4 < 0x10000) {
      uVar5 = 0;
    }
    uVar3 = uVar4 >> 0x10;
    if (uVar4 < 0x10000) {
      uVar3 = uVar4;
    }
    if (0xff < uVar3) {
      uVar3 = uVar3 >> 8;
      uVar5 = uVar5 + 8;
    }
    uVar4 = uVar5 + 4;
    if (uVar3 < 0x10) {
      uVar4 = uVar5;
    }
    uVar5 = uVar3 >> 4;
    if (uVar3 < 0x10) {
      uVar5 = uVar3;
    }
    uVar3 = uVar4 + 2;
    if (uVar5 < 4) {
      uVar3 = uVar4;
    }
    uVar4 = uVar5 >> 2;
    if (uVar5 < 4) {
      uVar4 = uVar5;
    }
    uVar5 = uVar3 + 1;
    if (uVar4 < 2) {
      uVar5 = uVar3;
    }
    uVar5 = uVar5 + 1;
  }
  local_28._s_0.X = local_38;
  local_28._s_0.Y = dStack_30;
  uVar4 = 0xf;
  if (uVar5 < 0xf) {
    uVar4 = uVar5;
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = uVar4;
  }
  FSobol::Next((TVector2<double> *)&local_18._s_0,local_res18[0],uVar5,
               (TVector2<double> *)&local_28._s_0);
  *(double *)param_3 = local_18._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_18._s_0.Y;
  return;
}

// execNextSobolCell3D @ 147e8add0

void __cdecl
UImportanceSamplingLibrary::execNextSobolCell3D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_res10 [2];
  int local_res18 [2];
  double local_68;
  double dStack_60;
  double local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  uVar5 = 0;
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = 1;
  if (local_res10[0] != 0) {
    iVar2 = local_res10[0];
  }
  uVar4 = iVar2 - 1;
  if (uVar4 != 0) {
    uVar5 = 0x10;
    if (uVar4 < 0x10000) {
      uVar5 = 0;
    }
    uVar3 = uVar4 >> 0x10;
    if (uVar4 < 0x10000) {
      uVar3 = uVar4;
    }
    if (0xff < uVar3) {
      uVar3 = uVar3 >> 8;
      uVar5 = uVar5 + 8;
    }
    uVar4 = uVar5 + 4;
    if (uVar3 < 0x10) {
      uVar4 = uVar5;
    }
    uVar5 = uVar3 >> 4;
    if (uVar3 < 0x10) {
      uVar5 = uVar3;
    }
    uVar3 = uVar4 + 2;
    if (uVar5 < 4) {
      uVar3 = uVar4;
    }
    uVar4 = uVar5 >> 2;
    if (uVar5 < 4) {
      uVar4 = uVar5;
    }
    uVar5 = uVar3 + 1;
    if (uVar4 < 2) {
      uVar5 = uVar3;
    }
    uVar5 = uVar5 + 1;
  }
  local_48._s_0.X = local_68;
  local_48._s_0.Y = dStack_60;
  local_48._s_0.Z = local_58;
  uVar4 = 10;
  if (uVar5 < 10) {
    uVar4 = uVar5;
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = uVar4;
  }
  FSobol::Next((TVector<double> *)&local_28._s_0,local_res18[0],uVar5,
               (TVector<double> *)&local_48._s_0);
  *(double *)param_3 = local_28._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_28._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_28._s_0.Z;
  return;
}

// execNextSobolFloat @ 147e8afc0

void __cdecl
UImportanceSamplingLibrary::execNextSobolFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int local_res10 [2];
  float local_res18 [2];
  int local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = 0xf;
  if (local_res10[0] < 0xf) {
    iVar3 = local_res10[0];
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  fVar4 = FSobol::Next(local_res20[0],iVar2,local_res18[0]);
  *(float *)param_3 = fVar4;
  return;
}

// execRandomSobolCell2D @ 147e8b0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UImportanceSamplingLibrary::execRandomSobolCell2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TIntPoint<int> TVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  int local_res10 [2];
  int local_res18 [4];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  TVector2<double>_u_0 local_58;
  TVector2<double>_u_0 local_48 [2];
  
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
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar8 = 1;
  if (local_res18[0] != 0) {
    iVar8 = local_res18[0];
  }
  uVar11 = iVar8 - 1;
  uVar7 = 0;
  if (uVar11 != 0) {
    iVar8 = 0x10;
    if (uVar11 < 0x10000) {
      iVar8 = 0;
    }
    uVar7 = uVar11 >> 0x10;
    if (uVar11 < 0x10000) {
      uVar7 = uVar11;
    }
    if (0xff < uVar7) {
      uVar7 = uVar7 >> 8;
      iVar8 = iVar8 + 8;
    }
    iVar5 = iVar8 + 4;
    if (uVar7 < 0x10) {
      iVar5 = iVar8;
    }
    uVar11 = uVar7 >> 4;
    if (uVar7 < 0x10) {
      uVar11 = uVar7;
    }
    iVar8 = iVar5 + 2;
    if (uVar11 < 4) {
      iVar8 = iVar5;
    }
    uVar7 = uVar11 >> 2;
    if (uVar11 < 4) {
      uVar7 = uVar11;
    }
    iVar5 = iVar8 + 1;
    if (uVar7 < 2) {
      iVar5 = iVar8;
    }
    uVar7 = iVar5 + 1;
  }
  uVar11 = 0xf;
  if (uVar7 < 0xf) {
    uVar11 = uVar7;
  }
  uVar7 = 0;
  if (uVar11 != 0) {
    uVar7 = uVar11;
  }
  local_58._8_4_ = SUB84(dStack_70 * _UNK_15197a198,0);
  local_58._s_0.X = local_78 * ___xmm_41700000000000004170000000000000;
  local_58._12_4_ = (int)((ulonglong)(dStack_70 * _UNK_15197a198) >> 0x20);
  TVar6 = UE::Math::TVector2<double>::IntPoint((TVector2<double> *)&local_58._s_0);
  TVar6.field0_0x0 = *(TIntPoint<int>_u_0 *)TVar6.field0_0x0;
  uVar9 = (longlong)ROUND(local_68 * __real_4000000000000000 + __real_3fe0000000000000) >> 1;
  lVar10 = (longlong)ROUND(dStack_60 * __real_4000000000000000 + __real_3fe0000000000000) >> 1;
  if ((uVar9 != (longlong)(int)uVar9) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((lVar10 != (int)lVar10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FSobol::Evaluate((TVector2<double> *)&local_48[0]._s_0,iVar3,uVar7,
                   (TIntPoint<int>)(lVar10 << 0x20 | uVar9 & 0xffffffff),TVar6);
  *(undefined8 *)param_3 = local_48[0]._s_0.X;
  *(undefined8 *)((longlong)param_3 + 8) = local_48[0]._s_0.Y;
  return;
}

// execRandomSobolCell3D @ 147e8b3d0

void __cdecl
UImportanceSamplingLibrary::execRandomSobolCell3D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_res10 [2];
  int local_res18 [4];
  TIntVector3<int>_u_0 local_88;
  TIntVector3<int>_u_0 local_78;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  TVector<double>_u_0 local_38;
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = 1;
  if (local_res10[0] != 0) {
    iVar4 = local_res10[0];
  }
  uVar5 = iVar4 - 1;
  uVar3 = 0;
  if (uVar5 != 0) {
    iVar4 = 0x10;
    if (uVar5 < 0x10000) {
      iVar4 = 0;
    }
    uVar3 = uVar5 >> 0x10;
    if (uVar5 < 0x10000) {
      uVar3 = uVar5;
    }
    if (0xff < uVar3) {
      uVar3 = uVar3 >> 8;
      iVar4 = iVar4 + 8;
    }
    iVar2 = iVar4 + 4;
    if (uVar3 < 0x10) {
      iVar2 = iVar4;
    }
    uVar5 = uVar3 >> 4;
    if (uVar3 < 0x10) {
      uVar5 = uVar3;
    }
    iVar4 = iVar2 + 2;
    if (uVar5 < 4) {
      iVar4 = iVar2;
    }
    uVar3 = uVar5 >> 2;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    iVar2 = iVar4 + 1;
    if (uVar3 < 2) {
      iVar2 = iVar4;
    }
    uVar3 = iVar2 + 1;
  }
  uVar5 = 10;
  if (uVar3 < 10) {
    uVar5 = uVar3;
  }
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = uVar5;
  }
  local_88._s_0.X = (int)(local_68 * __real_4170000000000000);
  local_88._s_0.Y = (int)(local_60 * __real_4170000000000000);
  local_88._s_0.Z = (int)(local_58 * __real_4170000000000000);
  local_78._s_0.X = (int)local_50;
  local_78._s_0.Y = (int)local_48;
  local_78._s_0.Z = (int)local_40;
  FSobol::Evaluate((TVector<double> *)&local_38._s_0,local_res18[0],uVar3,
                   (TIntVector3<int> *)&local_78._s_0,(TIntVector3<int> *)&local_88._s_0);
  *(double *)param_3 = local_38._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_38._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_38._s_0.Z;
  return;
}

// execRandomSobolFloat @ 147e8b610

void __cdecl
UImportanceSamplingLibrary::execRandomSobolFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int local_res10 [2];
  float local_res18 [2];
  int local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  fVar4 = local_res18[0] * __real_4b800000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = 0xf;
  if (local_res10[0] < 0xf) {
    iVar3 = local_res10[0];
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  fVar4 = FSobol::Evaluate(local_res20[0],iVar2,(int)fVar4);
  *(float *)param_3 = fVar4;
  return;
}

