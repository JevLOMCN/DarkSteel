// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// Compute @ 1435f57e0

void __thiscall
UE::Geometry::FZOrderCurvePoints::Compute
          (FZOrderCurvePoints *this,TArrayView<UE::Math::TVector2<float>_const_,int> *param_1,
          TAxisAlignedBox2<float> *param_2)

{
  TVector2<float>_u_0 local_28;
  TVector2<float>_u_0 TStack_20;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_18;
  
  local_28._s_0 = *(TVector2<float>_u_0_s_0 *)&(param_2->Min).field0_0x0;
  TStack_20 = (param_2->Max).field0_0x0;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ZOrderCurvePointsLocal::ZOrderCurve2<float>
            (&this->Order,&local_18,(TAxisAlignedBox2<float> *)&local_28._s_0,this->MaxTreeDepth);
  return;
}

// Compute @ 1435f5820

void __thiscall
UE::Geometry::FZOrderCurvePoints::Compute
          (FZOrderCurvePoints *this,TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,
          TAxisAlignedBox2<double> *param_2)

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
  ZOrderCurvePointsLocal::ZOrderCurve2<double>
            (&this->Order,&local_38,(TAxisAlignedBox2<double> *)&local_28._s_0,this->MaxTreeDepth);
  return;
}

// Compute @ 1435f5860

void __thiscall
UE::Geometry::FZOrderCurvePoints::Compute
          (FZOrderCurvePoints *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TAxisAlignedBox3<float> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> local_68;
  TVector<float>_u_0 local_58 [2];
  TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
  local_38;
  
  local_58[0]._0_8_ = *(undefined8 *)&(param_2->Min).field0_0x0;
  local_58._8_8_ = *(undefined8 *)((longlong)&(param_2->Min).field0_0x0 + 8);
  local_58[1]._4_8_ = *(undefined8 *)((longlong)&(param_2->Max).field0_0x0 + 4);
  local_68.DataPtr = param_1->DataPtr;
  local_68.ArrayNum = param_1->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_38.Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Nodes.ArrayNum = 0;
  local_38.Nodes.ArrayMax = 0;
  local_38.MaxDepthBuckets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.MaxDepthBuckets.ArrayNum = 0;
  local_38.MaxDepthBuckets.ArrayMax = 0;
  local_38.Num = 0;
  ZOrderCurvePointsLocal::
  TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
  ::Init(&local_38,&local_68,(TAxisAlignedBox3<float> *)&local_58[0]._s_0,this->MaxTreeDepth);
  iVar1 = (this->Order).ArrayNum;
  uVar4 = param_1->ArrayNum + iVar1;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((this->Order).ArrayMax < (int)uVar4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar4,&(this->Order).AllocatorInstance,iVar1,&(this->Order).ArrayMax);
  }
  if (local_38.Nodes.ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ZOrderCurvePointsLocal::
  TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
  ::ExtractZOrderCurveHelper
            (&local_38,&this->Order,(FOctreeNode *)local_38.Nodes.AllocatorInstance.Data,0);
  DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
             local_38.MaxDepthBuckets.AllocatorInstance.Data,local_38.MaxDepthBuckets.ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
      local_38.MaxDepthBuckets.AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_38.MaxDepthBuckets.AllocatorInstance.Data);
  }
  if (local_38.Nodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Nodes.AllocatorInstance.Data);
  }
  return;
}

// Compute @ 1435f5990

void __thiscall
UE::Geometry::FZOrderCurvePoints::Compute
          (FZOrderCurvePoints *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          TAxisAlignedBox3<double> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<UE::Math::TVector<double>_const_,int> local_78;
  TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
  local_68;
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
  local_68.Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.DataPtr = param_1->DataPtr;
  local_78.ArrayNum = param_1->ArrayNum;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_68.Nodes.ArrayNum = 0;
  local_68.Nodes.ArrayMax = 0;
  local_68.MaxDepthBuckets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.MaxDepthBuckets.ArrayNum = 0;
  local_68.MaxDepthBuckets.ArrayMax = 0;
  local_68.Num = 0;
  ZOrderCurvePointsLocal::
  TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
  ::Init(&local_68,&local_78,(TAxisAlignedBox3<double> *)&local_38._s_0,this->MaxTreeDepth);
  iVar1 = (this->Order).ArrayNum;
  uVar4 = param_1->ArrayNum + iVar1;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((this->Order).ArrayMax < (int)uVar4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar4,&(this->Order).AllocatorInstance,iVar1,&(this->Order).ArrayMax);
  }
  if (local_68.Nodes.ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ZOrderCurvePointsLocal::
  TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
  ::ExtractZOrderCurveHelper
            (&local_68,&this->Order,(FOctreeNode *)local_68.Nodes.AllocatorInstance.Data,0);
  DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
             local_68.MaxDepthBuckets.AllocatorInstance.Data,local_68.MaxDepthBuckets.ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
      local_68.MaxDepthBuckets.AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_68.MaxDepthBuckets.AllocatorInstance.Data);
  }
  if (local_68.Nodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Nodes.AllocatorInstance.Data);
  }
  return;
}

