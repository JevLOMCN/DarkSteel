// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// AddMeasurement @ 14198a9e0

void __thiscall FHistogram::AddMeasurement(FHistogram *this,double param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  double dVar12;
  
  iVar5 = (this->Bins).ArrayNum;
  if (iVar5 != 0) {
    uVar8 = 0;
    if ((iVar5 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(double *)(this->Bins).AllocatorInstance.Data <= param_1) {
      iVar5 = (this->Bins).ArrayNum + -1;
      if (0 < iVar5) {
        uVar9 = uVar8;
        uVar10 = uVar8;
        do {
          uVar11 = (uint)uVar9;
          uVar6 = 0;
          if ((int)uVar11 < (this->Bins).ArrayNum) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->Bins).AllocatorInstance.Data;
          if (param_1 < *(double *)(pFVar1 + uVar10 + 8)) {
            *(int *)(pFVar1 + uVar10 + 0x18) = *(int *)(pFVar1 + uVar10 + 0x18) + 1;
            this->CountOfAllMeasures = this->CountOfAllMeasures + 1;
            *(double *)(pFVar1 + uVar10 + 0x10) = param_2 + *(double *)(pFVar1 + uVar10 + 0x10);
            goto LAB_14198ab58;
          }
          uVar9 = (ulonglong)(uVar11 + 1);
          uVar8 = uVar8 + 1;
          uVar10 = uVar10 + 0x20;
        } while ((longlong)uVar8 < (longlong)iVar5);
      }
      iVar5 = (this->Bins).ArrayNum;
      uVar11 = iVar5 - 1;
      uVar6 = 0;
      if ((int)uVar11 < iVar5) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Bins).AllocatorInstance.Data;
      lVar7 = (longlong)(this->Bins).ArrayNum * 0x20;
      *(int *)(pFVar1 + lVar7 + -8) = *(int *)(pFVar1 + lVar7 + -8) + 1;
      this->CountOfAllMeasures = this->CountOfAllMeasures + 1;
      *(double *)(pFVar1 + lVar7 + -0x10) = param_2 + *(double *)(pFVar1 + lVar7 + -0x10);
LAB_14198ab58:
      dVar12 = this->MinimalMeasurement;
      if (param_2 <= this->MinimalMeasurement) {
        dVar12 = param_2;
      }
      dVar3 = param_2;
      if (param_2 <= this->MaximalMeasurement) {
        dVar3 = this->MaximalMeasurement;
      }
      this->MinimalMeasurement = dVar12;
      this->MaximalMeasurement = dVar3;
      this->SumOfAllMeasures = param_2 + this->SumOfAllMeasures;
    }
  }
  return;
}

// DefaultConvertBinToLabel @ 141990f50

FString * __cdecl
FHistogram::DefaultConvertBinToLabel(FString *__return_storage_ptr__,double param_1,double param_2)

{
  if (__real_47efffffe0000000 <= param_2) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%d_Plus");
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d_%d");
  return __return_storage_ptr__;
}

// DumpToJsonString2 @ 141991c40

FString * __thiscall
FHistogram::DumpToJsonString2
          (FHistogram *this,FString *__return_storage_ptr__,
          TFunctionRef<FString___cdecl(double,double)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 local_res8;
  undefined8 local_res10;
  TFunctionRef<FString___cdecl(double,double)> *local_res18;
  FString local_68;
  void *local_58 [4];
  
  uVar7 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((this->Bins).ArrayNum != 0) {
    local_res18 = param_1;
    ::FString::AppendChar(__return_storage_ptr__,L'[');
    iVar1 = (this->Bins).ArrayNum;
    uVar10 = uVar7;
    if (0 < iVar1) {
      do {
        uVar8 = (uint)uVar7;
        uVar5 = 0;
        if ((int)uVar8 < (this->Bins).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar3)();
          return pFVar6;
        }
        pFVar2 = (this->Bins).AllocatorInstance.Data;
        if (uVar8 != 0) {
          ::FString::AppendChar(__return_storage_ptr__,L',');
        }
        local_res8 = *(undefined8 *)(pFVar2 + uVar10 + 8);
        local_res10 = *(undefined8 *)(pFVar2 + uVar10);
        (**(code **)local_res18)
                  (local_58,*(undefined8 *)&local_res18->field_0x8,&local_res10,&local_res8);
        ::FString::PrintfImpl(&local_68,L"{\"%s\":{\"Count\":%d,\"Sum\":%.5f}}");
        iVar9 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar9);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58[0] != (void *)0x0) {
          FMemory::Free(local_58[0]);
        }
        uVar7 = (ulonglong)(uVar8 + 1);
        uVar10 = uVar10 + 0x20;
      } while ((int)(uVar8 + 1) < iVar1);
    }
    ::FString::AppendChar(__return_storage_ptr__,L']');
  }
  return __return_storage_ptr__;
}

// DumpToJsonString2 @ 141991e20

FString * __thiscall FHistogram::DumpToJsonString2(FHistogram *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  FString local_58;
  FString local_48 [2];
  
  uVar7 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((this->Bins).ArrayNum != 0) {
    ::FString::AppendChar(__return_storage_ptr__,L'[');
    iVar1 = (this->Bins).ArrayNum;
    uVar9 = uVar7;
    if (0 < iVar1) {
      do {
        uVar8 = (uint)uVar9;
        uVar5 = 0;
        if ((int)uVar8 < (this->Bins).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar3)();
          return pFVar6;
        }
        pFVar2 = (this->Bins).AllocatorInstance.Data;
        if (uVar8 != 0) {
          ::FString::AppendChar(__return_storage_ptr__,L',');
        }
        DefaultConvertBinToLabel
                  (local_48,*(double *)(pFVar2 + uVar7),*(double *)(pFVar2 + uVar7 + 8));
        ::FString::PrintfImpl(&local_58,L"{\"%s\":{\"Count\":%d,\"Sum\":%.5f}}");
        iVar10 = local_58.Data.ArrayNum + -1;
        if (local_58.Data.ArrayNum == 0) {
          iVar10 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar10);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
        }
        uVar7 = uVar7 + 0x20;
        uVar9 = (ulonglong)(uVar8 + 1);
      } while ((int)(uVar8 + 1) < iVar1);
    }
    ::FString::AppendChar(__return_storage_ptr__,L']');
  }
  return __return_storage_ptr__;
}

// DumpToJsonString @ 141991fe0

FString * __thiscall
FHistogram::DumpToJsonString
          (FHistogram *this,FString *__return_storage_ptr__,
          TFunctionRef<FString___cdecl(double,double)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 local_res8;
  undefined8 local_res10;
  TFunctionRef<FString___cdecl(double,double)> *local_res18;
  FString local_68;
  void *local_58 [4];
  
  uVar7 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((this->Bins).ArrayNum != 0) {
    local_res18 = param_1;
    ::FString::AppendChar(__return_storage_ptr__,L'[');
    iVar1 = (this->Bins).ArrayNum;
    uVar10 = uVar7;
    if (0 < iVar1) {
      do {
        uVar8 = (uint)uVar7;
        uVar5 = 0;
        if ((int)uVar8 < (this->Bins).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar3)();
          return pFVar6;
        }
        pFVar2 = (this->Bins).AllocatorInstance.Data;
        if (uVar8 != 0) {
          ::FString::AppendChar(__return_storage_ptr__,L',');
        }
        local_res8 = *(undefined8 *)(pFVar2 + uVar10 + 8);
        local_res10 = *(undefined8 *)(pFVar2 + uVar10);
        (**(code **)local_res18)
                  (local_58,*(undefined8 *)&local_res18->field_0x8,&local_res10,&local_res8);
        ::FString::PrintfImpl(&local_68,L"{\"Bin\":\"%s\",\"Count\":%d,\"Sum\":%.5f}");
        iVar9 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar9);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58[0] != (void *)0x0) {
          FMemory::Free(local_58[0]);
        }
        uVar7 = (ulonglong)(uVar8 + 1);
        uVar10 = uVar10 + 0x20;
      } while ((int)(uVar8 + 1) < iVar1);
    }
    ::FString::AppendChar(__return_storage_ptr__,L']');
  }
  return __return_storage_ptr__;
}

// DumpToJsonString @ 1419921c0

FString * __thiscall FHistogram::DumpToJsonString(FHistogram *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  FString local_58;
  FString local_48 [2];
  
  uVar7 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((this->Bins).ArrayNum != 0) {
    ::FString::AppendChar(__return_storage_ptr__,L'[');
    iVar1 = (this->Bins).ArrayNum;
    uVar9 = uVar7;
    if (0 < iVar1) {
      do {
        uVar8 = (uint)uVar9;
        uVar5 = 0;
        if ((int)uVar8 < (this->Bins).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar3)();
          return pFVar6;
        }
        pFVar2 = (this->Bins).AllocatorInstance.Data;
        if (uVar8 != 0) {
          ::FString::AppendChar(__return_storage_ptr__,L',');
        }
        DefaultConvertBinToLabel
                  (local_48,*(double *)(pFVar2 + uVar7),*(double *)(pFVar2 + uVar7 + 8));
        ::FString::PrintfImpl(&local_58,L"{\"Bin\":\"%s\",\"Count\":%d,\"Sum\":%.5f}");
        iVar10 = local_58.Data.ArrayNum + -1;
        if (local_58.Data.ArrayNum == 0) {
          iVar10 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar10);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
        }
        uVar7 = uVar7 + 0x20;
        uVar9 = (ulonglong)(uVar8 + 1);
      } while ((int)(uVar8 + 1) < iVar1);
    }
    ::FString::AppendChar(__return_storage_ptr__,L']');
  }
  return __return_storage_ptr__;
}

// DumpToLog @ 141992380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHistogram::DumpToLog(FHistogram *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  
  piVar12 = &(this->Bins).ArrayNum;
  if (4 < (byte)LogHistograms._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHistograms);
  }
  iVar7 = *piVar12;
  if (iVar7 != 0) {
    iVar7 = iVar7 + -1;
    dVar3 = 0.0;
    uVar8 = 0;
    dVar4 = 0.0;
    if (0 < iVar7) {
      lVar9 = 0;
      lVar11 = (longlong)iVar7;
      do {
        uVar10 = 0;
        if ((int)uVar8 < *piVar12) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->Bins).AllocatorInstance.Data;
        if (4 < (byte)LogHistograms._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHistograms);
        }
        lVar5 = lVar9 + 0x18;
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x20;
        dVar3 = dVar3 + (double)*(int *)(pFVar1 + lVar5);
        lVar11 = lVar11 + -1;
        dVar4 = dVar3;
      } while (lVar11 != 0);
    }
    piVar12 = &(this->Bins).ArrayNum;
    iVar7 = *piVar12;
    uVar10 = iVar7 - 1;
    uVar8 = 0;
    if ((int)uVar10 < iVar7) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->Bins).AllocatorInstance.Data;
    iVar7 = *piVar12;
    if (4 < (byte)LogHistograms._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHistograms);
    }
    if ((0.0 < dVar4 + (double)*(int *)(pFVar1 + (longlong)iVar7 * 0x20 + -8)) &&
       (4 < (byte)LogHistograms._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHistograms);
    }
  }
  return;
}

// InitFromArray @ 1419969b0

void __thiscall FHistogram::InitFromArray(FHistogram *this,TArrayView<double_const_,int> *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  double *pdVar3;
  FScriptContainerElement *pFVar4;
  double *pdVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  
  this->SumOfAllMeasures = 0.0;
  this->MinimalMeasurement = 1.7976931348623157e+308;
  piVar1 = &(this->Bins).ArrayMax;
  this->CountOfAllMeasures = 0;
  this->MaximalMeasurement = -1.7976931348623157e+308;
  (this->Bins).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  uVar11 = 0;
  uVar13 = param_1->ArrayNum;
  uVar14 = uVar11;
  if (0 < (int)uVar13) {
    do {
      uVar7 = (uint)uVar11;
      uVar15 = uVar7 + 1;
      if (uVar15 == uVar13) {
        uVar9 = 0;
        if ((int)uVar7 < (int)uVar13) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->Bins).ArrayNum;
        pdVar3 = param_1->DataPtr;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,(ForAnyElementType *)this,piVar1);
        }
        (this->Bins).ArrayNum = iVar10 + 1;
        pFVar4 = (this->Bins).AllocatorInstance.Data;
        lVar12 = (longlong)iVar10 * 0x20;
        *(undefined8 *)(pFVar4 + lVar12) = *(undefined8 *)((longlong)pdVar3 + uVar14);
        *(undefined8 *)(pFVar4 + lVar12 + 8) = 0x47efffffe0000000;
        *(undefined8 *)(pFVar4 + lVar12 + 0x10) = 0;
        *(undefined4 *)(pFVar4 + lVar12 + 0x18) = 0;
      }
      else {
        uVar9 = 0;
        if ((int)uVar15 < (int)uVar13) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = param_1->ArrayNum;
        pdVar3 = param_1->DataPtr;
        uVar9 = 0;
        if ((int)uVar7 < (int)uVar13) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->Bins).ArrayNum;
        pdVar5 = param_1->DataPtr;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,(ForAnyElementType *)this,piVar1);
        }
        (this->Bins).ArrayNum = iVar10 + 1;
        pFVar4 = (this->Bins).AllocatorInstance.Data;
        uVar2 = *(undefined8 *)(uVar14 + 8 + (longlong)pdVar3);
        lVar12 = (longlong)iVar10 * 0x20;
        *(undefined8 *)(pFVar4 + lVar12) = *(undefined8 *)((longlong)pdVar5 + uVar14);
        *(undefined8 *)(pFVar4 + lVar12 + 0x10) = 0;
        *(undefined4 *)(pFVar4 + lVar12 + 0x18) = 0;
        *(undefined8 *)(pFVar4 + lVar12 + 8) = uVar2;
      }
      uVar11 = (ulonglong)uVar15;
      uVar14 = uVar14 + 8;
    } while ((int)uVar15 < (int)uVar13);
  }
  return;
}

// InitHitchTracking @ 141996c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FHistogram::InitHitchTracking(FHistogram *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  this->SumOfAllMeasures = 0.0;
  this->MinimalMeasurement = 1.7976931348623157e+308;
  piVar1 = &(this->Bins).ArrayMax;
  this->CountOfAllMeasures = 0;
  this->MaximalMeasurement = -1.7976931348623157e+308;
  (this->Bins).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = ___xmm_40220000000000000000000000000000;
  uStack_210 = _UNK_1506c8f68;
  if ((pFVar2 <= (FScriptContainerElement *)&local_218) &&
     ((FScriptContainerElement *)&local_218 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_1e0 = 0;
  local_1e8 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_218;
  *(undefined8 *)(pFVar2 + 8) = uStack_210;
  uStack_1f0 = _UNK_1506c8f78;
  local_1f8 = ___xmm_40310000000000004022000000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_208;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_1fc,uStack_200);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_1f8) &&
     ((FScriptContainerElement *)&local_1f8 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_1c0 = 0;
  local_1c8 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_1f8;
  *(undefined8 *)(pFVar2 + 8) = uStack_1f0;
  uStack_1d0 = _UNK_1506c8f88;
  local_1d8 = ___xmm_40410000000000004031000000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_1e8;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_1dc,uStack_1e0);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_1d8) &&
     ((FScriptContainerElement *)&local_1d8 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_1a0 = 0;
  local_1a8 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_1d8;
  *(undefined8 *)(pFVar2 + 8) = uStack_1d0;
  uStack_1b0 = _UNK_1506c8f98;
  local_1b8 = ___xmm_40490000000000004041000000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_1c8;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_1bc,uStack_1c0);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_1b8) &&
     ((FScriptContainerElement *)&local_1b8 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_180 = 0;
  local_188 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_1b8;
  *(undefined8 *)(pFVar2 + 8) = uStack_1b0;
  uStack_190 = _UNK_1506c8fa8;
  local_198 = ___xmm_4050c000000000004049000000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_1a8;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_19c,uStack_1a0);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_198) &&
     ((FScriptContainerElement *)&local_198 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_160 = 0;
  local_168 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_198;
  *(undefined8 *)(pFVar2 + 8) = uStack_190;
  uStack_170 = _UNK_1506c8fb8;
  local_178 = ___xmm_40590000000000004050c00000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_188;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_17c,uStack_180);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_178) &&
     ((FScriptContainerElement *)&local_178 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_140 = 0;
  local_148 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_178;
  *(undefined8 *)(pFVar2 + 8) = uStack_170;
  uStack_150 = _UNK_1506c8fc8;
  local_158 = ___xmm_40690000000000004059000000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_168;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_15c,uStack_160);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_158) &&
     ((FScriptContainerElement *)&local_158 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_120 = 0;
  local_128 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_158;
  *(undefined8 *)(pFVar2 + 8) = uStack_150;
  uStack_130 = _UNK_1506c8fd8;
  local_138 = ___xmm_4072c000000000004069000000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_148;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_13c,uStack_140);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_138) &&
     ((FScriptContainerElement *)&local_138 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_100 = 0;
  local_108 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_138;
  *(undefined8 *)(pFVar2 + 8) = uStack_130;
  uStack_110 = _UNK_1506c8fe8;
  local_118 = ___xmm_407f4000000000004072c00000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_128;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_11c,uStack_120);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_118) &&
     ((FScriptContainerElement *)&local_118 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_e0 = 0;
  local_e8 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_118;
  *(undefined8 *)(pFVar2 + 8) = uStack_110;
  uStack_f0 = _UNK_1506c8ff8;
  local_f8 = ___xmm_4087700000000000407f400000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_108;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_fc,uStack_100);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
     ((FScriptContainerElement *)&local_f8 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_c0 = 0;
  local_c8 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_f8;
  *(undefined8 *)(pFVar2 + 8) = uStack_f0;
  uStack_d0 = _UNK_1506c9008;
  local_d8 = ___xmm_408f4000000000004087700000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_e8;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_dc,uStack_e0);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_a0 = 0;
  local_a8 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_d8;
  *(undefined8 *)(pFVar2 + 8) = uStack_d0;
  uStack_b0 = _UNK_1506c9018;
  local_b8 = ___xmm_4097700000000000408f400000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_c8;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_bc,uStack_c0);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
     ((FScriptContainerElement *)&local_b8 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_80 = 0;
  local_88 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_b8;
  *(undefined8 *)(pFVar2 + 8) = uStack_b0;
  uStack_90 = _UNK_1506c9028;
  local_98 = ___xmm_409f4000000000004097700000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_a8;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_9c,uStack_a0);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_60 = 0;
  local_68 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_98;
  *(undefined8 *)(pFVar2 + 8) = uStack_90;
  uStack_70 = _UNK_1506c9038;
  local_78 = ___xmm_40a3880000000000409f400000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_88;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_7c,uStack_80);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_40 = 0;
  local_48 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_78;
  *(undefined8 *)(pFVar2 + 8) = uStack_70;
  uStack_50 = _UNK_1506c9048;
  local_58 = ___xmm_40b388000000000040a3880000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_68;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_5c,uStack_60);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  uStack_20 = 0;
  local_28 = 0;
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_58;
  *(undefined8 *)(pFVar2 + 8) = uStack_50;
  uStack_30 = _UNK_1506c9058;
  local_38 = ___xmm_47efffffe000000040b3880000000000;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_48;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_3c,uStack_40);
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)*piVar1 * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Bins).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Bins).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(undefined8 *)pFVar2 = local_38;
  *(undefined8 *)(pFVar2 + 8) = uStack_30;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = local_28;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_1c,uStack_20);
  return;
}

// InitLinear @ 1419978f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FHistogram::InitLinear(FHistogram *this,double param_1,double param_2,double param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double dStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  piVar1 = &(this->Bins).ArrayMax;
  this->SumOfAllMeasures = 0.0;
  this->MinimalMeasurement = 1.7976931348623157e+308;
  this->CountOfAllMeasures = 0;
  this->MaximalMeasurement = -1.7976931348623157e+308;
  (this->Bins).ArrayNum = 0;
  dVar5 = param_1;
  dVar6 = local_88;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,piVar1);
    dVar5 = param_1;
    dVar6 = local_88;
  }
  while (local_88 = dVar5, local_88 < param_2) {
    pFVar2 = (this->Bins).AllocatorInstance.Data;
    dVar5 = local_88 + param_3;
    local_78 = 0;
    uStack_70 = 0;
    dStack_80 = dVar5;
    if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->Bins).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)this,piVar1);
    }
    (this->Bins).ArrayNum = iVar8 + 1;
    pFVar3 = (this->Bins).AllocatorInstance.Data;
    pFVar2 = pFVar3 + (longlong)iVar8 * 0x20;
    *(double *)pFVar2 = local_88;
    *(double *)(pFVar2 + 8) = dStack_80;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x20 + 0x10;
    *(undefined8 *)pFVar3 = local_78;
    *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_6c,uStack_70);
    dVar6 = local_88;
  }
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  uStack_50 = 0;
  local_68 = local_88;
  dStack_60 = ___xmm_000000000000000047efffffe0000000;
  uStack_58 = _UNK_1506c8f58;
  if (((pFVar2 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar2 + (longlong)*piVar1 * 0x20)) &&
     (local_88 = dVar6,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       ), dVar6 = local_88, bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_88 = dVar6;
  iVar8 = (this->Bins).ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Bins).ArrayNum = iVar8 + 1;
  pFVar3 = (this->Bins).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar8 * 0x20;
  *(double *)pFVar2 = local_68;
  *(double *)(pFVar2 + 8) = dStack_60;
  pFVar3 = pFVar3 + (longlong)iVar8 * 0x20 + 0x10;
  *(undefined8 *)pFVar3 = uStack_58;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_4c,uStack_50);
  return;
}

// Reset @ 1419a8a70

void __thiscall FHistogram::Reset(FHistogram *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Bins).ArrayNum;
  pFVar2 = (this->Bins).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->Bins).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHistogram::FBin,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    *(undefined4 *)(pFVar2 + 0x18) = 0;
    *(undefined8 *)(pFVar2 + 0x10) = 0;
    pFVar2 = pFVar2 + 0x20;
  }
  this->MinimalMeasurement = 1.7976931348623157e+308;
  this->MaximalMeasurement = -1.7976931348623157e+308;
  this->SumOfAllMeasures = 0.0;
  this->CountOfAllMeasures = 0;
  return;
}

