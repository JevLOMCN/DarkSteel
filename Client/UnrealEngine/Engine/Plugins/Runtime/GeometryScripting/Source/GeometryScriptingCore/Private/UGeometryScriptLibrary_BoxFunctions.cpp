// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 36

// StaticClass @ 14cea8590

UClass * __cdecl UGeometryScriptLibrary_BoxFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_BoxFunctions.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_BoxFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_BoxFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_BoxFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryScriptLibrary_BoxFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_BoxFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_BoxFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_BoxFunctions @ 14ceae570

UGeometryScriptLibrary_BoxFunctions * __thiscall
UGeometryScriptLibrary_BoxFunctions::UGeometryScriptLibrary_BoxFunctions
          (UGeometryScriptLibrary_BoxFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_BoxFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_BoxFunctions @ 14ceae5a0

UGeometryScriptLibrary_BoxFunctions * __thiscall
UGeometryScriptLibrary_BoxFunctions::UGeometryScriptLibrary_BoxFunctions
          (UGeometryScriptLibrary_BoxFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_BoxFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_BoxFunctions @ 14ceaead0

void __thiscall
UGeometryScriptLibrary_BoxFunctions::~UGeometryScriptLibrary_BoxFunctions
          (UGeometryScriptLibrary_BoxFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_BoxFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// FindBoxBoxIntersection @ 14ceb9390

TBox<double> * __cdecl
UGeometryScriptLibrary_BoxFunctions::FindBoxBoxIntersection
          (TBox<double> *__return_storage_ptr__,TBox<double> *param_1,TBox<double> *param_2,
          bool *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  
  dVar1 = (param_2->Max).field0_0x0._s_0.X;
  uVar22 = SUB84(dVar1,0);
  uVar23 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = (param_1->Min).field0_0x0._s_0.X;
  if ((dVar1 < dVar2) || ((param_1->Max).field0_0x0._s_0.X < (param_2->Min).field0_0x0._s_0.X)) {
    *param_3 = false;
    if (dVar1 < dVar2) goto LAB_14ceb94b9;
  }
  else if (((((param_2->Max).field0_0x0._s_0.Y < (param_1->Min).field0_0x0._s_0.Y) ||
            ((param_1->Max).field0_0x0._s_0.Y < (param_2->Min).field0_0x0._s_0.Y)) ||
           ((param_2->Max).field0_0x0._s_0.Z < (param_1->Min).field0_0x0._s_0.Z)) ||
          ((param_1->Max).field0_0x0._s_0.Z < (param_2->Min).field0_0x0._s_0.Z)) {
    *param_3 = false;
  }
  else {
    *param_3 = true;
  }
  dVar2 = (param_2->Min).field0_0x0._s_0.X;
  dVar3 = (param_1->Max).field0_0x0._s_0.X;
  if (dVar2 <= dVar3) {
    dVar24 = (param_1->Min).field0_0x0._s_0.Y;
    dVar25 = (param_2->Max).field0_0x0._s_0.Y;
    if (dVar24 <= dVar25) {
      dVar4 = (param_2->Min).field0_0x0._s_0.Y;
      dVar5 = (param_1->Max).field0_0x0._s_0.Y;
      if (dVar4 <= dVar5) {
        dVar6 = (param_1->Min).field0_0x0._s_0.Z;
        dVar26 = (param_2->Max).field0_0x0._s_0.Z;
        if (dVar6 <= dVar26) {
          dVar7 = (param_2->Min).field0_0x0._s_0.Z;
          dVar8 = (param_1->Max).field0_0x0._s_0.Z;
          if (dVar7 <= dVar8) {
            if (dVar3 <= dVar1) {
              uVar22 = SUB84(dVar3,0);
              uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            dVar1 = *(double *)&(param_1->Min).field0_0x0;
            uVar20 = SUB84(dVar1,0);
            uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
            if (dVar1 <= dVar2) {
              uVar20 = SUB84(dVar2,0);
              uVar21 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            if (dVar24 <= dVar4) {
              dVar24 = dVar4;
            }
            uVar27 = SUB84(dVar7,0);
            uVar28 = (int)((ulonglong)dVar7 >> 0x20);
            if (dVar7 <= dVar6) {
              uVar27 = SUB84(dVar6,0);
              uVar28 = (int)((ulonglong)dVar6 >> 0x20);
            }
            if (dVar5 <= dVar25) {
              dVar25 = dVar5;
            }
            if (dVar8 <= dVar26) {
              dVar26 = dVar8;
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar21,uVar20);
            (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar24;
            (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar28,uVar27);
            (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar23,uVar22);
            (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar25;
            (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar26;
            __return_storage_ptr__->IsValid = '\x01';
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
LAB_14ceb94b9:
  uVar10 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._s_0.X;
  uVar9 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
          ::__l5::EmptyBox.Min.field0_0x0._s_0.Z;
  uVar19 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Min.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X =
       `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
       ::__l5::EmptyBox.Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)uVar19;
  uVar11 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._s_0.Z;
  uVar19 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)uVar9;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)uVar10;
  uVar9 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
          ::__l5::EmptyBox._48_8_;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)uVar19;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)uVar11;
  uVar19 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox._48_8_;
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.IsValid = (uchar)uVar9;
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.Pad[0] = SUB81(uVar9,1);
  uVar12 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Pad[0];
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.Pad[1] = SUB81(uVar9,2);
  uVar13 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Pad[1];
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.Pad[2] = SUB81(uVar9,3);
  uVar14 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Pad[2];
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.Pad[3] = SUB81(uVar9,4);
  uVar15 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Pad[3];
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.Pad[4] = SUB81(uVar9,5);
  uVar16 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Pad[4];
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.Pad[5] = SUB81(uVar9,6);
  uVar17 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Pad[5];
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox.Pad[6] = SUB81(uVar9,7);
  uVar18 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Pad[6];
  __return_storage_ptr__->IsValid =
       `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
       ::__l5::EmptyBox.IsValid;
  `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
  ::__l5::EmptyBox._48_8_ = uVar19;
  __return_storage_ptr__->Pad[0] = uVar12;
  __return_storage_ptr__->Pad[1] = uVar13;
  __return_storage_ptr__->Pad[2] = uVar14;
  __return_storage_ptr__->Pad[3] = uVar15;
  __return_storage_ptr__->Pad[4] = uVar16;
  __return_storage_ptr__->Pad[5] = uVar17;
  __return_storage_ptr__->Pad[6] = uVar18;
  return __return_storage_ptr__;
}

// FindClosestPointOnBox @ 14ceb9510

TVector<double> * __cdecl
UGeometryScriptLibrary_BoxFunctions::FindClosestPointOnBox
          (TVector<double> *__return_storage_ptr__,TBox<double> *param_1,TVector<double> *param_2,
          bool *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  dVar2 = (param_1->Min).field0_0x0._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  if ((((dVar3 <= dVar2) || ((param_1->Max).field0_0x0._s_0.X <= dVar3)) ||
      (dVar4 = (param_2->field0_0x0)._s_0.Y, pdVar1 = &(param_1->Min).field0_0x0._s_0.Y,
      dVar4 < *pdVar1 || dVar4 == *pdVar1)) ||
     ((((param_1->Max).field0_0x0._s_0.Y <= dVar4 ||
       (dVar4 = (param_2->field0_0x0)._s_0.Z, pdVar1 = &(param_1->Min).field0_0x0._s_0.Z,
       dVar4 < *pdVar1 || dVar4 == *pdVar1)) || ((param_1->Max).field0_0x0._s_0.Z <= dVar4)))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  *param_3 = bVar6;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
  if (dVar2 <= dVar3) {
    dVar2 = (param_1->Max).field0_0x0._s_0.X;
    if (dVar2 < dVar3) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  }
  dVar2 = *(double *)((longlong)&(param_1->Min).field0_0x0 + 8);
  uVar7 = SUB84(dVar2,0);
  uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  if (dVar2 <= dVar3) {
    dVar2 = *(double *)((longlong)&(param_1->Max).field0_0x0 + 8);
    uVar7 = SUB84(dVar2,0);
    uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
    if (dVar3 <= dVar2) goto LAB_14ceb95b1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar8,uVar7);
LAB_14ceb95b1:
  dVar2 = *(double *)((longlong)&(param_1->Min).field0_0x0 + 0x10);
  uVar7 = SUB84(dVar2,0);
  uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  if (dVar2 <= dVar3) {
    dVar2 = *(double *)((longlong)&(param_1->Max).field0_0x0 + 0x10);
    uVar7 = SUB84(dVar2,0);
    uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
    if (dVar3 <= dVar2) {
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar8,uVar7);
  return __return_storage_ptr__;
}

// GetBoxBoxDistance @ 14ceba030

double __cdecl
UGeometryScriptLibrary_BoxFunctions::GetBoxBoxDistance(TBox<double> *param_1,TBox<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  
  dVar1 = (param_1->Max).field0_0x0._s_0.Z;
  dVar10 = (param_1->Min).field0_0x0._s_0.Z;
  dVar11 = (param_2->Min).field0_0x0._s_0.Z;
  dVar2 = (param_2->Max).field0_0x0._s_0.Z;
  dVar3 = (param_2->Max).field0_0x0._s_0.Y;
  dVar4 = (param_1->Max).field0_0x0._s_0.Y;
  dVar5 = (param_2->Max).field0_0x0._s_0.X;
  dVar6 = (param_1->Max).field0_0x0._s_0.X;
  dVar8 = (dVar1 + dVar10) * __real_3fe0000000000000 - (dVar2 + dVar11) * __real_3fe0000000000000;
  dVar1 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          ((dVar2 - dVar11) + (dVar1 - dVar10)) * __real_3fe0000000000000;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar10 = (dVar4 + (param_1->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000 -
           (dVar3 + (param_2->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
  auVar9._0_8_ = (dVar5 + (param_2->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
  auVar9._8_8_ = 0;
  dVar11 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
           ((dVar3 - (param_2->Min).field0_0x0._s_0.Y) + (dVar4 - (param_1->Min).field0_0x0._s_0.Y))
           * __real_3fe0000000000000;
  dVar10 = (dVar6 + (param_1->Min).field0_0x0._s_0.X) * __real_3fe0000000000000 - auVar9._0_8_;
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
           ((dVar6 - (param_1->Min).field0_0x0._s_0.X) + (dVar5 - (param_2->Min).field0_0x0._s_0.X))
           * __real_3fe0000000000000;
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
  dVar1 = dVar10 * dVar10 + dVar11 * dVar11 + dVar1 * dVar1;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar1;
  auVar9 = sqrtpd(auVar9,auVar7);
  return auVar9._0_8_;
}

// GetBoxCenterSize @ 14ceba1a0

void __cdecl
UGeometryScriptLibrary_BoxFunctions::GetBoxCenterSize
          (TBox<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (param_1->Min).field0_0x0._s_0.Y;
  dVar2 = (param_1->Min).field0_0x0._s_0.Z;
  dVar5 = ((param_1->Max).field0_0x0._s_0.Y - dVar1) * __real_3fe0000000000000;
  dVar4 = ((param_1->Max).field0_0x0._s_0.Z - dVar2) * __real_3fe0000000000000;
  dVar3 = ((param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X) *
          __real_3fe0000000000000;
  (param_2->field0_0x0)._s_0.X = dVar3 + (param_1->Min).field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar5 + dVar1;
  (param_2->field0_0x0)._s_0.Z = dVar4 + dVar2;
  (param_3->field0_0x0)._s_0.X = dVar3 + dVar3;
  (param_3->field0_0x0)._s_0.Y = dVar5 + dVar5;
  (param_3->field0_0x0)._s_0.Z = dVar4 + dVar4;
  return;
}

// GetBoxCorner @ 14ceba230

TVector<double> * __cdecl
UGeometryScriptLibrary_BoxFunctions::GetBoxCorner
          (TVector<double> *__return_storage_ptr__,TBox<double> *param_1,int param_2)

{
  double dVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  
  iVar2 = 7;
  if (param_2 < 7) {
    iVar2 = param_2;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    iVar4 = iVar2;
  }
  switch(iVar4) {
  default:
    dVar1 = (param_1->Min).field0_0x0._s_0.Y;
    dVar3 = (param_1->Min).field0_0x0._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->Min).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
    return __return_storage_ptr__;
  case 1:
    dVar3 = (param_1->Min).field0_0x0._s_0.X;
    break;
  case 2:
    dVar3 = (param_1->Min).field0_0x0._s_0.X;
    goto LAB_14ceba283;
  case 3:
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->Max).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (param_1->Min).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  case 4:
    dVar3 = (param_1->Max).field0_0x0._s_0.X;
LAB_14ceba283:
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  case 5:
    dVar3 = (param_1->Max).field0_0x0._s_0.X;
    break;
  case 6:
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->Min).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->Max).field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  case 7:
    dVar1 = (param_1->Max).field0_0x0._s_0.Y;
    dVar3 = (param_1->Max).field0_0x0._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->Max).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (param_1->Min).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->Max).field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetBoxFaceCenter @ 14ceba330

TVector<double> * __cdecl
UGeometryScriptLibrary_BoxFunctions::GetBoxFaceCenter
          (TVector<double> *__return_storage_ptr__,TBox<double> *param_1,int param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar1 = (param_1->Max).field0_0x0._s_0.X;
  dVar2 = (param_1->Min).field0_0x0._s_0.X;
  iVar7 = 5;
  if (param_2 < 5) {
    iVar7 = param_2;
  }
  dVar3 = (param_1->Max).field0_0x0._s_0.Y;
  dVar4 = (param_1->Min).field0_0x0._s_0.Y;
  dVar5 = (param_1->Max).field0_0x0._s_0.Z;
  dVar6 = (param_1->Min).field0_0x0._s_0.Z;
  iVar8 = 0;
  if (0 < iVar7) {
    iVar8 = iVar7;
  }
  dVar9 = (dVar1 + dVar2) * __real_3fe0000000000000;
  dVar10 = (dVar3 + dVar4) * __real_3fe0000000000000;
  dVar11 = (dVar5 + dVar6) * __real_3fe0000000000000;
  switch(iVar8) {
  default:
    (param_3->field0_0x0)._s_0.X = 0.0;
    (param_3->field0_0x0)._s_0.Y = 0.0;
    (param_3->field0_0x0)._s_0.Z = -1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6;
    break;
  case 1:
    (param_3->field0_0x0)._s_0.X = 0.0;
    (param_3->field0_0x0)._s_0.Y = 0.0;
    (param_3->field0_0x0)._s_0.Z = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5;
    break;
  case 2:
    (param_3->field0_0x0)._s_0.X = 0.0;
    (param_3->field0_0x0)._s_0.Y = -1.0;
    (param_3->field0_0x0)._s_0.Z = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar11;
    goto LAB_14ceba4a6;
  case 3:
    (param_3->field0_0x0)._s_0.X = 0.0;
    (param_3->field0_0x0)._s_0.Y = 1.0;
    (param_3->field0_0x0)._s_0.Z = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar11;
    goto LAB_14ceba4a6;
  case 4:
    (param_3->field0_0x0)._s_0.X = -1.0;
    (param_3->field0_0x0)._s_0.Y = 0.0;
    (param_3->field0_0x0)._s_0.Z = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar11;
    return __return_storage_ptr__;
  case 5:
    (param_3->field0_0x0)._s_0.X = 1.0;
    (param_3->field0_0x0)._s_0.Y = 0.0;
    (param_3->field0_0x0)._s_0.Z = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar11;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar10;
LAB_14ceba4a6:
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar9;
  return __return_storage_ptr__;
}

// GetBoxPointDistance @ 14ceba4f0

double __cdecl
UGeometryScriptLibrary_BoxFunctions::GetBoxPointDistance
          (TBox<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  dVar1 = ComputeSquaredDistanceFromBoxToPoint<double,double>(&param_1->Min,&param_1->Max,param_2);
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return SQRT(dVar1);
}

// GetBoxVolumeArea @ 14ceba520

void __cdecl
UGeometryScriptLibrary_BoxFunctions::GetBoxVolumeArea
          (TBox<double> *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y;
  dVar1 = (param_1->Max).field0_0x0._s_0.Z - (param_1->Min).field0_0x0._s_0.Z;
  dVar2 = (param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X;
  *param_3 = (dVar3 + dVar3 + dVar1 + dVar1) * dVar2 + (dVar1 + dVar1) * dVar3;
  *param_2 = dVar3 * dVar2 * dVar1;
  return;
}

// GetExpandedBox @ 14cebaa20

TBox<double> * __cdecl
UGeometryScriptLibrary_BoxFunctions::GetExpandedBox
          (TBox<double> *__return_storage_ptr__,TBox<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = (param_1->Min).field0_0x0._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  dVar6 = (param_1->Min).field0_0x0._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar7 = (param_2->field0_0x0)._s_0.Z + (param_1->Max).field0_0x0._s_0.Z;
  dVar3 = (param_2->field0_0x0)._s_0.Y + (param_1->Max).field0_0x0._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_1->Max).field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X =
       (param_1->Min).field0_0x0._s_0.X - (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar6;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar5 - dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar7;
  dVar5 = __real_3fe0000000000000;
  __return_storage_ptr__->IsValid = '\x01';
  if ((__return_storage_ptr__->Max).field0_0x0._s_0.X <
      (__return_storage_ptr__->Min).field0_0x0._s_0.X) {
    dVar4 = ((param_1->Min).field0_0x0._s_0.X + (param_1->Max).field0_0x0._s_0.X) * dVar5;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar4;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar4;
  }
  if (dVar3 < dVar6) {
    dVar4 = ((param_1->Max).field0_0x0._s_0.Y + (param_1->Min).field0_0x0._s_0.Y) * dVar5;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar4;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar4;
  }
  if (dVar7 < (__return_storage_ptr__->Min).field0_0x0._s_0.Z) {
    dVar5 = ((param_1->Max).field0_0x0._s_0.Z + (param_1->Min).field0_0x0._s_0.Z) * dVar5;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar5;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar5;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cebcbf0

UClass * __cdecl UGeometryScriptLibrary_BoxFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_BoxFunctions.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_BoxFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_BoxFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_BoxFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryScriptLibrary_BoxFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_BoxFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_BoxFunctions.InnerSingleton;
}

// GetTransformedBox @ 14cebe620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __cdecl
UGeometryScriptLibrary_BoxFunctions::GetTransformedBox
          (TBox<double> *__return_storage_ptr__,TBox<double> *param_1,TTransform<double> *param_2)

{
  TMatrix<double> *pTVar1;
  undefined1 auStack_b8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pTVar1 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_98);
  UE::Math::TBox<double>::TransformBy(param_1,__return_storage_ptr__,pTVar1);
  return __return_storage_ptr__;
}

// MakeBoxFromCenterExtents @ 14cebf7b0

TBox<double> * __cdecl
UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterExtents
          (TBox<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar5 = (param_2->field0_0x0)._s_0.Z;
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1 - dVar2;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3 - dVar4;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6 - dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3 + dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar6 + dVar5;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// MakeBoxFromCenterSize @ 14cebf840

TBox<double> * __cdecl
UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterSize
          (TBox<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.Y * __real_3fe0000000000000;
  dVar5 = (param_2->field0_0x0)._s_0.Z * __real_3fe0000000000000;
  dVar6 = (param_2->field0_0x0)._s_0.X * __real_3fe0000000000000;
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1 - dVar6;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2 - dVar4;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar3 - dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2 + dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar3 + dVar5;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// StaticRegisterNativesUGeometryScriptLibrary_BoxFunctions @ 14cec2640

void __cdecl
UGeometryScriptLibrary_BoxFunctions::StaticRegisterNativesUGeometryScriptLibrary_BoxFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TestBoxBoxIntersection @ 14cec2ac0

bool __cdecl
UGeometryScriptLibrary_BoxFunctions::TestBoxBoxIntersection
          (TBox<double> *param_1,TBox<double> *param_2)

{
  if (((((param_1->Min).field0_0x0._s_0.X <= (param_2->Max).field0_0x0._s_0.X) &&
       ((param_2->Min).field0_0x0._s_0.X <= (param_1->Max).field0_0x0._s_0.X)) &&
      ((param_1->Min).field0_0x0._s_0.Y <= (param_2->Max).field0_0x0._s_0.Y)) &&
     ((((param_2->Min).field0_0x0._s_0.Y <= (param_1->Max).field0_0x0._s_0.Y &&
       ((param_1->Min).field0_0x0._s_0.Z <= (param_2->Max).field0_0x0._s_0.Z)) &&
      ((param_2->Min).field0_0x0._s_0.Z <= (param_1->Max).field0_0x0._s_0.Z)))) {
    return true;
  }
  return false;
}

// TestBoxSphereIntersection @ 14cec2bc0

bool __cdecl
UGeometryScriptLibrary_BoxFunctions::TestBoxSphereIntersection
          (TBox<double> *param_1,TVector<double> *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (param_1->Min).field0_0x0._s_0.X;
  dVar2 = 0.0;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if ((dVar1 < dVar3) || (dVar3 = (param_1->Max).field0_0x0._s_0.X, dVar3 < dVar1)) {
    dVar2 = (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  dVar3 = (param_1->Min).field0_0x0._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  if ((dVar1 < dVar3) || (dVar3 = (param_1->Max).field0_0x0._s_0.Y, dVar3 < dVar1)) {
    dVar2 = dVar2 + (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  dVar3 = (param_1->Min).field0_0x0._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  if ((dVar1 < dVar3) || (dVar3 = (param_1->Max).field0_0x0._s_0.Z, dVar3 < dVar1)) {
    dVar2 = dVar2 + (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  return dVar2 <= param_3 * param_3;
}

// TestPointInsideBox @ 14cec2ca0

bool __cdecl
UGeometryScriptLibrary_BoxFunctions::TestPointInsideBox
          (TBox<double> *param_1,TVector<double> *param_2,bool param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_1->Min).field0_0x0._s_0.X;
  if (param_3) {
    if (((dVar3 <= dVar2) &&
        (dVar2 < (param_1->Max).field0_0x0._s_0.X || dVar2 == (param_1->Max).field0_0x0._s_0.X)) &&
       ((dVar2 = (param_2->field0_0x0)._s_0.Y, (param_1->Min).field0_0x0._s_0.Y <= dVar2 &&
        (((pdVar1 = &(param_1->Max).field0_0x0._s_0.Y, dVar2 < *pdVar1 || dVar2 == *pdVar1 &&
          (dVar2 = (param_2->field0_0x0)._s_0.Z, (param_1->Min).field0_0x0._s_0.Z <= dVar2)) &&
         (pdVar1 = &(param_1->Max).field0_0x0._s_0.Z, dVar2 < *pdVar1 || dVar2 == *pdVar1)))))) {
      return true;
    }
  }
  else if ((((dVar3 < dVar2) && (dVar2 < (param_1->Max).field0_0x0._s_0.X)) &&
           (dVar2 = (param_2->field0_0x0)._s_0.Y, pdVar1 = &(param_1->Min).field0_0x0._s_0.Y,
           *pdVar1 <= dVar2 && dVar2 != *pdVar1)) &&
          (((dVar2 < (param_1->Max).field0_0x0._s_0.Y &&
            (dVar2 = (param_2->field0_0x0)._s_0.Z, pdVar1 = &(param_1->Min).field0_0x0._s_0.Z,
            *pdVar1 <= dVar2 && dVar2 != *pdVar1)) && (dVar2 < (param_1->Max).field0_0x0._s_0.Z))))
  {
    return true;
  }
  return false;
}

// execFindBoxBoxIntersection @ 14cecacb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execFindBoxBoxIntersection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uchar uVar10;
  uchar *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_118 [32];
  uchar local_f8 [16];
  undefined1 local_e8 [48];
  ulonglong local_b8;
  undefined1 local_a8 [48];
  undefined1 local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_b8 = local_b8 & 0xffffffffffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  local_78 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_f8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  puVar11 = local_f8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  dVar22 = local_a8._0_8_;
  dVar25 = local_a8._32_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar28 = local_a8._24_8_;
  dVar8 = local_e8._0_8_;
  dVar9 = local_a8._16_8_;
  dVar2 = local_e8._8_8_;
  dVar3 = local_a8._8_8_;
  dVar4 = local_a8._40_8_;
  dVar7 = local_e8._16_8_;
  dVar27 = local_e8._24_8_;
  dVar6 = local_e8._32_8_;
  dVar5 = local_e8._40_8_;
  if ((((dVar28 < dVar8) || (dVar27 < dVar22)) || (dVar25 < dVar2)) ||
     (((dVar6 < dVar3 || (dVar4 < dVar7)) || (dVar5 < dVar9)))) {
    uVar10 = '\0';
  }
  else {
    uVar10 = '\x01';
  }
  *puVar11 = uVar10;
  uVar13 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Min.field0_0x0._0_4_;
  uVar15 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Min.field0_0x0._4_4_;
  uVar16 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Min.field0_0x0._8_4_;
  uVar17 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Min.field0_0x0._12_4_;
  uVar12 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Min.field0_0x0._16_4_;
  uVar14 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Min.field0_0x0._20_4_;
  uVar20 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._0_4_;
  uVar21 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._4_4_;
  uVar18 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._8_4_;
  uVar19 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._12_4_;
  uVar23 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._16_4_;
  uVar24 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._20_4_;
  uVar26 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox._48_8_;
  if (((dVar8 <= dVar28) && (dVar22 <= dVar27)) &&
     ((dVar2 <= dVar25 && (((dVar3 <= dVar6 && (dVar7 <= dVar4)) && (dVar9 <= dVar5)))))) {
    uVar16 = local_a8._8_4_;
    uVar17 = local_a8._12_4_;
    if (dVar3 <= dVar2) {
      uVar16 = local_e8._8_4_;
      uVar17 = local_e8._12_4_;
    }
    local_b8 = CONCAT71(local_b8._1_7_,'\x01');
    uVar18 = local_e8._32_4_;
    uVar19 = local_e8._36_4_;
    if (dVar25 <= dVar6) {
      uVar18 = local_a8._32_4_;
      uVar19 = local_a8._36_4_;
    }
    uVar12 = local_a8._16_4_;
    uVar14 = local_a8._20_4_;
    if (dVar9 <= dVar7) {
      uVar12 = local_e8._16_4_;
      uVar14 = local_e8._20_4_;
    }
    if (dVar22 <= dVar8) {
      dVar22 = dVar8;
    }
    if (dVar28 <= dVar27) {
      dVar27 = dVar28;
    }
    uVar23 = local_e8._40_4_;
    uVar24 = local_e8._44_4_;
    if (dVar4 <= dVar5) {
      uVar23 = local_a8._40_4_;
      uVar24 = local_a8._44_4_;
    }
    uVar13 = SUB84(dVar22,0);
    uVar15 = (int)((ulonglong)dVar22 >> 0x20);
    uVar20 = SUB84(dVar27,0);
    uVar21 = (int)((ulonglong)dVar27 >> 0x20);
    uVar26 = local_b8;
  }
  *(undefined4 *)param_3 = uVar13;
  *(undefined4 *)((longlong)param_3 + 4) = uVar15;
  *(undefined4 *)((longlong)param_3 + 8) = uVar16;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar17;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar12;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar20;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar21;
  *(undefined4 *)((longlong)param_3 + 0x20) = uVar18;
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar19;
  *(undefined4 *)((longlong)param_3 + 0x28) = uVar23;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uVar24;
  *(ulonglong *)((longlong)param_3 + 0x30) = uVar26;
  return;
}

// execFindClosestPointOnBox @ 14cecafa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execFindClosestPointOnBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar *puVar3;
  undefined1 auStack_e8 [32];
  uchar local_c8 [8];
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_58 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_c8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  puVar3 = local_c8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  local_98 = local_b0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((((local_c0 <= local_88) || (dStack_70 <= local_c0)) || (dStack_b8 <= dStack_80)) ||
      ((local_68 <= dStack_b8 || (local_b0 <= local_78)))) || (dStack_60 <= local_b0)) {
    uVar2 = '\0';
  }
  else {
    uVar2 = '\x01';
  }
  *puVar3 = uVar2;
  if (local_88 <= local_c0) {
    if (dStack_70 < local_c0) {
      local_c0 = dStack_70;
    }
  }
  else {
    local_c0 = local_88;
  }
  if (dStack_80 <= dStack_b8) {
    if (local_68 < dStack_b8) {
      dStack_b8 = local_68;
    }
  }
  else {
    dStack_b8 = dStack_80;
  }
  if ((local_78 <= local_98) && (local_78 = local_b0, dStack_60 < local_98)) {
    local_78 = dStack_60;
  }
  *(double *)param_3 = local_c0;
  *(double *)((longlong)param_3 + 8) = dStack_b8;
  *(double *)((longlong)param_3 + 0x10) = local_78;
  return;
}

// execGetBoxBoxDistance @ 14cecb760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execGetBoxBoxDistance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined1 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_98 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_60 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  dVar4 = __real_3fe0000000000000;
  dVar5 = (local_a0 + local_b8) * __real_3fe0000000000000;
  dVar6 = (local_68 + local_80) * __real_3fe0000000000000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar5 = dVar5 - dVar6;
  dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          ((local_68 - local_80) + (local_a0 - local_b8)) * dVar4;
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  dVar6 = (local_a8 + local_c0) * dVar4 - (local_70 + local_88) * dVar4;
  dVar6 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          ((local_70 - local_88) + (local_a8 - local_c0)) * dVar4;
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  auVar7._0_8_ = (local_78 + local_90) * dVar4;
  auVar7._8_8_ = 0;
  dVar3 = (local_b0 + local_c8) * dVar4 - auVar7._0_8_;
  dVar4 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          ((local_78 - local_90) + (local_b0 - local_c8)) * dVar4;
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  dVar5 = dVar4 * dVar4 + dVar6 * dVar6 + dVar5 * dVar5;
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar5;
  auVar7 = sqrtpd(auVar7,auVar2);
  *(longlong *)param_3 = auVar7._0_8_;
  return;
}

// execGetBoxCenterSize @ 14cecb9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execGetBoxCenterSize
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_a8 [32];
  double local_88 [3];
  double local_70 [3];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_28 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
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
  pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar4 = local_88;
  if (pdVar3 != (double *)0x0) {
    pdVar4 = pdVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  dVar5 = __real_3fe0000000000000;
  pdVar3 = local_70;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  }
  dVar2 = (local_40 - local_58) * __real_3fe0000000000000;
  dVar6 = (local_38 - local_50) * __real_3fe0000000000000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar5 = (local_30 - local_48) * dVar5;
  *pdVar4 = dVar2 + local_58;
  pdVar4[1] = dVar6 + local_50;
  pdVar4[2] = dVar5 + local_48;
  *pdVar3 = dVar2 + dVar2;
  pdVar3[1] = dVar6 + dVar6;
  pdVar3[2] = dVar5 + dVar5;
  return;
}

// execGetBoxCorner @ 14cecbb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execGetBoxCorner
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  int local_78 [6];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_28 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_78[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = 7;
  if (local_78[0] < 7) {
    iVar2 = local_78[0];
  }
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  switch(iVar3) {
  default:
    local_60 = local_48;
    local_40 = local_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    break;
  case 1:
    local_60 = local_30;
    local_40 = local_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    break;
  case 2:
    local_60 = local_48;
    local_40 = local_58;
    uStack_3c = uStack_54;
    break;
  case 3:
    local_60 = local_48;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    break;
  case 4:
    local_60 = local_48;
    break;
  case 5:
    local_60 = local_30;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    break;
  case 6:
    local_60 = local_30;
    local_40 = local_58;
    uStack_3c = uStack_54;
    break;
  case 7:
    local_60 = local_30;
  }
  *(undefined4 *)param_3 = local_40;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_3c;
  *(undefined4 *)((longlong)param_3 + 8) = uStack_38;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_34;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_60;
  return;
}

// execGetBoxFaceCenter @ 14cecbd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execGetBoxFaceCenter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  double dVar7;
  undefined1 auStack_a8 [32];
  int local_88 [2];
  uchar local_80 [16];
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_88[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_80);
  }
  local_70 = __real_3fe0000000000000;
  puVar6 = local_80;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = 5;
  if (local_88[0] < 5) {
    iVar5 = local_88[0];
  }
  dVar7 = (local_48 + dStack_60) * local_70;
  iVar4 = 0;
  if (0 < iVar5) {
    iVar4 = iVar5;
  }
  dVar3 = (dStack_50 + local_68) * local_70;
  local_70 = (dStack_40 + local_58) * local_70;
  switch(iVar4) {
  default:
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6[4] = '\0';
    puVar6[5] = '\0';
    puVar6[6] = '\0';
    puVar6[7] = '\0';
    puVar6[8] = '\0';
    puVar6[9] = '\0';
    puVar6[10] = '\0';
    puVar6[0xb] = '\0';
    puVar6[0xc] = '\0';
    puVar6[0xd] = '\0';
    puVar6[0xe] = '\0';
    puVar6[0xf] = '\0';
    puVar6[0x10] = '\0';
    puVar6[0x11] = '\0';
    puVar6[0x12] = '\0';
    puVar6[0x13] = '\0';
    puVar6[0x14] = '\0';
    puVar6[0x15] = '\0';
    puVar6[0x16] = 0xf0;
    puVar6[0x17] = 0xbf;
    local_70 = local_58;
    break;
  case 1:
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6[4] = '\0';
    puVar6[5] = '\0';
    puVar6[6] = '\0';
    puVar6[7] = '\0';
    puVar6[8] = '\0';
    puVar6[9] = '\0';
    puVar6[10] = '\0';
    puVar6[0xb] = '\0';
    puVar6[0xc] = '\0';
    puVar6[0xd] = '\0';
    puVar6[0xe] = '\0';
    puVar6[0xf] = '\0';
    puVar6[0x10] = '\0';
    puVar6[0x11] = '\0';
    puVar6[0x12] = '\0';
    puVar6[0x13] = '\0';
    puVar6[0x14] = '\0';
    puVar6[0x15] = '\0';
    puVar6[0x16] = 0xf0;
    puVar6[0x17] = '?';
    local_70 = dStack_40;
    break;
  case 2:
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6[4] = '\0';
    puVar6[5] = '\0';
    puVar6[6] = '\0';
    puVar6[7] = '\0';
    puVar6[8] = '\0';
    puVar6[9] = '\0';
    puVar6[10] = '\0';
    puVar6[0xb] = '\0';
    puVar6[0xc] = '\0';
    puVar6[0xd] = '\0';
    puVar6[0xe] = 0xf0;
    puVar6[0xf] = 0xbf;
    puVar6[0x10] = '\0';
    puVar6[0x11] = '\0';
    puVar6[0x12] = '\0';
    puVar6[0x13] = '\0';
    puVar6[0x14] = '\0';
    puVar6[0x15] = '\0';
    puVar6[0x16] = '\0';
    puVar6[0x17] = '\0';
    dVar7 = dStack_60;
    break;
  case 3:
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6[4] = '\0';
    puVar6[5] = '\0';
    puVar6[6] = '\0';
    puVar6[7] = '\0';
    puVar6[8] = '\0';
    puVar6[9] = '\0';
    puVar6[10] = '\0';
    puVar6[0xb] = '\0';
    puVar6[0xc] = '\0';
    puVar6[0xd] = '\0';
    puVar6[0xe] = 0xf0;
    puVar6[0xf] = '?';
    puVar6[0x10] = '\0';
    puVar6[0x11] = '\0';
    puVar6[0x12] = '\0';
    puVar6[0x13] = '\0';
    puVar6[0x14] = '\0';
    puVar6[0x15] = '\0';
    puVar6[0x16] = '\0';
    puVar6[0x17] = '\0';
    dVar7 = local_48;
    break;
  case 4:
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6[4] = '\0';
    puVar6[5] = '\0';
    puVar6[6] = 0xf0;
    puVar6[7] = 0xbf;
    puVar6[8] = '\0';
    puVar6[9] = '\0';
    puVar6[10] = '\0';
    puVar6[0xb] = '\0';
    puVar6[0xc] = '\0';
    puVar6[0xd] = '\0';
    puVar6[0xe] = '\0';
    puVar6[0xf] = '\0';
    puVar6[0x10] = '\0';
    puVar6[0x11] = '\0';
    puVar6[0x12] = '\0';
    puVar6[0x13] = '\0';
    puVar6[0x14] = '\0';
    puVar6[0x15] = '\0';
    puVar6[0x16] = '\0';
    puVar6[0x17] = '\0';
    dVar3 = local_68;
    break;
  case 5:
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6[4] = '\0';
    puVar6[5] = '\0';
    puVar6[6] = 0xf0;
    puVar6[7] = '?';
    puVar6[8] = '\0';
    puVar6[9] = '\0';
    puVar6[10] = '\0';
    puVar6[0xb] = '\0';
    puVar6[0xc] = '\0';
    puVar6[0xd] = '\0';
    puVar6[0xe] = '\0';
    puVar6[0xf] = '\0';
    puVar6[0x10] = '\0';
    puVar6[0x11] = '\0';
    puVar6[0x12] = '\0';
    puVar6[0x13] = '\0';
    puVar6[0x14] = '\0';
    puVar6[0x15] = '\0';
    puVar6[0x16] = '\0';
    puVar6[0x17] = '\0';
    dVar3 = dStack_50;
  }
  auVar2._8_4_ = SUB84(dVar7,0);
  auVar2._0_8_ = dVar3;
  auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  *(double *)((longlong)param_3 + 0x10) = local_70;
  return;
}

// execGetBoxPointDistance @ 14cecc010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execGetBoxPointDistance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_20 = 0;
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
  auVar3 = ZEXT816(0);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_68 < local_50) || (local_50 = local_38, local_38 < local_68)) {
    auVar3._0_8_ = (local_68 - local_50) * (local_68 - local_50);
    auVar3._8_8_ = 0;
  }
  if ((local_60 < local_48) || (local_48 = local_30, local_30 < local_60)) {
    auVar3._0_8_ = auVar3._0_8_ + (local_60 - local_48) * (local_60 - local_48);
  }
  if ((local_58 < local_40) || (local_40 = local_28, local_28 < local_58)) {
    auVar3._0_8_ = auVar3._0_8_ + (local_58 - local_40) * (local_58 - local_40);
  }
  if (auVar3._0_8_ <= 0.0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar3._8_8_;
    auVar3 = auVar2 << 0x40;
  }
  auVar3 = sqrtpd(auVar3,auVar3);
  *(longlong *)param_3 = auVar3._0_8_;
  return;
}

// execGetBoxVolumeArea @ 14cecc180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execGetBoxVolumeArea
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_28 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  local_60 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar3 = &local_68;
  if (pdVar2 != (double *)0x0) {
    pdVar3 = pdVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  dVar5 = local_38 - local_50;
  pdVar2 = &local_60;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  }
  dVar4 = local_30 - local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *pdVar2 = (dVar5 + dVar5 + dVar4 + dVar4) * (local_40 - local_58) + (dVar4 + dVar4) * dVar5;
  *pdVar3 = dVar5 * (local_40 - local_58) * dVar4;
  return;
}

// execGetExpandedBox @ 14cecc330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execGetExpandedBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  undefined7 uStack_5f;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_28 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  dVar5 = local_a8 + local_40;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar10 = local_98 + local_30;
  dVar9 = local_50 - local_a0;
  dVar6 = local_58 - local_a8;
  if (dVar5 < local_58 - local_a8) {
    dVar5 = (local_58 + local_40) * __real_3fe0000000000000;
    dVar6 = dVar5;
  }
  dVar7 = local_a0 + local_38;
  if (local_a0 + local_38 < dVar9) {
    dVar9 = (local_50 + local_38) * __real_3fe0000000000000;
    dVar7 = dVar9;
  }
  dVar8 = local_48 - local_98;
  if (dVar10 < local_48 - local_98) {
    dVar10 = (local_48 + local_30) * __real_3fe0000000000000;
    dVar8 = dVar10;
  }
  auVar3._8_4_ = SUB84(dVar9,0);
  auVar3._0_8_ = dVar6;
  auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar3;
  auVar2._8_4_ = SUB84(dVar5,0);
  auVar2._0_8_ = dVar8;
  auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x10) = auVar2;
  auVar4._8_4_ = SUB84(dVar10,0);
  auVar4._0_8_ = dVar7;
  auVar4._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x20) = auVar4;
  *(ulonglong *)((longlong)param_3 + 0x30) = CONCAT71(uStack_5f,1);
  return;
}

// execGetTransformedBox @ 14ced1c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execGetTransformedBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_228 [32];
  TVector<double>_u_0 local_208;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  TTransform<double> local_1c8;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  TVector<double>_u_0 local_d0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_d8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_168._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_168._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_168._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_158._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_158._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_158._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_148._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_148._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_148._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_138._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_128._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_118._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  local_1c8.Rotation.XY.m128d_f64[0] = (double)local_168._0_8_;
  local_1c8.Rotation.XY.m128d_f64[1] = (double)local_168._8_8_;
  local_1c8.Rotation.ZW.m128d_f64[0] = (double)local_158._0_8_;
  local_1c8.Rotation.ZW.m128d_f64[1] = (double)local_158._8_8_;
  local_1c8.Translation.XY.m128d_f64[0] = (double)local_148._0_8_;
  local_1c8.Translation.XY.m128d_f64[1] = (double)local_148._8_8_;
  local_1c8.Translation.ZW.m128d_f64[0] = (double)local_138._0_8_;
  local_1c8.Translation.ZW.m128d_f64[1] = (double)local_138._8_8_;
  local_1c8.Scale3D.XY.m128d_f64[0] = (double)local_128._0_8_;
  local_1c8.Scale3D.XY.m128d_f64[1] = (double)local_128._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1c8.Scale3D.ZW.m128d_f64[0] = (double)local_118._0_8_;
  local_1c8.Scale3D.ZW.m128d_f64[1] = (double)local_118._8_8_;
  local_208._s_0.X = local_108;
  local_208._s_0.Y = dStack_100;
  local_208._s_0.Z = local_f8;
  uStack_1f0 = uStack_f0;
  local_1d8 = CONCAT71(uStack_d7,local_d8);
  local_1e8 = local_e8;
  uStack_1e0 = uStack_e0;
  pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_1c8,&local_98);
  UE::Math::TBox<double>::TransformBy
            ((TBox<double> *)&local_208._s_0,(TBox<double> *)&local_d0._s_0,pTVar2);
  *(double *)param_3 = local_d0._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_d0._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_d0._s_0.Z;
  *(undefined8 *)((longlong)param_3 + 0x18) = uStack_b8;
  *(undefined8 *)((longlong)param_3 + 0x20) = local_b0;
  *(undefined8 *)((longlong)param_3 + 0x28) = uStack_a8;
  *(undefined8 *)((longlong)param_3 + 0x30) = local_a0;
  return;
}

// execMakeBoxFromCenterExtents @ 14ced2a40

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execMakeBoxFromCenterExtents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined7 uStack_47;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(double *)param_3 = local_a8 - local_90;
  *(double *)((longlong)param_3 + 8) = local_a0 - local_88;
  *(double *)((longlong)param_3 + 0x10) = local_98 - local_80;
  *(double *)((longlong)param_3 + 0x18) = local_90 + local_a8;
  auVar2._8_4_ = SUB84(local_80 + local_98,0);
  auVar2._0_8_ = local_88 + local_a0;
  auVar2._12_4_ = (int)((ulonglong)(local_80 + local_98) >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x20) = auVar2;
  *(ulonglong *)((longlong)param_3 + 0x30) = CONCAT71(uStack_47,1);
  return;
}

// execMakeBoxFromCenterSize @ 14ced2b90

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execMakeBoxFromCenterSize
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined7 uStack_47;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  dVar3 = __real_3fe0000000000000;
  local_a0 = local_a0 * __real_3fe0000000000000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8 = local_a8 * dVar3;
  local_98 = local_98 * dVar3;
  if (local_a0 <= 0.0) {
    local_a0 = 0.0;
  }
  if (local_a8 <= 0.0) {
    local_a8 = 0.0;
  }
  if (local_98 <= 0.0) {
    local_98 = 0.0;
  }
  *(double *)param_3 = local_90 - local_a8;
  *(double *)((longlong)param_3 + 8) = local_88 - local_a0;
  *(double *)((longlong)param_3 + 0x10) = local_80 - local_98;
  *(double *)((longlong)param_3 + 0x18) = local_a8 + local_90;
  auVar2._8_4_ = SUB84(local_98 + local_80,0);
  auVar2._0_8_ = local_a0 + local_88;
  auVar2._12_4_ = (int)((ulonglong)(local_98 + local_80) >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x20) = auVar2;
  *(ulonglong *)((longlong)param_3 + 0x30) = CONCAT71(uStack_47,1);
  return;
}

// execTestBoxBoxIntersection @ 14ced8c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execTestBoxBoxIntersection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_58 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((local_70 < local_50) || (local_38 < local_88)) || (local_68 < local_48)) ||
     (((local_30 < local_80 || (local_60 < local_40)) || (local_28 < local_78)))) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execTestBoxSphereIntersection @ 14ced8fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execTestBoxSphereIntersection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_28 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  dVar2 = 0.0;
  local_78 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_70 < local_58) || (local_58 = local_40, local_40 < local_70)) {
    dVar2 = (local_70 - local_58) * (local_70 - local_58);
  }
  if ((local_68 < local_50) || (local_50 = local_38, local_38 < local_68)) {
    dVar2 = dVar2 + (local_68 - local_50) * (local_68 - local_50);
  }
  if ((local_60 < local_48) || (local_48 = local_30, local_30 < local_60)) {
    dVar2 = dVar2 + (local_60 - local_48) * (local_60 - local_48);
  }
  *(bool *)param_3 = dVar2 <= local_78 * local_78;
  return;
}

// execTestPointInsideBox @ 14ced93a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_BoxFunctions::execTestPointInsideBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 auStack_98 [32];
  int local_78 [2];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_28 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_78[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_78[0] == 0) {
    if ((((local_70 <= local_58) || (local_40 <= local_70)) || (local_68 <= local_50)) ||
       (((local_38 <= local_68 || (local_60 <= local_48)) || (local_30 <= local_60))))
    goto LAB_14ced9502;
  }
  else if (((local_70 < local_58) || (local_40 < local_70)) ||
          ((local_68 < local_50 ||
           (((local_38 < local_68 || (local_60 < local_48)) || (local_30 < local_60)))))) {
LAB_14ced9502:
    uVar2 = 0;
    goto LAB_14ced9504;
  }
  uVar2 = 1;
LAB_14ced9504:
  *(undefined1 *)param_3 = uVar2;
  return;
}

