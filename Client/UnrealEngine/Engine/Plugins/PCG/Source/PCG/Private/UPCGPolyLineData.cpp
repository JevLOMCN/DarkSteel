// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 48

// StaticClass @ 149859b80

UClass * __cdecl UPCGPolyLineData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPolyLineData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPolyLineData",
               &Z_Registration_Info_UClass_UPCGPolyLineData.InnerSingleton,
               StaticRegisterNativesUPCGPolyLineData,0x110,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPolyLineData>,
               InternalVTableHelperCtorCaller<UPCGPolyLineData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPolyLineData.InnerSingleton;
}

// UPCGPolyLineData @ 14988e500

UPCGPolyLineData * __thiscall
UPCGPolyLineData::UPCGPolyLineData(UPCGPolyLineData *this,FVTableHelper *param_1)

{
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  *(undefined ***)this = &___7UPCGPolyLineData__6B_;
  return this;
}

// UPCGPolyLineData @ 14988e530

UPCGPolyLineData * __thiscall
UPCGPolyLineData::UPCGPolyLineData(UPCGPolyLineData *this,FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  *(undefined ***)this = &___7UPCGPolyLineData__6B_;
  return this;
}

// ~UPCGPolyLineData @ 149891780

void __thiscall UPCGPolyLineData::~UPCGPolyLineData(UPCGPolyLineData *this)

{
  *(undefined ***)this = &___7UPCGPolyLineData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// AllocateMetadataEntries @ 14989ec90

void __thiscall UPCGPolyLineData::AllocateMetadataEntries(UPCGPolyLineData *this)

{
  return;
}

// GetAlphaAtDistance @ 1498b4f70

float __thiscall
UPCGPolyLineData::GetAlphaAtDistance(UPCGPolyLineData *this,int param_1,double param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x4a0))();
  if (((0 < iVar1) && (-1 < param_1)) && ((param_1 != 0 || (__real_3e45798ee2308c3a < param_2)))) {
    if (iVar1 <= param_1) {
      return __real_3f800000;
    }
    dVar2 = (double)(**(code **)(*(longlong *)this + 0x4b0))(this,param_1);
    dVar3 = dVar2;
    if (param_2 <= dVar2) {
      dVar3 = param_2;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    if (dVar2 <= __real_3e45798ee2308c3a) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = dVar3 / dVar2;
    }
    return (float)(((double)param_1 + dVar3) / (double)iVar1);
  }
  return 0.0;
}

// GetBounds @ 1498b59e0

TBox<double> * __thiscall
UPCGPolyLineData::GetBounds(UPCGPolyLineData *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  undefined1 local_28 [32];
  
  iVar7 = 0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  iVar5 = (**(code **)(*(longlong *)this + 0x4a0))();
  if (0 < iVar5) {
    do {
      pdVar6 = (double *)(**(code **)(*(longlong *)this + 0x4d8))(this,local_28,iVar7,0,1);
      if (__return_storage_ptr__->IsValid == '\0') {
        dVar11 = pdVar6[1];
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = *pdVar6;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar11;
        dVar11 = pdVar6[2];
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar11;
        uVar8 = *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0;
        uVar9 = *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4);
        uVar3 = *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
        uVar4 = *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc);
        __return_storage_ptr__->IsValid = '\x01';
        *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar8;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar9;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar3;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar4;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar11;
      }
      else {
        dVar11 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
        uVar8 = SUB84(dVar11,0);
        uVar9 = (undefined4)((ulonglong)dVar11 >> 0x20);
        dVar10 = *pdVar6;
        if (dVar10 <= dVar11) {
          uVar8 = SUB84(dVar10,0);
          uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar9,uVar8);
        dVar11 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
        dVar10 = pdVar6[1];
        if (dVar11 <= pdVar6[1]) {
          dVar10 = dVar11;
        }
        dVar11 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
        uVar8 = SUB84(dVar11,0);
        uVar9 = (undefined4)((ulonglong)dVar11 >> 0x20);
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar10;
        dVar10 = pdVar6[2];
        if (dVar10 <= dVar11) {
          uVar8 = SUB84(dVar10,0);
          uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        dVar11 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar9,uVar8);
        if (dVar11 <= *pdVar6) {
          dVar11 = *pdVar6;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar11;
        dVar11 = pdVar6[1];
        uVar8 = SUB84(dVar11,0);
        uVar9 = (undefined4)((ulonglong)dVar11 >> 0x20);
        dVar10 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
        if (dVar11 <= dVar1) {
          uVar8 = SUB84(dVar1,0);
          uVar9 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar9,uVar8);
        if (dVar10 <= pdVar6[2]) {
          dVar10 = pdVar6[2];
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar10;
      }
      lVar2 = *(longlong *)this;
      uVar8 = (**(code **)(lVar2 + 0x4b0))(this,iVar7);
      pdVar6 = (double *)(**(code **)(lVar2 + 0x4d8))(this,local_28,iVar7,uVar8,1);
      if (__return_storage_ptr__->IsValid == '\0') {
        dVar11 = pdVar6[1];
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = *pdVar6;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar11;
        dVar11 = pdVar6[2];
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar11;
        uVar8 = *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0;
        uVar9 = *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4);
        uVar3 = *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
        uVar4 = *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc);
        __return_storage_ptr__->IsValid = '\x01';
        *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar8;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar9;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar3;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar4;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar11;
      }
      else {
        dVar11 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
        uVar8 = SUB84(dVar11,0);
        uVar9 = (undefined4)((ulonglong)dVar11 >> 0x20);
        dVar10 = *pdVar6;
        if (dVar10 <= dVar11) {
          uVar8 = SUB84(dVar10,0);
          uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        dVar11 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar9,uVar8);
        if (pdVar6[1] <= dVar11) {
          dVar11 = pdVar6[1];
        }
        dVar10 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
        uVar8 = SUB84(dVar10,0);
        uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar11;
        dVar11 = pdVar6[2];
        if (dVar11 <= dVar10) {
          uVar8 = SUB84(dVar11,0);
          uVar9 = (undefined4)((ulonglong)dVar11 >> 0x20);
        }
        dVar11 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar9,uVar8);
        if (dVar11 <= *pdVar6) {
          dVar11 = *pdVar6;
        }
        dVar10 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
        uVar8 = SUB84(dVar10,0);
        uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar11;
        dVar11 = pdVar6[1];
        if (dVar10 <= dVar11) {
          uVar8 = SUB84(dVar11,0);
          uVar9 = (undefined4)((ulonglong)dVar11 >> 0x20);
        }
        dVar11 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar9,uVar8);
        if (dVar11 <= pdVar6[2]) {
          dVar11 = pdVar6[2];
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar11;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  return __return_storage_ptr__;
}

// GetConstVerticesEntryKeys @ 1498b7990

TArrayView<__int64_const_,int> * __thiscall
UPCGPolyLineData::GetConstVerticesEntryKeys
          (UPCGPolyLineData *this,TArrayView<__int64_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (long64 *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetCurvatureAtDistance @ 1498b8020

double __thiscall
UPCGPolyLineData::GetCurvatureAtDistance(UPCGPolyLineData *this,int param_1,double param_2)

{
  return 0.0;
}

// GetDataType @ 1498b8400

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGPolyLineData::GetDataType(UPCGPolyLineData *this)

{
  return PolyLine;
}

// GetDataTypeId @ 1498b89a0

FPCGDataTypeBaseId * __thiscall UPCGPolyLineData::GetDataTypeId(UPCGPolyLineData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolyline::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolyline::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolyline::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolyline::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolyline::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolyline.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolyline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoPolyline,(UObject *)pUVar3,
                         L"PCGDataTypeInfoPolyline");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolyline.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1498b8a23;
  }
  else {
LAB_1498b8a23:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolyline.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498b8a7a;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_;
    if (((int)(TVar4.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1498b8a7c;
  }
LAB_1498b8a7a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_1498b8a7c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolyline::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolyline::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPolyline::AsId(void)'
          ::__l2::Id;
}

// GetDimension @ 1498b9a40

int __thiscall UPCGPolyLineData::GetDimension(UPCGPolyLineData *this)

{
  return 1;
}

// GetDistanceAtSegmentStart @ 1498b9e50

double __thiscall UPCGPolyLineData::GetDistanceAtSegmentStart(UPCGPolyLineData *this,int param_1)

{
  return 0.0;
}

// GetInputKeyAtAlpha @ 1498ba4d0

float __thiscall UPCGPolyLineData::GetInputKeyAtAlpha(UPCGPolyLineData *this,float param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x4a0))();
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  return (float)iVar1 * param_1;
}

// GetInputKeyAtDistance @ 1498ba560

float __thiscall
UPCGPolyLineData::GetInputKeyAtDistance(UPCGPolyLineData *this,int param_1,double param_2)

{
  return 0.0;
}

// GetLength @ 1498bacc0

double __thiscall UPCGPolyLineData::GetLength(UPCGPolyLineData *this)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  dVar2 = 0.0;
  iVar3 = (**(code **)(*(longlong *)this + 0x4a0))();
  if (iVar3 < 1) {
    return 0.0;
  }
  do {
    dVar1 = (double)(**(code **)(*(longlong *)this + 0x4b0))(this,iVar4);
    dVar2 = dVar2 + dVar1;
    iVar4 = iVar4 + 1;
    iVar3 = (**(code **)(*(longlong *)this + 0x4a0))(this);
  } while (iVar4 < iVar3);
  return dVar2;
}

// GetLocationAtAlpha @ 1498baee0

TVector<double> * __thiscall
UPCGPolyLineData::GetLocationAtAlpha
          (UPCGPolyLineData *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  undefined8 uVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPolyLineData.h"
             ,0x33,L"Pure virtual not implemented (%s)");
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetLocationAtDistance @ 1498bafe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UPCGPolyLineData::GetLocationAtDistance
          (UPCGPolyLineData *this,TVector<double> *__return_storage_ptr__,int param_1,double param_2
          ,bool param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  bool local_88;
  undefined8 local_80;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_80 = 0;
  local_88 = param_3;
  lVar3 = (**(code **)(*(longlong *)this + 0x4d0))(this,local_78);
  dVar2 = *(double *)(lVar3 + 0x28);
  dVar1 = *(double *)(lVar3 + 0x30);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(lVar3 + 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetMutableVerticesEntryKeys @ 1498bb6f0

TArrayView<__int64,int> * __thiscall
UPCGPolyLineData::GetMutableVerticesEntryKeys
          (UPCGPolyLineData *this,TArrayView<__int64,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (long64 *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNumSegments @ 1498bb9b0

int __thiscall UPCGPolyLineData::GetNumSegments(UPCGPolyLineData *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPolyLineData.h"
             ,0x28,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetNumVertices @ 1498bba40

int __thiscall UPCGPolyLineData::GetNumVertices(UPCGPolyLineData *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*(longlong *)this + 0x4a0))();
  iVar3 = iVar2;
  if (0 < iVar2) {
    cVar1 = (**(code **)(*(longlong *)this + 0x510))(this);
    iVar3 = iVar2 + 1;
    if (cVar1 != '\0') {
      iVar3 = iVar2;
    }
  }
  return iVar3;
}

// GetPrivateStaticClass @ 1498bc7d0

UClass * __cdecl UPCGPolyLineData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPolyLineData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPolyLineData",
               &Z_Registration_Info_UClass_UPCGPolyLineData.InnerSingleton,
               StaticRegisterNativesUPCGPolyLineData,0x110,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPolyLineData>,
               InternalVTableHelperCtorCaller<UPCGPolyLineData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPolyLineData.InnerSingleton;
}

// GetSegmentLength @ 1498c5f90

double __thiscall UPCGPolyLineData::GetSegmentLength(UPCGPolyLineData *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPolyLineData.h"
             ,0x2f,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetTangentsAtSegmentStart @ 1498c7db0

void __thiscall
UPCGPolyLineData::GetTangentsAtSegmentStart
          (UPCGPolyLineData *this,int param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar1;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)uVar1;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// GetTransform @ 1498c8310

TTransform<double> * __thiscall
UPCGPolyLineData::GetTransform(UPCGPolyLineData *this,TTransform<double> *__return_storage_ptr__)

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

// GetTransformAtAlpha @ 1498c84c0

TTransform<double> * __thiscall
UPCGPolyLineData::GetTransformAtAlpha
          (UPCGPolyLineData *this,TTransform<double> *__return_storage_ptr__,float param_1)

{
  __m128d _Var1;
  __m128d _Var2;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPolyLineData.h"
             ,0x37,L"Pure virtual not implemented (%s)");
  _Var1 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
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

// GetTransformAtDistance @ 1498c9130

TTransform<double> * __thiscall
UPCGPolyLineData::GetTransformAtDistance
          (UPCGPolyLineData *this,TTransform<double> *__return_storage_ptr__,int param_1,
          double param_2,bool param_3,TBox<double> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPolyLineData.h"
             ,0x3e,L"Pure virtual not implemented (%s)");
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
  return __return_storage_ptr__;
}

// IsClosed @ 1498d0e90

bool __thiscall UPCGPolyLineData::IsClosed(UPCGPolyLineData *this)

{
  return false;
}

// K2_GetTransformAtDistance @ 1498d12d0

TTransform<double> * __thiscall
UPCGPolyLineData::K2_GetTransformAtDistance
          (UPCGPolyLineData *this,TTransform<double> *__return_storage_ptr__,int param_1,
          double param_2,TBox<double> *param_3,bool param_4)

{
  (**(code **)(*(longlong *)this + 0x4d0))();
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGPolyLineData @ 1498f6980

void __cdecl UPCGPolyLineData::StaticRegisterNativesUPCGPolyLineData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x11;
  local_18.DataPtr = Z_Construct_UClass_UPCGPolyLineData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// WriteMetadataToPoint @ 1498fa8a0

void __thiscall
UPCGPolyLineData::WriteMetadataToPoint
          (UPCGPolyLineData *this,float param_1,FPCGPoint *param_2,UPCGMetadata *param_3)

{
  return;
}

// execGetAlphaAtDistance @ 1498fc4d0

void __cdecl
UPCGPolyLineData::execGetAlphaAtDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x4e8))(param_1,local_res8[0],local_res10);
  *(undefined4 *)param_3 = uVar2;
  return;
}

// execGetCurvatureAtDistance @ 1498fc630

void __cdecl
UPCGPolyLineData::execGetCurvatureAtDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x4e0))(param_1,local_res8[0],local_res10);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetDistanceAtSegmentStart @ 1498fc830

void __cdecl
UPCGPolyLineData::execGetDistanceAtSegmentStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x508))(param_1,local_res8[0]);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetInputKeyAtAlpha @ 1498fcd30

void __cdecl
UPCGPolyLineData::execGetInputKeyAtAlpha(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x4f8))(param_1,local_res8[0]);
  *(undefined4 *)param_3 = uVar2;
  return;
}

// execGetInputKeyAtDistance @ 1498fcdd0

void __cdecl
UPCGPolyLineData::execGetInputKeyAtDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x4f0))(param_1,local_res8[0],local_res10);
  *(undefined4 *)param_3 = uVar2;
  return;
}

// execGetLength @ 1498fceb0

void __cdecl UPCGPolyLineData::execGetLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x4c8))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetLocationAtAlpha @ 1498fcef0

void __cdecl
UPCGPolyLineData::execGetLocationAtAlpha(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_28 [32];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x4b8))(param_1,local_28,local_res8[0])
  ;
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execGetLocationAtDistance @ 1498fcfa0

void __cdecl
UPCGPolyLineData::execGetLocationAtDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined1 local_38 [32];
  
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
  local_res18 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0x4d8))
                     (param_1,local_38,local_res10[0],local_res18,local_res8[0] != 0);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execGetNumSegments @ 1498fd280

void __cdecl UPCGPolyLineData::execGetNumSegments(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x4a0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetNumVertices @ 1498fd2c0

void __cdecl UPCGPolyLineData::execGetNumVertices(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x4a8))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetSegmentLength @ 1498fd710

void __cdecl UPCGPolyLineData::execGetSegmentLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x4b0))(param_1,local_res8[0]);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetTangentsAtSegmentStart @ 1498fd8b0

void __cdecl
UPCGPolyLineData::execGetTangentsAtSegmentStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  undefined4 local_res8 [2];
  uchar local_38 [24];
  uchar local_20 [24];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar2 = local_38;
  if (puVar3 != (uchar *)0x0) {
    puVar2 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_20);
  }
  puVar3 = local_20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x500))(param_1,local_res8[0],puVar2,puVar3);
  return;
}

// execGetTransform @ 1498fd9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UPCGPolyLineData::execGetTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x498))(param_1,local_78);
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

// execGetTransformAtAlpha @ 1498fda80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGPolyLineData::execGetTransformAtAlpha(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [4];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x4c0))(param_1,local_88,local_98[0]);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = puVar3[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  uVar2 = puVar3[5];
  *(undefined8 *)((longlong)param_3 + 0x20) = puVar3[4];
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar2;
  uVar2 = puVar3[7];
  *(undefined8 *)((longlong)param_3 + 0x30) = puVar3[6];
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar2;
  uVar2 = puVar3[9];
  *(undefined8 *)((longlong)param_3 + 0x40) = puVar3[8];
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar2;
  uVar2 = puVar3[0xb];
  *(undefined8 *)((longlong)param_3 + 0x50) = puVar3[10];
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar2;
  return;
}

// execIsClosed @ 1498fe450

void __cdecl UPCGPolyLineData::execIsClosed(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x510))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execK2_GetTransformAtDistance @ 1498fe990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGPolyLineData::execK2_GetTransformAtDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  uchar *local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uchar local_68 [48];
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_d4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d4);
  }
  local_d0 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_d8 = 0;
  puVar2 = local_68;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_e8 = local_d8 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0 = puVar2;
  (**(code **)(*(longlong *)param_1 + 0x4d0))(param_1,&local_c8,local_d4,local_d0);
  *(undefined8 *)param_3 = local_c8;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_c0;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_b8;
  *(undefined8 *)((longlong)param_3 + 0x18) = uStack_b0;
  *(undefined8 *)((longlong)param_3 + 0x20) = local_a8;
  *(undefined8 *)((longlong)param_3 + 0x28) = uStack_a0;
  *(undefined8 *)((longlong)param_3 + 0x30) = local_98;
  *(undefined8 *)((longlong)param_3 + 0x38) = uStack_90;
  *(undefined8 *)((longlong)param_3 + 0x40) = local_88;
  *(undefined8 *)((longlong)param_3 + 0x48) = uStack_80;
  *(undefined8 *)((longlong)param_3 + 0x50) = local_78;
  *(undefined8 *)((longlong)param_3 + 0x58) = uStack_70;
  return;
}

// execWriteMetadataToPoint @ 1498fff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGPolyLineData::execWriteMetadataToPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_128 [32];
  undefined4 local_108 [2];
  undefined8 local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_108[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar3 = (uint)__xmm_80000000000000008000000000000000;
  uVar4 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar4,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar3);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar4,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar3);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar4,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar3);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_100 = 0;
  pdVar2 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x518))(param_1,local_108[0],pdVar2,local_100);
  return;
}

