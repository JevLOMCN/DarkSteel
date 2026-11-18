// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// Compute @ 1435f56a0

void __thiscall
UE::Geometry::FBRIOPoints::Compute
          (FBRIOPoints *this,TArrayView<UE::Math::TVector2<float>_const_,int> *param_1,
          TAxisAlignedBox2<float> *param_2,FRandomStream *param_3)

{
  TVector2<float>_u_0 local_28;
  TVector2<float>_u_0 TStack_20;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_18;
  
  local_28._s_0 = *(TVector2<float>_u_0_s_0 *)&(param_2->Min).field0_0x0;
  TStack_20 = (param_2->Max).field0_0x0;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ZOrderCurvePointsLocal::
  ApplyBRIO<float,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>,ZOrderCurvePointsLocal::FQuadTreeNode>
            (&this->Order,&local_18,(TAxisAlignedBox2<float> *)&local_28._s_0,this->MaxTreeDepth,
             param_3);
  return;
}

// Compute @ 1435f56e0

void __thiscall
UE::Geometry::FBRIOPoints::Compute
          (FBRIOPoints *this,TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,
          TAxisAlignedBox2<double> *param_2,FRandomStream *param_3)

{
  TArrayView<UE::Math::TVector2<double>_const_,int> local_38;
  TVector2<double>_u_0 local_28;
  double local_18;
  double dStack_10;
  
  local_28._s_0.X = (param_2->Min).field0_0x0._s_0.X;
  local_28._s_0.Y = (param_2->Min).field0_0x0._s_0.Y;
  local_18 = (param_2->Max).field0_0x0._s_0.X;
  dStack_10 = (param_2->Max).field0_0x0._s_0.Y;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ZOrderCurvePointsLocal::
  ApplyBRIO<double,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>,ZOrderCurvePointsLocal::FQuadTreeNode>
            (&this->Order,&local_38,(TAxisAlignedBox2<double> *)&local_28._s_0,this->MaxTreeDepth,
             param_3);
  return;
}

// Compute @ 1435f5730

void __thiscall
UE::Geometry::FBRIOPoints::Compute
          (FBRIOPoints *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TAxisAlignedBox3<float> *param_2,FRandomStream *param_3)

{
  TArrayView<UE::Math::TVector<float>_const_,int> local_38;
  TVector<float>_u_0 local_28 [3];
  
  local_28[0]._0_8_ = *(undefined8 *)&(param_2->Min).field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&(param_2->Min).field0_0x0 + 8);
  local_28[1]._4_8_ = *(undefined8 *)((longlong)&(param_2->Max).field0_0x0 + 4);
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ZOrderCurvePointsLocal::
  ApplyBRIO<float,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>,ZOrderCurvePointsLocal::FOctreeNode>
            (&this->Order,&local_38,(TAxisAlignedBox3<float> *)&local_28[0]._s_0,this->MaxTreeDepth,
             param_3);
  return;
}

// Compute @ 1435f5780

void __thiscall
UE::Geometry::FBRIOPoints::Compute
          (FBRIOPoints *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          TAxisAlignedBox3<double> *param_2,FRandomStream *param_3)

{
  TArrayView<UE::Math::TVector<double>_const_,int> local_48;
  TVector<double>_u_0 local_38;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_38._s_0.X = (param_2->Min).field0_0x0._s_0.X;
  local_38._s_0.Y = (param_2->Min).field0_0x0._s_0.Y;
  local_38._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
  dStack_20 = (param_2->Max).field0_0x0._s_0.X;
  local_18 = (param_2->Max).field0_0x0._s_0.Y;
  dStack_10 = (param_2->Max).field0_0x0._s_0.Z;
  local_48.DataPtr = param_1->DataPtr;
  local_48.ArrayNum = param_1->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ZOrderCurvePointsLocal::
  ApplyBRIO<double,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>,ZOrderCurvePointsLocal::FOctreeNode>
            (&this->Order,&local_48,(TAxisAlignedBox3<double> *)&local_38._s_0,this->MaxTreeDepth,
             param_3);
  return;
}

