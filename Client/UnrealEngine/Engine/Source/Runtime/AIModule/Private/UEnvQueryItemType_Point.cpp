// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 13

// StaticClass @ 146f14660

UClass * __cdecl UEnvQueryItemType_Point::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_Point.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_Point",
               &Z_Registration_Info_UClass_UEnvQueryItemType_Point.InnerSingleton,
               StaticRegisterNativesUEnvQueryItemType_Point,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryItemType_Point>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType_Point>,local_res8,
               UEnvQueryItemType_VectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_Point.InnerSingleton;
}

// UEnvQueryItemType_Point @ 146f2c3f0

UEnvQueryItemType_Point * __thiscall
UEnvQueryItemType_Point::UEnvQueryItemType_Point
          (UEnvQueryItemType_Point *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryItemType_Point__6B_;
  return this;
}

// UEnvQueryItemType_Point @ 146f2c420

UEnvQueryItemType_Point * __thiscall
UEnvQueryItemType_Point::UEnvQueryItemType_Point
          (UEnvQueryItemType_Point *this,FObjectInitializer *param_1)

{
  UEnvQueryItemType::UEnvQueryItemType((UEnvQueryItemType *)this,param_1);
  *(undefined2 *)&this->field_0x28 = 0x20;
  *(undefined ***)this = &___7UEnvQueryItemType_Point__6B_;
  return this;
}

// ~UEnvQueryItemType_Point @ 146f2ee80

void __thiscall UEnvQueryItemType_Point::~UEnvQueryItemType_Point(UEnvQueryItemType_Point *this)

{
  *(undefined ***)this = &___7UEnvQueryItemType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetItemLocation @ 146f56920

TVector<double> * __thiscall
UEnvQueryItemType_Point::GetItemLocation
          (UEnvQueryItemType_Point *this,TVector<double> *__return_storage_ptr__,uchar *param_1)

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

// GetItemNavLocation @ 146f56a70

FNavLocation * __thiscall
UEnvQueryItemType_Point::GetItemNavLocation
          (UEnvQueryItemType_Point *this,FNavLocation *__return_storage_ptr__,uchar *param_1)

{
  double dVar1;
  double dVar2;
  ulong64 uVar3;
  
  dVar1 = *(double *)(param_1 + 8);
  dVar2 = *(double *)(param_1 + 0x10);
  uVar3 = *(ulong64 *)(param_1 + 0x18);
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = *(double *)param_1;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = dVar2;
  __return_storage_ptr__->NodeRef = uVar3;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f58bb0

UClass * __cdecl UEnvQueryItemType_Point::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType_Point.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType_Point",
               &Z_Registration_Info_UClass_UEnvQueryItemType_Point.InnerSingleton,
               StaticRegisterNativesUEnvQueryItemType_Point,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryItemType_Point>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType_Point>,local_res8,
               UEnvQueryItemType_VectorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType_Point.InnerSingleton;
}

// GetValue @ 146f5ab10

FNavLocation * __cdecl
UEnvQueryItemType_Point::GetValue(FNavLocation *__return_storage_ptr__,uchar *param_1)

{
  double dVar1;
  double dVar2;
  ulong64 uVar3;
  
  dVar1 = *(double *)(param_1 + 8);
  dVar2 = *(double *)(param_1 + 0x10);
  uVar3 = *(ulong64 *)(param_1 + 0x18);
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = *(double *)param_1;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = dVar2;
  __return_storage_ptr__->NodeRef = uVar3;
  return __return_storage_ptr__;
}

// SetContextHelper @ 146f742b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UEnvQueryItemType_Point::SetContextHelper(FEnvQueryContextData *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  UClass *pUVar5;
  
  pUVar5 = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (param_1->ValueType).Class.field0_0x0.DebugPtr = pUVar5;
  param_1->NumValues = 1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_1->RawData,0x20,Default);
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  pFVar1 = (param_1->RawData).AllocatorInstance.Data;
  uVar2 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar3 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x14);
  *(double *)pFVar1 = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(undefined4 *)(pFVar1 + 0x10) = uVar2;
  *(undefined4 *)(pFVar1 + 0x14) = uVar3;
  *(undefined4 *)(pFVar1 + 0x18) = 0;
  *(undefined4 *)(pFVar1 + 0x1c) = 0;
  return;
}

// SetContextHelper @ 146f74340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UEnvQueryItemType_Point::SetContextHelper
          (FEnvQueryContextData *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  UClass *pUVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  
  pUVar9 = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (param_1->ValueType).Class.field0_0x0.DebugPtr = pUVar9;
  param_1->NumValues = param_2->ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_1->RawData,param_2->ArrayNum << 5,Default);
  if (((longlong)(param_1->RawData).ArrayNum != (longlong)param_2->ArrayNum * 0x20) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContextData.RawData.Num() == sizeof(FNavLocation) * MultiplePoints.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Items\\EnvQueryItemType_Point.cpp"
                         ,0x3b,L"Failed to allocate the appropriate amount of memory"), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar10 = param_2->ArrayNum;
  uVar12 = 0;
  pFVar14 = (param_1->RawData).AllocatorInstance.Data;
  uVar13 = uVar12;
  if (0 < iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar8 = 0;
      if ((int)uVar11 < iVar10) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar12 = (ulonglong)(uVar11 + 1);
      pFVar1 = pFVar2 + uVar13;
      uVar6 = *(undefined8 *)(pFVar1 + 8);
      pFVar2 = pFVar2 + uVar13 + 0x10;
      uVar4 = *(undefined4 *)pFVar2;
      uVar5 = *(undefined4 *)(pFVar2 + 4);
      *(undefined8 *)pFVar14 = *(undefined8 *)pFVar1;
      *(undefined8 *)(pFVar14 + 8) = uVar6;
      *(undefined4 *)(pFVar14 + 0x10) = uVar4;
      *(undefined4 *)(pFVar14 + 0x14) = uVar5;
      *(undefined4 *)(pFVar14 + 0x18) = 0;
      *(undefined4 *)(pFVar14 + 0x1c) = 0;
      iVar10 = param_2->ArrayNum;
      pFVar14 = pFVar14 + 0x20;
      uVar13 = uVar13 + 0x18;
    } while ((int)(uVar11 + 1) < iVar10);
  }
  return;
}

// SetItemNavLocation @ 146f74b70

void __thiscall
UEnvQueryItemType_Point::SetItemNavLocation
          (UEnvQueryItemType_Point *this,uchar *param_1,FNavLocation *param_2)

{
  double dVar1;
  ulong64 uVar2;
  
  dVar1 = (param_2->Location).field0_0x0._s_0.Y;
  *(double *)param_1 = (param_2->Location).field0_0x0._s_0.X;
  *(double *)(param_1 + 8) = dVar1;
  uVar2 = param_2->NodeRef;
  *(double *)(param_1 + 0x10) = (param_2->Location).field0_0x0._s_0.Z;
  *(ulong64 *)(param_1 + 0x18) = uVar2;
  return;
}

// SetValue @ 146f75760

void __cdecl UEnvQueryItemType_Point::SetValue(uchar *param_1,FNavLocation *param_2)

{
  double dVar1;
  ulong64 uVar2;
  
  dVar1 = (param_2->Location).field0_0x0._s_0.Y;
  *(double *)param_1 = (param_2->Location).field0_0x0._s_0.X;
  *(double *)(param_1 + 8) = dVar1;
  uVar2 = param_2->NodeRef;
  *(double *)(param_1 + 0x10) = (param_2->Location).field0_0x0._s_0.Z;
  *(ulong64 *)(param_1 + 0x18) = uVar2;
  return;
}

// StaticRegisterNativesUEnvQueryItemType_Point @ 146f76e10

void __cdecl UEnvQueryItemType_Point::StaticRegisterNativesUEnvQueryItemType_Point(void)

{
  return;
}

