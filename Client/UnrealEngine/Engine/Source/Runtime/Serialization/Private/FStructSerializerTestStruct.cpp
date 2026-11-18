// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 5

// StaticStruct @ 148b85e00

UScriptStruct * __cdecl FStructSerializerTestStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerTestStruct,(UObject *)pUVar1,
                         L"StructSerializerTestStruct");
  }
  return Z_Registration_Info_UScriptStruct_FStructSerializerTestStruct.OuterSingleton;
}

// FStructSerializerTestStruct @ 148b9f7b0

/* WARNING: Type propagation algorithm not settling */

FStructSerializerTestStruct * __thiscall
FStructSerializerTestStruct::FStructSerializerTestStruct
          (FStructSerializerTestStruct *this,FStructSerializerTestStruct *param_1)

{
  TOptional<FString> *this_00;
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *this_01;
  TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  *this_02;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FScriptContainerElement *_Src;
  long64 lVar7;
  ulong64 uVar8;
  double dVar9;
  longlong lVar10;
  undefined1 uVar11;
  short sVar12;
  ushort uVar13;
  uint uVar14;
  undefined4 uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  undefined7 uVar23;
  
  uVar11 = (param_1->Numerics).field_0x1;
  sVar12 = (param_1->Numerics).Int16;
  iVar4 = (param_1->Numerics).Int32;
  lVar7 = (param_1->Numerics).Int64;
  (this->Numerics).Int8 = (param_1->Numerics).Int8;
  (this->Numerics).field_0x1 = uVar11;
  (this->Numerics).Int16 = sVar12;
  (this->Numerics).Int32 = iVar4;
  (this->Numerics).Int64 = lVar7;
  uVar11 = (param_1->Numerics).field_0x11;
  uVar13 = (param_1->Numerics).UInt16;
  uVar14 = (param_1->Numerics).UInt32;
  uVar8 = (param_1->Numerics).UInt64;
  (this->Numerics).UInt8 = (param_1->Numerics).UInt8;
  (this->Numerics).field_0x11 = uVar11;
  (this->Numerics).UInt16 = uVar13;
  (this->Numerics).UInt32 = uVar14;
  (this->Numerics).UInt64 = uVar8;
  uVar15 = *(undefined4 *)&(param_1->Numerics).field_0x24;
  dVar9 = (param_1->Numerics).Double;
  (this->Numerics).Float = (param_1->Numerics).Float;
  *(undefined4 *)&(this->Numerics).field_0x24 = uVar15;
  (this->Numerics).Double = dVar9;
  bVar3 = (param_1->Booleans).BoolTrue;
  (this->Booleans).BoolFalse = (param_1->Booleans).BoolFalse;
  (this->Booleans).BoolTrue = bVar3;
  (this->Booleans).field_0x2 = (param_1->Booleans).field_0x2;
  pUVar5 = (param_1->Objects).RawClass.field0_0x0.DebugPtr;
  (this->Objects).RawClass.field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar5 = (param_1->Objects).WrappedClass.field0_0x0.DebugPtr;
  (this->Objects).WrappedClass.field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar5 = (param_1->Objects).SubClass.Class.field0_0x0.DebugPtr;
  (this->Objects).SubClass.Class.field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  *(undefined8 *)&(this->Objects).SoftClass.SoftObjectPtr =
       *(undefined8 *)&(param_1->Objects).SoftClass.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->Objects).SoftClass.SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->Objects).SoftClass.SoftObjectPtr.field_0x8);
  pUVar6 = (param_1->Objects).RawObject.field0_0x0.DebugPtr;
  (this->Objects).RawObject.field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  pUVar6 = (param_1->Objects).WrappedObject.field0_0x0.DebugPtr;
  (this->Objects).WrappedObject.field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  (this->Objects).WeakObject.WeakPtr = (param_1->Objects).WeakObject.WeakPtr;
  *(undefined8 *)&(this->Objects).SoftObject.SoftObjectPtr =
       *(undefined8 *)&(param_1->Objects).SoftObject.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->Objects).SoftObject.SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->Objects).SoftObject.SoftObjectPtr.field_0x8);
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->Objects).ClassPath,
             (FSoftObjectPath *)&(param_1->Objects).ClassPath);
  FSoftObjectPath::FSoftObjectPath(&(this->Objects).ObjectPath,&(param_1->Objects).ObjectPath);
  FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
            (&this->Builtins,&param_1->Builtins);
  FStructSerializerArrayTestStruct::FStructSerializerArrayTestStruct(&this->Arrays,&param_1->Arrays)
  ;
  FStructSerializerMapTestStruct::FStructSerializerMapTestStruct(&this->Maps,&param_1->Maps);
  FStructSerializerSetTestStruct::FStructSerializerSetTestStruct(&this->Sets,&param_1->Sets);
  (this->Optionals).StrOptional.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->Optionals).StrOptional.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Optionals).StrOptional.field0_0x0 + 0xc) = 0xffffffff;
  if (*(int *)((longlong)&(param_1->Optionals).StrOptional.field0_0x0 + 0xc) != -1) {
    ::FString::FString((FString *)&this->Optionals,(FString *)&param_1->Optionals);
  }
  this_00 = &(this->Optionals).StrOptionalUnset;
  (this_00->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->Optionals).StrOptionalUnset.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Optionals).StrOptionalUnset.field0_0x0 + 0xc) = 0xffffffff;
  if (*(int *)((longlong)&(param_1->Optionals).StrOptionalUnset.field0_0x0 + 0xc) != -1) {
    ::FString::FString((FString *)this_00,(FString *)&(param_1->Optionals).StrOptionalUnset);
  }
  (this->Optionals).IntOptional.bIsSet = false;
  bVar3 = (param_1->Optionals).IntOptional.bIsSet;
  (this->Optionals).IntOptional.bIsSet = bVar3;
  if (bVar3 != false) {
    (this->Optionals).IntOptional.TypedValue = (param_1->Optionals).IntOptional.TypedValue;
  }
  (this->Optionals).IntOptionalUnset.bIsSet = false;
  bVar3 = (param_1->Optionals).IntOptionalUnset.bIsSet;
  (this->Optionals).IntOptionalUnset.bIsSet = bVar3;
  if (bVar3 != false) {
    (this->Optionals).IntOptionalUnset.TypedValue = (param_1->Optionals).IntOptionalUnset.TypedValue
    ;
  }
  (this->Optionals).NameOptional.field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->Optionals).NameOptional.field0_0x0.TypedValue.Number = 0;
  if ((param_1->Optionals).NameOptional.field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    (this->Optionals).NameOptional.field0_0x0 = (param_1->Optionals).NameOptional.field0_0x0;
  }
  (this->Optionals).NameOptionalUnset.field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->Optionals).NameOptionalUnset.field0_0x0.TypedValue.Number = 0;
  if ((param_1->Optionals).NameOptionalUnset.field0_0x0.TypedValue.ComparisonIndex.Value !=
      0xffffffff) {
    (this->Optionals).NameOptionalUnset.field0_0x0 =
         (param_1->Optionals).NameOptionalUnset.field0_0x0;
  }
  (this->Optionals).StructOptional.bIsSet = false;
  bVar3 = (param_1->Optionals).StructOptional.bIsSet;
  (this->Optionals).StructOptional.bIsSet = bVar3;
  if (bVar3 != false) {
    FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
              (&(this->Optionals).StructOptional.TypedValue,
               &(param_1->Optionals).StructOptional.TypedValue);
  }
  (this->Optionals).StructOptionalUnset.bIsSet = false;
  bVar3 = (param_1->Optionals).StructOptionalUnset.bIsSet;
  (this->Optionals).StructOptionalUnset.bIsSet = bVar3;
  if (bVar3 != false) {
    FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
              (&(this->Optionals).StructOptionalUnset.TypedValue,
               &(param_1->Optionals).StructOptionalUnset.TypedValue);
  }
  dVar9 = (param_1->LWCTypes).Vector.field0_0x0._s_0.Y;
  (this->LWCTypes).Vector.field0_0x0._s_0.X = (param_1->LWCTypes).Vector.field0_0x0._s_0.X;
  (this->LWCTypes).Vector.field0_0x0._s_0.Y = dVar9;
  (this->LWCTypes).Vector.field0_0x0._s_0.Z = (param_1->LWCTypes).Vector.field0_0x0._s_0.Z;
  dVar9 = (param_1->LWCTypes).Vector2D.field0_0x0._s_0.Y;
  (this->LWCTypes).Vector2D.field0_0x0._s_0.X = (param_1->LWCTypes).Vector2D.field0_0x0._s_0.X;
  (this->LWCTypes).Vector2D.field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->LWCTypes).Vector4.field0_0x0._s_0.Y;
  (this->LWCTypes).Vector4.field0_0x0._s_0.X = (param_1->LWCTypes).Vector4.field0_0x0._s_0.X;
  (this->LWCTypes).Vector4.field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->LWCTypes).Vector4.field0_0x0._s_0.W;
  (this->LWCTypes).Vector4.field0_0x0._s_0.Z = (param_1->LWCTypes).Vector4.field0_0x0._s_0.Z;
  (this->LWCTypes).Vector4.field0_0x0._s_0.W = dVar9;
  dVar9 = (param_1->LWCTypes).Matrix.M[0][1];
  (this->LWCTypes).Matrix.M[0][0] = (param_1->LWCTypes).Matrix.M[0][0];
  (this->LWCTypes).Matrix.M[0][1] = dVar9;
  dVar9 = (param_1->LWCTypes).Matrix.M[0][3];
  (this->LWCTypes).Matrix.M[0][2] = (param_1->LWCTypes).Matrix.M[0][2];
  (this->LWCTypes).Matrix.M[0][3] = dVar9;
  dVar9 = (param_1->LWCTypes).Matrix.M[1][1];
  (this->LWCTypes).Matrix.M[1][0] = (param_1->LWCTypes).Matrix.M[1][0];
  (this->LWCTypes).Matrix.M[1][1] = dVar9;
  dVar9 = (param_1->LWCTypes).Matrix.M[1][3];
  (this->LWCTypes).Matrix.M[1][2] = (param_1->LWCTypes).Matrix.M[1][2];
  (this->LWCTypes).Matrix.M[1][3] = dVar9;
  dVar9 = (param_1->LWCTypes).Matrix.M[2][1];
  (this->LWCTypes).Matrix.M[2][0] = (param_1->LWCTypes).Matrix.M[2][0];
  (this->LWCTypes).Matrix.M[2][1] = dVar9;
  dVar9 = (param_1->LWCTypes).Matrix.M[2][3];
  (this->LWCTypes).Matrix.M[2][2] = (param_1->LWCTypes).Matrix.M[2][2];
  (this->LWCTypes).Matrix.M[2][3] = dVar9;
  dVar9 = (param_1->LWCTypes).Matrix.M[3][1];
  (this->LWCTypes).Matrix.M[3][0] = (param_1->LWCTypes).Matrix.M[3][0];
  (this->LWCTypes).Matrix.M[3][1] = dVar9;
  dVar9 = (param_1->LWCTypes).Matrix.M[3][3];
  (this->LWCTypes).Matrix.M[3][2] = (param_1->LWCTypes).Matrix.M[3][2];
  (this->LWCTypes).Matrix.M[3][3] = dVar9;
  lVar10 = (param_1->LWCTypes).Plane._padding_;
  (this->LWCTypes).Plane._padding_ = (param_1->LWCTypes).Plane._padding_;
  (this->LWCTypes).Plane._padding_ = lVar10;
  dVar9 = (param_1->LWCTypes).Plane.W;
  (this->LWCTypes).Plane._padding_ = (param_1->LWCTypes).Plane._padding_;
  (this->LWCTypes).Plane.W = dVar9;
  dVar9 = (param_1->LWCTypes).Quat.Y;
  (this->LWCTypes).Quat.X = (param_1->LWCTypes).Quat.X;
  (this->LWCTypes).Quat.Y = dVar9;
  dVar9 = (param_1->LWCTypes).Quat.W;
  (this->LWCTypes).Quat.Z = (param_1->LWCTypes).Quat.Z;
  (this->LWCTypes).Quat.W = dVar9;
  dVar9 = (param_1->LWCTypes).Rotator.Yaw;
  (this->LWCTypes).Rotator.Pitch = (param_1->LWCTypes).Rotator.Pitch;
  (this->LWCTypes).Rotator.Yaw = dVar9;
  (this->LWCTypes).Rotator.Roll = (param_1->LWCTypes).Rotator.Roll;
  dVar9 = (param_1->LWCTypes).Transform.Rotation.XY.m128d_f64[1];
  (this->LWCTypes).Transform.Rotation.XY.m128d_f64[0] =
       (param_1->LWCTypes).Transform.Rotation.XY.m128d_f64[0];
  (this->LWCTypes).Transform.Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->LWCTypes).Transform.Rotation.ZW.m128d_f64[1];
  (this->LWCTypes).Transform.Rotation.ZW.m128d_f64[0] =
       (param_1->LWCTypes).Transform.Rotation.ZW.m128d_f64[0];
  (this->LWCTypes).Transform.Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->LWCTypes).Transform.Translation.XY.m128d_f64[1];
  (this->LWCTypes).Transform.Translation.XY.m128d_f64[0] =
       (param_1->LWCTypes).Transform.Translation.XY.m128d_f64[0];
  (this->LWCTypes).Transform.Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->LWCTypes).Transform.Translation.ZW.m128d_f64[1];
  (this->LWCTypes).Transform.Translation.ZW.m128d_f64[0] =
       (param_1->LWCTypes).Transform.Translation.ZW.m128d_f64[0];
  (this->LWCTypes).Transform.Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->LWCTypes).Transform.Scale3D.XY.m128d_f64[1];
  (this->LWCTypes).Transform.Scale3D.XY.m128d_f64[0] =
       (param_1->LWCTypes).Transform.Scale3D.XY.m128d_f64[0];
  (this->LWCTypes).Transform.Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->LWCTypes).Transform.Scale3D.ZW.m128d_f64[1];
  (this->LWCTypes).Transform.Scale3D.ZW.m128d_f64[0] =
       (param_1->LWCTypes).Transform.Scale3D.ZW.m128d_f64[0];
  (this->LWCTypes).Transform.Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->LWCTypes).Box.Min.field0_0x0._s_0.Y;
  (this->LWCTypes).Box.Min.field0_0x0._s_0.X = (param_1->LWCTypes).Box.Min.field0_0x0._s_0.X;
  (this->LWCTypes).Box.Min.field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->LWCTypes).Box.Max.field0_0x0._s_0.X;
  (this->LWCTypes).Box.Min.field0_0x0._s_0.Z = (param_1->LWCTypes).Box.Min.field0_0x0._s_0.Z;
  (this->LWCTypes).Box.Max.field0_0x0._s_0.X = dVar9;
  dVar9 = (param_1->LWCTypes).Box.Max.field0_0x0._s_0.Z;
  (this->LWCTypes).Box.Max.field0_0x0._s_0.Y = (param_1->LWCTypes).Box.Max.field0_0x0._s_0.Y;
  (this->LWCTypes).Box.Max.field0_0x0._s_0.Z = dVar9;
  uVar16 = (param_1->LWCTypes).Box.Pad[0];
  uVar17 = (param_1->LWCTypes).Box.Pad[1];
  uVar18 = (param_1->LWCTypes).Box.Pad[2];
  uVar19 = (param_1->LWCTypes).Box.Pad[3];
  uVar20 = (param_1->LWCTypes).Box.Pad[4];
  uVar21 = (param_1->LWCTypes).Box.Pad[5];
  uVar22 = (param_1->LWCTypes).Box.Pad[6];
  (this->LWCTypes).Box.IsValid = (param_1->LWCTypes).Box.IsValid;
  (this->LWCTypes).Box.Pad[0] = uVar16;
  (this->LWCTypes).Box.Pad[1] = uVar17;
  (this->LWCTypes).Box.Pad[2] = uVar18;
  (this->LWCTypes).Box.Pad[3] = uVar19;
  (this->LWCTypes).Box.Pad[4] = uVar20;
  (this->LWCTypes).Box.Pad[5] = uVar21;
  (this->LWCTypes).Box.Pad[6] = uVar22;
  dVar9 = (param_1->LWCTypes).Box2D.Min.field0_0x0._s_0.Y;
  (this->LWCTypes).Box2D.Min.field0_0x0._s_0.X = (param_1->LWCTypes).Box2D.Min.field0_0x0._s_0.X;
  (this->LWCTypes).Box2D.Min.field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->LWCTypes).Box2D.Max.field0_0x0._s_0.Y;
  (this->LWCTypes).Box2D.Max.field0_0x0._s_0.X = (param_1->LWCTypes).Box2D.Max.field0_0x0._s_0.X;
  (this->LWCTypes).Box2D.Max.field0_0x0._s_0.Y = dVar9;
  uVar23 = *(undefined7 *)&(param_1->LWCTypes).Box2D.field_0x21;
  (this->LWCTypes).Box2D.bIsValid = (param_1->LWCTypes).Box2D.bIsValid;
  *(undefined7 *)&(this->LWCTypes).Box2D.field_0x21 = uVar23;
  dVar9 = (param_1->LWCTypes).BoxSphereBounds.Origin.field0_0x0._s_0.Y;
  (this->LWCTypes).BoxSphereBounds.Origin.field0_0x0._s_0.X =
       (param_1->LWCTypes).BoxSphereBounds.Origin.field0_0x0._s_0.X;
  (this->LWCTypes).BoxSphereBounds.Origin.field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->LWCTypes).BoxSphereBounds.BoxExtent.field0_0x0._s_0.X;
  (this->LWCTypes).BoxSphereBounds.Origin.field0_0x0._s_0.Z =
       (param_1->LWCTypes).BoxSphereBounds.Origin.field0_0x0._s_0.Z;
  (this->LWCTypes).BoxSphereBounds.BoxExtent.field0_0x0._s_0.X = dVar9;
  dVar9 = (param_1->LWCTypes).BoxSphereBounds.BoxExtent.field0_0x0._s_0.Z;
  (this->LWCTypes).BoxSphereBounds.BoxExtent.field0_0x0._s_0.Y =
       (param_1->LWCTypes).BoxSphereBounds.BoxExtent.field0_0x0._s_0.Y;
  (this->LWCTypes).BoxSphereBounds.BoxExtent.field0_0x0._s_0.Z = dVar9;
  (this->LWCTypes).BoxSphereBounds.SphereRadius = (param_1->LWCTypes).BoxSphereBounds.SphereRadius;
  dVar9 = (param_1->LWCTypes).OrientedBox.Center.field0_0x0._s_0.Y;
  (this->LWCTypes).OrientedBox.Center.field0_0x0._s_0.X =
       (param_1->LWCTypes).OrientedBox.Center.field0_0x0._s_0.X;
  (this->LWCTypes).OrientedBox.Center.field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->LWCTypes).OrientedBox.AxisX.field0_0x0._s_0.X;
  (this->LWCTypes).OrientedBox.Center.field0_0x0._s_0.Z =
       (param_1->LWCTypes).OrientedBox.Center.field0_0x0._s_0.Z;
  (this->LWCTypes).OrientedBox.AxisX.field0_0x0._s_0.X = dVar9;
  dVar9 = (param_1->LWCTypes).OrientedBox.AxisX.field0_0x0._s_0.Z;
  (this->LWCTypes).OrientedBox.AxisX.field0_0x0._s_0.Y =
       (param_1->LWCTypes).OrientedBox.AxisX.field0_0x0._s_0.Y;
  (this->LWCTypes).OrientedBox.AxisX.field0_0x0._s_0.Z = dVar9;
  dVar9 = (param_1->LWCTypes).OrientedBox.AxisY.field0_0x0._s_0.Y;
  (this->LWCTypes).OrientedBox.AxisY.field0_0x0._s_0.X =
       (param_1->LWCTypes).OrientedBox.AxisY.field0_0x0._s_0.X;
  (this->LWCTypes).OrientedBox.AxisY.field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->LWCTypes).OrientedBox.AxisZ.field0_0x0._s_0.X;
  (this->LWCTypes).OrientedBox.AxisY.field0_0x0._s_0.Z =
       (param_1->LWCTypes).OrientedBox.AxisY.field0_0x0._s_0.Z;
  (this->LWCTypes).OrientedBox.AxisZ.field0_0x0._s_0.X = dVar9;
  pTVar2 = &(this->LWCTypes).VectorArray;
  dVar9 = (param_1->LWCTypes).OrientedBox.AxisZ.field0_0x0._s_0.Z;
  (this->LWCTypes).OrientedBox.AxisZ.field0_0x0._s_0.Y =
       (param_1->LWCTypes).OrientedBox.AxisZ.field0_0x0._s_0.Y;
  (this->LWCTypes).OrientedBox.AxisZ.field0_0x0._s_0.Z = dVar9;
  dVar9 = (param_1->LWCTypes).OrientedBox.ExtentY;
  (this->LWCTypes).OrientedBox.ExtentX = (param_1->LWCTypes).OrientedBox.ExtentX;
  (this->LWCTypes).OrientedBox.ExtentY = dVar9;
  (this->LWCTypes).OrientedBox.ExtentZ = (param_1->LWCTypes).OrientedBox.ExtentZ;
  (this->LWCTypes).Float = (param_1->LWCTypes).Float;
  (this->LWCTypes).Double = (param_1->LWCTypes).Double;
  piVar1 = &(this->LWCTypes).VectorArray.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->LWCTypes).VectorArray.ArrayNum;
  _Src = (param_1->LWCTypes).VectorArray.AllocatorInstance.Data;
  (this->LWCTypes).VectorArray.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x18);
  }
  this_01 = &(this->LWCTypes).StrToVec;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->LWCTypes).StrToVec.field_0x8 = 0;
  *(undefined8 *)&(this->LWCTypes).StrToVec.field_0x20 = 0;
  *(undefined4 *)&(this->LWCTypes).StrToVec.field_0x28 = 0;
  *(undefined4 *)&(this->LWCTypes).StrToVec.field_0x2c = 0x80;
  *(undefined4 *)&(this->LWCTypes).StrToVec.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LWCTypes).StrToVec.field_0x34 = 0;
  *(undefined8 *)&(this->LWCTypes).StrToVec.field_0x40 = 0;
  *(undefined4 *)&(this->LWCTypes).StrToVec.field_0x48 = 0;
  TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)this_01,
              (TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)&(param_1->LWCTypes).StrToVec);
  this_02 = &(this->LWCTypes).VectorSet;
  *(undefined8 *)&this_02->Elements = 0;
  *(undefined8 *)&(this->LWCTypes).VectorSet.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LWCTypes).VectorSet.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LWCTypes).VectorSet.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LWCTypes).VectorSet.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LWCTypes).VectorSet.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LWCTypes).VectorSet.Elements.field_0x34 = 0;
  (this->LWCTypes).VectorSet.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LWCTypes).VectorSet.HashSize = 0;
  TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::operator=(this_02,&(param_1->LWCTypes).VectorSet);
  return this;
}

// FStructSerializerTestStruct @ 148b9fdc0

FStructSerializerTestStruct * __thiscall
FStructSerializerTestStruct::FStructSerializerTestStruct
          (FStructSerializerTestStruct *this,ENoInit param_1)

{
  undefined1 *puVar1;
  
  (this->Objects).RawClass.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Objects).WrappedClass.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Objects).SubClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  puVar1 = &(this->Objects).SoftClass.SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->Objects).SoftClass.SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->Objects).SoftClass.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Objects).SoftClass.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Objects).SoftClass.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->Objects).SoftObject.SoftObjectPtr.field_0x18;
  (this->Objects).RawObject.field0_0x0.DebugPtr = (UObject *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->Objects).SoftObject.SoftObjectPtr.field_0x20 = 0;
  (this->Objects).WrappedObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Objects).WeakObject.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->Objects).SoftObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->Objects).SoftObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Objects).SoftObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  *(undefined8 *)&(this->Objects).ClassPath = 0;
  *(undefined8 *)&(this->Objects).ClassPath.field_0x8 = 0;
  *(undefined8 *)&(this->Objects).ClassPath.field_0x10 = 0;
  *(undefined8 *)&(this->Objects).ClassPath.field_0x18 = 0;
  (this->Objects).ObjectPath.AssetPath.PackageName.ComparisonIndex = 0;
  (this->Objects).ObjectPath.AssetPath.PackageName.Number = 0;
  (this->Objects).ObjectPath.AssetPath.AssetName.ComparisonIndex = 0;
  (this->Objects).ObjectPath.AssetPath.AssetName.Number = 0;
  (this->Objects).ObjectPath.SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Objects).ObjectPath.SubPathString.Data.ArrayNum = 0;
  (this->Objects).ObjectPath.SubPathString.Data.ArrayMax = 0;
  (this->Builtins).Guid.A = 0;
  (this->Builtins).Guid.B = 0;
  (this->Builtins).Guid.C = 0;
  (this->Builtins).Guid.D = 0;
  (this->Builtins).Name.ComparisonIndex = 0;
  (this->Builtins).Name.Number = 0;
  (this->Builtins).String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Builtins).String.Data.ArrayNum = 0;
  (this->Builtins).String.Data.ArrayMax = 0;
  FText::FText(&(this->Builtins).Text);
  (this->Builtins).Datetime.Ticks = 0;
  (this->Builtins).Timespan.Ticks = 0;
  (this->Builtins).Vector4.field0_0x0._s_0.W = 1.0;
  (this->Builtins).Vector4.field0_0x0._s_0.X = 0.0;
  (this->Builtins).Vector4.field0_0x0._s_0.Y = 0.0;
  (this->Builtins).Vector4.field0_0x0._s_0.Z = 0.0;
  (this->Arrays).Int32Array.ArrayNum = 0;
  (this->Arrays).Int32Array.ArrayMax = 0;
  (this->Arrays).ByteArray.ArrayNum = 0;
  (this->Arrays).ByteArray.ArrayMax = 0;
  (this->Arrays).VectorArray.ArrayNum = 0;
  (this->Arrays).VectorArray.ArrayMax = 0;
  (this->Arrays).StructArray.ArrayNum = 0;
  (this->Arrays).StructArray.ArrayMax = 0;
  (this->Arrays).Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Arrays).ByteArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Arrays).VectorArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Arrays).StructArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStructSerializerMapTestStruct::FStructSerializerMapTestStruct(&this->Maps,NoInit);
  FStructSerializerSetTestStruct::FStructSerializerSetTestStruct(&this->Sets,NoInit);
  (this->Optionals).StrOptional.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->Optionals).StrOptional.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Optionals).StrOptional.field0_0x0 + 0xc) = 0xffffffff;
  (this->Optionals).StrOptionalUnset.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->Optionals).StrOptionalUnset.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Optionals).StrOptionalUnset.field0_0x0 + 0xc) = 0xffffffff;
  (this->Optionals).IntOptional.bIsSet = false;
  (this->Optionals).IntOptionalUnset.bIsSet = false;
  (this->Optionals).NameOptional.field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->Optionals).NameOptional.field0_0x0.TypedValue.Number = 0;
  (this->Optionals).NameOptionalUnset.field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->Optionals).NameOptionalUnset.field0_0x0.TypedValue.Number = 0;
  (this->Optionals).StructOptional.bIsSet = false;
  (this->Optionals).StructOptionalUnset.bIsSet = false;
  FStructSerializerLWCTypesTest::FStructSerializerLWCTypesTest(&this->LWCTypes,NoInit);
  return this;
}

// FStructSerializerTestStruct @ 148b9ffb0

FStructSerializerTestStruct * __thiscall
FStructSerializerTestStruct::FStructSerializerTestStruct(FStructSerializerTestStruct *this)

{
  undefined1 *puVar1;
  
  (this->Numerics).Int8 = -0x7f;
  (this->Numerics).Int64 = -0x53e2d6238da3;
  (this->Numerics).Int16 = -0x7fff;
  (this->Numerics).UInt64 = 0x10c6f7a0b5ed;
  (this->Numerics).Double = 1.03125;
  (this->Numerics).Int32 = -0x7fffffff;
  (this->Numerics).UInt8 = 0xff;
  (this->Numerics).UInt16 = 0xffff;
  (this->Numerics).UInt32 = 0xffffffff;
  (this->Numerics).Float = 4.125;
  (this->Booleans).BoolFalse = false;
  (this->Booleans).BoolTrue = true;
  puVar1 = &(this->Booleans).field_0x2;
  (this->Booleans).Bitfield0 = '\0';
  (this->Booleans).Bitfield7Set = '\x01';
  (this->Booleans).Bitfield6 = '\0';
  (this->Booleans).Bitfield5Set = '\x01';
  (this->Booleans).Bitfield4Set = '\x01';
  (this->Booleans).Bitfield3 = '\0';
  (this->Booleans).Bitfield2Set = '\x01';
  (this->Booleans).Bitfield1 = '\0';
  FStructSerializerObjectTestStruct::FStructSerializerObjectTestStruct(&this->Objects);
  FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(&this->Builtins);
  FStructSerializerArrayTestStruct::FStructSerializerArrayTestStruct(&this->Arrays);
  FStructSerializerMapTestStruct::FStructSerializerMapTestStruct(&this->Maps);
  FStructSerializerSetTestStruct::FStructSerializerSetTestStruct(&this->Sets);
  FStructSerializerOptionalTestStruct::FStructSerializerOptionalTestStruct(&this->Optionals);
  FStructSerializerLWCTypesTest::FStructSerializerLWCTypesTest(&this->LWCTypes);
  return this;
}

// ~FStructSerializerTestStruct @ 148ba08d0

void __thiscall
FStructSerializerTestStruct::~FStructSerializerTestStruct(FStructSerializerTestStruct *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  void *pvVar3;
  
  FStructSerializerLWCTypesTest::~FStructSerializerLWCTypesTest(&this->LWCTypes);
  FStructSerializerOptionalTestStruct::~FStructSerializerOptionalTestStruct(&this->Optionals);
  FStructSerializerSetTestStruct::~FStructSerializerSetTestStruct(&this->Sets);
  FStructSerializerMapTestStruct::~FStructSerializerMapTestStruct(&this->Maps);
  DestructItems<FStructSerializerBuiltinTestStruct,int>
            ((FStructSerializerBuiltinTestStruct *)(this->Arrays).StructArray.AllocatorInstance.Data
             ,(this->Arrays).StructArray.ArrayNum);
  pFVar1 = (this->Arrays).StructArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Arrays).VectorArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Arrays).ByteArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Arrays).Int32Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Builtins).Text.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pFVar1 = (this->Builtins).String.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Objects).ObjectPath.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar3 = *(void **)&(this->Objects).ClassPath.field_0x10;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = *(void **)&(this->Objects).SoftObject.SoftObjectPtr.field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = *(void **)&(this->Objects).SoftClass.SoftObjectPtr.field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
    return;
  }
  return;
}

