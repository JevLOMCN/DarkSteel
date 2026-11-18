// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 37

// Duplicate @ 1479bf750

FIndexedCurve * __thiscall FSimpleCurve::Duplicate(FSimpleCurve *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FIndexedCurve *pFVar4;
  
  pFVar4 = ::operator_new(0x88);
  if (pFVar4 == (FIndexedCurve *)0x0) {
    return (FIndexedCurve *)0x0;
  }
  *(undefined8 *)&(pFVar4->KeyHandlesToIndices).KeyHandlesToIndices = 0;
  *(undefined8 *)&(pFVar4->KeyHandlesToIndices).KeyHandlesToIndices.field_0x8 = 0;
  *(undefined8 *)&(pFVar4->KeyHandlesToIndices).KeyHandlesToIndices.field_0x20 = 0;
  *(undefined4 *)&(pFVar4->KeyHandlesToIndices).KeyHandlesToIndices.field_0x28 = 0;
  *(undefined4 *)&(pFVar4->KeyHandlesToIndices).KeyHandlesToIndices.field_0x2c = 0x80;
  *(undefined4 *)&(pFVar4->KeyHandlesToIndices).KeyHandlesToIndices.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar4->KeyHandlesToIndices).KeyHandlesToIndices.field_0x34 = 0;
  *(undefined8 *)&(pFVar4->KeyHandlesToIndices).KeyHandlesToIndices.field_0x40 = 0;
  *(undefined4 *)&(pFVar4->KeyHandlesToIndices).KeyHandlesToIndices.field_0x48 = 0;
  (pFVar4->KeyHandlesToIndices).KeyHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar4->KeyHandlesToIndices).KeyHandles.ArrayNum = 0;
  (pFVar4->KeyHandlesToIndices).KeyHandles.ArrayMax = 0;
  pFVar4->_padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&pFVar4[1]._padding_ = (int)this->_padding_;
  *(undefined1 *)((longlong)&pFVar4[1]._padding_ + 4) =
       *(undefined1 *)((longlong)&this->_padding_ + 4);
  *(undefined1 *)((longlong)&pFVar4[1]._padding_ + 5) =
       *(undefined1 *)((longlong)&this->_padding_ + 5);
  pFVar4->_padding_ = (longlong)&___7FSimpleCurve__6B_;
  *(uchar *)&pFVar4[1].KeyHandlesToIndices.KeyHandlesToIndices = (this->InterpMode).Value;
  *(undefined8 *)&pFVar4[1].KeyHandlesToIndices.KeyHandlesToIndices.field_0x8 = 0;
  iVar3 = (this->Keys).ArrayNum;
  _Src = (this->Keys).AllocatorInstance.Data;
  puVar1 = &pFVar4[1].KeyHandlesToIndices.KeyHandlesToIndices.field_0x8;
  *(int *)&pFVar4[1].KeyHandlesToIndices.KeyHandlesToIndices.field_0x10 = iVar3;
  puVar2 = &pFVar4[1].KeyHandlesToIndices.KeyHandlesToIndices.field_0x14;
  if (iVar3 == 0) {
    *(undefined4 *)puVar2 = 0;
    return pFVar4;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar3,0,(ForAnyElementType *)puVar1,iVar3,(int *)puVar2);
  memcpy(*(void **)puVar1,_Src,(longlong)iVar3 << 3);
  return pFVar4;
}

// GetKeyInterpMode @ 1479ca150

ERichCurveInterpMode __thiscall
FSimpleCurve::GetKeyInterpMode(FSimpleCurve *this,FKeyHandle param_1)

{
  return (ERichCurveInterpMode)(this->InterpMode).Value;
}

// GetNumKeys @ 1479cc7a0

int __thiscall FSimpleCurve::GetNumKeys(FSimpleCurve *this)

{
  return (this->Keys).ArrayNum;
}

// SetKeyInterpMode @ 1479e8c40

void __thiscall
FSimpleCurve::SetKeyInterpMode(FSimpleCurve *this,FKeyHandle param_1,ERichCurveInterpMode param_2)

{
  bool bVar1;
  undefined1 local_res18 [16];
  
  if ((param_2 == RCIM_Cubic) &&
     (bVar1 = `FSimpleCurve::SetKeyInterpMode'::__l3::<lambda_1>::operator()(local_res18), !bVar1))
  {
    return;
  }
  (this->InterpMode).Value = (uchar)param_2;
  return;
}

// StaticStruct @ 147a0d480

UScriptStruct * __cdecl FSimpleCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSimpleCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSimpleCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimpleCurve,(UObject *)pUVar1,L"SimpleCurve");
  }
  return Z_Registration_Info_UScriptStruct_FSimpleCurve.OuterSingleton;
}

// operator== @ 147a2c600

bool __thiscall FSimpleCurve::operator==(FSimpleCurve *this,FSimpleCurve *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar1 = (this->Keys).ArrayNum;
  if (iVar1 == (param_1->Keys).ArrayNum) {
    uVar9 = 0;
    if (0 < iVar1) {
      lVar8 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->Keys).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar2 = (this->Keys).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar9 < (param_1->Keys).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar3 = (param_1->Keys).AllocatorInstance.Data;
        if ((*(float *)(pFVar3 + lVar8 * 8) != *(float *)(pFVar2 + lVar8 * 8)) ||
           (*(float *)(pFVar3 + lVar8 * 8 + 4) != *(float *)(pFVar2 + lVar8 * 8 + 4)))
        goto LAB_147a2c708;
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 1;
      } while ((int)uVar9 < (this->Keys).ArrayNum);
    }
    bVar5 = true;
  }
  else {
LAB_147a2c708:
    bVar5 = false;
  }
  return bVar5;
}

// AddKey @ 147a2ff60

FKeyHandle __thiscall
FSimpleCurve::AddKey(FSimpleCurve *this,float param_1,float param_2,bool param_3,FKeyHandle param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *in_RDX;
  longlong lVar10;
  undefined4 in_XMM3_Da;
  float fVar11;
  FKeyHandle in_stack_00000030;
  float local_48;
  undefined4 uStack_44;
  
  uVar7 = 0;
  if (0 < (this->Keys).ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Keys).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (FKeyHandle)uVar7;
      }
      pFVar2 = (this->Keys).AllocatorInstance.Data + lVar10;
      if (param_2 < *(float *)pFVar2 || param_2 == *(float *)pFVar2) break;
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar7 < (this->Keys).ArrayNum);
  }
  pFVar2 = (this->Keys).AllocatorInstance.Data;
  local_48 = param_2;
  uStack_44 = in_XMM3_Da;
  if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)(this->Keys).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (FKeyHandle)uVar7;
  }
  iVar8 = (this->Keys).ArrayNum;
  piVar1 = &(this->Keys).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->Keys).AllocatorInstance,piVar1);
  }
  lVar10 = (longlong)(int)uVar7;
  (this->Keys).ArrayNum = iVar8 + 1;
  pFVar2 = (this->Keys).AllocatorInstance.Data + lVar10 * 8;
  memmove(pFVar2 + 8,pFVar2,(longlong)(int)(iVar8 - uVar7) << 3);
  *(ulonglong *)((this->Keys).AllocatorInstance.Data + lVar10 * 8) = CONCAT44(uStack_44,local_48);
  if ((0 < (int)uVar7) && ((char)param_4.Index != '\0')) {
    uVar6 = uVar7 - 1;
    uVar9 = 0;
    if ((int)uVar6 < (this->Keys).ArrayNum) {
      uVar9 = ~uVar6 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (FKeyHandle)uVar7;
    }
    fVar3 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar6 * 8 + 4);
    uVar6 = 0;
    if ((int)uVar7 < (this->Keys).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (FKeyHandle)uVar7;
    }
    for (fVar11 = *(float *)((this->Keys).AllocatorInstance.Data + lVar10 * 8 + 4);
        __real_43340000 < fVar11 - fVar3; fVar11 = fVar11 + __real_c3b40000) {
    }
    for (; fVar11 - fVar3 < __real_c3340000; fVar11 = fVar11 + __real_43b40000) {
    }
    uVar6 = 0;
    if ((int)uVar7 < (this->Keys).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (FKeyHandle)uVar7;
    }
    *(float *)((this->Keys).AllocatorInstance.Data + lVar10 * 8 + 4) = fVar11;
  }
  FKeyHandleMap::Add((FKeyHandleMap *)&this->_padding_,&stack0x00000030,uVar7);
  *in_RDX = in_stack_00000030.Index;
  return (FKeyHandle)(uint)in_RDX;
}

// BakeCurve @ 147a33cc0

void __thiscall FSimpleCurve::BakeCurve(FSimpleCurve *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  wchar_t *in_R9;
  float fVar10;
  undefined1 local_res8 [8];
  float *in_stack_ffffffffffffff58;
  float local_78;
  float fStack_74;
  ForAnyElementType local_70;
  int local_68;
  int aiStack_64 [19];
  
  iVar4 = (this->Keys).ArrayNum;
  if (iVar4 != 0) {
    fVar10 = param_1;
    if (iVar4 < 1) {
      in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
      in_stack_ffffffffffffff58 = (float *)0x0;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar4 = (this->Keys).ArrayNum;
    uVar7 = iVar4 - 1;
    fVar2 = *(float *)(this->Keys).AllocatorInstance.Data;
    uVar9 = 0;
    if ((int)uVar7 < iVar4) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if (uVar9 == 0) {
      in_stack_ffffffffffffff58 = (float *)(longlong)(int)uVar7;
      in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    fVar3 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    if ((this->Keys).ArrayNum != 0) {
      local_70.Data = (FScriptContainerElement *)0x0;
      local_68 = 0;
      aiStack_64[0] = 0;
      uVar9 = (uint)((fVar3 - fVar2) / param_1 - __real_3f800000);
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      FVar8.Data = local_70.Data;
      iVar4 = local_68;
      if (0 < (int)uVar9) {
        in_R9 = (wchar_t *)&local_70;
        in_stack_ffffffffffffff58 = (float *)0x0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar9,(ForAnyElementType *)in_R9,0,aiStack_64);
        FVar8.Data = local_70.Data;
        iVar4 = local_68;
      }
      while (fVar2 = fVar2 + param_1, local_70.Data = FVar8.Data, local_68 = iVar4, fVar2 < fVar3) {
        fVar10 = fVar2;
        local_78 = fVar2;
        fStack_74 = Eval(this,fVar2,0.0);
        if ((local_70.Data <= (FScriptContainerElement *)&local_78) &&
           ((FScriptContainerElement *)&local_78 < local_70.Data + (longlong)aiStack_64[0] * 8)) {
          in_R9 = 
          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
          ;
          in_stack_ffffffffffffff58 = &local_78;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (local_68 == aiStack_64[0]) {
          local_68 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_70,aiStack_64);
        }
        *(ulonglong *)(local_70.Data + (longlong)local_68 * 8) = CONCAT44(fStack_74,local_78);
        FVar8.Data = local_70.Data;
        iVar4 = local_68 + 1;
      }
      pFVar1 = FVar8.Data + (longlong)iVar4 * 8;
      while( true ) {
        if (local_68 != iVar4) {
          `TCheckedPointerIterator<TTuple<float,float>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (FVar8.Data == pFVar1) break;
        in_stack_ffffffffffffff58 =
             (float *)((ulonglong)in_stack_ffffffffffffff58 & 0xffffffffffffff00);
        UpdateOrAddKey(this,fVar10,*(float *)FVar8.Data,SUB81(in_R9,0),
                       SUB84(in_stack_ffffffffffffff58,0));
        FVar8.Data = FVar8.Data + 8;
      }
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
      }
    }
  }
  return;
}

// BakeCurve @ 147a33fa0

void __thiscall
FSimpleCurve::BakeCurve(FSimpleCurve *this,float param_1,float param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  wchar_t *in_R9;
  float fVar7;
  undefined1 local_res8 [8];
  float *in_stack_ffffffffffffff58;
  float local_74;
  float fStack_70;
  ForAnyElementType local_68;
  int local_60;
  int aiStack_5c [17];
  
  if ((this->Keys).ArrayNum != 0) {
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    aiStack_5c[0] = 0;
    uVar6 = (uint)((param_3 - param_2) / param_1 - __real_3f800000);
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    fVar7 = param_1;
    FVar5.Data = local_68.Data;
    iVar3 = local_60;
    if (0 < (int)uVar6) {
      in_R9 = (wchar_t *)&local_68;
      in_stack_ffffffffffffff58 = (float *)0x0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar6,(ForAnyElementType *)in_R9,0,aiStack_5c);
      FVar5.Data = local_68.Data;
      iVar3 = local_60;
    }
    while (param_2 = param_1 + param_2, local_68.Data = FVar5.Data, local_60 = iVar3,
          param_2 < param_3) {
      fVar7 = param_2;
      local_74 = param_2;
      fStack_70 = Eval(this,param_2,0.0);
      if ((local_68.Data <= (FScriptContainerElement *)&local_74) &&
         ((FScriptContainerElement *)&local_74 < local_68.Data + (longlong)aiStack_5c[0] * 8)) {
        in_R9 = 
        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
        ;
        in_stack_ffffffffffffff58 = &local_74;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (local_60 == aiStack_5c[0]) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_68,aiStack_5c);
      }
      *(ulonglong *)(local_68.Data + (longlong)local_60 * 8) = CONCAT44(fStack_70,local_74);
      FVar5.Data = local_68.Data;
      iVar3 = local_60 + 1;
    }
    pFVar1 = FVar5.Data + (longlong)iVar3 * 8;
    while( true ) {
      if (local_60 != iVar3) {
        `TCheckedPointerIterator<TTuple<float,float>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar5.Data == pFVar1) break;
      in_stack_ffffffffffffff58 =
           (float *)((ulonglong)in_stack_ffffffffffffff58 & 0xffffffffffffff00);
      UpdateOrAddKey(this,fVar7,*(float *)FVar5.Data,SUB81(in_R9,0),
                     SUB84(in_stack_ffffffffffffff58,0));
      FVar5.Data = FVar5.Data + 8;
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  return;
}

// DeleteKey @ 147a3e700

void __thiscall FSimpleCurve::DeleteKey(FSimpleCurve *this,FKeyHandle param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  FKeyHandle local_res10 [2];
  
  local_res10[0].Index = param_1.Index;
  puVar6 = (uint *)FIndexedCurve::FindIndex((FIndexedCurve *)this,param_1);
  if (puVar6 == (uint *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\IndexedCurve.cpp"
                       ,0x49,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar2 = *puVar6;
  uVar5 = 0;
  if ((int)uVar2 < (this->Keys).ArrayNum) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  _Dst = (this->Keys).AllocatorInstance.Data + (longlong)(int)uVar2 * 8;
  iVar7 = (this->Keys).ArrayNum + ~uVar2;
  if (iVar7 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
  }
  piVar1 = &(this->Keys).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,&(this->Keys).AllocatorInstance,(this->Keys).ArrayNum,&(this->Keys).ArrayMax);
  FKeyHandleMap::Remove((FKeyHandleMap *)&this->_padding_,local_res10);
  return;
}

// Eval @ 147a41820

float __thiscall FSimpleCurve::Eval(FSimpleCurve *this,float param_1,float param_2)

{
  TArray<FSimpleCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float local_res8 [2];
  float local_res10 [2];
  
  local_res8[0] = 0.0;
  local_res10[0] = param_1;
  RemapTimeValue(this,local_res10,local_res8);
  iVar8 = (this->Keys).ArrayNum;
  if (*(float *)&this->_padding_ != __real_7f7fffff) {
    param_2 = *(float *)&this->_padding_;
  }
  if (iVar8 != 0) {
    pTVar1 = &this->Keys;
    if ((iVar8 < 2) ||
       (pFVar10 = (pTVar1->AllocatorInstance).Data,
       local_res10[0] < *(float *)pFVar10 || local_res10[0] == *(float *)pFVar10)) {
      if ((*(char *)((longlong)&this->_padding_ + 4) == '\x03') && (1 < iVar8)) {
        if (((this->Keys).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar14 = (float)(*pcVar4)();
          return fVar14;
        }
        pFVar10 = (pTVar1->AllocatorInstance).Data;
        if (((this->Keys).ArrayNum < 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar14 = (float)(*pcVar4)();
          return fVar14;
        }
        fVar14 = *(float *)((pTVar1->AllocatorInstance).Data + 8) - *(float *)pFVar10;
        iVar8 = (this->Keys).ArrayNum;
        if (__real_322bcc77 < (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          if ((iVar8 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar14 = (float)(*pcVar4)();
            return fVar14;
          }
          pFVar10 = (pTVar1->AllocatorInstance).Data;
          if (((this->Keys).ArrayNum < 2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar14 = (float)(*pcVar4)();
            return fVar14;
          }
          fVar2 = *(float *)((pTVar1->AllocatorInstance).Data + 0xc);
          fVar3 = *(float *)(pFVar10 + 4);
          if (((this->Keys).ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar14 = (float)(*pcVar4)();
            return fVar14;
          }
          pFVar10 = (this->Keys).AllocatorInstance.Data;
          if (((this->Keys).ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar14 = (float)(*pcVar4)();
            return fVar14;
          }
          param_2 = (local_res10[0] - *(float *)pFVar10) * ((fVar2 - fVar3) / fVar14) +
                    *(float *)((pTVar1->AllocatorInstance).Data + 4);
          goto LAB_147a41f5a;
        }
        if ((iVar8 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar14 = (float)(*pcVar4)();
          return fVar14;
        }
        pFVar10 = (pTVar1->AllocatorInstance).Data;
      }
      else {
        if (((this->Keys).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar14 = (float)(*pcVar4)();
          return fVar14;
        }
        pFVar10 = (pTVar1->AllocatorInstance).Data;
      }
      param_2 = *(float *)(pFVar10 + 4);
    }
    else {
      uVar13 = iVar8 - 1;
      uVar12 = ~uVar13 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar13 < (this->Keys).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        fVar14 = (float)(*pcVar4)();
        return fVar14;
      }
      lVar11 = (longlong)(int)uVar13;
      if (*(float *)((pTVar1->AllocatorInstance).Data + lVar11 * 8) <= local_res10[0]) {
        if (*(char *)((longlong)&this->_padding_ + 5) == '\x03') {
          uVar7 = 0;
          if ((int)uVar13 < (this->Keys).ArrayNum) {
            uVar7 = uVar12;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar14 = (float)(*pcVar4)();
            return fVar14;
          }
          uVar7 = iVar8 - 2;
          pFVar10 = (pTVar1->AllocatorInstance).Data;
          uVar9 = 0;
          if ((int)uVar7 < (this->Keys).ArrayNum) {
            uVar9 = ~uVar7 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar14 = (float)(*pcVar4)();
            return fVar14;
          }
          fVar14 = *(float *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar7 * 8) -
                   *(float *)(pFVar10 + lVar11 * 8);
          if (__real_322bcc77 < (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
            uVar9 = 0;
            if ((int)uVar13 < (this->Keys).ArrayNum) {
              uVar9 = uVar12;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              fVar14 = (float)(*pcVar4)();
              return fVar14;
            }
            pFVar10 = (pTVar1->AllocatorInstance).Data;
            uVar9 = 0;
            if ((int)uVar7 < (this->Keys).ArrayNum) {
              uVar9 = ~uVar7 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              fVar14 = (float)(*pcVar4)();
              return fVar14;
            }
            fVar2 = *(float *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar7 * 8 + 4);
            fVar3 = *(float *)(pFVar10 + lVar11 * 8 + 4);
            uVar7 = 0;
            if ((int)uVar13 < (this->Keys).ArrayNum) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              fVar14 = (float)(*pcVar4)();
              return fVar14;
            }
            pFVar10 = (pTVar1->AllocatorInstance).Data;
            uVar7 = 0;
            if ((int)uVar13 < (this->Keys).ArrayNum) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              fVar14 = (float)(*pcVar4)();
              return fVar14;
            }
            param_2 = (local_res10[0] - *(float *)(pFVar10 + lVar11 * 8)) *
                      ((fVar2 - fVar3) / fVar14) +
                      *(float *)((pTVar1->AllocatorInstance).Data + lVar11 * 8 + 4);
            goto LAB_147a41f5a;
          }
        }
        uVar7 = 0;
        if ((int)uVar13 < (this->Keys).ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar14 = (float)(*pcVar4)();
          return fVar14;
        }
        param_2 = *(float *)((pTVar1->AllocatorInstance).Data + lVar11 * 8 + 4);
      }
      else {
        uVar13 = 1;
        iVar8 = iVar8 + -2;
        fVar14 = local_res10[0];
        while (iVar5 = iVar8, local_res10[0] = fVar14, 0 < iVar5) {
          iVar8 = iVar5 / 2;
          uVar7 = iVar8 + uVar13;
          uVar12 = 0;
          if ((int)uVar7 < (this->Keys).ArrayNum) {
            uVar12 = ~uVar7 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar14 = (float)(*pcVar4)();
            return fVar14;
          }
          fVar14 = local_res10[0];
          if (*(float *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar7 * 8) <=
              local_res10[0]) {
            uVar13 = uVar7 + 1;
            iVar8 = iVar5 + (-1 - iVar8);
          }
        }
        uVar7 = 0;
        if ((int)uVar13 < (this->Keys).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar14 = (float)(*pcVar4)();
          return fVar14;
        }
        pFVar10 = (pTVar1->AllocatorInstance).Data;
        uVar12 = uVar13 - 1;
        uVar7 = 0;
        if ((int)uVar12 < (this->Keys).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar14 = (float)(*pcVar4)();
          return fVar14;
        }
        param_2 = EvalForTwoKeys(this,(FSimpleCurveKey *)
                                      ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar12 * 8)
                                 ,(FSimpleCurveKey *)(pFVar10 + (longlong)(int)uVar13 * 8),fVar14);
      }
    }
  }
LAB_147a41f5a:
  return param_2 + local_res8[0];
}

// EvalForTwoKeys @ 147a423d0

float __thiscall
FSimpleCurve::EvalForTwoKeys
          (FSimpleCurve *this,FSimpleCurveKey *param_1,FSimpleCurveKey *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_2->Time - param_1->Time;
  if ((0.0 < fVar1) && ((this->InterpMode).Value != '\x01')) {
    return ((param_3 - param_1->Time) / fVar1) * (param_2->Value - param_1->Value) + param_1->Value;
  }
  return param_1->Value;
}

// GetConstRefOfKeys @ 147a4ea50

TArray<FSimpleCurveKey,TSizedDefaultAllocator<32>_> * __thiscall
FSimpleCurve::GetConstRefOfKeys(FSimpleCurve *this)

{
  return &this->Keys;
}

// GetCopyOfKeys @ 147a4eaf0

TArray<FSimpleCurveKey,TSizedDefaultAllocator<32>_> * __thiscall
FSimpleCurve::GetCopyOfKeys
          (FSimpleCurve *this,
          TArray<FSimpleCurveKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Keys).ArrayNum;
  _Src = (this->Keys).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetFirstKey @ 147a50b60

FSimpleCurveKey __thiscall FSimpleCurve::GetFirstKey(FSimpleCurve *this)

{
  code *pcVar1;
  bool bVar2;
  FSimpleCurveKey FVar3;
  FSimpleCurveKey in_RDX;
  
  if ((this->Keys).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Keys.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\SimpleCurve.cpp"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FSimpleCurveKey)(*pcVar1)();
      return FVar3;
    }
  }
  if ((this->Keys).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FSimpleCurveKey)(*pcVar1)();
      return FVar3;
    }
  }
  *(undefined8 *)in_RDX = *(undefined8 *)(this->Keys).AllocatorInstance.Data;
  return in_RDX;
}

// GetFirstMatchingKey @ 147a50cb0

FSimpleCurveKey * __thiscall
FSimpleCurve::GetFirstMatchingKey
          (FSimpleCurve *this,TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FKeyHandle FVar3;
  int iVar4;
  int *piVar5;
  FSimpleCurveKey *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FKeyHandle_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar7 == pFVar1) {
      return (FSimpleCurveKey *)0x0;
    }
    FVar3.Index = *(uint *)pFVar7;
    iVar4 = (**(code **)(this->_padding_ + 8))(this);
    if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != iVar4) {
      FKeyHandleMap::EnsureAllIndicesHaveHandles((FKeyHandleMap *)&this->_padding_,iVar4);
    }
    piVar5 = FIndexedCurve::FindIndex((FIndexedCurve *)this,FVar3);
    if (((piVar5 != (int *)0x0) && (-1 < *piVar5)) && (*piVar5 < iVar4)) break;
    pFVar7 = pFVar7 + 4;
  }
  pFVar6 = GetKey(this,(FKeyHandle)*(uint *)pFVar7);
  return pFVar6;
}

// GetKey @ 147a51930

FSimpleCurveKey * __thiscall FSimpleCurve::GetKey(FSimpleCurve *this,FKeyHandle param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  FSimpleCurveKey *pFVar7;
  
  iVar4 = (**(code **)(this->_padding_ + 8))();
  if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != iVar4) {
    FKeyHandleMap::EnsureAllIndicesHaveHandles((FKeyHandleMap *)&this->_padding_,iVar4);
  }
  puVar6 = (uint *)FIndexedCurve::FindIndex((FIndexedCurve *)this,param_1);
  if (puVar6 == (uint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\IndexedCurve.cpp"
                       ,0x49,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FSimpleCurveKey *)(*pcVar2)();
      return pFVar7;
    }
  }
  uVar1 = *puVar6;
  uVar5 = 0;
  if ((int)uVar1 < (this->Keys).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FSimpleCurveKey *)(*pcVar2)();
      return pFVar7;
    }
  }
  return (FSimpleCurveKey *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
}

// GetKey @ 147a51a00

FSimpleCurveKey __thiscall FSimpleCurve::GetKey(FSimpleCurve *this,FKeyHandle param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  FSimpleCurveKey FVar7;
  float in_register_00000014;
  FKeyHandle in_R8D;
  
  FVar7.Value = in_register_00000014;
  FVar7.Time = (float)param_1.Index;
  iVar4 = (**(code **)(this->_padding_ + 8))();
  if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != iVar4) {
    FKeyHandleMap::EnsureAllIndicesHaveHandles((FKeyHandleMap *)&this->_padding_,iVar4);
  }
  puVar6 = (uint *)FIndexedCurve::FindIndex((FIndexedCurve *)this,in_R8D);
  if (puVar6 == (uint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\IndexedCurve.cpp"
                       ,0x49,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar7 = (FSimpleCurveKey)(*pcVar2)();
      return FVar7;
    }
  }
  uVar1 = *puVar6;
  uVar5 = 0;
  if ((int)uVar1 < (this->Keys).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar7 = (FSimpleCurveKey)(*pcVar2)();
      return FVar7;
    }
  }
  *(undefined8 *)FVar7 =
       *(undefined8 *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  return FVar7;
}

// GetKeyIndex @ 147a51e90

int __thiscall FSimpleCurve::GetKeyIndex(FSimpleCurve *this,float param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar8 = 0;
  iVar9 = (this->Keys).ArrayNum + -1;
  if (-1 < iVar9) {
    do {
      iVar6 = iVar9 - iVar8;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      uVar1 = (iVar6 >> 1) + iVar8;
      uVar7 = 0;
      if ((int)uVar1 < (this->Keys).ArrayNum) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
      fVar2 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
      if ((float)((uint)(fVar2 - param_1) & uVar4) <= param_2) {
        return uVar1;
      }
      iVar6 = uVar1 + 1;
      if (param_1 <= fVar2) {
        iVar6 = iVar8;
        iVar9 = uVar1 - 1;
      }
      iVar8 = iVar6;
    } while (iVar8 <= iVar9);
  }
  return -1;
}

// GetKeyIterator @ 147a520c0

TIndexedContainerIterator<TArray<FSimpleCurveKey,TSizedDefaultAllocator<32>_>_const_,FSimpleCurveKey_const_,int>
* __thiscall
FSimpleCurve::GetKeyIterator
          (FSimpleCurve *this,
          TIndexedContainerIterator<TArray<FSimpleCurveKey,TSizedDefaultAllocator<32>_>_const_,FSimpleCurveKey_const_,int>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Container = &this->Keys;
  return __return_storage_ptr__;
}

// GetKeyTime @ 147a52250

float __thiscall FSimpleCurve::GetKeyTime(FSimpleCurve *this,FKeyHandle param_1)

{
  bool bVar1;
  FSimpleCurveKey FVar2;
  undefined1 local_res18 [16];
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (!bVar1) {
    return 0.0;
  }
  FVar2 = GetKey(this,(FKeyHandle)(uint)local_res18);
  return *(float *)FVar2;
}

// GetKeyTimeValuePair @ 147a52320

TTuple<float,float> __thiscall
FSimpleCurve::GetKeyTimeValuePair(FSimpleCurve *this,FKeyHandle param_1)

{
  bool bVar1;
  undefined4 in_register_00000014;
  TTuple<float,float> TVar2;
  FKeyHandle in_R8D;
  undefined4 local_res20;
  undefined4 local_res24;
  
  TVar2._4_4_ = in_register_00000014;
  TVar2._0_4_ = param_1.Index;
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,in_R8D);
  if (!bVar1) {
    *(undefined8 *)TVar2 = 0;
    return TVar2;
  }
  GetKey(this,(FKeyHandle)(uint)&local_res20);
  *(undefined4 *)TVar2 = local_res20;
  *(undefined4 *)((longlong)TVar2 + 4) = local_res24;
  return TVar2;
}

// GetKeyValue @ 147a52440

float __thiscall FSimpleCurve::GetKeyValue(FSimpleCurve *this,FKeyHandle param_1)

{
  bool bVar1;
  FSimpleCurveKey FVar2;
  undefined1 local_res18 [16];
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (!bVar1) {
    return 0.0;
  }
  FVar2 = GetKey(this,(FKeyHandle)(uint)local_res18);
  return *(float *)((longlong)FVar2 + 4);
}

// GetLastKey @ 147a52600

FSimpleCurveKey __thiscall FSimpleCurve::GetLastKey(FSimpleCurve *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSimpleCurveKey FVar5;
  FSimpleCurveKey in_RDX;
  uint uVar6;
  
  if ((this->Keys).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Keys.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\SimpleCurve.cpp"
                       ,0x45,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5 = (FSimpleCurveKey)(*pcVar2)();
      return FVar5;
    }
  }
  iVar1 = (this->Keys).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5 = (FSimpleCurveKey)(*pcVar2)();
      return FVar5;
    }
  }
  *(undefined8 *)in_RDX =
       *(undefined8 *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  return in_RDX;
}

// GetTimeRange @ 147a5ab10

void __thiscall FSimpleCurve::GetTimeRange(FSimpleCurve *this,float *param_1,float *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (this->Keys).ArrayNum;
  if (iVar1 == 0) {
    *param_1 = 0.0;
    *param_2 = 0.0;
  }
  else {
    if (iVar1 < 1) {
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
    *param_1 = *(float *)(this->Keys).AllocatorInstance.Data;
    iVar1 = (this->Keys).ArrayNum;
    uVar5 = iVar1 - 1;
    uVar4 = 0;
    if ((int)uVar5 < iVar1) {
      uVar4 = ~uVar5 >> 0x1f;
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
    *param_2 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
  }
  return;
}

// GetValueRange @ 147a5b900

void __thiscall FSimpleCurve::GetValueRange(FSimpleCurve *this,float *param_1,float *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  
  iVar1 = (this->Keys).ArrayNum;
  if (iVar1 == 0) {
    *param_2 = 0.0;
    *param_1 = 0.0;
    return;
  }
  if ((iVar1 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = 0;
  fVar8 = *(float *)((this->Keys).AllocatorInstance.Data + 4);
  *param_2 = fVar8;
  *param_1 = fVar8;
  if (0 < (this->Keys).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Keys).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Keys).AllocatorInstance.Data;
      uVar6 = uVar6 + 1;
      fVar8 = *(float *)(pFVar2 + lVar7 + 4);
      if (*param_1 <= fVar8) {
        fVar8 = *param_1;
      }
      *param_1 = fVar8;
      fVar8 = *(float *)(pFVar2 + lVar7 + 4);
      lVar7 = lVar7 + 8;
      if (fVar8 <= *param_2) {
        fVar8 = *param_2;
      }
      *param_2 = fVar8;
    } while ((int)uVar6 < (this->Keys).ArrayNum);
  }
  return;
}

// ReadjustTimeRange @ 147a6e920

void __thiscall
FSimpleCurve::ReadjustTimeRange
          (FSimpleCurve *this,float param_1,float param_2,bool param_3,float param_4,float param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined1 uVar12;
  wchar_t *pwVar13;
  uint *puVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint *in_stack_fffffffffffffee8;
  uint local_e8 [2];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  FScriptContainerElement *local_d0;
  undefined8 uStack_c8;
  
  pwVar13 = (wchar_t *)(ulonglong)param_3;
  puVar11 = (uint *)0x0;
  iVar6 = (this->Keys).ArrayNum;
  uVar5 = 0;
  fVar18 = param_1;
  if (param_3) {
    puVar14 = puVar11;
    puVar10 = puVar11;
    if (0 < iVar6) {
      do {
        uVar9 = (uint)puVar10;
        uVar7 = uVar5;
        if ((int)uVar9 < (this->Keys).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if (uVar7 == 0) {
          pwVar13 = L"Array index out of bounds: %lld into an array of size %lld";
          in_stack_fffffffffffffee8 = (uint *)(longlong)(int)uVar9;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar8 = (this->Keys).AllocatorInstance.Data;
        fVar19 = *(float *)((longlong)puVar14 + (longlong)pFVar8);
        if (param_4 <= fVar19) {
          *(float *)((longlong)puVar14 + (longlong)pFVar8) = fVar19 + (param_5 - param_4);
        }
        puVar14 = puVar14 + 2;
        puVar10 = (uint *)(ulonglong)(uVar9 + 1);
      } while ((int)(uVar9 + 1) < (this->Keys).ArrayNum);
    }
  }
  else {
    bVar3 = false;
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8 = 0;
    local_e8[0] = 0;
    puVar14 = puVar11;
    if (0 < iVar6) {
      do {
        uVar9 = (uint)puVar14;
        uVar7 = uVar5;
        if ((int)uVar9 < (this->Keys).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if (uVar7 == 0) {
          pwVar13 = L"Array index out of bounds: %lld into an array of size %lld";
          in_stack_fffffffffffffee8 = (uint *)(longlong)(int)uVar9;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar8 = (this->Keys).AllocatorInstance.Data;
        fVar19 = *(float *)(pFVar8 + (longlong)(int)uVar9 * 8);
        if (fVar19 < param_4) {
          if (param_5 < fVar19) goto LAB_147a6eb9d;
        }
        else if (param_5 < fVar19) {
LAB_147a6eb9d:
          *(float *)(pFVar8 + (longlong)(int)uVar9 * 8) = fVar19 - (param_5 - param_4);
        }
        else {
          bVar3 = true;
          fVar18 = param_5;
          if (param_4 != 0.0) {
            fVar18 = param_4;
          }
          Eval(this,fVar18,0.0);
          if ((local_e0.Data <= (FScriptContainerElement *)local_e8) &&
             ((FScriptContainerElement *)local_e8 < local_e0.Data + (longlong)local_d8._4_4_ * 4)) {
            pwVar13 = 
            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
            ;
            in_stack_fffffffffffffee8 = local_e8;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          iVar6 = (int)local_d8;
          if ((int)local_d8 == local_d8._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_e0,(int *)((longlong)&local_d8 + 4));
          }
          local_d8 = CONCAT44(local_d8._4_4_,iVar6 + 1);
          *(uint *)(local_e0.Data + (longlong)iVar6 * 4) = local_e8[0];
        }
        local_e8[0] = local_e8[0] + 1;
        puVar14 = (uint *)(ulonglong)local_e8[0];
      } while ((int)local_e8[0] < (this->Keys).ArrayNum);
      if (bVar3) {
        uVar7 = (int)local_d8 - 1;
        if (-1 < (int)uVar7) {
          puVar14 = (uint *)(longlong)(int)uVar7;
          lVar15 = (longlong)puVar14 * 4;
          do {
            uVar9 = 0;
            if ((int)uVar7 < (int)local_d8) {
              uVar9 = ~uVar7 >> 0x1f;
            }
            if (uVar9 == 0) {
              pwVar13 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_fffffffffffffee8 = puVar14;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            iVar6 = *(int *)(local_e0.Data + lVar15);
            if ((-1 < iVar6) && (iVar6 < (int)this->_padding_)) {
              if (iVar6 < 0) {
                pwVar13 = L"Array index out of bounds: %lld into an array of size %lld";
                in_stack_fffffffffffffee8 = (uint *)(longlong)iVar6;
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
              puVar10 = (uint *)(this->_padding_ + (longlong)iVar6 * 4);
              if (puVar10 != (uint *)0x0) {
                DeleteKey(this,(FKeyHandle)*puVar10);
              }
            }
            puVar14 = (uint *)((longlong)puVar14 + -1);
            lVar15 = lVar15 + -4;
            uVar7 = uVar7 - 1;
          } while (-1 < (int)uVar7);
        }
        in_stack_fffffffffffffee8 =
             (uint *)((ulonglong)in_stack_fffffffffffffee8 & 0xffffffffffffff00);
        UpdateOrAddKey(this,fVar18,param_4,SUB81(pwVar13,0),SUB84(in_stack_fffffffffffffee8,0));
      }
    }
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
  }
  fVar19 = SUB84(in_stack_fffffffffffffee8,0);
  uVar12 = SUB81(pwVar13,0);
  pFVar8 = (this->Keys).AllocatorInstance.Data;
  uVar2._0_4_ = (this->Keys).ArrayNum;
  uVar2._4_4_ = (this->Keys).ArrayMax;
  (this->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Keys).ArrayNum = 0;
  (this->Keys).ArrayMax = 0;
  puVar14 = puVar11;
  puVar10 = puVar11;
  local_d0 = pFVar8;
  uStack_c8 = uVar2;
  if (0 < (int)(undefined4)uVar2) {
    do {
      uVar9 = (uint)puVar10;
      uVar7 = uVar5;
      if ((int)uVar9 < (int)(undefined4)uVar2) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        pwVar13 = L"Array index out of bounds: %lld into an array of size %lld";
        in_stack_fffffffffffffee8 = puVar14;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (uVar7 == 0) {
        pwVar13 = L"Array index out of bounds: %lld into an array of size %lld";
        in_stack_fffffffffffffee8 = puVar14;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      in_stack_fffffffffffffee8 =
           (uint *)((ulonglong)in_stack_fffffffffffffee8 & 0xffffffffffffff00);
      UpdateOrAddKey(this,fVar18,*(float *)pFVar8,SUB81(pwVar13,0),
                     SUB84(in_stack_fffffffffffffee8,0));
      fVar19 = SUB84(in_stack_fffffffffffffee8,0);
      uVar12 = SUB81(pwVar13,0);
      pFVar8 = pFVar8 + 8;
      puVar14 = (uint *)((longlong)puVar14 + 1);
      puVar10 = (uint *)(ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < (int)(undefined4)uVar2);
  }
  iVar6 = (this->Keys).ArrayNum;
  if (iVar6 == 0) {
    fVar18 = 0.0;
    fVar17 = 0.0;
  }
  else {
    if (iVar6 < 1) {
      uVar12 = 0x50;
      fVar19 = 0.0;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar6 = (this->Keys).ArrayNum;
    fVar17 = (float)(iVar6 - 1);
    fVar18 = *(float *)(this->Keys).AllocatorInstance.Data;
    uVar7 = 0;
    if ((int)fVar17 < iVar6) {
      uVar7 = ~(uint)fVar17 >> 0x1f;
    }
    if (uVar7 == 0) {
      uVar12 = 0x50;
      fVar19 = fVar17;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    fVar17 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)fVar17 * 8);
  }
  if (param_1 > fVar18) {
    fVar16 = param_1;
    Eval(this,param_1,0.0);
    fVar19 = (float)((uint)fVar19 & 0xffffff00);
    UpdateOrAddKey(this,fVar16,param_1,(bool)uVar12,fVar19);
  }
  if (fVar17 <= param_2) {
    if (param_1 <= fVar18) goto LAB_147a6f065;
  }
  else {
    fVar18 = param_2;
    Eval(this,param_2,0.0);
    UpdateOrAddKey(this,fVar18,param_2,(bool)uVar12,(float)((uint)fVar19 & 0xffffff00));
  }
  puVar14 = puVar11;
  if (0 < (this->Keys).ArrayNum) {
    do {
      uVar9 = (uint)puVar11;
      uVar7 = 0;
      if ((int)uVar9 < (this->Keys).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar8 = (FScriptContainerElement *)
               ((longlong)puVar14 + (longlong)(this->Keys).AllocatorInstance.Data);
      if (*(float *)pFVar8 <= param_1 && param_1 != *(float *)pFVar8) {
LAB_147a6eff0:
        if ((-1 < (int)uVar9) && ((int)uVar9 < (int)this->_padding_)) {
          if (((int)uVar9 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          puVar11 = (uint *)(this->_padding_ + (longlong)(int)uVar9 * 4);
          if (puVar11 != (uint *)0x0) {
            DeleteKey(this,(FKeyHandle)*puVar11);
            uVar9 = uVar9 - 1;
            puVar14 = puVar14 + -2;
          }
        }
      }
      else {
        uVar7 = uVar5;
        if ((int)uVar9 < (this->Keys).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (param_2 < *(float *)((longlong)puVar14 + (longlong)(this->Keys).AllocatorInstance.Data))
        goto LAB_147a6eff0;
      }
      puVar11 = (uint *)(ulonglong)(uVar9 + 1);
      puVar14 = puVar14 + 2;
    } while ((int)(uVar9 + 1) < (this->Keys).ArrayNum);
  }
LAB_147a6f065:
  if (local_d0 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0);
  }
  return;
}

// RemapTimeValue @ 147a799e0

void __thiscall FSimpleCurve::RemapTimeValue(FSimpleCurve *this,float *param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint local_res8 [2];
  uint local_res20 [2];
  
  iVar5 = (this->Keys).ArrayNum;
  if (iVar5 < 2) {
    return;
  }
  if (*(float *)(this->Keys).AllocatorInstance.Data < *param_1) {
    uVar1 = iVar5 - 1;
    uVar11 = ~uVar1 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar1 < (this->Keys).ArrayNum) {
      uVar9 = uVar11;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar10 = (longlong)(int)uVar1;
    fVar2 = *(float *)((this->Keys).AllocatorInstance.Data + lVar10 * 8);
    if (*param_1 <= fVar2 && fVar2 != *param_1) {
      return;
    }
    cVar4 = *(char *)((longlong)&this->_padding_ + 5);
    if (cVar4 == '\x03') {
      return;
    }
    if (cVar4 == '\x04') {
      return;
    }
    if (((this->Keys).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar2 = *(float *)(this->Keys).AllocatorInstance.Data;
    uVar9 = 0;
    if ((int)uVar1 < (this->Keys).ArrayNum) {
      uVar9 = uVar11;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_res20[0] = 0;
    fVar3 = *(float *)((this->Keys).AllocatorInstance.Data + lVar10 * 8);
    FRealCurve::CycleTime(fVar2,fVar3,param_1,(int *)local_res20);
    cVar4 = *(char *)((longlong)&this->_padding_ + 5);
    if (cVar4 == '\x01') {
      if (((this->Keys).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->Keys).AllocatorInstance.Data;
      uVar9 = 0;
      if ((int)uVar1 < (this->Keys).ArrayNum) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *param_2 = (*(float *)((this->Keys).AllocatorInstance.Data + lVar10 * 8 + 4) -
                 *(float *)(pFVar6 + 4)) * (float)(int)local_res20[0];
      return;
    }
  }
  else {
    cVar4 = *(char *)((longlong)&this->_padding_ + 4);
    if (cVar4 == '\x03') {
      return;
    }
    if (cVar4 == '\x04') {
      return;
    }
    if ((iVar5 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar1 = iVar5 - 1;
    fVar2 = *(float *)(this->Keys).AllocatorInstance.Data;
    uVar9 = 0;
    if ((int)uVar1 < (this->Keys).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_res8[0] = 0;
    fVar3 = *(float *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    FRealCurve::CycleTime(fVar2,fVar3,param_1,(int *)local_res8);
    cVar4 = *(char *)((longlong)&this->_padding_ + 4);
    local_res20[0] = local_res8[0];
    if (cVar4 == '\x01') {
      uVar9 = 0;
      if ((int)uVar1 < (this->Keys).ArrayNum) {
        uVar9 = ~uVar1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->Keys).AllocatorInstance.Data;
      if (((this->Keys).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *param_2 = (*(float *)((this->Keys).AllocatorInstance.Data + 4) -
                 *(float *)(pFVar6 + (longlong)(int)uVar1 * 8 + 4)) * (float)(int)local_res8[0];
      return;
    }
  }
  if (cVar4 == '\x02') {
    local_res20[0] = local_res20[0] & 0x80000001;
    if ((int)local_res20[0] < 0) {
      local_res20[0] = (local_res20[0] - 1 | 0xfffffffe) + 1;
    }
    if (local_res20[0] == 1) {
      *param_1 = (fVar3 - *param_1) + fVar2;
    }
  }
  return;
}

// RemoveRedundantKeys @ 147a7c420

void __thiscall
FSimpleCurve::RemoveRedundantKeys
          (FSimpleCurve *this,float param_1,float param_2,float param_3,FFrameRate param_4)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 < param_3) {
    uVar4 = 0;
    uVar6 = 0xffffffff;
    if (0 < (this->Keys).ArrayNum) {
      lVar5 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar4 < (this->Keys).ArrayNum) {
          uVar7 = ~uVar4 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar1 = *(float *)((this->Keys).AllocatorInstance.Data + lVar5);
        if (fVar1 <= param_2) {
          uVar6 = uVar4;
        }
        uVar7 = uVar4;
        if (param_3 <= fVar1) break;
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 8;
        uVar7 = 0xffffffff;
      } while ((int)uVar4 < (this->Keys).ArrayNum);
      if ((uVar6 != 0xffffffff) && (uVar7 != 0xffffffff)) {
        RemoveRedundantKeysInternal(this,param_1,uVar6,uVar7);
      }
    }
  }
  return;
}

// RemoveRedundantKeys @ 147a7c550

void __thiscall
FSimpleCurve::RemoveRedundantKeys(FSimpleCurve *this,float param_1,FFrameRate param_2)

{
  int iVar1;
  
  iVar1 = (this->Keys).ArrayNum;
  if (2 < iVar1) {
    RemoveRedundantKeysInternal(this,param_1,0,iVar1 + -1);
    return;
  }
  return;
}

// RemoveRedundantKeysInternal @ 147a7ddc0

void __thiscall
FSimpleCurve::RemoveRedundantKeysInternal(FSimpleCurve *this,float param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  TArray<FSimpleCurveKey,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uint uVar22;
  float fVar23;
  uint local_138 [2];
  ForAnyElementType local_130;
  uint local_128;
  uint uStack_124;
  undefined1 local_120 [8];
  ForAnyElementType local_118;
  int local_110;
  int iStack_10c;
  int local_108;
  ForAnyElementType local_100;
  int local_f8 [3];
  int local_ec;
  int local_e8;
  uint uStack_e4;
  longlong *plStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  int local_c4;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  longlong *local_90;
  longlong lStack_88;
  longlong *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int local_68;
  undefined4 uStack_64;
  
  iVar19 = (this->Keys).ArrayNum;
  if (iVar19 < 3) {
    return;
  }
  iVar12 = 0;
  if (0 < param_2) {
    iVar12 = param_2;
  }
  iVar18 = iVar19 + -1;
  if (param_3 < iVar19 + -1) {
    iVar18 = param_3;
  }
  local_108 = iVar18;
  local_f8[2] = iVar12;
  local_ec = iVar19;
  if ((iVar18 <= iVar12) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActualStartKeepKey < ActualEndKeepKey",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\SimpleCurve.cpp"
                         ,0x20a,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (iVar18 - iVar12 < 2) {
    return;
  }
  local_130.Data = (FScriptContainerElement *)0x0;
  local_128 = 0;
  uStack_124 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar19,&local_130,0,(int *)&uStack_124);
  local_138[0] = 0;
  if (-1 < iVar12) {
    do {
      if (((local_130.Data <= (FScriptContainerElement *)local_138) &&
          ((FScriptContainerElement *)local_138 < local_130.Data + (longlong)(int)uStack_124 * 4))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (local_128 == uStack_124) {
        local_128 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_130,(int *)&uStack_124);
      }
      uVar14 = local_128 + 1;
      *(uint *)(local_130.Data + (longlong)(int)local_128 * 4) = local_138[0];
      local_138[0] = local_138[0] + 1;
      local_128 = uVar14;
    } while ((int)local_138[0] <= iVar12);
  }
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (((int)local_128 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeepIndices.Num() >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\SimpleCurve.cpp"
                         ,0x229,L""), uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff, bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_147a7dfc0:
  bVar9 = false;
  uVar22 = 0;
  if ((int)(local_128 - 1) < (int)local_128) {
    uVar22 = ~(local_128 - 1) >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar22 = *(uint *)(local_130.Data + (longlong)(int)(local_128 - 1) * 4);
  lVar15 = (longlong)(int)uVar22;
  uVar13 = 0;
  if ((int)uVar22 < (this->Keys).ArrayNum) {
    uVar13 = ~uVar22 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar5 = (this->Keys).AllocatorInstance.Data;
  if ((int)local_138[0] < iVar18) goto LAB_147a7e080;
  goto LAB_147a7e5c8;
LAB_147a7e080:
  do {
    lVar16 = (longlong)(int)local_138[0];
    uVar22 = 0;
    if ((int)local_138[0] < (this->Keys).ArrayNum) {
      uVar22 = ~local_138[0] >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = (this->Keys).AllocatorInstance.Data;
    uVar13 = local_138[0] + 1;
    uVar22 = 0;
    if ((int)uVar13 < (this->Keys).ArrayNum) {
      uVar22 = ~uVar13 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = (this->Keys).AllocatorInstance.Data;
    fVar23 = *(float *)(pFVar7 + (longlong)(int)uVar13 * 8) - *(float *)(pFVar5 + lVar15 * 8);
    if ((fVar23 <= 0.0) || ((this->InterpMode).Value == '\x01')) {
      fVar23 = *(float *)(pFVar5 + lVar15 * 8 + 4);
    }
    else {
      fVar23 = ((*(float *)(pFVar6 + lVar16 * 8) - *(float *)(pFVar5 + lVar15 * 8)) / fVar23) *
               (*(float *)(pFVar7 + (longlong)(int)uVar13 * 8 + 4) -
               *(float *)(pFVar5 + lVar15 * 8 + 4)) + *(float *)(pFVar5 + lVar15 * 8 + 4);
    }
    if (param_1 < (float)((uint)(fVar23 - *(float *)(pFVar6 + lVar16 * 8 + 4)) & uVar14)) {
      if (!bVar9) goto LAB_147a7e506;
      break;
    }
    bVar9 = true;
    local_138[0] = local_138[0] + 1;
  } while ((int)local_138[0] < local_108);
  bVar9 = false;
  while( true ) {
    uVar22 = 0;
    if ((int)(local_128 - 1) < (int)local_128) {
      uVar22 = ~(local_128 - 1) >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar22 = local_128;
    if (*(int *)(local_130.Data + (longlong)(int)(local_128 - 1) * 4) <= local_f8[2]) break;
    if (((int)local_128 < 2) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumKeepIndices >= 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\SimpleCurve.cpp"
                            ,0x243,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar13 = uVar22 - 2;
    uVar11 = 0;
    if ((int)uVar13 < (int)local_128) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar13 = *(uint *)(local_130.Data + (longlong)(int)uVar13 * 4);
    lVar15 = (longlong)(int)uVar13;
    uVar11 = 0;
    if ((int)uVar13 < (this->Keys).ArrayNum) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar5 = (this->Keys).AllocatorInstance.Data;
    uVar22 = uVar22 - 1;
    uVar13 = 0;
    if ((int)uVar22 < (int)local_128) {
      uVar13 = ~uVar22 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar22 = *(uint *)(local_130.Data + (longlong)(int)uVar22 * 4);
    uVar13 = 0;
    if ((int)uVar22 < (this->Keys).ArrayNum) {
      uVar13 = ~uVar22 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = (this->Keys).AllocatorInstance.Data;
    lVar16 = (longlong)(int)local_138[0];
    uVar13 = 0;
    if ((int)local_138[0] < (this->Keys).ArrayNum) {
      uVar13 = ~local_138[0] >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = (this->Keys).AllocatorInstance.Data;
    fVar23 = *(float *)(pFVar7 + lVar16 * 8) - *(float *)(pFVar5 + lVar15 * 8);
    if ((fVar23 <= 0.0) || ((this->InterpMode).Value == '\x01')) {
      fVar23 = *(float *)(pFVar5 + lVar15 * 8 + 4);
    }
    else {
      fVar23 = ((*(float *)(pFVar6 + (longlong)(int)uVar22 * 8) - *(float *)(pFVar5 + lVar15 * 8)) /
               fVar23) * (*(float *)(pFVar7 + lVar16 * 8 + 4) - *(float *)(pFVar5 + lVar15 * 8 + 4))
               + *(float *)(pFVar5 + lVar15 * 8 + 4);
    }
    if (param_1 < (float)((uint)(fVar23 - *(float *)(pFVar6 + (longlong)(int)uVar22 * 8 + 4)) &
                         uVar14)) break;
    if (((int)local_128 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar19 = (local_128 - (local_128 - 1)) + -1;
    if (iVar19 != 0) {
      memmove(local_130.Data + (longlong)(int)(local_128 - 1) * 4,
              local_130.Data + (longlong)(int)(local_128 - 1) * 4 + 4,(longlong)iVar19 << 2);
    }
    local_128 = local_128 - 1;
    if (((int)local_128 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("KeepIndices.Num() >= 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\SimpleCurve.cpp"
                           ,0x24c,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar9 = true;
  }
  iVar18 = local_108;
  if (bVar9) goto LAB_147a7dfc0;
LAB_147a7e506:
  iVar18 = local_108;
  if ((int)local_138[0] < local_108) {
    if (((local_130.Data <= (FScriptContainerElement *)local_138) &&
        ((FScriptContainerElement *)local_138 < local_130.Data + (longlong)(int)uStack_124 * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (local_128 == uStack_124) {
      local_128 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_130,(int *)&uStack_124);
    }
    lVar15 = (longlong)(int)local_128;
    local_128 = local_128 + 1;
    *(uint *)(local_130.Data + lVar15 * 4) = local_138[0];
    local_138[0] = local_138[0] + 1;
    goto LAB_147a7dfc0;
  }
LAB_147a7e5c8:
  iVar19 = local_ec;
  lVar15 = (longlong)local_ec;
  for (; (int)local_138[0] < iVar19; local_138[0] = local_138[0] + 1) {
    if (((local_130.Data <= (FScriptContainerElement *)local_138) &&
        ((FScriptContainerElement *)local_138 < local_130.Data + (longlong)(int)uStack_124 * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (local_128 == uStack_124) {
      local_128 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_130,(int *)&uStack_124);
    }
    lVar16 = (longlong)(int)local_128;
    local_128 = local_128 + 1;
    *(uint *)(local_130.Data + lVar16 * 4) = local_138[0];
  }
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  if ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar19,&local_100,local_f8,local_f8 + 1);
    DefaultConstructItems<FKeyHandle,int>(local_100.Data + (longlong)iVar12 * 4,iVar19);
  }
  else {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar19,&local_100,local_f8,local_f8 + 1);
    memset(local_100.Data + (longlong)iVar12 * 4,0,lVar15 << 2);
    if (((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != iVar19) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("KeyHandlesToIndices.Num() == NumKeys",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\SimpleCurve.cpp"
                           ,0x26c,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar19 = (int)this->_padding_;
    plStack_e0 = &this->_padding_;
    uStack_e4 = 1;
    local_e8 = 0;
    plVar1 = &this->_padding_;
    iStack_d4 = 0;
    iStack_d0 = 0;
    if (iVar19 != 0) {
      plVar20 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar20 = plStack_e0;
      }
      uVar14 = (uint)*plVar20;
      while (uVar14 == 0) {
        iStack_d0 = iStack_d0 + 0x20;
        lVar15 = (longlong)local_e8;
        local_e8 = local_e8 + 1;
        if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < local_e8) goto LAB_147a7e7df;
        uVar14 = *(uint *)((longlong)plVar20 + lVar15 * 4 + 4);
      }
      uStack_e4 = -uVar14 & uVar14;
      uVar17 = (ulonglong)uStack_e4 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_c8 = (int)lVar15;
      iStack_d4 = iStack_d0 + -1 + local_c8;
      if (iVar19 < iStack_d4) {
LAB_147a7e7df:
        iStack_d4 = iVar19;
      }
    }
    local_d8 = 0xffffffff;
    uVar14 = (uint)this->_padding_;
    TStack_b8._padding_ = CONCAT44(uStack_e4,local_e8);
    TStack_b8.CurrentBitIndex = iStack_d4;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    TStack_b8._28_4_ = uStack_cc;
    TStack_b8.BaseBitIndex = iStack_d0;
    local_68 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
    uVar22 = uVar14 & 0xffffffe0;
    iVar12 = (int)uVar14 >> 5;
    uStack_98 = CONCAT44(uStack_64,local_68);
    local_c0 = plVar1;
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)plStack_e0;
    local_90 = plVar1;
    lStack_88 = TStack_b8._padding_;
    plStack_80 = plStack_e0;
    uStack_78 = TStack_b8._16_8_;
    uStack_70 = TStack_b8._24_8_;
    if ((((int)uVar14 < 0) || (iVar19 < (int)uVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar13 = (uint)this->_padding_;
    if (uVar14 != uVar13) {
      plVar20 = &this->_padding_;
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar20 = (longlong *)this->_padding_;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)plVar20 + (longlong)iVar12 * 4);
      while (uVar14 == 0) {
        lVar15 = (longlong)iVar12;
        uVar22 = uVar22 + 0x20;
        iVar12 = iVar12 + 1;
        uVar14 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_147a7e8d0;
        uVar14 = *(uint *)((longlong)plVar20 + lVar15 * 4 + 4);
      }
      uVar17 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_c4 = (int)lVar15;
      uVar14 = (uVar22 - 1) + local_c4;
      if ((int)uVar13 < (int)uVar14) {
        uVar14 = uVar13;
      }
    }
LAB_147a7e8d0:
    while( true ) {
      plVar20 = local_c0;
      if ((int)local_c0[1] - *(int *)((longlong)local_c0 + 0x34) != (int)uStack_98) {
        local_120[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_120);
      }
      if (((TStack_b8.CurrentBitIndex == uVar14) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_)) &&
         (plVar20 == plVar1)) break;
      lVar15 = *plVar20;
      uVar22 = *(uint *)(lVar15 + 4 + (longlong)TStack_b8.CurrentBitIndex * 0x10);
      uVar4 = *(undefined4 *)(lVar15 + (longlong)TStack_b8.CurrentBitIndex * 0x10);
      uVar13 = 0;
      if ((int)uVar22 < local_f8[0]) {
        uVar13 = ~uVar22 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)(local_100.Data + (longlong)(int)uVar22 * 4) = uVar4;
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  uVar14 = local_128;
  uVar17 = 0;
  lVar15 = (longlong)(int)local_128;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  iStack_10c = 0;
  if ((int)local_128 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_128);
  }
  if (0 < (int)local_128) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_128,&local_118,0,&iStack_10c);
  }
  bVar9 = 1 < (int)this->_padding_;
  if (!bVar9) {
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                      *)&this->_padding_);
  }
  iVar19 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar19 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar19 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar19 < 0) || (0x80 < iVar19)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar9) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
              *)&this->_padding_);
  }
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->_padding_,0,piVar2);
  }
  uVar21 = uVar17;
  if (0 < (int)uVar14) {
    do {
      uVar22 = (uint)uVar17;
      uVar14 = 0;
      if ((int)uVar22 < (int)local_128) {
        uVar14 = ~uVar22 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar14 = *(uint *)(local_130.Data + uVar21 * 4);
      uVar13 = 0;
      if ((int)uVar14 < (this->Keys).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = (this->Keys).AllocatorInstance.Data + (longlong)(int)uVar14 * 8;
      if (((local_118.Data <= pFVar5) && (pFVar5 < local_118.Data + (longlong)iStack_10c * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (local_110 == iStack_10c) {
        local_110 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_118,&iStack_10c);
      }
      lVar16 = (longlong)local_110;
      local_110 = local_110 + 1;
      *(undefined8 *)(local_118.Data + lVar16 * 8) = *(undefined8 *)pFVar5;
      uVar13 = 0;
      if ((int)uVar14 < local_f8[0]) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FKeyHandleMap::Add((FKeyHandleMap *)&this->_padding_,
                         (FKeyHandle *)(local_100.Data + (longlong)(int)uVar14 * 4),uVar22);
      uVar17 = (ulonglong)(uVar22 + 1);
      uVar21 = uVar21 + 1;
    } while ((longlong)uVar21 < lVar15);
  }
  pTVar3 = &this->Keys;
  if (pTVar3 != (TArray<FSimpleCurveKey,TSizedDefaultAllocator<32>_> *)&local_118) {
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar3->AllocatorInstance).Data = local_118.Data;
    (this->Keys).ArrayNum = local_110;
    (this->Keys).ArrayMax = iStack_10c;
    local_110 = 0;
    iStack_10c = 0;
    local_118.Data = (FScriptContainerElement *)0x0;
  }
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  return;
}

// Reset @ 147a834f0

void __thiscall FSimpleCurve::Reset(FSimpleCurve *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong *this_00;
  
  piVar1 = &(this->Keys).ArrayMax;
  (this->Keys).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Keys).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->_padding_;
  bVar3 = 1 < (int)this->_padding_;
  if (!bVar3) {
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,piVar1);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar3) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
              *)this_00);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  return;
}

// SetKeyTime @ 147a8f620

void __thiscall FSimpleCurve::SetKeyTime(FSimpleCurve *this,FKeyHandle param_1,float param_2)

{
  bool bVar1;
  undefined1 in_R9B;
  float in_XMM1_Da;
  uint in_stack_ffffffffffffffc8;
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (bVar1) {
    GetKey(this,param_1);
    DeleteKey(this,param_1);
    AddKey(this,in_XMM1_Da,param_2,(bool)in_R9B,(FKeyHandle)(in_stack_ffffffffffffffc8 & 0xffffff00)
          );
  }
  return;
}

// SetKeyValue @ 147a8f760

void __thiscall
FSimpleCurve::SetKeyValue(FSimpleCurve *this,FKeyHandle param_1,float param_2,bool param_3)

{
  bool bVar1;
  FSimpleCurveKey *pFVar2;
  
  bVar1 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this,param_1);
  if (bVar1) {
    pFVar2 = GetKey(this,param_1);
    pFVar2->Value = param_2;
  }
  return;
}

// SetKeys @ 147a8fcc0

void __thiscall
FSimpleCurve::SetKeys
          (FSimpleCurve *this,TArray<FSimpleCurveKey,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FSimpleCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  atomic<unsigned_int> aVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  longlong *this_00;
  ulonglong uVar13;
  FKeyHandle local_res8 [2];
  
  pTVar1 = &this->Keys;
  uVar11 = 0;
  piVar2 = &(this->Keys).ArrayMax;
  (this->Keys).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  this_00 = &this->_padding_;
  bVar7 = 1 < (int)this->_padding_;
  if (!bVar7) {
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  piVar3 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,piVar3);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar9 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar9 < 0) || (0x80 < iVar9)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar7) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
              *)this_00);
  }
  piVar3 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->_padding_,0,piVar3);
  }
  iVar9 = param_1->ArrayNum;
  uVar13 = uVar11;
  if (0 < iVar9) {
    do {
      uVar10 = (uint)uVar11;
      uVar8 = 0;
      if ((int)uVar10 < iVar9) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      pFVar12 = (param_1->AllocatorInstance).Data + uVar13;
      if (((pFVar4 <= pFVar12) && (pFVar12 < pFVar4 + (longlong)*piVar2 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (this->Keys).ArrayNum;
      if (iVar9 == *piVar2) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->Keys).ArrayNum = iVar9 + 1;
      *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar12;
      LOCK();
      aVar6 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
      UNLOCK();
      local_res8[0].Index = (int)LastKeyHandleIndex + 1;
      LastKeyHandleIndex = aVar6;
      if ((local_res8[0].Index == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                             ,0x1c,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FKeyHandleMap::Add((FKeyHandleMap *)this_00,local_res8,uVar10);
      iVar9 = param_1->ArrayNum;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar13 = uVar13 + 8;
    } while ((int)(uVar10 + 1) < iVar9);
  }
  return;
}

// UpdateOrAddKey @ 147a9c880

FKeyHandle __thiscall
FSimpleCurve::UpdateOrAddKey
          (FSimpleCurve *this,float param_1,float param_2,bool param_3,float param_4)

{
  code *pcVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint in_EDX;
  uint uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined4 in_XMM3_Da;
  float in_stack_00000030;
  longlong in_stack_ffffffffffffff98;
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  pwVar8 = (wchar_t *)(ulonglong)param_3;
  uVar6 = 0;
  if (0 < (this->Keys).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Keys).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        pwVar8 = L"Array index out of bounds: %lld into an array of size %lld";
        in_stack_ffffffffffffff98 = (longlong)(int)uVar6;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (FKeyHandle)uVar5;
        }
      }
      param_3 = SUB81(pwVar8,0);
      param_1 = *(float *)((this->Keys).AllocatorInstance.Data + lVar7);
      if ((float)((uint)(param_1 - param_2) & uVar5) <= in_stack_00000030) {
        uVar5 = 0;
        if ((int)uVar6 < (this->Keys).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (FKeyHandle)uVar5;
        }
        *(undefined4 *)((this->Keys).AllocatorInstance.Data + (longlong)(int)uVar6 * 8 + 4) =
             in_XMM3_Da;
        FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,in_EDX);
        return (FKeyHandle)in_EDX;
      }
      if (param_2 < param_1) break;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->Keys).ArrayNum);
  }
  LOCK();
  aVar2 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
  UNLOCK();
  bVar3 = LastKeyHandleIndex == (atomic<unsigned_int>)0xffffffff;
  LastKeyHandleIndex = aVar2;
  if (bVar3) {
    param_3 = true;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (FKeyHandle)uVar5;
    }
  }
  AddKey(this,param_1,param_2,param_3,
         (FKeyHandle)(uint)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff98 >> 8),param_4._0_1_)
        );
  return (FKeyHandle)in_EDX;
}

// operator() @ 150515ef0

bool __thiscall `FSimpleCurve::SetKeyInterpMode'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3468483741343547541>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3468483741343547541>,
                       &`public:___cdecl_`public:_void___cdecl_FSimpleCurve::SetKeyInterpMode(ERichCurveInterpMode)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

