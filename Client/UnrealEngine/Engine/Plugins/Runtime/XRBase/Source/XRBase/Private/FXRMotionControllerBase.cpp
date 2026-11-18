// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 3

// EnumerateSources @ 14cf89930

void __thiscall
FXRMotionControllerBase::EnumerateSources
          (FXRMotionControllerBase *this,
          TArray<FMotionControllerSource,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FName local_18 [2];
  
  pFVar5 = XRMotionControllerBase_Impl::LegacySources;
  do {
    local_18[0] = *pFVar5;
    pFVar1 = (FName *)(param_1->AllocatorInstance).Data;
    if ((pFVar1 <= local_18) && (local_18 < pFVar1 + param_1->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    pFVar5 = pFVar5 + 1;
    param_1->ArrayNum = iVar4 + 1;
    *(FName *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  } while ((longlong)pFVar5 < 0x155353080);
  return;
}

// GetControllerOrientationAndPosition @ 14cf8def0

bool __thiscall
FXRMotionControllerBase::GetControllerOrientationAndPosition
          (FXRMotionControllerBase *this,int param_1,FName param_2,TRotator<double> *param_3,
          TVector<double> *param_4,bool *param_5,TVector<double> *param_6,bool *param_7,
          TVector<double> *param_8,bool *param_9,TVector<double> *param_10,float param_11)

{
  undefined1 uVar1;
  
  *param_5 = false;
  *param_7 = false;
  *param_9 = false;
                    /* WARNING: Could not recover jumptable at 0x00014cf8df1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x18))();
  return (bool)uVar1;
}

// GetControllerOrientationAndPositionForTime @ 14cf8e030

bool __thiscall
FXRMotionControllerBase::GetControllerOrientationAndPositionForTime
          (FXRMotionControllerBase *this,int param_1,FName param_2,FTimespan param_3,bool *param_4,
          TRotator<double> *param_5,TVector<double> *param_6,bool *param_7,TVector<double> *param_8,
          bool *param_9,TVector<double> *param_10,bool *param_11,TVector<double> *param_12,
          float param_13)

{
  undefined1 uVar1;
  
  *param_4 = false;
  *param_7 = false;
  *param_9 = false;
  *param_11 = false;
                    /* WARNING: Could not recover jumptable at 0x00014cf8e072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x18))(param_13,param_1,param_2,param_5);
  return (bool)uVar1;
}

