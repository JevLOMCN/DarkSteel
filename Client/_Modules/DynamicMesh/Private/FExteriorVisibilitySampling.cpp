// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// ComputePerTriangleOcclusion @ 14c723e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::FExteriorVisibilitySampling::ComputePerTriangleOcclusion
          (FDynamicMesh3 *param_1,TArray<bool,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          FExteriorVisibilitySampling *param_4,TArrayView<bool_const_,int> *param_5)

{
  code *pcVar1;
  bool *pbVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStackY_208 [32];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1b8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1a8;
  FScriptContainerElement *local_198;
  int iStack_190;
  FScriptContainerElement *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  FScriptContainerElement *local_178;
  int iStack_170;
  TArrayView<UE::Math::TVector<double>_const_,int> local_168;
  TArrayView<UE::Math::TVector<double>_const_,int> local_158;
  TArrayView<UE::Math::TVector<double>_const_,int> local_148;
  TArrayView<bool_const_,int> local_138;
  TFunctionRef<bool___cdecl(int)> local_128;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_118;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
            (&local_118,param_1,true);
  pbVar2 = param_5->DataPtr;
  uVar3._0_4_ = param_5->ArrayNum;
  uVar3._4_4_ = *(undefined4 *)&param_5->field_0xc;
  UE::Private::DetectExteriorVisibilityInternal::GenerateCardinalDirectionsHelper(&local_1b8);
  iStack_190 = local_1b8.ArrayNum;
  local_198 = local_1b8.AllocatorInstance.Data;
  if (local_1b8.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_168.DataPtr = (TVector<double> *)local_198;
  UE::Private::DetectExteriorVisibilityInternal::GenerateTestDirectionsHelper
            (&local_1a8,param_4->NumSearchDirections,&local_168);
  local_188 = local_1a8.AllocatorInstance.Data;
  if (local_1a8.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iStack_180 = local_1a8.ArrayNum;
  local_178 = local_1b8.AllocatorInstance.Data;
  if (local_1b8.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_158._12_4_ = uStack_17c;
  local_158.ArrayNum = iStack_180;
  iStack_170 = local_1b8.ArrayNum;
  local_158.DataPtr = (TVector<double> *)local_188;
  local_148.DataPtr = (TVector<double> *)local_178;
  local_138.DataPtr = pbVar2;
  local_138._8_8_ = uVar3;
  UE::Private::DetectExteriorVisibilityInternal::
  ComputePerTriangleOcclusionHelper<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,0>
            (param_1,&local_118,param_2,param_3,param_4,&local_138,&local_128,&local_148,&local_158,
             true);
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
            (&local_118);
  return;
}

// ComputePerTriangleOcclusion @ 14c724000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::FExteriorVisibilitySampling::ComputePerTriangleOcclusion
          (FDynamicMesh3 *param_1,TFunctionRef<bool___cdecl(int)> *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3,bool param_4,
          FExteriorVisibilitySampling *param_5,TArrayView<bool_const_,int> *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool *pbVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined ***pppuVar7;
  undefined1 auStackY_238 [32];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1e8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1d8;
  TFunctionRef<bool___cdecl(int)> local_1c8;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  int iStack_190;
  TFunctionRef<bool___cdecl(int)> local_188;
  TArrayView<UE::Math::TVector<double>_const_,int> local_178;
  TArrayView<UE::Math::TVector<double>_const_,int> local_168;
  TArrayView<UE::Math::TVector<double>_const_,int> local_158;
  TArrayView<bool_const_,int> local_148;
  FSkipTransparentMeshWrapper local_138;
  undefined1 local_118 [48];
  undefined **local_e8;
  code *local_e0;
  undefined ***local_d0;
  double local_c8;
  TDynamicVector<int,512> local_c0;
  TDynamicVector<UE::Math::TVector<double>,512> local_a8;
  TDynamicVector<UE::Math::TVector<double>,512> local_90;
  TDynamicVector<int,512> local_78;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1c8._0_8_ = *(undefined8 *)param_2;
  local_1c8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  FSkipTransparentMeshWrapper::FSkipTransparentMeshWrapper(&local_138,param_1,&local_1c8);
  local_118._0_8_ = &___7__TMeshAABBTree3_UFSkipTransparentMeshWrapper___Geometry_UE__6B_;
  local_c8 = __real_3e45798ee2308c3a;
  local_e8 = &
             ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_118._16_8_ = 0;
  local_e0 = `UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::MakeDefaultSplitAxisFunc'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_118._32_8_ =
       Core::Private::Function::
       TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
       ::Call;
  local_118._24_4_ = 3;
  local_d0 = (undefined ***)0x0;
  local_c0.CurBlock = 0;
  local_c0.CurBlockUsed = 0;
  local_c0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Blocks.ArrayNum = 0;
  local_c0.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_c0);
  local_a8.CurBlock = 0;
  local_a8.CurBlockUsed = 0;
  local_a8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Blocks.ArrayNum = 0;
  local_a8.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_a8);
  local_90.CurBlock = 0;
  local_90.CurBlockUsed = 0;
  local_90.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Blocks.ArrayNum = 0;
  local_90.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_90);
  local_78.CurBlock = 0;
  local_78.CurBlockUsed = 0;
  local_78.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Blocks.ArrayNum = 0;
  local_78.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_78);
  local_60._0_4_ = -1;
  local_60._4_4_ = -1;
  local_118._16_8_ = 0;
  local_118._8_8_ = &local_138;
  TMeshAABBTree3<FSkipTransparentMeshWrapper>::BuildTopDown
            ((TMeshAABBTree3<FSkipTransparentMeshWrapper> *)local_118,false);
  local_118._16_8_ = FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)local_118._8_8_);
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  pbVar4 = param_6->DataPtr;
  uVar5._0_4_ = param_6->ArrayNum;
  uVar5._4_4_ = *(undefined4 *)&param_6->field_0xc;
  UE::Private::DetectExteriorVisibilityInternal::GenerateCardinalDirectionsHelper(&local_1e8);
  iStack_1b0 = local_1e8.ArrayNum;
  local_1b8 = local_1e8.AllocatorInstance.Data;
  if (local_1e8.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_178.DataPtr = (TVector<double> *)local_1b8;
  UE::Private::DetectExteriorVisibilityInternal::GenerateTestDirectionsHelper
            (&local_1d8,param_5->NumSearchDirections,&local_178);
  local_1a8 = local_1d8.AllocatorInstance.Data;
  if (local_1d8.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iStack_1a0 = local_1d8.ArrayNum;
  local_198 = local_1e8.AllocatorInstance.Data;
  if (local_1e8.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_168._12_4_ = uStack_19c;
  local_168.ArrayNum = iStack_1a0;
  iStack_190 = local_1e8.ArrayNum;
  local_168.DataPtr = (TVector<double> *)local_1a8;
  local_158.DataPtr = (TVector<double> *)local_198;
  local_188._0_8_ = uVar1;
  local_188._8_8_ = uVar2;
  local_148.DataPtr = pbVar4;
  local_148._8_8_ = uVar5;
  UE::Private::DetectExteriorVisibilityInternal::
  ComputePerTriangleOcclusionHelper<UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>,1>
            (param_1,(TMeshAABBTree3<FSkipTransparentMeshWrapper> *)local_118,param_3,param_4,
             param_5,&local_148,&local_188,&local_158,&local_168,true);
  if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.AllocatorInstance.Data);
  }
  if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_78,0);
  if (local_78.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_90,0);
  if (local_90.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_a8,0);
  if (local_a8.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_c0,0);
  if (local_c0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Blocks.AllocatorInstance.Data);
  }
  if ((code *)local_118._32_8_ != (code *)0x0) {
    pppuVar7 = &local_e8;
    if (local_d0 != (undefined ***)0x0) {
      pppuVar7 = local_d0;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  return;
}

// ComputePerTriangleOcclusionFromDirections @ 14c7243a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::FExteriorVisibilitySampling::ComputePerTriangleOcclusionFromDirections
          (FDynamicMesh3 *param_1,TFunctionRef<bool___cdecl(int)> *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3,bool param_4,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_5,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_6,bool param_7,
          FExteriorVisibilitySampling *param_8,TArrayView<bool_const_,int> *param_9)

{
  undefined ***pppuVar1;
  undefined1 auStackY_1c8 [32];
  TFunctionRef<bool___cdecl(int)> local_170;
  TArrayView<UE::Math::TVector<double>_const_,int> local_158;
  TArrayView<UE::Math::TVector<double>_const_,int> local_148;
  TArrayView<bool_const_,int> local_138;
  FSkipTransparentMeshWrapper local_128;
  undefined1 local_108 [48];
  undefined **local_d8;
  code *local_d0;
  undefined ***local_c0;
  double local_b8;
  TDynamicVector<int,512> local_b0;
  TDynamicVector<UE::Math::TVector<double>,512> local_98;
  TDynamicVector<UE::Math::TVector<double>,512> local_80;
  TDynamicVector<int,512> local_68;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_170._0_8_ = *(undefined8 *)param_2;
  local_170._8_8_ = *(undefined8 *)&param_2->field_0x8;
  FSkipTransparentMeshWrapper::FSkipTransparentMeshWrapper(&local_128,param_1,&local_170);
  local_108._0_8_ = &___7__TMeshAABBTree3_UFSkipTransparentMeshWrapper___Geometry_UE__6B_;
  local_108._16_8_ = 0;
  local_d8 = &
             ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_d0 = `UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>::MakeDefaultSplitAxisFunc'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_c0 = (undefined ***)0x0;
  local_b0.CurBlock = 0;
  local_b0.CurBlockUsed = 0;
  local_b0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Blocks.ArrayNum = 0;
  local_b0.Blocks.ArrayMax = 0;
  local_108._32_8_ =
       Core::Private::Function::
       TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
       ::Call;
  local_b8 = __real_3e45798ee2308c3a;
  local_108._24_4_ = 3;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_b0);
  local_98.CurBlock = 0;
  local_98.CurBlockUsed = 0;
  local_98.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Blocks.ArrayNum = 0;
  local_98.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_98);
  local_80.CurBlock = 0;
  local_80.CurBlockUsed = 0;
  local_80.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Blocks.ArrayNum = 0;
  local_80.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_80);
  local_68.CurBlock = 0;
  local_68.CurBlockUsed = 0;
  local_68.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Blocks.ArrayNum = 0;
  local_68.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_68);
  local_108._8_8_ = &local_128;
  local_50._0_4_ = -1;
  local_50._4_4_ = -1;
  local_108._16_8_ = 0;
  TMeshAABBTree3<FSkipTransparentMeshWrapper>::BuildTopDown
            ((TMeshAABBTree3<FSkipTransparentMeshWrapper> *)local_108,false);
  local_108._16_8_ = FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)local_108._8_8_);
  local_158.DataPtr = param_6->DataPtr;
  local_158.ArrayNum = param_6->ArrayNum;
  local_158._12_4_ = *(undefined4 *)&param_6->field_0xc;
  local_170._0_8_ = *(undefined8 *)param_2;
  local_148.DataPtr = param_5->DataPtr;
  local_148.ArrayNum = param_5->ArrayNum;
  local_148._12_4_ = *(undefined4 *)&param_5->field_0xc;
  local_170._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_138.DataPtr = param_9->DataPtr;
  local_138.ArrayNum = param_9->ArrayNum;
  local_138._12_4_ = *(undefined4 *)&param_9->field_0xc;
  UE::Private::DetectExteriorVisibilityInternal::
  ComputePerTriangleOcclusionHelper<UE::Geometry::TMeshAABBTree3<FSkipTransparentMeshWrapper>,1>
            (param_1,(TMeshAABBTree3<FSkipTransparentMeshWrapper> *)local_108,param_3,param_4,
             param_8,&local_138,&local_170,&local_148,&local_158,param_7);
  TDynamicVector<int,512>::Empty(&local_68,0);
  if (local_68.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_80,0);
  if (local_80.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_98,0);
  if (local_98.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_b0,0);
  if (local_b0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Blocks.AllocatorInstance.Data);
  }
  if ((code *)local_108._32_8_ != (code *)0x0) {
    pppuVar1 = &local_d8;
    if (local_c0 != (undefined ***)0x0) {
      pppuVar1 = local_c0;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// GetRestrictedViewDirections @ 14c740c20

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __cdecl
UE::Geometry::FExteriorVisibilitySampling::GetRestrictedViewDirections
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,double param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TVector<double> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  TVector<double> *pTVar13;
  ForAnyElementType FVar14;
  undefined1 local_res8 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<UE::Math::TVector<double>_const_,int> local_48;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38 [2];
  
  pTVar12 = UE::Private::DetectExteriorVisibilityInternal::GenerateCardinalDirectionsHelper
                      (local_38);
  local_58 = (pTVar12->AllocatorInstance).Data;
  iStack_50 = pTVar12->ArrayNum;
  if (iStack_50 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
      return pTVar12;
    }
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iStack_50;
  local_48.DataPtr = (TVector<double> *)local_58;
  UE::Private::DetectExteriorVisibilityInternal::GenerateTestDirectionsHelper
            (&local_68,param_3,&local_48);
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  iVar4 = param_1->ArrayNum;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,piVar1);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,param_1->DataPtr,(longlong)iVar4 * 0x18)
    ;
  }
  dVar8 = cos(param_2 * __real_3f91df46a2529d39);
  iVar4 = local_68.ArrayNum;
  pFVar2 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0x18;
  FVar14.Data = local_68.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_68.ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar14.Data == pFVar2) {
        if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      pTVar13 = param_1->DataPtr;
      pTVar3 = pTVar13 + param_1->ArrayNum;
      if (pTVar13 != pTVar3) break;
LAB_14c740e4b:
      FVar14.Data = FVar14.Data + 0x18;
    }
    do {
      if (dVar8 <= *(double *)(FVar14.Data + 8) * (pTVar13->field0_0x0)._s_0.Y +
                   *(double *)FVar14.Data * (pTVar13->field0_0x0)._s_0.X +
                   *(double *)(FVar14.Data + 0x10) * (pTVar13->field0_0x0)._s_0.Z) {
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar5 <= FVar14.Data) && (FVar14.Data < pFVar5 + (longlong)*piVar1 * 0x18)) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
            return pTVar12;
          }
        }
        iVar11 = __return_storage_ptr__->ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar11 + 1;
        dVar9 = *(double *)(FVar14.Data + 8);
        pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar5 = pFVar6 + (longlong)iVar11 * 0x18;
        *(double *)pFVar5 = *(double *)FVar14.Data;
        *(double *)(pFVar5 + 8) = dVar9;
        *(double *)(pFVar6 + (longlong)iVar11 * 0x18 + 0x10) = *(double *)(FVar14.Data + 0x10);
        goto LAB_14c740e4b;
      }
      pTVar13 = pTVar13 + 1;
    } while (pTVar13 != pTVar3);
    FVar14.Data = FVar14.Data + 0x18;
  } while( true );
}

