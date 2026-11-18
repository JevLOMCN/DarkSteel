// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147498fd0

UScriptStruct * __cdecl FCurveTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCurveTrack.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCurveTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCurveTrack,(UObject *)pUVar1,L"CurveTrack");
  }
  return Z_Registration_Info_UScriptStruct_FCurveTrack.OuterSingleton;
}

// CompressCurveWeights @ 1474c4d40

bool __thiscall FCurveTrack::CompressCurveWeights(FCurveTrack *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  float local_48 [12];
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_322bcc77;
  if ((this->CurveWeights).ArrayNum < 2) {
    return false;
  }
  uVar10 = 1;
  lVar11 = 4;
  local_48[0] = *(float *)(this->CurveWeights).AllocatorInstance.Data;
  do {
    uVar8 = 0;
    if ((int)uVar10 < (this->CurveWeights).ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    if (fVar4 < (float)((uint)(local_48[0] -
                              *(float *)((this->CurveWeights).AllocatorInstance.Data + lVar11)) &
                       uVar5)) {
      return false;
    }
    uVar10 = uVar10 + 1;
    lVar11 = lVar11 + 4;
  } while ((int)uVar10 < (this->CurveWeights).ArrayNum);
  piVar1 = &(this->CurveWeights).ArrayMax;
  (this->CurveWeights).ArrayNum = 0;
  iVar9 = 0;
  if ((this->CurveWeights).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CurveWeights).AllocatorInstance,0,piVar1);
    iVar9 = *piVar1;
  }
  pFVar2 = (this->CurveWeights).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)iVar9 * 4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  iVar9 = (this->CurveWeights).ArrayNum;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->CurveWeights).AllocatorInstance,piVar1);
    (this->CurveWeights).ArrayNum = iVar9;
  }
  (this->CurveWeights).ArrayNum = iVar9 + 1;
  *(float *)((this->CurveWeights).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_48[0];
  iVar9 = (this->CurveWeights).ArrayNum;
  if ((this->CurveWeights).ArrayMax != iVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar9,&(this->CurveWeights).AllocatorInstance,iVar9,piVar1);
  }
  return true;
}

// IsValidCurveTrack @ 1474ea5a0

bool __thiscall FCurveTrack::IsValidCurveTrack(FCurveTrack *this)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  fVar2 = __real_38d1b717;
  if (this->CurveName == (FName)0x0) {
    return false;
  }
  uVar6 = 0;
  if (0 < (this->CurveWeights).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->CurveWeights).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (fVar2 < *(float *)((this->CurveWeights).AllocatorInstance.Data + lVar7)) {
        return true;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < (this->CurveWeights).ArrayNum);
    return false;
  }
  return false;
}

