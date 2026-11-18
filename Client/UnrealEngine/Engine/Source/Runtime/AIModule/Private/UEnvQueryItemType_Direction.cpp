// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 16

// StaticClass @ 146f0ec70

UClass * __cdecl UEnvQueryItemType_Direction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_Direction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_Direction",
               &Z_Registration_Info_UClass_UEnvQueryItemType_Direction.InnerSingleton,
               StaticRegisterNativesUEnvQueryItemType_Direction,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryItemType_Direction>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType_Direction>,local_res8,
               UEnvQueryItemType_VectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_Direction.InnerSingleton;
}

// UEnvQueryItemType_Direction @ 146f2c390

UEnvQueryItemType_Direction * __thiscall
UEnvQueryItemType_Direction::UEnvQueryItemType_Direction
          (UEnvQueryItemType_Direction *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryItemType_Direction__6B_;
  return this;
}

// UEnvQueryItemType_Direction @ 146f2c3c0

UEnvQueryItemType_Direction * __thiscall
UEnvQueryItemType_Direction::UEnvQueryItemType_Direction
          (UEnvQueryItemType_Direction *this,FObjectInitializer *param_1)

{
  UEnvQueryItemType::UEnvQueryItemType((UEnvQueryItemType *)this,param_1);
  *(undefined2 *)&this->field_0x28 = 0x18;
  *(undefined ***)this = &___7UEnvQueryItemType_Direction__6B_;
  return this;
}

// ~UEnvQueryItemType_Direction @ 146f2ee60

void __thiscall
UEnvQueryItemType_Direction::~UEnvQueryItemType_Direction(UEnvQueryItemType_Direction *this)

{
  *(undefined ***)this = &___7UEnvQueryItemType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDescription @ 146f50d30

FString * __thiscall
UEnvQueryItemType_Direction::GetDescription
          (UEnvQueryItemType_Direction *this,FString *__return_storage_ptr__,uchar *param_1)

{
  undefined1 local_28 [32];
  
  (**(code **)(*(longlong *)this + 0x2d0))(this,local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"(P=%.0f,Y=%.0f,R=%.0f)");
  return __return_storage_ptr__;
}

// GetItemRotation @ 146f56bc0

TRotator<double> * __thiscall
UEnvQueryItemType_Direction::GetItemRotation
          (UEnvQueryItemType_Direction *this,TRotator<double> *__return_storage_ptr__,uchar *param_1
          )

{
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)param_1,__return_storage_ptr__)
  ;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f58af0

UClass * __cdecl UEnvQueryItemType_Direction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_Direction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_Direction",
               &Z_Registration_Info_UClass_UEnvQueryItemType_Direction.InnerSingleton,
               StaticRegisterNativesUEnvQueryItemType_Direction,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryItemType_Direction>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType_Direction>,local_res8,
               UEnvQueryItemType_VectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_Direction.InnerSingleton;
}

// GetValue @ 146f5aaf0

TVector<double> * __cdecl
UEnvQueryItemType_Direction::GetValue(TVector<double> *__return_storage_ptr__,uchar *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_1 + 8);
  dVar1 = *(double *)(param_1 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)param_1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetValueRot @ 146f5ab30

TRotator<double> * __cdecl
UEnvQueryItemType_Direction::GetValueRot(TRotator<double> *__return_storage_ptr__,uchar *param_1)

{
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)param_1,__return_storage_ptr__)
  ;
  return __return_storage_ptr__;
}

// SetContextHelper @ 146f73f30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UEnvQueryItemType_Direction::SetContextHelper
          (FEnvQueryContextData *param_1,TRotator<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  UClass *pUVar3;
  TVector<double> *pTVar4;
  TVector<double> local_28;
  
  pUVar3 = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (param_1->ValueType).Class.field0_0x0.DebugPtr = pUVar3;
  param_1->NumValues = 1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_1->RawData,0x18,Default);
  pFVar1 = (param_1->RawData).AllocatorInstance.Data;
  pTVar4 = UE::Math::TRotator<double>::Vector(param_2,&local_28);
  dVar2 = (pTVar4->field0_0x0)._s_0.Y;
  *(double *)pFVar1 = (pTVar4->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar2;
  *(double *)(pFVar1 + 0x10) = (pTVar4->field0_0x0)._s_0.Z;
  return;
}

// SetContextHelper @ 146f73fc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UEnvQueryItemType_Direction::SetContextHelper
          (FEnvQueryContextData *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  UClass *pUVar3;
  
  pUVar3 = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (param_1->ValueType).Class.field0_0x0.DebugPtr = pUVar3;
  param_1->NumValues = 1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_1->RawData,0x18,Default);
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  pFVar1 = (param_1->RawData).AllocatorInstance.Data;
  *(double *)pFVar1 = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar2;
  *(double *)(pFVar1 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  return;
}

// SetContextHelper @ 146f74040

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UEnvQueryItemType_Direction::SetContextHelper
          (FEnvQueryContextData *param_1,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  TVector<double> *pTVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  TVector<double> local_28;
  
  pUVar5 = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (param_1->ValueType).Class.field0_0x0.DebugPtr = pUVar5;
  param_1->NumValues = param_2->ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_1->RawData,param_2->ArrayNum * 0x18,Default);
  if ((longlong)(param_1->RawData).ArrayNum != (longlong)param_2->ArrayNum * 0x18) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContextData.RawData.Num() == sizeof(FVector) * MultipleRotations.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Items\\EnvQueryItemType_Direction.cpp"
                       ,0x54,L"Failed to allocate the appropriate amount of memory");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar7 = param_2->ArrayNum;
  uVar8 = 0;
  pFVar9 = (param_1->RawData).AllocatorInstance.Data;
  if (0 < iVar7) {
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar7) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pTVar6 = UE::Math::TRotator<double>::Vector
                         ((TRotator<double> *)
                          ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x18),
                          &local_28);
      uVar8 = uVar8 + 1;
      dVar2 = (pTVar6->field0_0x0)._s_0.Y;
      *(double *)pFVar9 = (pTVar6->field0_0x0)._s_0.X;
      *(double *)(pFVar9 + 8) = dVar2;
      *(double *)(pFVar9 + 0x10) = (pTVar6->field0_0x0)._s_0.Z;
      pFVar9 = pFVar9 + 0x18;
      iVar7 = param_2->ArrayNum;
    } while ((int)uVar8 < iVar7);
  }
  return;
}

// SetContextHelper @ 146f74180

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UEnvQueryItemType_Direction::SetContextHelper
          (FEnvQueryContextData *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  UClass *pUVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  
  pUVar8 = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (param_1->ValueType).Class.field0_0x0.DebugPtr = pUVar8;
  param_1->NumValues = param_2->ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_1->RawData,param_2->ArrayNum * 0x18,Default);
  if (((longlong)(param_1->RawData).ArrayNum != (longlong)param_2->ArrayNum * 0x18) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContextData.RawData.Num() == sizeof(FVector) * MultipleDirections.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Items\\EnvQueryItemType_Direction.cpp"
                         ,0x44,L"Failed to allocate the appropriate amount of memory"), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar9 = param_2->ArrayNum;
  uVar10 = 0;
  pFVar12 = (param_1->RawData).AllocatorInstance.Data;
  if (0 < iVar9) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < iVar9) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar10 = uVar10 + 1;
      pFVar1 = pFVar2 + lVar11;
      uVar4 = *(undefined8 *)(pFVar1 + 8);
      *(undefined8 *)pFVar12 = *(undefined8 *)pFVar1;
      *(undefined8 *)(pFVar12 + 8) = uVar4;
      lVar5 = lVar11 + 0x10;
      lVar11 = lVar11 + 0x18;
      *(undefined8 *)(pFVar12 + 0x10) = *(undefined8 *)(pFVar2 + lVar5);
      pFVar12 = pFVar12 + 0x18;
      iVar9 = param_2->ArrayNum;
    } while ((int)uVar10 < iVar9);
  }
  return;
}

// SetValue @ 146f75740

void __cdecl UEnvQueryItemType_Direction::SetValue(uchar *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  *(double *)param_1 = (param_2->field0_0x0)._s_0.X;
  *(double *)(param_1 + 8) = dVar1;
  *(double *)(param_1 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  return;
}

// SetValueRot @ 146f75780

void __cdecl UEnvQueryItemType_Direction::SetValueRot(uchar *param_1,TRotator<double> *param_2)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  pTVar2 = UE::Math::TRotator<double>::Vector(param_2,&local_28);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  *(double *)param_1 = (pTVar2->field0_0x0)._s_0.X;
  *(double *)(param_1 + 8) = dVar1;
  *(double *)(param_1 + 0x10) = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// StaticRegisterNativesUEnvQueryItemType_Direction @ 146f76e00

void __cdecl UEnvQueryItemType_Direction::StaticRegisterNativesUEnvQueryItemType_Direction(void)

{
  return;
}

