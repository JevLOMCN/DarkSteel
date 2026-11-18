// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 13

// AddMesh @ 146a5d000

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall SMeshWidget::AddMesh(SMeshWidget *this,USlateVectorArtData *param_1)

{
  TArray<SMeshWidget::FRenderData,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  uchar *puVar3;
  UMaterialInterface *this_00;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FSlateBrush *this_01;
  FString *pFVar9;
  FName *pFVar10;
  FSlateApplication *pFVar11;
  TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *pTVar12;
  ForElementType<SMeshWidget::FRenderData> FVar13;
  wchar_t *pwVar14;
  TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *pTVar15;
  longlong lVar16;
  float local_res8;
  float local_resc;
  undefined8 local_res10;
  TRawPtrProxy<FSlateMaterialBrush> local_res18;
  FName local_res20;
  FMargin local_c8;
  FString local_b8;
  undefined1 local_a8 [8];
  TReferenceControllerBase<1> *local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FSlateResourceHandle local_68;
  undefined8 local_58;
  TReferenceControllerBase<1> *pTStack_50;
  
  pTVar1 = &this->RenderData;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_68.Data.Object = (FSlateSharedHandleData *)0x0;
  local_68.Data.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_58 = 0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  local_78 = 0;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  FSlateResourceHandle::FSlateResourceHandle(&local_68);
  FVar13 = (this->RenderData).AllocatorInstance.SecondaryData;
  local_58 = 0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  if (FVar13 == (ForElementType<SMeshWidget::FRenderData>)0x0) {
    FVar13 = (ForElementType<SMeshWidget::FRenderData>)pTVar1;
  }
  if (((ulonglong)FVar13 <= &local_98) &&
     (&local_98 < (void **)((longlong)(this->RenderData).ArrayMax * 0x50 + (longlong)FVar13))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  uVar7 = (this->RenderData).ArrayNum;
  piVar2 = &(this->RenderData).ArrayMax;
  if (uVar7 == *piVar2) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<SMeshWidget::FRenderData>_>
                      (0x850,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->RenderData).ArrayNum = uVar7 + 1;
  FVar13 = (this->RenderData).AllocatorInstance.SecondaryData;
  lVar16 = (longlong)(int)uVar7 * 0x50;
  if (FVar13 == (ForElementType<SMeshWidget::FRenderData>)0x0) {
    FVar13 = (ForElementType<SMeshWidget::FRenderData>)pTVar1;
  }
  *(undefined8 *)((longlong)FVar13 + lVar16) = 0;
  *(void **)((longlong)FVar13 + lVar16) = local_98;
  local_98 = (void *)0x0;
  *(undefined4 *)((uchar *)((longlong)FVar13 + 8) + lVar16) = (undefined4)local_90;
  *(undefined4 *)((uchar *)((longlong)FVar13 + 0xc) + lVar16) = local_90._4_4_;
  local_90 = 0;
  puVar3 = (uchar *)((longlong)FVar13 + 0x10) + lVar16;
  puVar3[0] = '\0';
  puVar3[1] = '\0';
  puVar3[2] = '\0';
  puVar3[3] = '\0';
  puVar3[4] = '\0';
  puVar3[5] = '\0';
  puVar3[6] = '\0';
  puVar3[7] = '\0';
  *(void **)((uchar *)((longlong)FVar13 + 0x10) + lVar16) = local_88;
  local_88 = (void *)0x0;
  *(undefined4 *)((uchar *)((longlong)FVar13 + 0x18) + lVar16) = (undefined4)local_80;
  *(undefined4 *)((uchar *)((longlong)FVar13 + 0x1c) + lVar16) = local_80._4_4_;
  local_80 = 0;
  *(undefined8 *)((uchar *)((longlong)FVar13 + 0x20) + lVar16) = local_78;
  *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar13 + 0x28) + lVar16) = pTStack_70;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  local_78 = 0;
  *(FSlateSharedHandleData **)((uchar *)((longlong)FVar13 + 0x30) + lVar16) = local_68.Data.Object;
  *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar13 + 0x38) + lVar16) =
       local_68.Data.SharedReferenceCount.ReferenceController;
  local_68.Data.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_68.Data.Object = (FSlateSharedHandleData *)0x0;
  *(undefined8 *)((uchar *)((longlong)FVar13 + 0x40) + lVar16) = local_58;
  *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar13 + 0x48) + lVar16) = pTStack_50;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  local_58 = 0;
  uVar8 = 0;
  if ((int)uVar7 < (this->RenderData).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  FVar13 = (this->RenderData).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<SMeshWidget::FRenderData>)0x0) {
    FVar13 = (ForElementType<SMeshWidget::FRenderData>)pTVar1;
  }
  pTVar15 = (TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *)((longlong)FVar13 + lVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  this_00 = (param_1->Material).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialInterface *)0x0) {
    this_01 = ::operator_new(0xb0);
    if (this_01 == (FSlateBrush *)0x0) {
      this_01 = (FSlateBrush *)0x0;
    }
    else {
      local_res8 = (float)DontCare.field0_0x0._s_0.X;
      local_res10 = 0;
      local_resc = (float)DontCare.field0_0x0._s_0.Y;
      local_c8.Left = 0.0;
      local_c8.Top = 0.0;
      local_c8.Right = 0.0;
      local_c8.Bottom = 0.0;
      FSlateBrush::FSlateBrush
                (this_01,Image,(FName)0x0,&local_c8,NoTile,FullColor,
                 (FDeprecateVector2DParameter *)&local_res8,&FLinearColor::White,(UObject *)this_00,
                 false);
      this_01->_padding_ = (longlong)&___7FSlateMaterialBrush__6B_;
      pFVar9 = UObjectBaseUtility::GetFullName
                         ((UObjectBaseUtility *)this_00,&local_b8,(UObject *)0x0,None);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      pFVar10 = ::FName::FName(&local_res20,pwVar14);
      this_01->ResourceName = *pFVar10;
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    local_res18.Object = (FSlateMaterialBrush *)this_01;
    TSharedPtr<FSlateBrush,1>::operator=<FSlateMaterialBrush>
              ((TSharedPtr<FSlateBrush,1> *)(pTVar15 + 2),&local_res18);
    pFVar11 = FSlateApplication::Get();
    plVar4 = *(longlong **)&pFVar11->field_0x60;
    pcVar5 = *(code **)(*plVar4 + 0x80);
    if (pTVar15[2].AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
    }
    pTVar12 = (TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *)
              (*pcVar5)(plVar4,local_a8,pTVar15[2].AllocatorInstance.Data);
    if (pTVar15 + 3 != pTVar12) {
      pTVar15[3].AllocatorInstance.Data = (pTVar12->AllocatorInstance).Data;
      (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pTVar15[3].ArrayNum,
                 (FSharedReferencer<1> *)&pTVar12->ArrayNum);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  }
  SlateMeshToSlateRenderData
            (param_1,pTVar15,(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar15 + 1));
  return (this->RenderData).ArrayNum - 1;
}

// AddMeshWithInstancing @ 146a5d400

uint __thiscall
SMeshWidget::AddMeshWithInstancing(SMeshWidget *this,USlateVectorArtData *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = AddMesh(this,param_1);
  EnableInstancing(this,uVar1,param_2);
  return uVar1;
}

// AddReferencedObjects @ 146a5d4e0

void __thiscall SMeshWidget::AddReferencedObjects(SMeshWidget *this,FReferenceCollector *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  plVar2 = (longlong *)this->_padding_;
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    plVar2 = &this->_padding_;
  }
  plVar3 = plVar2 + 4;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<SMeshWidget::FRenderData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar3 + -4 == plVar2 + (longlong)iVar1 * 10) break;
    if (*plVar3 != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,*plVar3 + 0x38,0,0);
    }
    plVar3 = plVar3 + 10;
  }
  return;
}

// ClearRuns @ 146a60c80

void __thiscall SMeshWidget::ClearRuns(SMeshWidget *this,int param_1)

{
  if (-1 < param_1) {
    (this->RenderRuns).ArrayNum = 0;
    if ((this->RenderRuns).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,&(this->RenderRuns).AllocatorInstance,0,&(this->RenderRuns).ArrayMax)
      ;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ComputeDesiredSize @ 146a61bd0

TVector2<double> * __thiscall
SMeshWidget::ComputeDesiredSize
          (SMeshWidget *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 256.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 256.0;
  return __return_storage_ptr__;
}

// Construct @ 146a61f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMeshWidget::Construct(SMeshWidget *this,FArguments *param_1)

{
  TArray<SMeshWidget::FRenderData,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  uchar *puVar3;
  UMaterialInterface *this_00;
  longlong *plVar4;
  USlateVectorArtData *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FSlateBrush *this_01;
  FString *pFVar10;
  FName *pFVar11;
  FSlateApplication *pFVar12;
  TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *pTVar13;
  ForElementType<SMeshWidget::FRenderData> FVar14;
  wchar_t *pwVar15;
  TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong lVar17;
  float fStackX_8;
  float fStackX_c;
  undefined8 uStackX_10;
  TRawPtrProxy<FSlateMaterialBrush> TStackX_18;
  FName FStackX_20;
  FMargin FStack_c8;
  FString FStack_b8;
  undefined1 auStack_a8 [8];
  TReferenceControllerBase<1> *pTStack_a0;
  void *pvStack_98;
  undefined8 uStack_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  TReferenceControllerBase<1> *pTStack_70;
  FSlateResourceHandle FStack_68;
  undefined8 uStack_58;
  TReferenceControllerBase<1> *pTStack_50;
  
  pUVar5 = param_1->_MeshData;
  if (pUVar5 == (USlateVectorArtData *)0x0) {
    return;
  }
  pTVar1 = &this->RenderData;
  pvStack_98 = (void *)0x0;
  uStack_90 = 0;
  pvStack_88 = (void *)0x0;
  uStack_80 = 0;
  FStack_68.Data.Object = (FSlateSharedHandleData *)0x0;
  FStack_68.Data.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  uStack_58 = 0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  uStack_78 = 0;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  FSlateResourceHandle::FSlateResourceHandle(&FStack_68);
  FVar14 = (this->RenderData).AllocatorInstance.SecondaryData;
  uStack_58 = 0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  if (FVar14 == (ForElementType<SMeshWidget::FRenderData>)0x0) {
    FVar14 = (ForElementType<SMeshWidget::FRenderData>)pTVar1;
  }
  if (((ulonglong)FVar14 <= &pvStack_98) &&
     (&pvStack_98 < (void **)((longlong)(this->RenderData).ArrayMax * 0x50 + (longlong)FVar14))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar8 = (this->RenderData).ArrayNum;
  piVar2 = &(this->RenderData).ArrayMax;
  if (uVar8 == *piVar2) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<SMeshWidget::FRenderData>_>
                      (0x850,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->RenderData).ArrayNum = uVar8 + 1;
  FVar14 = (this->RenderData).AllocatorInstance.SecondaryData;
  lVar17 = (longlong)(int)uVar8 * 0x50;
  if (FVar14 == (ForElementType<SMeshWidget::FRenderData>)0x0) {
    FVar14 = (ForElementType<SMeshWidget::FRenderData>)pTVar1;
  }
  *(undefined8 *)((longlong)FVar14 + lVar17) = 0;
  *(void **)((longlong)FVar14 + lVar17) = pvStack_98;
  pvStack_98 = (void *)0x0;
  *(undefined4 *)((uchar *)((longlong)FVar14 + 8) + lVar17) = (undefined4)uStack_90;
  *(undefined4 *)((uchar *)((longlong)FVar14 + 0xc) + lVar17) = uStack_90._4_4_;
  uStack_90 = 0;
  puVar3 = (uchar *)((longlong)FVar14 + 0x10) + lVar17;
  puVar3[0] = '\0';
  puVar3[1] = '\0';
  puVar3[2] = '\0';
  puVar3[3] = '\0';
  puVar3[4] = '\0';
  puVar3[5] = '\0';
  puVar3[6] = '\0';
  puVar3[7] = '\0';
  *(void **)((uchar *)((longlong)FVar14 + 0x10) + lVar17) = pvStack_88;
  pvStack_88 = (void *)0x0;
  *(undefined4 *)((uchar *)((longlong)FVar14 + 0x18) + lVar17) = (undefined4)uStack_80;
  *(undefined4 *)((uchar *)((longlong)FVar14 + 0x1c) + lVar17) = uStack_80._4_4_;
  uStack_80 = 0;
  *(undefined8 *)((uchar *)((longlong)FVar14 + 0x20) + lVar17) = uStack_78;
  *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar14 + 0x28) + lVar17) = pTStack_70;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  uStack_78 = 0;
  *(FSlateSharedHandleData **)((uchar *)((longlong)FVar14 + 0x30) + lVar17) = FStack_68.Data.Object;
  *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar14 + 0x38) + lVar17) =
       FStack_68.Data.SharedReferenceCount.ReferenceController;
  FStack_68.Data.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FStack_68.Data.Object = (FSlateSharedHandleData *)0x0;
  *(undefined8 *)((uchar *)((longlong)FVar14 + 0x40) + lVar17) = uStack_58;
  *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar14 + 0x48) + lVar17) = pTStack_50;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  uStack_58 = 0;
  uVar9 = 0;
  if ((int)uVar8 < (this->RenderData).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FVar14 = (this->RenderData).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<SMeshWidget::FRenderData>)0x0) {
    FVar14 = (ForElementType<SMeshWidget::FRenderData>)pTVar1;
  }
  pTVar16 = (TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *)((longlong)FVar14 + lVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_68.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  if (pvStack_98 != (void *)0x0) {
    FMemory::Free(pvStack_98);
  }
  this_00 = (pUVar5->Material).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialInterface *)0x0) {
    this_01 = ::operator_new(0xb0);
    if (this_01 == (FSlateBrush *)0x0) {
      this_01 = (FSlateBrush *)0x0;
    }
    else {
      fStackX_8 = (float)DontCare.field0_0x0._s_0.X;
      uStackX_10 = 0;
      fStackX_c = (float)DontCare.field0_0x0._s_0.Y;
      FStack_c8.Left = 0.0;
      FStack_c8.Top = 0.0;
      FStack_c8.Right = 0.0;
      FStack_c8.Bottom = 0.0;
      FSlateBrush::FSlateBrush
                (this_01,Image,(FName)0x0,&FStack_c8,NoTile,FullColor,
                 (FDeprecateVector2DParameter *)&fStackX_8,&FLinearColor::White,(UObject *)this_00,
                 false);
      this_01->_padding_ = (longlong)&___7FSlateMaterialBrush__6B_;
      pFVar10 = UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_00,&FStack_b8,(UObject *)0x0,None);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      pFVar11 = ::FName::FName(&FStackX_20,pwVar15);
      this_01->ResourceName = *pFVar11;
      if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
      }
    }
    TStackX_18.Object = (FSlateMaterialBrush *)this_01;
    TSharedPtr<FSlateBrush,1>::operator=<FSlateMaterialBrush>
              ((TSharedPtr<FSlateBrush,1> *)(pTVar16 + 2),&TStackX_18);
    pFVar12 = FSlateApplication::Get();
    plVar4 = *(longlong **)&pFVar12->field_0x60;
    pcVar6 = *(code **)(*plVar4 + 0x80);
    if (pTVar16[2].AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar13 = (TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *)
              (*pcVar6)(plVar4,auStack_a8,pTVar16[2].AllocatorInstance.Data);
    if (pTVar16 + 3 != pTVar13) {
      pTVar16[3].AllocatorInstance.Data = (pTVar13->AllocatorInstance).Data;
      (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pTVar16[3].ArrayNum,
                 (FSharedReferencer<1> *)&pTVar13->ArrayNum);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
  }
  SlateMeshToSlateRenderData
            (pUVar5,pTVar16,(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar16 + 1));
  return;
}

// ConvertToMID @ 146a62b60

/* WARNING: Enum "Type": Some values do not have unique names */

UMaterialInstanceDynamic * __thiscall SMeshWidget::ConvertToMID(SMeshWidget *this,uint param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UMaterialInstanceDynamic *pUVar6;
  UClass *pUVar7;
  FSlateApplication *pFVar8;
  undefined8 *puVar9;
  ForElementType<SMeshWidget::FRenderData> FVar10;
  longlong lVar11;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  uVar5 = 0;
  if ((int)param_1 < (this->RenderData).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UMaterialInstanceDynamic *)(*pcVar3)();
      return pUVar6;
    }
  }
  FVar10 = (this->RenderData).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<SMeshWidget::FRenderData>)0x0) {
    FVar10 = (ForElementType<SMeshWidget::FRenderData>)&this->RenderData;
  }
  lVar11 = (longlong)(int)param_1 * 0x50 + (longlong)FVar10;
  if (*(longlong *)(lVar11 + 0x20) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UMaterialInstanceDynamic *)(*pcVar3)();
      return pUVar6;
    }
  }
  pUVar6 = *(UMaterialInstanceDynamic **)(*(longlong *)(lVar11 + 0x20) + 0x38);
  if (pUVar6 != (UMaterialInstanceDynamic *)0x0) {
    pUVar7 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      pUVar7 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) {
        return pUVar6;
      }
      goto LAB_146a62c66;
    }
  }
  pUVar6 = (UMaterialInstanceDynamic *)0x0;
LAB_146a62c66:
  pUVar6 = UMaterialInstanceDynamic::Create((UMaterialInterface *)pUVar6,(UObject *)0x0,(FName)0x0);
  if (*(longlong *)(lVar11 + 0x20) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UMaterialInstanceDynamic *)(*pcVar3)();
      return pUVar6;
    }
  }
  FSlateBrush::SetResourceObject(*(FSlateBrush **)(lVar11 + 0x20),(UObject *)pUVar6);
  pFVar8 = FSlateApplication::Get();
  plVar2 = *(longlong **)&pFVar8->field_0x60;
  pcVar3 = *(code **)(*plVar2 + 0x80);
  if (*(longlong *)(lVar11 + 0x20) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UMaterialInstanceDynamic *)(*pcVar3)();
      return pUVar6;
    }
  }
  puVar9 = (undefined8 *)(*pcVar3)(plVar2,local_18,*(undefined8 *)(lVar11 + 0x20));
  if ((undefined8 *)(lVar11 + 0x30) != puVar9) {
    *(undefined8 *)(lVar11 + 0x30) = *puVar9;
    *puVar9 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar11 + 0x38),(FSharedReferencer<1> *)(puVar9 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return pUVar6;
}

// EnableInstancing @ 146a701e0

void __thiscall SMeshWidget::EnableInstancing(SMeshWidget *this,uint param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FModuleManager *this_00;
  IModuleInterface *pIVar5;
  undefined8 *puVar6;
  ForElementType<SMeshWidget::FRenderData> FVar7;
  uchar *puVar8;
  FName local_res8;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  FString local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  uVar4 = 0;
  if ((int)param_1 < (this->RenderData).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar7 = (this->RenderData).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<SMeshWidget::FRenderData>)0x0) {
    FVar7 = (ForElementType<SMeshWidget::FRenderData>)&this->RenderData;
  }
  if (*(longlong *)((uchar *)((longlong)FVar7 + 0x40) + (longlong)(int)param_1 * 0x50) == 0) {
    FModuleManager::Get();
    local_res8 = SlateRHIModuleName;
    this_00 = FModuleManager::Get();
    bVar3 = FModuleManager::IsModuleLoaded(this_00,local_res8);
    if (!bVar3) {
      ::FName::ToString(&local_res8,&local_58);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModuleManager.IsModuleLoaded(ModuleName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                         ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar5 = FModuleManager::GetModule(this_00,local_res8);
    puVar6 = (undefined8 *)(**(code **)((longlong)*pIVar5 + 0x58))(pIVar5,local_48,param_2);
    local_60.ReferenceController = (TReferenceControllerBase<1> *)puVar6[1];
    uVar1 = *puVar6;
    if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar4 = 0;
    if ((int)param_1 < (this->RenderData).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    local_68 = uVar1;
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar7 = (this->RenderData).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<SMeshWidget::FRenderData>)0x0) {
      FVar7 = (ForElementType<SMeshWidget::FRenderData>)&this->RenderData;
    }
    puVar8 = (uchar *)((longlong)FVar7 + 0x40) + (longlong)(int)param_1 * 0x50;
    if (puVar8 != (uchar *)&local_68) {
      *(undefined8 *)puVar8 = uVar1;
      local_68 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(puVar8 + 8),&local_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  return;
}

// GetReferencerName @ 146a78cf0

FString * __thiscall
SMeshWidget::GetReferencerName(SMeshWidget *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SMeshWidget");
  return __return_storage_ptr__;
}

// OnPaint @ 146a84d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
SMeshWidget::OnPaint
          (SMeshWidget *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  ForElementType<SMeshWidget::FRenderData> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<SMeshWidget::FRenderData> FVar9;
  ulonglong uVar10;
  uint uVar11;
  TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *pTVar14;
  ulonglong uVar15;
  longlong local_res8;
  ISlateUpdatableInstanceBuffer *pIVar16;
  
  uVar10 = 0;
  if ((this->RenderRuns).ArrayNum < 1) {
    uVar15 = uVar10;
    if (0 < (this->RenderData).ArrayNum) {
      do {
        uVar11 = (uint)uVar10;
        uVar8 = 0;
        if ((int)uVar11 < (this->RenderData).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        FVar1 = (this->RenderData).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<SMeshWidget::FRenderData>)&this->RenderData;
        if (FVar1 != (ForElementType<SMeshWidget::FRenderData>)0x0) {
          FVar9 = FVar1;
        }
        pTVar12 = (TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *)((longlong)FVar9 + uVar15);
        pTVar14 = pTVar12 + 3;
        bVar4 = FSlateResourceHandle::IsValid((FSlateResourceHandle *)pTVar14);
        if (((bVar4) && (0 < pTVar12->ArrayNum)) && (0 < pTVar12[1].ArrayNum)) {
          pFVar13 = pTVar12[4].AllocatorInstance.Data;
          if (pFVar13 == (FScriptContainerElement *)0x0) {
            uVar8 = 0;
            pIVar16 = (ISlateUpdatableInstanceBuffer *)0x0;
          }
          else {
            uVar8 = (**(code **)(*(longlong *)pFVar13 + 8))();
            if ((int)uVar8 < 1) goto LAB_146a850ce;
            pIVar16 = (ISlateUpdatableInstanceBuffer *)pTVar12[4].AllocatorInstance.Data;
          }
          FSlateDrawElement::MakeCustomVerts
                    (param_4,param_5,(FSlateResourceHandle *)pTVar14,pTVar12,
                     (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar12 + 1),pIVar16,0,
                     uVar8,None);
        }
        else if ((GRHIGlobals.UsingNullRHI == false) && (2 < (byte)LogUMG._0_1_)) {
          FSlateResourceHandle::IsValid((FSlateResourceHandle *)pTVar14);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
        }
LAB_146a850ce:
        uVar10 = (ulonglong)(uVar11 + 1);
        uVar15 = uVar15 + 0x50;
      } while ((int)(uVar11 + 1) < (this->RenderData).ArrayNum);
    }
  }
  else {
    local_res8 = 0;
    do {
      uVar11 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar11 < (this->RenderRuns).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      pFVar13 = (this->RenderRuns).AllocatorInstance.Data + local_res8;
      uVar8 = *(uint *)pFVar13;
      uVar6 = 0;
      if ((int)uVar8 < (this->RenderData).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      FVar1 = (this->RenderData).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<SMeshWidget::FRenderData>)&this->RenderData;
      if (FVar1 != (ForElementType<SMeshWidget::FRenderData>)0x0) {
        FVar9 = FVar1;
      }
      pTVar14 = (TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *)
                ((longlong)(int)uVar8 * 0x50 + (longlong)FVar9);
      bVar4 = FSlateResourceHandle::IsValid((FSlateResourceHandle *)(pTVar14 + 3));
      if ((((bVar4) && (0 < pTVar14->ArrayNum)) && (0 < pTVar14[1].ArrayNum)) &&
         (pFVar2 = pTVar14[4].AllocatorInstance.Data, pFVar2 != (FScriptContainerElement *)0x0)) {
        uVar8 = *(uint *)(pFVar13 + 8);
        uVar6 = *(uint *)(pFVar13 + 4);
        uVar7 = (**(code **)(*(longlong *)pFVar2 + 8))();
        if ((uVar7 < uVar6 + uVar8) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6701110947060121762>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\SMeshWidget.cpp"
                               ,0xa2,
                               "Run.GetInstanceOffset() + Run.GetNumInstances() <= RunRenderData.PerInstanceBuffer->GetNumInstances()"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        FSlateDrawElement::MakeCustomVerts
                  (param_4,param_5,(FSlateResourceHandle *)(pTVar14 + 3),pTVar14,
                   (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar14 + 1),
                   (ISlateUpdatableInstanceBuffer *)pTVar14[4].AllocatorInstance.Data,
                   *(uint *)(pFVar13 + 4),*(uint *)(pFVar13 + 8),None);
      }
      else if ((GRHIGlobals.UsingNullRHI == false) && (2 < (byte)LogUMG._0_1_)) {
        FSlateResourceHandle::IsValid((FSlateResourceHandle *)(pTVar14 + 3));
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
      }
      uVar10 = (ulonglong)(uVar11 + 1);
      local_res8 = local_res8 + 0xc;
    } while ((int)(uVar11 + 1) < (this->RenderRuns).ArrayNum);
  }
  return param_5;
}

// PushUpdate @ 146a8b2e0

void __cdecl
SMeshWidget::PushUpdate
          (uint param_1,SMeshWidget *param_2,TVector2<double> *param_3,float param_4,uint param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ForElementType<SMeshWidget::FRenderData> FVar8;
  ForAnyElementType local_68;
  undefined8 local_60;
  
  dVar3 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1010,&local_68,(int *)((longlong)&local_60 + 4));
  local_60 = CONCAT44(local_60._4_4_,iVar6 + 1);
  pFVar1 = local_68.Data + (longlong)iVar6 * 0x10;
  *(float *)pFVar1 = (float)dVar3;
  *(float *)(pFVar1 + 4) = (float)dVar4;
  *(float *)(pFVar1 + 8) = param_4;
  *(float *)(pFVar1 + 0xc) = (float)param_5;
  EnableInstancing(param_2,param_1,(iVar6 + 1) * 0x10);
  uVar7 = 0;
  if ((int)param_1 < (param_2->RenderData).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar8 = (param_2->RenderData).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<SMeshWidget::FRenderData>)0x0) {
    FVar8 = (ForElementType<SMeshWidget::FRenderData>)&param_2->RenderData;
  }
  if (*(longlong *)((uchar *)((longlong)FVar8 + 0x40) + (longlong)(int)param_1 * 0x50) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(**(longlong **)((uchar *)((longlong)FVar8 + 0x40) + (longlong)(int)param_1 * 0x50) +
              0x18))(*(longlong **)
                      ((uchar *)((longlong)FVar8 + 0x40) + (longlong)(int)param_1 * 0x50),&local_68)
  ;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// PushUpdate @ 146a8b490

void __cdecl
SMeshWidget::PushUpdate
          (uint param_1,SMeshWidget *param_2,TVector2<double> *param_3,float param_4,float param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ForElementType<SMeshWidget::FRenderData> FVar8;
  ForAnyElementType local_68;
  undefined8 local_60;
  
  dVar3 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1010,&local_68,(int *)((longlong)&local_60 + 4));
  local_60 = CONCAT44(local_60._4_4_,iVar6 + 1);
  pFVar1 = local_68.Data + (longlong)iVar6 * 0x10;
  *(float *)pFVar1 = (float)dVar3;
  *(float *)(pFVar1 + 4) = (float)dVar4;
  *(float *)(pFVar1 + 8) = param_4;
  *(float *)(pFVar1 + 0xc) = param_5;
  EnableInstancing(param_2,param_1,(iVar6 + 1) * 0x10);
  uVar7 = 0;
  if ((int)param_1 < (param_2->RenderData).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar8 = (param_2->RenderData).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<SMeshWidget::FRenderData>)0x0) {
    FVar8 = (ForElementType<SMeshWidget::FRenderData>)&param_2->RenderData;
  }
  if (*(longlong *)((uchar *)((longlong)FVar8 + 0x40) + (longlong)(int)param_1 * 0x50) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(**(longlong **)((uchar *)((longlong)FVar8 + 0x40) + (longlong)(int)param_1 * 0x50) +
              0x18))(*(longlong **)
                      ((uchar *)((longlong)FVar8 + 0x40) + (longlong)(int)param_1 * 0x50),&local_68)
  ;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// UpdatePerInstanceBuffer @ 146a9b320

void __thiscall
SMeshWidget::UpdatePerInstanceBuffer
          (SMeshWidget *this,uint param_1,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<SMeshWidget::FRenderData> FVar5;
  longlong lVar6;
  
  EnableInstancing(this,param_1,param_2->ArrayNum << 4);
  uVar4 = 0;
  if ((int)param_1 < (this->RenderData).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  FVar5 = (this->RenderData).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<SMeshWidget::FRenderData>)0x0) {
    FVar5 = (ForElementType<SMeshWidget::FRenderData>)&this->RenderData;
  }
  lVar6 = (longlong)(int)param_1 * 0x50 + (longlong)FVar5;
  if (*(longlong *)(lVar6 + 0x40) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar1 = *(longlong **)(lVar6 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000146a9b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return;
}

