// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// Emplace<FRHIShaderParameterResource,FRHIUniformBuffer_*_&,short_&> @ 145e77870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParametersAllocator::
Emplace<FRHIShaderParameterResource,FRHIUniformBuffer_*_&,short_&>
          (FRHIBatchedShaderParametersAllocator *this,FMemStackBase *param_1,
          TArrayView<FRHIShaderParameterResource,int> *param_2,FRHIUniformBuffer **param_3,
          short *param_4)

{
  ushort uVar1;
  short sVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FRHIShaderParameterResource *pFVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  FRHIShaderParameterResource *pFVar12;
  int iVar13;
  undefined4 uStack_1c;
  
  iVar9 = param_2->ArrayNum;
  pFVar7 = param_2->DataPtr;
  iVar13 = iVar9 + 1;
  if (iVar9 == 0) {
    pFVar7 = FMemStackBase::Alloc(param_1,0x10,8);
    uVar1 = *param_4;
    pFVar7->Resource = (FRHIResource *)*param_3;
    pFVar7->Index = uVar1;
    pFVar7->Type = UniformBuffer;
  }
  else {
    if (((FRHIShaderParameterResource *)param_1->Top != pFVar7 + iVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("MemStack.GetTop() == (uint8*)(InOutArray.GetData() + InOutArray.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                           ,0xb6,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_1->End < param_1->Top + 0x10) {
      pFVar7 = FMemStackBase::Alloc(param_1,(longlong)iVar13 << 4,8);
      iVar9 = param_2->ArrayNum;
      uVar10 = 0;
      pFVar12 = pFVar7;
      if (0 < iVar9) {
        lVar11 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar10 < iVar9) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar10 = uVar10 + 1;
          puVar8 = (undefined8 *)((longlong)&param_2->DataPtr->Resource + lVar11);
          uVar4 = puVar8[1];
          lVar11 = lVar11 + 0x10;
          pFVar12->Resource = (FRHIResource *)*puVar8;
          pFVar12->Index = (short)uVar4;
          pFVar12->Type = (char)((ulonglong)uVar4 >> 0x10);
          *(int5 *)&pFVar12->field_0xb = (int5)((ulonglong)uVar4 >> 0x18);
          iVar9 = param_2->ArrayNum;
          pFVar12 = pFVar12 + 1;
        } while ((int)uVar10 < iVar9);
      }
      uVar1 = *param_4;
      pFVar12->Resource = (FRHIResource *)*param_3;
      pFVar12->Index = uVar1;
      pFVar12->Type = UniformBuffer;
    }
    else {
      puVar8 = FMemStackBase::Alloc(param_1,0x10,1);
      sVar2 = *param_4;
      *puVar8 = *param_3;
      *(short *)(puVar8 + 1) = sVar2;
      *(undefined1 *)((longlong)puVar8 + 10) = 4;
    }
  }
  if ((iVar13 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_2->DataPtr = pFVar7;
  *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_1c,iVar13);
  return;
}

// Emplace<FRHIShaderParameterResource,TRefCountPtr<FRHIUniformBuffer>_&,unsigned_short_const_&> @ 145e77a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParametersAllocator::
Emplace<FRHIShaderParameterResource,TRefCountPtr<FRHIUniformBuffer>_&,unsigned_short_const_&>
          (FRHIBatchedShaderParametersAllocator *this,FMemStackBase *param_1,
          TArrayView<FRHIShaderParameterResource,int> *param_2,
          TRefCountPtr<FRHIUniformBuffer> *param_3,ushort *param_4)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  FRHIShaderParameterResource *pFVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  FRHIShaderParameterResource *pFVar11;
  int iVar12;
  undefined4 uStack_1c;
  
  iVar8 = param_2->ArrayNum;
  pFVar6 = param_2->DataPtr;
  iVar12 = iVar8 + 1;
  if (iVar8 == 0) {
    pFVar6 = FMemStackBase::Alloc(param_1,0x10,8);
    uVar1 = *param_4;
    pFVar6->Resource = (FRHIResource *)param_3->Reference;
    pFVar6->Index = uVar1;
    pFVar6->Type = UniformBuffer;
  }
  else {
    if (((FRHIShaderParameterResource *)param_1->Top != pFVar6 + iVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("MemStack.GetTop() == (uint8*)(InOutArray.GetData() + InOutArray.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                           ,0xb6,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_1->End < param_1->Top + 0x10) {
      pFVar6 = FMemStackBase::Alloc(param_1,(longlong)iVar12 << 4,8);
      iVar8 = param_2->ArrayNum;
      uVar9 = 0;
      pFVar11 = pFVar6;
      if (0 < iVar8) {
        lVar10 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar9 < iVar8) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar9 = uVar9 + 1;
          puVar7 = (undefined8 *)((longlong)&param_2->DataPtr->Resource + lVar10);
          uVar3 = puVar7[1];
          lVar10 = lVar10 + 0x10;
          pFVar11->Resource = (FRHIResource *)*puVar7;
          pFVar11->Index = (short)uVar3;
          pFVar11->Type = (char)((ulonglong)uVar3 >> 0x10);
          *(int5 *)&pFVar11->field_0xb = (int5)((ulonglong)uVar3 >> 0x18);
          iVar8 = param_2->ArrayNum;
          pFVar11 = pFVar11 + 1;
        } while ((int)uVar9 < iVar8);
      }
      uVar1 = *param_4;
      pFVar11->Resource = (FRHIResource *)param_3->Reference;
      pFVar11->Index = uVar1;
      pFVar11->Type = UniformBuffer;
    }
    else {
      puVar7 = FMemStackBase::Alloc(param_1,0x10,1);
      uVar1 = *param_4;
      *puVar7 = param_3->Reference;
      *(ushort *)(puVar7 + 1) = uVar1;
      *(undefined1 *)((longlong)puVar7 + 10) = 4;
    }
  }
  if ((iVar12 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  param_2->DataPtr = pFVar6;
  *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_1c,iVar12);
  return;
}

// Emplace<FRHIShaderParameterResource,FRHIShaderParameterResource_const_&> @ 145e77c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParametersAllocator::
Emplace<FRHIShaderParameterResource,FRHIShaderParameterResource_const_&>
          (FRHIBatchedShaderParametersAllocator *this,FMemStackBase *param_1,
          TArrayView<FRHIShaderParameterResource,int> *param_2,FRHIShaderParameterResource *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ushort uVar3;
  EType EVar4;
  undefined5 uVar5;
  bool bVar6;
  uint uVar7;
  FRHIShaderParameterResource *pFVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  FRHIShaderParameterResource *pFVar13;
  int iVar14;
  undefined4 uStack_1c;
  
  iVar10 = param_2->ArrayNum;
  pFVar8 = param_2->DataPtr;
  iVar14 = iVar10 + 1;
  if (iVar10 == 0) {
    pFVar8 = FMemStackBase::Alloc(param_1,0x10,8);
    uVar3 = param_3->Index;
    EVar4 = param_3->Type;
    uVar5 = *(undefined5 *)&param_3->field_0xb;
    pFVar8->Resource = param_3->Resource;
    pFVar8->Index = uVar3;
    pFVar8->Type = EVar4;
    *(undefined5 *)&pFVar8->field_0xb = uVar5;
  }
  else {
    if (((FRHIShaderParameterResource *)param_1->Top != pFVar8 + iVar10) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MemStack.GetTop() == (uint8*)(InOutArray.GetData() + InOutArray.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                           ,0xb6,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1->End < param_1->Top + 0x10) {
      pFVar8 = FMemStackBase::Alloc(param_1,(longlong)iVar14 << 4,8);
      iVar10 = param_2->ArrayNum;
      uVar11 = 0;
      pFVar13 = pFVar8;
      if (0 < iVar10) {
        lVar12 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar11 < iVar10) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar11 = uVar11 + 1;
          puVar9 = (undefined8 *)((longlong)&param_2->DataPtr->Resource + lVar12);
          uVar2 = puVar9[1];
          lVar12 = lVar12 + 0x10;
          pFVar13->Resource = (FRHIResource *)*puVar9;
          pFVar13->Index = (short)uVar2;
          pFVar13->Type = (char)((ulonglong)uVar2 >> 0x10);
          *(int5 *)&pFVar13->field_0xb = (int5)((ulonglong)uVar2 >> 0x18);
          iVar10 = param_2->ArrayNum;
          pFVar13 = pFVar13 + 1;
        } while ((int)uVar11 < iVar10);
      }
      uVar3 = param_3->Index;
      EVar4 = param_3->Type;
      uVar5 = *(undefined5 *)&param_3->field_0xb;
      pFVar13->Resource = param_3->Resource;
      pFVar13->Index = uVar3;
      pFVar13->Type = EVar4;
      *(undefined5 *)&pFVar13->field_0xb = uVar5;
    }
    else {
      puVar9 = FMemStackBase::Alloc(param_1,0x10,1);
      uVar2 = *(undefined8 *)&param_3->Index;
      *puVar9 = param_3->Resource;
      puVar9[1] = uVar2;
    }
  }
  if ((iVar14 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  param_2->DataPtr = pFVar8;
  *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_1c,iVar14);
  return;
}

