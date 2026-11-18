// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// FSlateClippingState @ 1424ea340

FSlateClippingState * __thiscall
FSlateClippingState::FSlateClippingState(FSlateClippingState *this,FSlateClippingState *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  TVector2<float>_u_0 TVar4;
  
  (this->StencilQuads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->StencilQuads).ArrayMax;
  iVar3 = (param_1->StencilQuads).ArrayNum;
  _Src = (param_1->StencilQuads).AllocatorInstance.Data;
  (this->StencilQuads).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->StencilQuads).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x24);
  }
  (this->ScissorRect).bIsSet = false;
  bVar2 = (param_1->ScissorRect).bIsSet;
  (this->ScissorRect).bIsSet = bVar2;
  if (bVar2 != false) {
    TVar4 = (param_1->ScissorRect).TypedValue.TopRight.field0_0x0;
    (this->ScissorRect).TypedValue.TopLeft.field0_0x0 =
         (param_1->ScissorRect).TypedValue.TopLeft.field0_0x0;
    (this->ScissorRect).TypedValue.TopRight.field0_0x0 = TVar4;
    TVar4 = (param_1->ScissorRect).TypedValue.BottomRight.field0_0x0;
    (this->ScissorRect).TypedValue.BottomLeft.field0_0x0 =
         (param_1->ScissorRect).TypedValue.BottomLeft.field0_0x0;
    (this->ScissorRect).TypedValue.BottomRight.field0_0x0 = TVar4;
    *(undefined4 *)&(this->ScissorRect).TypedValue.field_0x20 =
         *(undefined4 *)&(param_1->ScissorRect).TypedValue.field_0x20;
  }
  this->Flags = param_1->Flags;
  this->Debugging_StateIndex = param_1->Debugging_StateIndex;
  this->Debugging_StateIndexFromFrame = param_1->Debugging_StateIndexFromFrame;
  return this;
}

// FSlateClippingState @ 1424ea410

FSlateClippingState * __thiscall
FSlateClippingState::FSlateClippingState(FSlateClippingState *this,EClippingFlags param_1)

{
  this->Flags = param_1;
  (this->StencilQuads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StencilQuads).ArrayNum = 0;
  (this->StencilQuads).ArrayMax = 0;
  (this->ScissorRect).bIsSet = false;
  this->Debugging_StateIndex = -1;
  this->Debugging_StateIndexFromFrame = -1;
  return this;
}

// IsPointInside @ 142511690

bool __thiscall
FSlateClippingState::IsPointInside(FSlateClippingState *this,FDeprecateVector2DParameter *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FDeprecateVector2DParameter *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if ((this->ScissorRect).bIsSet != false) {
    bVar5 = FSlateClippingZone::IsPointInside(&(this->ScissorRect).TypedValue,param_1);
    return bVar5;
  }
  if (((this->StencilQuads).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StencilQuads.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\Clipping.cpp"
                         ,0xda,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    bVar5 = (bool)(*pcVar4)();
    return bVar5;
  }
  iVar3 = (this->StencilQuads).ArrayNum;
  pFVar7 = (this->StencilQuads).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)iVar3 * 0x24;
  do {
    if ((this->StencilQuads).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FSlateClippingZone_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return true;
    }
    if ((pFVar7[0x20].field_0x0 & 1) == 0) {
      pFVar8 = pFVar7 + 8;
      pFVar6 = param_1;
      bVar5 = IsPointInTriangle((TVector2<float> *)param_1,(TVector2<float> *)pFVar7,
                                (TVector2<float> *)pFVar8,(TVector2<float> *)(pFVar7 + 0x10));
      if ((!bVar5) &&
         (bVar5 = IsPointInTriangle((TVector2<float> *)pFVar6,(TVector2<float> *)(pFVar7 + 0x10),
                                    (TVector2<float> *)pFVar8,(TVector2<float> *)(pFVar7 + 0x18)),
         !bVar5)) {
        return false;
      }
    }
    else {
      fVar2 = *(float *)param_1;
      if (fVar2 < *(float *)&pFVar7->field_0x0) {
        return false;
      }
      if (*(float *)&pFVar7[8].field_0x0 <= fVar2 && fVar2 != *(float *)&pFVar7[8].field_0x0) {
        return false;
      }
      fVar2 = *(float *)&param_1->field_0x4;
      if (fVar2 < *(float *)(pFVar7 + 4)) {
        return false;
      }
      if (*(float *)(pFVar7 + 0x14) <= fVar2 && fVar2 != *(float *)(pFVar7 + 0x14)) {
        return false;
      }
    }
    pFVar7 = pFVar7 + 0x24;
  } while( true );
}

