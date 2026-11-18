// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// FSignpost @ 14c6dfa10

FSignpost * __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FSignpost
          (FSignpost *this,FDynamicMesh3 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  <lambda_1> local_res8;
  FSignpost *local_88;
  FDynamicMesh3 *local_80;
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  FSignpost **local_60;
  undefined4 local_58;
  uint uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar7 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FMeshConnection::Reset((FMeshConnection *)this,param_1);
  (this->IntrinsicEdgeAngles).CurBlock = 0;
  (this->IntrinsicEdgeAngles).CurBlockUsed = 0;
  (this->IntrinsicEdgeAngles).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntrinsicEdgeAngles).Blocks.ArrayNum = 0;
  (this->IntrinsicEdgeAngles).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&this->IntrinsicEdgeAngles);
  (this->IntrinsicVertexPositions).CurBlock = 0;
  (this->IntrinsicVertexPositions).CurBlockUsed = 0;
  (this->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntrinsicVertexPositions).Blocks.ArrayNum = 0;
  (this->IntrinsicVertexPositions).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::AddAllocatedBlock
            (&this->IntrinsicVertexPositions);
  (this->GeometricVertexInfo).CurBlock = 0;
  (this->GeometricVertexInfo).CurBlockUsed = 0;
  (this->GeometricVertexInfo).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometricVertexInfo).Blocks.ArrayNum = 0;
  (this->GeometricVertexInfo).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FGeometricInfo,512>::
  AddAllocatedBlock(&this->GeometricVertexInfo);
  uVar4 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
  uVar8 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
          (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar5 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::Resize
            (&this->IntrinsicVertexPositions,uVar8);
  uVar10 = uVar7;
  if (0 < (int)uVar8) {
    do {
      iVar6 = (int)uVar7;
      if (iVar6 < (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                       (param_1->VertexRefCounts).RefCounts.CurBlockUsed)) {
        uVar9 = (ulonglong)((uint)uVar10 & 0x1ff);
        lVar2 = (uVar7 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + lVar2) + uVar9 * 2) - 1U) < 0xfffe) {
          local_58 = 0;
          lVar2 = *(longlong *)
                   ((this->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data + lVar2);
          plVar1 = (longlong *)(lVar2 + uVar9 * 0x28);
          *plVar1 = (ulonglong)uStack_54 << 0x20;
          plVar1[1] = CONCAT44(uStack_4c,iVar6);
          puVar3 = (undefined8 *)(lVar2 + 0x10 + uVar9 * 0x28);
          *puVar3 = local_48;
          puVar3[1] = uStack_40;
          *(undefined8 *)(lVar2 + 0x20 + uVar9 * 0x28) = local_38;
          iStack_50 = iVar6;
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1U);
      uVar10 = uVar10 + 1;
    } while ((int)(iVar6 + 1U) < (int)uVar8);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Resize
            (&this->IntrinsicEdgeAngles,uVar4 * 0x200 + uVar5);
  TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FGeometricInfo,512>::Resize
            (&this->GeometricVertexInfo,uVar8);
  TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::Resize
            (&this->IntrinsicVertexPositions,uVar8);
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FSignpost'::__l9::<lambda_1>,void,int>
             ::Call;
  local_60 = &local_88;
  local_78.DataPtr = (void **)0x0;
  local_78.ArrayNum = 0;
  local_88 = this;
  local_80 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar8,1,(TFunctionRef<void___cdecl(int)> *)&local_68,local_res8,
             None,&local_78);
  return this;
}

// operator() @ 14c6ecfa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FSignpost'::__l9::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  FDynamicMesh3 *this_00;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  longlong *plVar11;
  bool bVar12;
  EMeshResult EVar13;
  int iVar14;
  uint uVar15;
  ForElementType<int> FVar16;
  byte bVar17;
  ForElementType<bool> FVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint *puVar22;
  ulonglong uVar23;
  uint uVar24;
  ForElementType<int> FVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2b8;
  undefined1 local_2b7 [3];
  int local_2b4;
  ForElementType<int> local_2b0;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  int iStack_294;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  int aiStack_274 [5];
  longlong *local_260;
  double local_258;
  bool bStack_250;
  undefined7 uStack_24f;
  TPairInitializer<int_const_&,int_const_&> local_248;
  ulonglong local_238;
  ulonglong local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined4 local_210;
  longlong *local_208;
  int iStack_200;
  uint uStack_1fc;
  TBitArray<FDefaultBitArrayAllocator> *local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  int local_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  longlong *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  uint *local_1a8;
  int *local_1a0;
  undefined4 local_17c;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_178;
  TArray<bool,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_148;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_d8;
  ulonglong local_a8;
  
  if (-1 < param_1) {
    local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
    this_00 = *(FDynamicMesh3 **)((longlong)this + 8);
    if (param_1 < (int)((this_00->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                       (this_00->VertexRefCounts).RefCounts.CurBlockUsed)) {
      uVar20 = (ulonglong)(param_1 & 0x1ff);
      local_230 = (ulonglong)((uint)param_1 >> 9);
      if ((ushort)(*(short *)(*(longlong *)
                               ((this_00->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               local_230 * 8) + uVar20 * 2) - 1U) < 0xfffe) {
        lVar19 = 0;
        local_258 = __real_3ff0000000000000;
        uVar15 = 1;
        local_178.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        uVar21 = 0;
        local_178.ArrayNum = 0;
        local_d8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        local_d8.ArrayNum = 0;
        local_148.AllocatorInstance.SecondaryData = (ForElementType<bool>)0x0;
        local_148.ArrayNum = 0;
        aiStack_274[1] = 2;
        aiStack_274[2] = 0;
        aiStack_274[3] = 1;
        local_178.ArrayMax = 8;
        local_d8.ArrayMax = 8;
        local_148.ArrayMax = 8;
        local_260 = this;
        local_238 = uVar20;
        EVar13 = UE::Geometry::FDynamicMesh3::
                 GetVtxContiguousTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TArray<bool,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                           (this_00,param_1,&local_178,&local_d8,&local_148);
        if ((EVar13 == Ok) && (local_148.ArrayNum == 1)) {
          FVar18 = (ForElementType<bool>)&local_148;
          if (local_148.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
            FVar18 = local_148.AllocatorInstance.SecondaryData;
          }
          bStack_250 = *(char *)FVar18 == '\x01';
          if (1 < local_178.ArrayNum) {
            FVar16 = (ForElementType<int>)&local_178;
            if (local_178.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
              FVar16 = local_178.AllocatorInstance.SecondaryData;
            }
            uVar20 = (ulonglong)(*(uint *)FVar16 & 0x1ff);
            uVar23 = (ulonglong)(*(uint *)FVar16 >> 9);
            lVar2 = *(longlong *)
                     (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) + uVar23 * 8);
            local_2b0 = *(ForElementType<int> *)(lVar2 + uVar20 * 0xc);
            lVar3 = *(longlong *)
                     (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x180) + uVar23 * 8);
            local_290 = *(undefined8 *)(lVar3 + uVar20 * 0xc);
            local_288 = *(undefined4 *)(lVar3 + 8 + uVar20 * 0xc);
            uVar24 = uVar21;
            if (local_2b0._0_4_ != param_1) {
              if ((int)((ulonglong)local_2b0 >> 0x20) == param_1) {
                uVar24 = 1;
              }
              else {
                uVar24 = 0xffffffff;
                if (*(int *)(lVar2 + 8 + uVar20 * 0xc) == param_1) {
                  uVar24 = 2;
                }
              }
            }
            iVar14 = *(int *)((longlong)&local_290 +
                             (longlong)aiStack_274[(longlong)(int)uVar24 + 1] * 4);
            if ((local_178.ArrayNum < 2) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar16 = (ForElementType<int>)&local_178;
            if (local_178.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
              FVar16 = local_178.AllocatorInstance.SecondaryData;
            }
            uVar20 = (ulonglong)(*(uint *)((longlong)FVar16 + 4) & 0x1ff);
            uVar23 = (ulonglong)(*(uint *)((longlong)FVar16 + 4) >> 9);
            lVar2 = *(longlong *)
                     (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) + uVar23 * 8);
            local_2b0 = *(ForElementType<int> *)(lVar2 + uVar20 * 0xc);
            lVar3 = *(longlong *)
                     (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x180) + uVar23 * 8);
            local_290 = *(undefined8 *)(lVar3 + uVar20 * 0xc);
            local_288 = *(undefined4 *)(lVar3 + 8 + uVar20 * 0xc);
            uVar24 = uVar21;
            if (local_2b0._0_4_ != param_1) {
              if (local_2b0._4_4_ == param_1) {
                uVar24 = 1;
              }
              else {
                uVar24 = 0xffffffff;
                if (*(int *)(lVar2 + 8 + uVar20 * 0xc) == param_1) {
                  uVar24 = 2;
                }
              }
            }
            if (*(int *)((longlong)&local_290 + (longlong)(int)uVar24 * 4) != iVar14) {
              FVar16 = (ForElementType<int>)&local_178;
              if (local_178.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                FVar16 = local_178.AllocatorInstance.SecondaryData;
              }
              iVar14 = local_178.ArrayNum / 2;
              if (0 < iVar14) {
                puVar22 = (uint *)((longlong)FVar16 + (longlong)(int)(local_178.ArrayNum - 1) * 4);
                do {
                  uVar24 = *(uint *)((longlong)FVar16 + lVar19 * 4);
                  *(uint *)((longlong)FVar16 + lVar19 * 4) = *puVar22;
                  lVar19 = lVar19 + 1;
                  *puVar22 = uVar24;
                  puVar22 = puVar22 + -1;
                } while (lVar19 < iVar14);
              }
            }
          }
          if ((local_d8.ArrayNum < 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar19 = *(longlong *)this;
          dVar8 = 0.0;
          dVar7 = 0.0;
          if (param_1 < *(int *)(lVar19 + 0x18)) {
            uVar21 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar20 = (ulonglong)local_178.ArrayNum;
          local_298 = local_178.ArrayNum;
          FVar16 = (ForElementType<int>)&local_178;
          if (local_178.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar16 = local_178.AllocatorInstance.SecondaryData;
          }
          uVar21 = *(uint *)(*(longlong *)(lVar19 + 0x10) + (longlong)param_1 * 4);
          local_128._0_8_ = 0;
          local_128._8_8_ = 0;
          local_108 = (uint *)0x0;
          FVar16 = (ForElementType<int>)((longlong)FVar16 + uVar20 * 4);
          local_100 = 0;
          local_f4 = 0;
          local_e8 = (ForElementType<FSetElementId>)0x0;
          local_e0 = 0;
          FVar25 = (ForElementType<int>)&local_178;
          if (local_178.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar25 = local_178.AllocatorInstance.SecondaryData;
          }
          local_fc = 0x80;
          local_f8 = 0xffffffff;
          local_2b0 = FVar16;
          local_29c = uVar21;
          while( true ) {
            if (local_178.ArrayNum != (uint)uVar20) {
              local_2b8 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_2b8);
            }
            if (FVar25 == FVar16) break;
            local_2a0 = *(uint *)FVar25;
            uVar20 = (ulonglong)(local_2a0 & 0x1ff);
            uVar23 = (ulonglong)(local_2a0 >> 9);
            lVar19 = *(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) + uVar23 * 8);
            local_280 = *(undefined8 *)(lVar19 + uVar20 * 0xc);
            lVar2 = *(longlong *)
                     (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x180) + uVar23 * 8);
            local_228 = *(undefined8 *)(lVar2 + uVar20 * 0xc);
            local_220 = *(undefined4 *)(lVar2 + 8 + uVar20 * 0xc);
            if ((int)local_280 == param_1) {
              iVar14 = 0;
              local_2b4 = 0;
              lVar19 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x38) + uVar23 * 8) +
                       uVar20 * 0x18;
            }
            else if ((int)((ulonglong)local_280 >> 0x20) == param_1) {
              iVar14 = 1;
              local_2b4 = 1;
              lVar19 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x38) + uVar23 * 8) +
                       uVar20 * 0x18;
            }
            else {
              iVar14 = -1;
              if (*(int *)(lVar19 + 8 + uVar20 * 0xc) == param_1) {
                iVar14 = 2;
              }
              lVar19 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x38) + uVar23 * 8) +
                       uVar20 * 0x18;
              FVar16 = local_2b0;
              local_2b4 = iVar14;
              if ((iVar14 < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                      ,0x7a2,L""), FVar16 = local_2b0, bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            *(double *)(lVar19 + (longlong)iVar14 * 8) = dVar7;
            local_1a8 = &local_2a0;
            local_1a0 = &local_2b4;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)local_128,&local_248,(bool *)&local_1a8);
            this = local_260;
            uVar21 = local_29c;
            if (*(uint *)((longlong)&local_228 + (longlong)local_2b4 * 4) == local_29c) {
              dVar8 = dVar7;
            }
            dVar5 = UE::Geometry::FDynamicMesh3::GetTriInternalAngleR
                              ((FDynamicMesh3 *)local_260[1],local_2a0,local_2b4);
            uVar20 = (ulonglong)local_298;
            dVar7 = dVar7 + dVar5;
            FVar25 = (ForElementType<int>)((longlong)FVar25 + 4);
          }
          if ((local_148.ArrayNum < 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar18 = (ForElementType<bool>)&local_148;
          if (local_148.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
            FVar18 = local_148.AllocatorInstance.SecondaryData;
          }
          if (*(char *)FVar18 == '\0') {
            uVar24 = 0;
            if ((int)(local_178.ArrayNum - 1U) < local_178.ArrayNum) {
              uVar24 = ~(local_178.ArrayNum - 1U) >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar16 = (ForElementType<int>)&local_178;
            if (local_178.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
              FVar16 = local_178.AllocatorInstance.SecondaryData;
            }
            uVar24 = *(uint *)((longlong)FVar16 + (longlong)(int)(local_178.ArrayNum - 1) * 4);
            uVar20 = (ulonglong)(uVar24 & 0x1ff);
            uVar23 = (ulonglong)(uVar24 >> 9);
            lVar19 = *(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) + uVar23 * 8);
            local_280 = *(undefined8 *)(lVar19 + uVar20 * 0xc);
            lVar2 = *(longlong *)
                     (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x180) + uVar23 * 8);
            uVar10 = local_280;
            local_218 = *(undefined8 *)(lVar2 + uVar20 * 0xc);
            local_210 = *(undefined4 *)(lVar2 + 8 + uVar20 * 0xc);
            if ((int)local_280 == param_1) {
              iVar14 = 0;
            }
            else if ((int)((ulonglong)local_280 >> 0x20) == param_1) {
              iVar14 = 1;
            }
            else {
              iVar14 = -1;
              if (*(int *)(lVar19 + 8 + uVar20 * 0xc) == param_1) {
                iVar14 = 2;
              }
            }
            local_280 = uVar10;
            if (*(uint *)((longlong)&local_218 + (longlong)aiStack_274[(longlong)iVar14 + 1] * 4) ==
                uVar21) {
              dVar8 = dVar7;
            }
          }
          uVar24 = local_100;
          dVar5 = __real_401921fb54442d18;
          dVar7 = __real_401921fb54442d18 / dVar7;
          local_258 = dVar7;
          if ((int)((ulonglong)
                    *(undefined8 *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1c0) +
                       (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 0x10) >> 0x20)
              == param_1) {
            uVar26 = (undefined4)__real_400921fb54442d18;
            uVar27 = (undefined4)((ulonglong)__real_400921fb54442d18 >> 0x20);
          }
          else {
            uVar26 = 0;
            uVar27 = 0;
          }
          iStack_200 = 0;
          local_1e8 = 0;
          uStack_1ec = 0;
          if (local_100 != 0) {
            puVar22 = (uint *)(local_128 + 0x10);
            if (local_108 != (uint *)0x0) {
              puVar22 = local_108;
            }
            uVar21 = *puVar22;
            while (uVar21 == 0) {
              lVar19 = (longlong)iStack_200;
              local_1e8 = local_1e8 + 0x20;
              iStack_200 = iStack_200 + 1;
              uStack_1ec = local_100;
              if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_200)
              goto LAB_14c6ed7b1;
              uVar21 = puVar22[lVar19 + 1];
            }
            uVar15 = -uVar21 & uVar21;
            uVar20 = (ulonglong)uVar15 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            uStack_1ec = local_1e8 + -1 + (int)lVar19;
            local_248.Key._4_4_ = (int)lVar19;
            if ((int)local_100 < (int)uStack_1ec) {
              uStack_1ec = local_100;
            }
          }
LAB_14c6ed7b1:
          local_208 = (longlong *)local_128;
          uStack_1e4 = local_17c;
          local_1f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
          uVar21 = local_100 & 0xffffffe0;
          uStack_1f0 = 0xffffffff;
          uStack_1fc = uVar15;
          iStack_1e0 = local_128._8_4_ - local_f4;
          local_1d8 = (longlong *)local_128;
          TStack_1d0._padding_ = CONCAT44(uVar15,iStack_200);
          iVar14 = (int)local_100 >> 5;
          bVar17 = (byte)local_100;
          TStack_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
          TStack_1d0.UnvisitedBitMask = 0xffffffff;
          TStack_1d0.CurrentBitIndex = uStack_1ec;
          TStack_1d0.BaseBitIndex = local_1e8;
          TStack_1d0._28_4_ = local_17c;
          uStack_1b0 = CONCAT44(uStack_1dc,local_128._8_4_ - local_f4);
          if (((int)local_100 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this = local_260;
          dVar9 = __real_c01921fb54442d18;
          if (uVar24 != local_100) {
            puVar22 = (uint *)(local_128 + 0x10);
            if (local_108 != (uint *)0x0) {
              puVar22 = local_108;
            }
            uVar15 = -1 << (bVar17 & 0x1f) & puVar22[iVar14];
            while (uVar15 == 0) {
              lVar19 = (longlong)iVar14;
              uVar21 = uVar21 + 0x20;
              iVar14 = iVar14 + 1;
              uVar24 = local_100;
              if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
              goto LAB_14c6ed8e0;
              uVar15 = puVar22[lVar19 + 1];
            }
            uVar20 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
            lVar19 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_248.Value._0_4_ = (int)lVar19;
            uVar24 = (uVar21 - 1) + (int)local_248.Value;
            if ((int)local_100 < (int)uVar24) {
              uVar24 = local_100;
            }
          }
LAB_14c6ed8e0:
          while( true ) {
            plVar11 = local_1d8;
            if ((int)local_1d8[1] - *(int *)((longlong)local_1d8 + 0x34) != (int)uStack_1b0) {
              local_2b7[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2b7);
            }
            if (((TStack_1d0.CurrentBitIndex == uVar24) &&
                (TStack_1d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
               (plVar11 == (longlong *)local_128)) break;
            lVar19 = *plVar11;
            uVar21 = *(uint *)(lVar19 + (longlong)TStack_1d0.CurrentBitIndex * 0x10);
            uVar15 = *(uint *)(lVar19 + 4 + (longlong)TStack_1d0.CurrentBitIndex * 0x10);
            lVar19 = *(longlong *)
                      (*(longlong *)(*(longlong *)this + 0x38) + (ulonglong)(uVar21 >> 9) * 8) +
                     (ulonglong)(uVar21 & 0x1ff) * 0x18;
            if ((2 < uVar15) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValidIndex(Index)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                    ,0x7a2,L""), bVar12)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            for (dVar6 = (*(double *)(lVar19 + (longlong)(int)uVar15 * 8) - dVar8) * dVar7 +
                         (double)CONCAT44(uVar27,uVar26); dVar6 < 0.0; dVar6 = dVar6 + dVar5) {
            }
            for (; dVar5 < dVar6; dVar6 = dVar6 + dVar9) {
            }
            *(double *)(lVar19 + (longlong)(int)uVar15 * 8) = dVar6;
            TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
          }
          local_e0 = 0;
          if (local_e8 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_e8);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_128);
          uVar20 = local_238;
        }
        else {
          bStack_250 = false;
        }
        pdVar1 = (double *)
                 (*(longlong *)(*(longlong *)(*(longlong *)this + 0x68) + local_230 * 8) +
                 uVar20 * 0x10);
        *pdVar1 = local_258;
        pdVar1[1] = (double)CONCAT71(uStack_24f,bStack_250);
        if (local_148.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
          FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
        }
        if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
        }
        if (local_178.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_178.AllocatorInstance.SecondaryData);
        }
      }
    }
  }
  return;
}

// OnFlipEdge @ 14c752f20

void __thiscall
UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::OnFlipEdge
          (FSignpost *this,int param_1,FIndex2i param_2,FIndex2i param_3,FIndex2i param_4,
          double param_5,double param_6)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  bool bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  uint uStackX_24;
  uint local_a8 [4];
  uint local_98 [4];
  double local_88 [4];
  undefined8 uStack_68;
  undefined8 local_60;
  
  pFVar9 = (this->IntrinsicEdgeAngles).Blocks.AllocatorInstance.Data;
  uVar14 = (ulonglong)(param_2.field0_0x0._0_4_ & 0x1ff);
  uVar16 = ((ulonglong)param_2.field0_0x0 & 0xffffffff) >> 9;
  uVar15 = (ulonglong)(param_2.field0_0x0._4_4_ & 0x1ff);
  local_a8[0] = 1;
  local_a8[1] = 2;
  local_a8[2] = 0;
  lVar10 = *(longlong *)(pFVar9 + uVar16 * 8);
  uVar7 = local_a8[param_4.field0_0x0._s_0.A];
  local_98[0] = 2;
  local_98[1] = 0;
  local_98[2] = 1;
  local_88[2] = (double)*(undefined8 *)(lVar10 + 0x10 + uVar14 * 0x18);
  pdVar1 = (double *)(lVar10 + uVar14 * 0x18);
  lVar10 = *(longlong *)(pFVar9 + ((ulonglong)param_2.field0_0x0 >> 0x29) * 8);
  local_88[0] = *pdVar1;
  local_88[1] = pdVar1[1];
  local_60 = *(undefined8 *)(lVar10 + 0x10 + uVar15 * 0x18);
  puVar2 = (undefined8 *)(lVar10 + uVar15 * 0x18);
  local_88[3] = (double)*puVar2;
  uStack_68 = puVar2[1];
  if ((2 < uVar7) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar8 = local_98[param_4.field0_0x0._s_0.A];
  dVar3 = local_88[(int)uVar7];
  if ((2 < uVar8) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  dVar4 = local_88[(int)uVar8];
  uVar7 = local_a8[param_4.field0_0x0._s_0.B];
  if ((2 < uVar7) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar8 = local_98[param_4.field0_0x0._s_0.B];
  dVar5 = local_88[(longlong)(int)uVar7 + 3];
  if ((2 < uVar8) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uStackX_24 = param_3.field0_0x0._4_4_;
  pFVar9 = (this->GeometricVertexInfo).Blocks.AllocatorInstance.Data;
  dVar6 = local_88[(longlong)(int)uVar8 + 3];
  for (dVar17 = param_6 * *(double *)
                           (*(longlong *)(pFVar9 + (ulonglong)(uStackX_24 >> 9) * 8) +
                           (ulonglong)(uStackX_24 & 0x1ff) * 0x10) + dVar6; dVar17 < 0.0;
      dVar17 = dVar17 + __real_401921fb54442d18) {
  }
  for (; __real_401921fb54442d18 < dVar17; dVar17 = dVar17 + __real_c01921fb54442d18) {
  }
  for (dVar12 = param_5 * *(double *)
                           (*(longlong *)
                             (pFVar9 + (((ulonglong)param_3.field0_0x0 & 0xffffffff) >> 9) * 8) +
                           (ulonglong)(param_3.field0_0x0._0_4_ & 0x1ff) * 0x10) + dVar4;
      dVar12 < 0.0; dVar12 = dVar12 + __real_401921fb54442d18) {
  }
  for (; __real_401921fb54442d18 < dVar12; dVar12 = dVar12 + __real_c01921fb54442d18) {
  }
  lVar10 = *(longlong *)((this->IntrinsicEdgeAngles).Blocks.AllocatorInstance.Data + uVar16 * 8);
  *(double *)(lVar10 + uVar14 * 0x18) = dVar12;
  *(double *)(lVar10 + 8 + uVar14 * 0x18) = dVar6;
  *(double *)(lVar10 + 0x10 + uVar14 * 0x18) = dVar3;
  lVar10 = *(longlong *)
            ((this->IntrinsicEdgeAngles).Blocks.AllocatorInstance.Data +
            ((ulonglong)param_2.field0_0x0 >> 0x29) * 8);
  *(double *)(lVar10 + uVar15 * 0x18) = dVar17;
  *(double *)(lVar10 + 8 + uVar15 * 0x18) = dVar4;
  *(double *)(lVar10 + 0x10 + uVar15 * 0x18) = dVar5;
  return;
}

