// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// GatherDispatchData @ 149751540

void __thiscall
FPCGCustomComputeKernelDataProviderProxy::GatherDispatchData
          (FPCGCustomComputeKernelDataProviderProxy *this,FDispatchData *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  
  iVar3 = param_1->ParameterBufferOffset;
  puVar6 = param_1->ParameterBuffer;
  iVar4 = param_1->NumInvocations;
  iVar5 = param_1->ParameterBufferStride;
  if ((iVar4 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((iVar5 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((((longlong)iVar5 & 0xfU) != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = 0;
  if (0 < param_1->NumInvocations) {
    pfVar11 = (float *)(puVar6 + (longlong)iVar3 + 0x28);
    do {
      uVar9 = 0;
      if ((int)uVar10 < iVar4) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((param_1->bUnifiedDispatch == false) && (param_1->NumInvocations != 1)) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<990885956330455233>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGCustomKernelDataInterface.cpp"
                             ,0xc1,
                             "InDispatchData.bUnifiedDispatch || InDispatchData.NumInvocations == 1"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = uVar10 + 1;
      pfVar11[-10] = (float)this->ThreadCount;
      pfVar11[-8] = 1.4013e-45;
      pfVar11[-9] = 1.4013e-45;
      pfVar11[-7] = (float)this->ThreadCountMultiplier;
      pfVar11[-6] = (float)this->Seed;
      pfVar11[-5] = (float)this->SeedSettings;
      pfVar11[-4] = (float)this->SeedComponent;
      dVar1 = (this->SourceComponentBounds).Min.field0_0x0._s_0.Y;
      dVar2 = (this->SourceComponentBounds).Min.field0_0x0._s_0.Z;
      pfVar11[-2] = (float)(this->SourceComponentBounds).Min.field0_0x0._s_0.X;
      pfVar11[-1] = (float)dVar1;
      *pfVar11 = (float)dVar2;
      dVar1 = (this->SourceComponentBounds).Max.field0_0x0._s_0.Y;
      dVar2 = (this->SourceComponentBounds).Max.field0_0x0._s_0.Z;
      pfVar11[2] = (float)(this->SourceComponentBounds).Max.field0_0x0._s_0.X;
      pfVar11[3] = (float)dVar1;
      pfVar11[4] = (float)dVar2;
      pfVar11 = (float *)((longlong)pfVar11 + (longlong)iVar5);
    } while ((int)uVar10 < param_1->NumInvocations);
  }
  return;
}

// GetDispatchThreadCount @ 149757b30

int __thiscall
FPCGCustomComputeKernelDataProviderProxy::GetDispatchThreadCount
          (FPCGCustomComputeKernelDataProviderProxy *this,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = param_1->ArrayNum;
  iVar2 = this->ThreadCount;
  if (this->ThreadCount < 1) {
    iVar2 = 1;
  }
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar4 = (longlong)iVar3;
  param_1->ArrayNum = iVar3 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined4 *)(pFVar1 + lVar4 * 0xc + 4) = 1;
  *(undefined4 *)(pFVar1 + lVar4 * 0xc + 8) = 1;
  *(int *)(pFVar1 + lVar4 * 0xc) = iVar2;
  return param_1->ArrayNum;
}

// IsValid @ 14976bec0

bool __thiscall
FPCGCustomComputeKernelDataProviderProxy::IsValid
          (FPCGCustomComputeKernelDataProviderProxy *this,FValidationData *param_1)

{
  if ((param_1->ParameterStructSize == 0x40) && (-1 < this->ThreadCount)) {
    return true;
  }
  return false;
}

