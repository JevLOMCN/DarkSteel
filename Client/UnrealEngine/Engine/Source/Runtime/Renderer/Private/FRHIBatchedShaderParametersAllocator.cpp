// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// Emplace<FRHIShaderParameter,unsigned_short,unsigned_short,unsigned_short,unsigned_short> @ 14471abb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParametersAllocator::
Emplace<FRHIShaderParameter,unsigned_short,unsigned_short,unsigned_short,unsigned_short>
          (FRHIBatchedShaderParametersAllocator *this,FMemStackBase *param_1,
          TArrayView<FRHIShaderParameter,int> *param_2,ushort *param_3,ushort *param_4,
          ushort *param_5,ushort *param_6)

{
  FRHIShaderParameter *pFVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FRHIShaderParameter *pFVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  FRHIShaderParameter *pFVar14;
  undefined4 uStack_1c;
  
  iVar10 = param_2->ArrayNum;
  iVar12 = iVar10 + 1;
  pFVar8 = param_2->DataPtr;
  if (iVar10 == 0) {
    pFVar8 = FMemStackBase::Alloc(param_1,8,2);
    uVar2 = *param_6;
    uVar3 = *param_5;
    uVar4 = *param_4;
    pFVar8->BufferIndex = *param_3;
    pFVar8->BaseIndex = uVar4;
    pFVar8->ByteOffset = uVar3;
    pFVar8->ByteSize = uVar2;
  }
  else {
    if (((FRHIShaderParameter *)param_1->Top != pFVar8 + iVar10) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MemStack.GetTop() == (uint8*)(InOutArray.GetData() + InOutArray.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                           ,0xb6,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_1->End < param_1->Top + 8) {
      pFVar8 = FMemStackBase::Alloc(param_1,(longlong)iVar12 << 3,2);
      iVar10 = param_2->ArrayNum;
      uVar11 = 0;
      pFVar14 = pFVar8;
      if (0 < iVar10) {
        lVar13 = 0;
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
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar11 = uVar11 + 1;
          pFVar1 = (FRHIShaderParameter *)((longlong)&param_2->DataPtr->BufferIndex + lVar13);
          lVar13 = lVar13 + 8;
          *pFVar14 = *pFVar1;
          pFVar14 = pFVar14 + 1;
          iVar10 = param_2->ArrayNum;
        } while ((int)uVar11 < iVar10);
      }
      uVar2 = *param_6;
      uVar3 = *param_5;
      uVar4 = *param_4;
      pFVar14->BufferIndex = *param_3;
      pFVar14->BaseIndex = uVar4;
      pFVar14->ByteOffset = uVar3;
      pFVar14->ByteSize = uVar2;
    }
    else {
      puVar9 = FMemStackBase::Alloc(param_1,8,1);
      uVar2 = *param_6;
      uVar3 = *param_5;
      uVar4 = *param_4;
      *puVar9 = *param_3;
      puVar9[1] = uVar4;
      puVar9[2] = uVar3;
      puVar9[3] = uVar2;
    }
  }
  if ((iVar12 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  param_2->DataPtr = pFVar8;
  *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_1c,iVar12);
  return;
}

// Emplace<FRHIShaderParameterResource,FRHIUniformBuffer_*_&,unsigned_short_&> @ 14471ae00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParametersAllocator::
Emplace<FRHIShaderParameterResource,FRHIUniformBuffer_*_&,unsigned_short_&>
          (FRHIBatchedShaderParametersAllocator *this,FMemStackBase *param_1,
          TArrayView<FRHIShaderParameterResource,int> *param_2,FRHIUniformBuffer **param_3,
          ushort *param_4)

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
    pFVar6->Resource = (FRHIResource *)*param_3;
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
      pFVar11->Resource = (FRHIResource *)*param_3;
      pFVar11->Index = uVar1;
      pFVar11->Type = UniformBuffer;
    }
    else {
      puVar7 = FMemStackBase::Alloc(param_1,0x10,1);
      uVar1 = *param_4;
      *puVar7 = *param_3;
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

// Emplace<FRHIShaderParameterResource,FRHISamplerState_*_&,unsigned_short_&> @ 1448e34e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParametersAllocator::
Emplace<FRHIShaderParameterResource,FRHISamplerState_*_&,unsigned_short_&>
          (FRHIBatchedShaderParametersAllocator *this,FMemStackBase *param_1,
          TArrayView<FRHIShaderParameterResource,int> *param_2,FRHISamplerState **param_3,
          ushort *param_4)

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
    pFVar6->Resource = (FRHIResource *)*param_3;
    pFVar6->Index = uVar1;
    pFVar6->Type = Sampler;
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
      pFVar11->Resource = (FRHIResource *)*param_3;
      pFVar11->Index = uVar1;
      pFVar11->Type = Sampler;
    }
    else {
      puVar7 = FMemStackBase::Alloc(param_1,0x10,1);
      uVar1 = *param_4;
      *puVar7 = *param_3;
      *(ushort *)(puVar7 + 1) = uVar1;
      *(undefined1 *)((longlong)puVar7 + 10) = 3;
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

// Emplace<FRHIShaderParameterResource,FRHITexture_*_&,unsigned_short_&> @ 1448e36e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParametersAllocator::
Emplace<FRHIShaderParameterResource,FRHITexture_*_&,unsigned_short_&>
          (FRHIBatchedShaderParametersAllocator *this,FMemStackBase *param_1,
          TArrayView<FRHIShaderParameterResource,int> *param_2,FRHITexture **param_3,ushort *param_4
          )

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
    pFVar6->Resource = (FRHIResource *)*param_3;
    pFVar6->Index = uVar1;
    pFVar6->Type = Texture;
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
      pFVar11->Resource = (FRHIResource *)*param_3;
      pFVar11->Index = uVar1;
      pFVar11->Type = Texture;
    }
    else {
      puVar7 = FMemStackBase::Alloc(param_1,0x10,1);
      uVar1 = *param_4;
      *puVar7 = *param_3;
      *(ushort *)(puVar7 + 1) = uVar1;
      *(undefined1 *)((longlong)puVar7 + 10) = 0;
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

// Emplace<FRHIShaderParameterResource,FRHIShaderResourceView_*_&,unsigned_short_&> @ 144e6c360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParametersAllocator::
Emplace<FRHIShaderParameterResource,FRHIShaderResourceView_*_&,unsigned_short_&>
          (FRHIBatchedShaderParametersAllocator *this,FMemStackBase *param_1,
          TArrayView<FRHIShaderParameterResource,int> *param_2,FRHIShaderResourceView **param_3,
          ushort *param_4)

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
    pFVar6->Resource = (FRHIResource *)*param_3;
    pFVar6->Index = uVar1;
    pFVar6->Type = ResourceView;
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
      pFVar11->Resource = (FRHIResource *)*param_3;
      pFVar11->Index = uVar1;
      pFVar11->Type = ResourceView;
    }
    else {
      puVar7 = FMemStackBase::Alloc(param_1,0x10,1);
      uVar1 = *param_4;
      *puVar7 = *param_3;
      *(ushort *)(puVar7 + 1) = uVar1;
      *(undefined1 *)((longlong)puVar7 + 10) = 1;
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

// Emplace<FRHIShaderParameterResource,FRHIUnorderedAccessView_*_&,unsigned_short_&> @ 1452f8ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParametersAllocator::
Emplace<FRHIShaderParameterResource,FRHIUnorderedAccessView_*_&,unsigned_short_&>
          (FRHIBatchedShaderParametersAllocator *this,FMemStackBase *param_1,
          TArrayView<FRHIShaderParameterResource,int> *param_2,FRHIUnorderedAccessView **param_3,
          ushort *param_4)

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
    pFVar6->Resource = (FRHIResource *)*param_3;
    pFVar6->Index = uVar1;
    pFVar6->Type = UnorderedAccessView;
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
      pFVar11->Resource = (FRHIResource *)*param_3;
      pFVar11->Index = uVar1;
      pFVar11->Type = UnorderedAccessView;
    }
    else {
      puVar7 = FMemStackBase::Alloc(param_1,0x10,1);
      uVar1 = *param_4;
      *puVar7 = *param_3;
      *(ushort *)(puVar7 + 1) = uVar1;
      *(undefined1 *)((longlong)puVar7 + 10) = 2;
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

