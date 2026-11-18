// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 77

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ArithmeticArgs> @ 14a961bf0

ArithmeticArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ArithmeticArgs>
          (FProgram *this,ArithmeticArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ArithmeticArgs *pAVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pAVar5 = (ArithmeticArgs *)(*pcVar3)();
      return pAVar5;
    }
  }
  uVar6 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar7 = 0;
  if ((int)uVar6 < (this->ByteCode).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pAVar5 = (ArithmeticArgs *)(*pcVar3)();
      return pAVar5;
    }
  }
  pFVar2 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar2 + (int)uVar6);
  uVar7 = *(uint *)(pFVar2 + (longlong)(int)uVar6 + 8);
  __return_storage_ptr__->Operation = (char)uVar1;
  *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)((ulonglong)uVar1 >> 8);
  __return_storage_ptr__->A = (int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->B = uVar7;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::BoolBinaryArgs> @ 14a961cf0

BoolBinaryArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::BoolBinaryArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  BoolBinaryArgs BVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  BVar3.B = in_register_00000014;
  BVar3.A = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      BVar3 = (BoolBinaryArgs)(*pcVar1)();
      return BVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      BVar3 = (BoolBinaryArgs)(*pcVar1)();
      return BVar3;
    }
  }
  *(undefined8 *)BVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return BVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ConditionalArgs> @ 14a961de0

ConditionalArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ConditionalArgs>
          (FProgram *this,ConditionalArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ConditionalArgs *pCVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pCVar5 = (ConditionalArgs *)(*pcVar3)();
      return pCVar5;
    }
  }
  uVar6 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar7 = 0;
  if ((int)uVar6 < (this->ByteCode).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pCVar5 = (ConditionalArgs *)(*pcVar3)();
      return pCVar5;
    }
  }
  pFVar2 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar2 + (int)uVar6);
  uVar7 = *(uint *)(pFVar2 + (longlong)(int)uVar6 + 8);
  __return_storage_ptr__->condition = (int)uVar1;
  __return_storage_ptr__->yes = (int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->no = uVar7;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageBinariseArgs> @ 14a961ee0

ImageBinariseArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageBinariseArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ImageBinariseArgs IVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  IVar3.Threshold = in_register_00000014;
  IVar3.Base = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      IVar3 = (ImageBinariseArgs)(*pcVar1)();
      return IVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      IVar3 = (ImageBinariseArgs)(*pcVar1)();
      return IVar3;
    }
  }
  *(undefined8 *)IVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return IVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageBlankLayoutArgs> @ 14a961fd0

ImageBlankLayoutArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageBlankLayoutArgs>
          (FProgram *this,ImageBlankLayoutArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ImageBlankLayoutArgs *pIVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (ImageBlankLayoutArgs *)(*pcVar4)();
      return pIVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (ImageBlankLayoutArgs *)(*pcVar4)();
      return pIVar6;
    }
  }
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar3 + (int)uVar7);
  uVar2 = *(undefined4 *)(pFVar3 + (longlong)(int)uVar7 + 8);
  __return_storage_ptr__->Layout = (int)uVar1;
  __return_storage_ptr__->BlockSize[0] = (short)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->BlockSize[1] = (short)((ulonglong)uVar1 >> 0x30);
  __return_storage_ptr__->Format = (char)uVar2;
  __return_storage_ptr__->GenerateMipmaps = (char)((uint)uVar2 >> 8);
  __return_storage_ptr__->MipmapCount = (char)((uint)uVar2 >> 0x10);
  __return_storage_ptr__->field_0xb = (char)((uint)uVar2 >> 0x18);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageColourMapArgs> @ 14a9620d0

ImageColourMapArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageColourMapArgs>
          (FProgram *this,ImageColourMapArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ImageColourMapArgs *pIVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar5 = (ImageColourMapArgs *)(*pcVar3)();
      return pIVar5;
    }
  }
  uVar6 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar7 = 0;
  if ((int)uVar6 < (this->ByteCode).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar5 = (ImageColourMapArgs *)(*pcVar3)();
      return pIVar5;
    }
  }
  pFVar2 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar2 + (int)uVar6);
  uVar7 = *(uint *)(pFVar2 + (longlong)(int)uVar6 + 8);
  __return_storage_ptr__->Base = (int)uVar1;
  __return_storage_ptr__->Mask = (int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->Map = uVar7;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageComposeArgs> @ 14a9621d0

ImageComposeArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageComposeArgs>
          (FProgram *this,ImageComposeArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  ImageComposeArgs *pIVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar10 = ~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pIVar8 = (ImageComposeArgs *)(*pcVar4)();
      return pIVar8;
    }
  }
  uVar9 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar10 = 0;
  if ((int)uVar9 < (this->ByteCode).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pIVar8 = (ImageComposeArgs *)(*pcVar4)();
      return pIVar8;
    }
  }
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (int)uVar9;
  uVar5 = *(undefined8 *)pFVar1;
  uVar6 = *(undefined8 *)(pFVar1 + 8);
  uVar2 = *(ulong64 *)(pFVar3 + (longlong)(int)uVar9 + 0x10);
  __return_storage_ptr__->layout = (int)uVar5;
  __return_storage_ptr__->base = (int)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->blockImage = (int)uVar6;
  __return_storage_ptr__->mask = (int)((ulonglong)uVar6 >> 0x20);
  __return_storage_ptr__->BlockId = uVar2;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageCropArgs> @ 14a9622d0

ImageCropArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageCropArgs>
          (FProgram *this,ImageCropArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ImageCropArgs *pIVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (ImageCropArgs *)(*pcVar4)();
      return pIVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (ImageCropArgs *)(*pcVar4)();
      return pIVar6;
    }
  }
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar3 + (int)uVar7);
  uVar2 = *(undefined4 *)(pFVar3 + (longlong)(int)uVar7 + 8);
  __return_storage_ptr__->source = (int)uVar1;
  __return_storage_ptr__->minX = (short)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->minY = (short)((ulonglong)uVar1 >> 0x30);
  __return_storage_ptr__->sizeX = (short)uVar2;
  __return_storage_ptr__->sizeY = (short)((uint)uVar2 >> 0x10);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageDisplaceArgs> @ 14a9623d0

ImageDisplaceArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageDisplaceArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ImageDisplaceArgs IVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  IVar3.DisplacementMap = in_register_00000014;
  IVar3.Source = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      IVar3 = (ImageDisplaceArgs)(*pcVar1)();
      return IVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      IVar3 = (ImageDisplaceArgs)(*pcVar1)();
      return IVar3;
    }
  }
  *(undefined8 *)IVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return IVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageInterpolateArgs> @ 14a9624c0

ImageInterpolateArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageInterpolateArgs>
          (FProgram *this,ImageInterpolateArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  ImageInterpolateArgs *pIVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar9 = ~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pIVar7 = (ImageInterpolateArgs *)(*pcVar3)();
      return pIVar7;
    }
  }
  uVar8 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar9 = 0;
  if ((int)uVar8 < (this->ByteCode).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pIVar7 = (ImageInterpolateArgs *)(*pcVar3)();
      return pIVar7;
    }
  }
  pFVar2 = (this->ByteCode).AllocatorInstance.Data;
  uVar4 = *(undefined8 *)(pFVar2 + (int)uVar8);
  uVar5 = *(undefined8 *)(pFVar2 + (int)uVar8 + 8);
  uVar1 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar8 + 0x10);
  uVar9 = *(uint *)(pFVar2 + (longlong)(int)uVar8 + 0x18);
  __return_storage_ptr__->Factor = (int)uVar4;
  __return_storage_ptr__->Targets[0] = (int)((ulonglong)uVar4 >> 0x20);
  *(undefined8 *)(__return_storage_ptr__->Targets + 1) = uVar5;
  *(undefined8 *)(__return_storage_ptr__->Targets + 3) = uVar1;
  __return_storage_ptr__->Targets[5] = uVar9;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageInvertArgs> @ 14a9625c0

ImageInvertArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageInvertArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  uint in_R8D;
  
  uVar3 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (ImageInvertArgs)uVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar3 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (ImageInvertArgs)uVar3;
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined4 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return (ImageInvertArgs)param_1;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageLayerArgs> @ 14a9626b0

ImageLayerArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageLayerArgs>
          (FProgram *this,ImageLayerArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  ImageLayerArgs *pIVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pIVar6 = (ImageLayerArgs *)(*pcVar2)();
      return pIVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pIVar6 = (ImageLayerArgs *)(*pcVar2)();
      return pIVar6;
    }
  }
  pFVar1 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  uVar3 = *(undefined8 *)pFVar1;
  uVar4 = *(undefined8 *)(pFVar1 + 8);
  __return_storage_ptr__->base = (int)uVar3;
  __return_storage_ptr__->mask = (int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->blended = (int)uVar4;
  __return_storage_ptr__->blendType = (char)((ulonglong)uVar4 >> 0x20);
  __return_storage_ptr__->blendTypeAlpha = (char)((ulonglong)uVar4 >> 0x28);
  __return_storage_ptr__->BlendAlphaSourceChannel = (char)((ulonglong)uVar4 >> 0x30);
  __return_storage_ptr__->flags = (char)((ulonglong)uVar4 >> 0x38);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageLayerColourArgs> @ 14a9627a0

ImageLayerColourArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageLayerColourArgs>
          (FProgram *this,ImageLayerColourArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  ImageLayerColourArgs *pIVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pIVar6 = (ImageLayerColourArgs *)(*pcVar2)();
      return pIVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pIVar6 = (ImageLayerColourArgs *)(*pcVar2)();
      return pIVar6;
    }
  }
  pFVar1 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  uVar3 = *(undefined8 *)pFVar1;
  uVar4 = *(undefined8 *)(pFVar1 + 8);
  __return_storage_ptr__->base = (int)uVar3;
  __return_storage_ptr__->mask = (int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->colour = (int)uVar4;
  __return_storage_ptr__->blendType = (char)((ulonglong)uVar4 >> 0x20);
  __return_storage_ptr__->blendTypeAlpha = (char)((ulonglong)uVar4 >> 0x28);
  __return_storage_ptr__->BlendAlphaSourceChannel = (char)((ulonglong)uVar4 >> 0x30);
  __return_storage_ptr__->flags = (char)((ulonglong)uVar4 >> 0x38);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageLuminanceArgs> @ 14a962890

ImageLuminanceArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageLuminanceArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  uint in_R8D;
  
  uVar3 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (ImageLuminanceArgs)uVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar3 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (ImageLuminanceArgs)uVar3;
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined4 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return (ImageLuminanceArgs)param_1;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageMakeGrowMapArgs> @ 14a962980

ImageMakeGrowMapArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageMakeGrowMapArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ImageMakeGrowMapArgs IVar3;
  int in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  IVar3.border = in_register_00000014;
  IVar3.mask = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      IVar3 = (ImageMakeGrowMapArgs)(*pcVar1)();
      return IVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      IVar3 = (ImageMakeGrowMapArgs)(*pcVar1)();
      return IVar3;
    }
  }
  *(undefined8 *)IVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return IVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageMipmapArgs> @ 14a962a70

ImageMipmapArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageMipmapArgs>
          (FProgram *this,ImageMipmapArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  ImageMipmapArgs *pIVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pIVar6 = (ImageMipmapArgs *)(*pcVar2)();
      return pIVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pIVar6 = (ImageMipmapArgs *)(*pcVar2)();
      return pIVar6;
    }
  }
  pFVar1 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  uVar3 = *(undefined8 *)pFVar1;
  uVar4 = *(undefined8 *)(pFVar1 + 8);
  __return_storage_ptr__->source = (int)uVar3;
  __return_storage_ptr__->levels = (char)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->blockLevels = (char)((ulonglong)uVar3 >> 0x28);
  __return_storage_ptr__->onlyTail = (bool)(char)((ulonglong)uVar3 >> 0x30);
  __return_storage_ptr__->field_0x7 = (char)((ulonglong)uVar3 >> 0x38);
  __return_storage_ptr__->FilterType = (int)uVar4;
  __return_storage_ptr__->AddressMode = (int)((ulonglong)uVar4 >> 0x20);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageMultiLayerArgs> @ 14a962b60

ImageMultiLayerArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageMultiLayerArgs>
          (FProgram *this,ImageMultiLayerArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  ImageMultiLayerArgs *pIVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar10 = ~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pIVar8 = (ImageMultiLayerArgs *)(*pcVar4)();
      return pIVar8;
    }
  }
  uVar9 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar10 = 0;
  if ((int)uVar9 < (this->ByteCode).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pIVar8 = (ImageMultiLayerArgs *)(*pcVar4)();
      return pIVar8;
    }
  }
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (int)uVar9;
  uVar5 = *(undefined8 *)pFVar1;
  uVar6 = *(undefined8 *)(pFVar1 + 8);
  uVar2 = *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x10);
  __return_storage_ptr__->base = (int)uVar5;
  __return_storage_ptr__->mask = (int)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->blended = (int)uVar6;
  __return_storage_ptr__->rangeSize = (int)((ulonglong)uVar6 >> 0x20);
  __return_storage_ptr__->rangeId = (short)uVar2;
  __return_storage_ptr__->blendType = (char)((ulonglong)uVar2 >> 0x10);
  __return_storage_ptr__->blendTypeAlpha = (char)((ulonglong)uVar2 >> 0x18);
  __return_storage_ptr__->BlendAlphaSourceChannel = (char)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->bUseMaskFromBlended = (char)((ulonglong)uVar2 >> 0x28);
  *(short *)&__return_storage_ptr__->field_0x16 = (short)((ulonglong)uVar2 >> 0x30);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageNormalCompositeArgs> @ 14a962c60

ImageNormalCompositeArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageNormalCompositeArgs>
          (FProgram *this,ImageNormalCompositeArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  ImageNormalCompositeArgs *pIVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pIVar6 = (ImageNormalCompositeArgs *)(*pcVar2)();
      return pIVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pIVar6 = (ImageNormalCompositeArgs *)(*pcVar2)();
      return pIVar6;
    }
  }
  pFVar1 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  uVar3 = *(undefined8 *)pFVar1;
  uVar4 = *(undefined8 *)(pFVar1 + 8);
  __return_storage_ptr__->base = (int)uVar3;
  __return_storage_ptr__->normal = (int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->power = (float)(int)uVar4;
  __return_storage_ptr__->mode = (int)((ulonglong)uVar4 >> 0x20);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImagePatchArgs> @ 14a962d50

ImagePatchArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImagePatchArgs>
          (FProgram *this,ImagePatchArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ImagePatchArgs *pIVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (ImagePatchArgs *)(*pcVar4)();
      return pIVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (ImagePatchArgs *)(*pcVar4)();
      return pIVar6;
    }
  }
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar3 + (int)uVar7);
  uVar2 = *(undefined4 *)(pFVar3 + (longlong)(int)uVar7 + 8);
  __return_storage_ptr__->base = (int)uVar1;
  __return_storage_ptr__->patch = (int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->minX = (short)uVar2;
  __return_storage_ptr__->minY = (short)((uint)uVar2 >> 0x10);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImagePixelFormatArgs> @ 14a962e50

ImagePixelFormatArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImagePixelFormatArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ImagePixelFormatArgs IVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  IVar3._4_4_ = in_register_00000014;
  IVar3.source = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      IVar3 = (ImagePixelFormatArgs)(*pcVar1)();
      return IVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      IVar3 = (ImagePixelFormatArgs)(*pcVar1)();
      return IVar3;
    }
  }
  *(undefined8 *)IVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return IVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImagePlainColorArgs> @ 14a962f40

ImagePlainColorArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImagePlainColorArgs>
          (FProgram *this,ImagePlainColorArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ImagePlainColorArgs *pIVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (ImagePlainColorArgs *)(*pcVar4)();
      return pIVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (ImagePlainColorArgs *)(*pcVar4)();
      return pIVar6;
    }
  }
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar3 + (int)uVar7);
  uVar2 = *(undefined4 *)(pFVar3 + (longlong)(int)uVar7 + 8);
  __return_storage_ptr__->Color = (int)uVar1;
  __return_storage_ptr__->Format = (char)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->field_0x5 = (char)((ulonglong)uVar1 >> 0x28);
  __return_storage_ptr__->Size[0] = (short)((ulonglong)uVar1 >> 0x30);
  *(undefined4 *)(__return_storage_ptr__->Size + 1) = uVar2;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageRasterMeshArgs> @ 14a963040

ImageRasterMeshArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageRasterMeshArgs>
          (FProgram *this,ImageRasterMeshArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  ImageRasterMeshArgs *pIVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar10 = ~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pIVar8 = (ImageRasterMeshArgs *)(*pcVar2)();
      return pIVar8;
    }
  }
  uVar9 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar10 = 0;
  if ((int)uVar9 < (this->ByteCode).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pIVar8 = (ImageRasterMeshArgs *)(*pcVar2)();
      return pIVar8;
    }
  }
  pFVar1 = (this->ByteCode).AllocatorInstance.Data;
  uVar3 = *(undefined8 *)(pFVar1 + (int)uVar9 + 8);
  uVar4 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar9 + 0x10);
  uVar5 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar9 + 0x10 + 8);
  __return_storage_ptr__->BlockId = *(ulong64 *)(pFVar1 + (int)uVar9);
  __return_storage_ptr__->mesh = (int)uVar3;
  __return_storage_ptr__->image = (int)((ulonglong)uVar3 >> 0x20);
  uVar3 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar9 + 0x20);
  uVar6 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar9 + 0x20 + 8);
  __return_storage_ptr__->angleFadeProperties = (int)uVar4;
  __return_storage_ptr__->mask = (int)((ulonglong)uVar4 >> 0x20);
  __return_storage_ptr__->projector = (int)uVar5;
  __return_storage_ptr__->sizeX = (short)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->sizeY = (short)((ulonglong)uVar5 >> 0x30);
  __return_storage_ptr__->SourceSizeX = (short)uVar3;
  __return_storage_ptr__->SourceSizeY = (short)((ulonglong)uVar3 >> 0x10);
  __return_storage_ptr__->CropMinX = (short)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->CropMinY = (short)((ulonglong)uVar3 >> 0x30);
  __return_storage_ptr__->UncroppedSizeX = (short)uVar6;
  __return_storage_ptr__->UncroppedSizeY = (short)((ulonglong)uVar6 >> 0x10);
  __return_storage_ptr__->field_0x2c = (char)((ulonglong)uVar6 >> 0x20);
  __return_storage_ptr__->LayoutIndex = (char)((ulonglong)uVar6 >> 0x28);
  *(short *)&__return_storage_ptr__->field_0x2e = (short)((ulonglong)uVar6 >> 0x30);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageResizeArgs> @ 14a963140

ImageResizeArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageResizeArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ImageResizeArgs IVar3;
  ushort in_register_00000014 [2];
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  IVar3.Size = in_register_00000014;
  IVar3.Source = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      IVar3 = (ImageResizeArgs)(*pcVar1)();
      return IVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      IVar3 = (ImageResizeArgs)(*pcVar1)();
      return IVar3;
    }
  }
  *(undefined8 *)IVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return IVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageResizeLikeArgs> @ 14a963230

ImageResizeLikeArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageResizeLikeArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ImageResizeLikeArgs IVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  IVar3.SizeSource = in_register_00000014;
  IVar3.Source = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      IVar3 = (ImageResizeLikeArgs)(*pcVar1)();
      return IVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      IVar3 = (ImageResizeLikeArgs)(*pcVar1)();
      return IVar3;
    }
  }
  *(undefined8 *)IVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return IVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageResizeRelArgs> @ 14a963320

ImageResizeRelArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageResizeRelArgs>
          (FProgram *this,ImageResizeRelArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ImageResizeRelArgs *pIVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (ImageResizeRelArgs *)(*pcVar4)();
      return pIVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (ImageResizeRelArgs *)(*pcVar4)();
      return pIVar6;
    }
  }
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar3 + (int)uVar7);
  fVar2 = *(float *)(pFVar3 + (longlong)(int)uVar7 + 8);
  __return_storage_ptr__->Source = (int)uVar1;
  __return_storage_ptr__->Factor[0] = (float)(int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->Factor[1] = fVar2;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageSaturateArgs> @ 14a963420

ImageSaturateArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageSaturateArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ImageSaturateArgs IVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  IVar3.Factor = in_register_00000014;
  IVar3.Base = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      IVar3 = (ImageSaturateArgs)(*pcVar1)();
      return IVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      IVar3 = (ImageSaturateArgs)(*pcVar1)();
      return IVar3;
    }
  }
  *(undefined8 *)IVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return IVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageSwizzleArgs> @ 14a963510

ImageSwizzleArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageSwizzleArgs>
          (FProgram *this,ImageSwizzleArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  ImageSwizzleArgs *pIVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar10 = ~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pIVar8 = (ImageSwizzleArgs *)(*pcVar4)();
      return pIVar8;
    }
  }
  uVar9 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar10 = 0;
  if ((int)uVar9 < (this->ByteCode).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pIVar8 = (ImageSwizzleArgs *)(*pcVar4)();
      return pIVar8;
    }
  }
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (int)uVar9;
  uVar5 = *(undefined8 *)pFVar1;
  uVar6 = *(undefined8 *)(pFVar1 + 8);
  uVar2 = *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x10);
  __return_storage_ptr__->format = (char)uVar5;
  __return_storage_ptr__->sourceChannels[0] = (char)((ulonglong)uVar5 >> 8);
  __return_storage_ptr__->sourceChannels[1] = (char)((ulonglong)uVar5 >> 0x10);
  __return_storage_ptr__->sourceChannels[2] = (char)((ulonglong)uVar5 >> 0x18);
  __return_storage_ptr__->sourceChannels[3] = (char)((ulonglong)uVar5 >> 0x20);
  *(int3 *)&__return_storage_ptr__->field_0x5 = (int3)((ulonglong)uVar5 >> 0x28);
  *(undefined8 *)__return_storage_ptr__->sources = uVar6;
  *(undefined8 *)(__return_storage_ptr__->sources + 2) = uVar2;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageTransformArgs> @ 14a963610

ImageTransformArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ImageTransformArgs>
          (FProgram *this,ImageTransformArgs *__return_storage_ptr__,uint param_1)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  ImageTransformArgs *pIVar9;
  uint uVar10;
  uint uVar11;
  
  __return_storage_ptr__->Base = 0;
  __return_storage_ptr__->OffsetX = 0;
  __return_storage_ptr__->OffsetY = 0;
  __return_storage_ptr__->ScaleX = 0;
  __return_storage_ptr__->ScaleY = 0;
  __return_storage_ptr__->Rotation = 0;
  __return_storage_ptr__->SizeX = 0;
  __return_storage_ptr__->SizeY = 0;
  __return_storage_ptr__->SourceSizeX = 0;
  __return_storage_ptr__->SourceSizeY = 0;
  uVar10 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar10 = ~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pIVar9 = (ImageTransformArgs *)(*pcVar3)();
      return pIVar9;
    }
  }
  uVar11 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar10 = 0;
  if ((int)uVar11 < (this->ByteCode).ArrayNum) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pIVar9 = (ImageTransformArgs *)(*pcVar3)();
      return pIVar9;
    }
  }
  pFVar2 = (this->ByteCode).AllocatorInstance.Data;
  uVar4 = *(undefined8 *)(pFVar2 + (int)uVar11);
  uVar5 = *(undefined8 *)(pFVar2 + (int)uVar11 + 8);
  uVar6 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar11 + 0x10);
  uVar7 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar11 + 0x10 + 8);
  uVar1 = *(undefined4 *)(pFVar2 + (longlong)(int)uVar11 + 0x20);
  __return_storage_ptr__->Base = (int)uVar4;
  __return_storage_ptr__->OffsetX = (int)((ulonglong)uVar4 >> 0x20);
  __return_storage_ptr__->OffsetY = (int)uVar5;
  __return_storage_ptr__->ScaleX = (int)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->ScaleY = (int)uVar6;
  __return_storage_ptr__->Rotation = (int)((ulonglong)uVar6 >> 0x20);
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar7;
  __return_storage_ptr__->SourceSizeX = (short)uVar1;
  __return_storage_ptr__->SourceSizeY = (short)((uint)uVar1 >> 0x10);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::InstanceAddArgs> @ 14a963720

InstanceAddArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::InstanceAddArgs>
          (FProgram *this,InstanceAddArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  InstanceAddArgs *pIVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar9 = ~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pIVar7 = (InstanceAddArgs *)(*pcVar3)();
      return pIVar7;
    }
  }
  uVar8 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar9 = 0;
  if ((int)uVar8 < (this->ByteCode).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pIVar7 = (InstanceAddArgs *)(*pcVar3)();
      return pIVar7;
    }
  }
  pFVar2 = (this->ByteCode).AllocatorInstance.Data;
  uVar4 = *(undefined8 *)(pFVar2 + (int)uVar8);
  uVar5 = *(undefined8 *)(pFVar2 + (int)uVar8 + 8);
  uVar1 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar8 + 0x10);
  uVar9 = *(uint *)(pFVar2 + (longlong)(int)uVar8 + 0x18);
  __return_storage_ptr__->instance = (int)uVar4;
  __return_storage_ptr__->value = (int)((ulonglong)uVar4 >> 0x20);
  __return_storage_ptr__->id = (int)uVar5;
  __return_storage_ptr__->ExternalId = (int)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->SharedSurfaceId = (int)uVar1;
  __return_storage_ptr__->name = (int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->RelevantParametersListIndex = uVar9;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::InstanceAddMaterialArgs> @ 14a963820

InstanceAddMaterialArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::InstanceAddMaterialArgs>
          (FProgram *this,InstanceAddMaterialArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  InstanceAddMaterialArgs *pIVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar5 = (InstanceAddMaterialArgs *)(*pcVar3)();
      return pIVar5;
    }
  }
  uVar6 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar7 = 0;
  if ((int)uVar6 < (this->ByteCode).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar5 = (InstanceAddMaterialArgs *)(*pcVar3)();
      return pIVar5;
    }
  }
  pFVar2 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar2 + (int)uVar6);
  uVar7 = *(uint *)(pFVar2 + (longlong)(int)uVar6 + 8);
  __return_storage_ptr__->Instance = (int)uVar1;
  __return_storage_ptr__->Material = (int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->RelevantParametersListIndex = uVar7;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MaterialBreakArgs> @ 14a963920

MaterialBreakArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MaterialBreakArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  MaterialBreakArgs MVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  MVar3.ParameterName = in_register_00000014;
  MVar3.Material = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MaterialBreakArgs)(*pcVar1)();
      return MVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MaterialBreakArgs)(*pcVar1)();
      return MVar3;
    }
  }
  *(undefined8 *)MVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return MVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ParameterArgs> @ 14a963a10

ParameterArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ParameterArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  uint in_R8D;
  
  uVar3 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (ParameterArgs)uVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar3 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (ParameterArgs)uVar3;
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined4 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return (ParameterArgs)param_1;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ResourceConstantArgs> @ 14a963b00

ResourceConstantArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ResourceConstantArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  uint in_R8D;
  
  uVar3 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (ResourceConstantArgs)uVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar3 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (ResourceConstantArgs)uVar3;
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined4 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return (ResourceConstantArgs)param_1;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ResourceReferenceArgs> @ 14a963bf0

ResourceReferenceArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ResourceReferenceArgs>
          (FProgram *this,ResourceReferenceArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  ResourceReferenceArgs *pRVar5;
  uint uVar6;
  uint uVar7;
  
  (__return_storage_ptr__->ImageDesc).m_size.field0_0x0 = (TIntVector2<unsigned_short>_u_0)0x0;
  (__return_storage_ptr__->ImageDesc).m_format = None;
  (__return_storage_ptr__->ImageDesc).m_lods = '\0';
  uVar6 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pRVar5 = (ResourceReferenceArgs *)(*pcVar2)();
      return pRVar5;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar6 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pRVar5 = (ResourceReferenceArgs *)(*pcVar2)();
      return pRVar5;
    }
  }
  pFVar1 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  uVar3 = *(undefined8 *)(pFVar1 + 8);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pFVar1;
  __return_storage_ptr__->ID = (int)uVar3;
  __return_storage_ptr__->ForceLoad = (char)((ulonglong)uVar3 >> 0x20);
  *(int3 *)&__return_storage_ptr__->field_0xd = (int3)((ulonglong)uVar3 >> 0x28);
  return __return_storage_ptr__;
}

// operator() @ 14a980b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<UE::Mutable::Private::FMesh_const_,1> * __thiscall
`UE::Mutable::Private::FProgram::
GetConstant<`UE::Mutable::Private::CodeRunner::RunCode_ConstantResource'::__l5::<lambda_1>_>'::__l2
::<lambda_1>::operator()
          (void *this,TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *__return_storage_ptr__,
          FConstantResourceIndex param_1)

{
  longlong lVar1;
  TTypeCompatibleBytes<UE::Mutable::Private::FMesh> **ppTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *pTVar6;
  TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint *puVar9;
  FSharedReferencer<1> FVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  TTypeCompatibleBytes<UE::Mutable::Private::FMesh> *pTVar15;
  bool bVar16;
  TTypeCompatibleBytes<UE::Mutable::Private::FMesh> *local_38;
  FSharedReferencer<1> FStack_30;
  TTypeCompatibleBytes<UE::Mutable::Private::FMesh> *local_28;
  FSharedReferencer<1> FStack_20;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId875,"Mutable_GetConstant_Mesh_GetMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
               ,0x36b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId875);
  }
  lVar1 = *(longlong *)this;
  if ((BADTYPE)param_1.Streamable) {
    uVar14 = param_1.Index;
    if (*(int *)(lVar1 + 0x140) != *(int *)(lVar1 + 0x16c)) {
      lVar12 = *(longlong *)(lVar1 + 0x178);
      if (*(longlong *)(lVar1 + 0x178) == 0) {
        lVar12 = lVar1 + 0x170;
      }
      uVar5 = *(uint *)(lVar12 + (ulonglong)(*(int *)(lVar1 + 0x180) - 1U & uVar14) * 4);
      if (uVar5 != 0xffffffff) {
        do {
          puVar9 = (uint *)((longlong)(int)uVar5 * 0x20 + *(longlong *)(lVar1 + 0x138));
          if (*puVar9 == uVar14) {
            puVar13 = puVar9 + 2;
            if (puVar9 == (uint *)0x0) {
              puVar13 = (uint *)0x0;
            }
            if (puVar13 != (uint *)0x0) {
              __return_storage_ptr__->Object = *(FMesh **)puVar13;
              pTVar8 = *(TReferenceControllerBase<1> **)(puVar13 + 2);
              goto LAB_14a980e0b;
            }
            break;
          }
          uVar5 = puVar9[6];
        } while (uVar5 != 0xffffffff);
      }
    }
    if (**(longlong **)((longlong)this + 8) == 0) {
      pTVar7 = ::operator_new(0x1a8);
      if (pTVar7 == (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
        pTVar7 = (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0;
        local_28 = ___xmm_00000000000000000000000000000010;
        FStack_20.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
        pTVar15 = (TTypeCompatibleBytes<UE::Mutable::Private::FMesh> *)&DAT_00000010;
      }
      else {
        pTVar7 = SharedPointerInternals::
                 TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1>::
                 TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1><>(pTVar7);
        pTVar15 = &pTVar7->ObjectStorage;
        if ((pTVar15 == (TTypeCompatibleBytes<UE::Mutable::Private::FMesh> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar3)();
          return pTVar6;
        }
        local_28 = pTVar15;
        FStack_20.ReferenceController = (TReferenceControllerBase<1> *)pTVar7;
        if (pTVar7 != (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
          LOCK();
          *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
          UNLOCK();
        }
      }
      ppTVar2 = *(TTypeCompatibleBytes<UE::Mutable::Private::FMesh> ***)((longlong)this + 8);
      FVar10.ReferenceController = FStack_20.ReferenceController;
      if (ppTVar2 != &local_28) {
        *ppTVar2 = pTVar15;
        local_28 = (TTypeCompatibleBytes<UE::Mutable::Private::FMesh> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(ppTVar2 + 1),&FStack_20);
        FVar10.ReferenceController = FStack_20.ReferenceController;
      }
LAB_14a980df0:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar7);
    }
  }
  else {
    uVar14 = param_1.Index;
    if ((int)uVar14 < *(int *)(lVar1 + 0x130)) {
      if ((*(int *)(lVar1 + 0x130) <= (int)uVar14) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar3)();
        return pTVar6;
      }
      puVar11 = (undefined8 *)((ulonglong)uVar14 * 0x10 + *(longlong *)(lVar1 + 0x128));
      __return_storage_ptr__->Object = (FMesh *)*puVar11;
      pTVar8 = (TReferenceControllerBase<1> *)puVar11[1];
      goto LAB_14a980e0b;
    }
    if (**(longlong **)((longlong)this + 8) == 0) {
      pTVar7 = ::operator_new(0x1a8);
      if (pTVar7 == (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
        pTVar7 = (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0;
        local_38 = ___xmm_00000000000000000000000000000010;
        FStack_30.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
        pTVar15 = (TTypeCompatibleBytes<UE::Mutable::Private::FMesh> *)&DAT_00000010;
      }
      else {
        pTVar7 = SharedPointerInternals::
                 TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1>::
                 TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1><>(pTVar7);
        pTVar15 = &pTVar7->ObjectStorage;
        if ((pTVar15 == (TTypeCompatibleBytes<UE::Mutable::Private::FMesh> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar3)();
          return pTVar6;
        }
        local_38 = pTVar15;
        FStack_30.ReferenceController = (TReferenceControllerBase<1> *)pTVar7;
        if (pTVar7 != (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
          LOCK();
          *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
          UNLOCK();
        }
      }
      ppTVar2 = *(TTypeCompatibleBytes<UE::Mutable::Private::FMesh> ***)((longlong)this + 8);
      FVar10.ReferenceController = FStack_30.ReferenceController;
      if (ppTVar2 != &local_38) {
        *ppTVar2 = pTVar15;
        local_38 = (TTypeCompatibleBytes<UE::Mutable::Private::FMesh> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(ppTVar2 + 1),&FStack_30);
        FVar10.ReferenceController = FStack_30.ReferenceController;
      }
      goto LAB_14a980df0;
    }
  }
  puVar11 = *(undefined8 **)((longlong)this + 8);
  __return_storage_ptr__->Object = (FMesh *)*puVar11;
  pTVar8 = (TReferenceControllerBase<1> *)puVar11[1];
LAB_14a980e0b:
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetImageLOD @ 14a9a69a0

TSharedPtr<UE::Mutable::Private::FImage_const_,1> * __thiscall
UE::Mutable::Private::FProgram::GetImageLOD
          (FProgram *this,TSharedPtr<UE::Mutable::Private::FImage_const_,1> *__return_storage_ptr__,
          FConstantResourceIndex param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FImage *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar7;
  uint *puVar8;
  uint *puVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 *puVar11;
  uint uVar12;
  
  __return_storage_ptr__->Object = (FImage *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((BADTYPE)param_1.Streamable) {
    uVar12 = param_1.Index;
    if (*(int *)&(this->ConstantImageLODsStreamed).field_0x8 ==
        *(int *)&(this->ConstantImageLODsStreamed).field_0x34) {
      return __return_storage_ptr__;
    }
    puVar11 = *(undefined1 **)&(this->ConstantImageLODsStreamed).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ConstantImageLODsStreamed).field_0x38;
    }
    uVar6 = *(uint *)(puVar11 +
                     (ulonglong)
                     (*(int *)&(this->ConstantImageLODsStreamed).field_0x48 - 1U & uVar12) * 4);
    if (uVar6 == 0xffffffff) {
      return __return_storage_ptr__;
    }
    while (puVar9 = (uint *)((longlong)(int)uVar6 * 0x20 +
                            *(longlong *)&this->ConstantImageLODsStreamed), *puVar9 != uVar12) {
      uVar6 = puVar9[6];
      if (uVar6 == 0xffffffff) {
        return __return_storage_ptr__;
      }
    }
    puVar8 = puVar9 + 2;
    if (puVar9 == (uint *)0x0) {
      puVar8 = (uint *)0x0;
    }
    if (puVar8 == (uint *)0x0) {
      return __return_storage_ptr__;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(puVar8 + 2);
    pFVar3 = *(FImage **)puVar8;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    __return_storage_ptr__->Object = pFVar3;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  }
  else {
    uVar12 = param_1.Index;
    if ((this->ConstantImageLODsPermanent).ArrayNum <= (int)uVar12) {
      return __return_storage_ptr__;
    }
    if (((this->ConstantImageLODsPermanent).ArrayNum <= (int)uVar12) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar4)();
      return pTVar7;
    }
    pFVar1 = (this->ConstantImageLODsPermanent).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + (ulonglong)uVar12 * 0x10 + 8);
    pFVar3 = *(FImage **)(pFVar1 + (ulonglong)uVar12 * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    __return_storage_ptr__->Object = pFVar3;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOpArgsPointer @ 14a9a6d70

uchar * __thiscall UE::Mutable::Private::FProgram::GetOpArgsPointer(FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  return (uchar *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::BoolEqualScalarConstArgs> @ 14aa8c750

BoolEqualScalarConstArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::BoolEqualScalarConstArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  BoolEqualScalarConstArgs BVar3;
  int in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  BVar3.Constant = in_register_00000014;
  BVar3.Value = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      BVar3 = (BoolEqualScalarConstArgs)(*pcVar1)();
      return BVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      BVar3 = (BoolEqualScalarConstArgs)(*pcVar1)();
      return BVar3;
    }
  }
  *(undefined8 *)BVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return BVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::BoolNotArgs> @ 14aa8c840

BoolNotArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::BoolNotArgs>(FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  uint in_R8D;
  
  uVar3 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (BoolNotArgs)uVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar3 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (BoolNotArgs)uVar3;
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined4 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return (BoolNotArgs)param_1;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ColourSampleImageArgs> @ 14aa8c930

ColourSampleImageArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ColourSampleImageArgs>
          (FProgram *this,ColourSampleImageArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  ColourSampleImageArgs *pCVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pCVar6 = (ColourSampleImageArgs *)(*pcVar2)();
      return pCVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pCVar6 = (ColourSampleImageArgs *)(*pcVar2)();
      return pCVar6;
    }
  }
  pFVar1 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  uVar3 = *(undefined8 *)pFVar1;
  uVar4 = *(undefined8 *)(pFVar1 + 8);
  __return_storage_ptr__->Image = (int)uVar3;
  __return_storage_ptr__->X = (int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->Y = (int)uVar4;
  __return_storage_ptr__->Filter = (char)((ulonglong)uVar4 >> 0x20);
  *(int3 *)&__return_storage_ptr__->field_0xd = (int3)((ulonglong)uVar4 >> 0x28);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ColourSwizzleArgs> @ 14aa8ca20

ColourSwizzleArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ColourSwizzleArgs>
          (FProgram *this,ColourSwizzleArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  ColourSwizzleArgs *pCVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar9 = ~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pCVar7 = (ColourSwizzleArgs *)(*pcVar3)();
      return pCVar7;
    }
  }
  uVar8 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar9 = 0;
  if ((int)uVar8 < (this->ByteCode).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pCVar7 = (ColourSwizzleArgs *)(*pcVar3)();
      return pCVar7;
    }
  }
  pFVar2 = (this->ByteCode).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (int)uVar8;
  uVar4 = *(undefined8 *)pFVar1;
  uVar5 = *(undefined8 *)(pFVar1 + 8);
  uVar9 = *(uint *)(pFVar2 + (longlong)(int)uVar8 + 0x10);
  __return_storage_ptr__->sourceChannels[0] = (char)uVar4;
  __return_storage_ptr__->sourceChannels[1] = (char)((ulonglong)uVar4 >> 8);
  __return_storage_ptr__->sourceChannels[2] = (char)((ulonglong)uVar4 >> 0x10);
  __return_storage_ptr__->sourceChannels[3] = (char)((ulonglong)uVar4 >> 0x18);
  __return_storage_ptr__->sources[0] = (int)((ulonglong)uVar4 >> 0x20);
  *(undefined8 *)(__return_storage_ptr__->sources + 1) = uVar5;
  __return_storage_ptr__->sources[3] = uVar9;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::InstanceAddExtensionDataArgs> @ 14aa8cb10

InstanceAddExtensionDataArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::InstanceAddExtensionDataArgs>
          (FProgram *this,InstanceAddExtensionDataArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  InstanceAddExtensionDataArgs *pIVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar5 = (InstanceAddExtensionDataArgs *)(*pcVar3)();
      return pIVar5;
    }
  }
  uVar6 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar7 = 0;
  if ((int)uVar6 < (this->ByteCode).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar5 = (InstanceAddExtensionDataArgs *)(*pcVar3)();
      return pIVar5;
    }
  }
  pFVar2 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar2 + (int)uVar6);
  uVar7 = *(uint *)(pFVar2 + (longlong)(int)uVar6 + 8);
  __return_storage_ptr__->Instance = (int)uVar1;
  __return_storage_ptr__->ExtensionData = (int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->ExtensionDataName = uVar7;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::LayoutFromMeshArgs> @ 14aa8cc10

LayoutFromMeshArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::LayoutFromMeshArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  LayoutFromMeshArgs LVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  LVar3._4_4_ = in_register_00000014;
  LVar3.Mesh = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      LVar3 = (LayoutFromMeshArgs)(*pcVar1)();
      return LVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      LVar3 = (LayoutFromMeshArgs)(*pcVar1)();
      return LVar3;
    }
  }
  *(undefined8 *)LVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return LVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::LayoutMergeArgs> @ 14aa8cd00

LayoutMergeArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::LayoutMergeArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  LayoutMergeArgs LVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  LVar3.Added = in_register_00000014;
  LVar3.Base = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      LVar3 = (LayoutMergeArgs)(*pcVar1)();
      return LVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      LVar3 = (LayoutMergeArgs)(*pcVar1)();
      return LVar3;
    }
  }
  *(undefined8 *)LVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return LVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::LayoutPackArgs> @ 14aa8cdf0

LayoutPackArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::LayoutPackArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  uint in_R8D;
  
  uVar3 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (LayoutPackArgs)uVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar3 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (LayoutPackArgs)uVar3;
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined4 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return (LayoutPackArgs)param_1;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::LayoutRemoveBlocksArgs> @ 14aa8cee0

LayoutRemoveBlocksArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::LayoutRemoveBlocksArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  LayoutRemoveBlocksArgs LVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  LVar3.ReferenceLayout = in_register_00000014;
  LVar3.Source = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      LVar3 = (LayoutRemoveBlocksArgs)(*pcVar1)();
      return LVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      LVar3 = (LayoutRemoveBlocksArgs)(*pcVar1)();
      return LVar3;
    }
  }
  *(undefined8 *)LVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return LVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshAddMetadataArgs> @ 14aa8cfd0

MeshAddMetadataArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshAddMetadataArgs>
          (FProgram *this,MeshAddMetadataArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ResourceIdOrUInt64ListAddress RVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  MeshAddMetadataArgs *pMVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar10 = ~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pMVar8 = (MeshAddMetadataArgs *)(*pcVar4)();
      return pMVar8;
    }
  }
  uVar9 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar10 = 0;
  if ((int)uVar9 < (this->ByteCode).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pMVar8 = (MeshAddMetadataArgs *)(*pcVar4)();
      return pMVar8;
    }
  }
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (int)uVar9;
  uVar5 = *(undefined8 *)pFVar1;
  uVar6 = *(undefined8 *)(pFVar1 + 8);
  RVar2 = *(ResourceIdOrUInt64ListAddress *)(pFVar3 + (longlong)(int)uVar9 + 0x10);
  __return_storage_ptr__->Flags = (int)uVar5;
  __return_storage_ptr__->Source = (int)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->Tags = (TagAddressOrUInt32ListAddress)(int)uVar6;
  __return_storage_ptr__->SkeletonIds =
       (SkeletonIdOrUInt32ListAddress)(int)((ulonglong)uVar6 >> 0x20);
  __return_storage_ptr__->ResourceIds = RVar2;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshApplyLayoutArgs> @ 14aa8d0d0

MeshApplyLayoutArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshApplyLayoutArgs>
          (FProgram *this,MeshApplyLayoutArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  MeshApplyLayoutArgs *pMVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pMVar6 = (MeshApplyLayoutArgs *)(*pcVar4)();
      return pMVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pMVar6 = (MeshApplyLayoutArgs *)(*pcVar4)();
      return pMVar6;
    }
  }
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar3 + (int)uVar7);
  uVar2 = *(undefined4 *)(pFVar3 + (longlong)(int)uVar7 + 8);
  __return_storage_ptr__->Mesh = (int)uVar1;
  __return_storage_ptr__->Layout = (int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)&__return_storage_ptr__->Channel = uVar2;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshApplyPoseArgs> @ 14aa8d1d0

MeshApplyPoseArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshApplyPoseArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  MeshApplyPoseArgs MVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  MVar3.pose = in_register_00000014;
  MVar3.base = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshApplyPoseArgs)(*pcVar1)();
      return MVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshApplyPoseArgs)(*pcVar1)();
      return MVar3;
    }
  }
  *(undefined8 *)MVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return MVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshApplyShapeArgs> @ 14aa8d2c0

MeshApplyShapeArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshApplyShapeArgs>
          (FProgram *this,MeshApplyShapeArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  MeshApplyShapeArgs *pMVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pMVar5 = (MeshApplyShapeArgs *)(*pcVar3)();
      return pMVar5;
    }
  }
  uVar6 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar7 = 0;
  if ((int)uVar6 < (this->ByteCode).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pMVar5 = (MeshApplyShapeArgs *)(*pcVar3)();
      return pMVar5;
    }
  }
  pFVar2 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar2 + (int)uVar6);
  uVar7 = *(uint *)(pFVar2 + (longlong)(int)uVar6 + 8);
  __return_storage_ptr__->mesh = (int)uVar1;
  __return_storage_ptr__->shape = (int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->flags = uVar7;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshBindShapeArgs> @ 14aa8d3c0

MeshBindShapeArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshBindShapeArgs>
          (FProgram *this,MeshBindShapeArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  MeshBindShapeArgs *pMVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar9 = ~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pMVar7 = (MeshBindShapeArgs *)(*pcVar3)();
      return pMVar7;
    }
  }
  uVar8 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar9 = 0;
  if ((int)uVar8 < (this->ByteCode).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pMVar7 = (MeshBindShapeArgs *)(*pcVar3)();
      return pMVar7;
    }
  }
  pFVar2 = (this->ByteCode).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (int)uVar8;
  uVar4 = *(undefined8 *)pFVar1;
  uVar5 = *(undefined8 *)(pFVar1 + 8);
  uVar9 = *(uint *)(pFVar2 + (longlong)(int)uVar8 + 0x10);
  __return_storage_ptr__->mesh = (int)uVar4;
  __return_storage_ptr__->shape = (int)((ulonglong)uVar4 >> 0x20);
  __return_storage_ptr__->flags = (int)uVar5;
  __return_storage_ptr__->bindingMethod = (int)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->ColorUsage = uVar9;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshClipDeformArgs> @ 14aa8d4b0

MeshClipDeformArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshClipDeformArgs>
          (FProgram *this,MeshClipDeformArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  MeshClipDeformArgs *pMVar6;
  uint uVar7;
  uint uVar8;
  
  __return_storage_ptr__->clipWeightThreshold = 0.9;
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pMVar6 = (MeshClipDeformArgs *)(*pcVar2)();
      return pMVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pMVar6 = (MeshClipDeformArgs *)(*pcVar2)();
      return pMVar6;
    }
  }
  pFVar1 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  uVar3 = *(undefined8 *)pFVar1;
  uVar4 = *(undefined8 *)(pFVar1 + 8);
  __return_storage_ptr__->mesh = (int)uVar3;
  __return_storage_ptr__->clipShape = (int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->clipWeightThreshold = (float)(int)uVar4;
  __return_storage_ptr__->FaceCullStrategy = (char)((ulonglong)uVar4 >> 0x20);
  *(int3 *)&__return_storage_ptr__->field_0xd = (int3)((ulonglong)uVar4 >> 0x28);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshClipMorphPlaneArgs> @ 14aa8d5a0

MeshClipMorphPlaneArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshClipMorphPlaneArgs>
          (FProgram *this,MeshClipMorphPlaneArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  MeshClipMorphPlaneArgs *pMVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar10 = ~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pMVar8 = (MeshClipMorphPlaneArgs *)(*pcVar4)();
      return pMVar8;
    }
  }
  uVar9 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar10 = 0;
  if ((int)uVar9 < (this->ByteCode).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pMVar8 = (MeshClipMorphPlaneArgs *)(*pcVar4)();
      return pMVar8;
    }
  }
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  uVar5 = *(undefined8 *)(pFVar3 + (int)uVar9);
  uVar6 = *(undefined8 *)(pFVar3 + (int)uVar9 + 8);
  uVar1 = *(undefined8 *)(pFVar3 + (longlong)(int)uVar9 + 0x10);
  uVar2 = *(undefined4 *)(pFVar3 + (longlong)(int)uVar9 + 0x18);
  __return_storage_ptr__->Source = (int)uVar5;
  __return_storage_ptr__->MorphShape = (int)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->VertexSelectionShapeOrBone = (int)uVar6;
  __return_storage_ptr__->Dist = (float)(int)((ulonglong)uVar6 >> 0x20);
  __return_storage_ptr__->Factor = (float)(int)uVar1;
  __return_storage_ptr__->MaxBoneRadius = (float)(int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->VertexSelectionType = (char)uVar2;
  __return_storage_ptr__->FaceCullStrategy = (char)((uint)uVar2 >> 8);
  *(short *)&__return_storage_ptr__->field_0x1a = (short)((uint)uVar2 >> 0x10);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshClipWithMeshArgs> @ 14aa8d6a0

MeshClipWithMeshArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshClipWithMeshArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  MeshClipWithMeshArgs MVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  MVar3.ClipMesh = in_register_00000014;
  MVar3.Source = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshClipWithMeshArgs)(*pcVar1)();
      return MVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshClipWithMeshArgs)(*pcVar1)();
      return MVar3;
    }
  }
  *(undefined8 *)MVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return MVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshConstantArgs> @ 14aa8d790

MeshConstantArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshConstantArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  MeshConstantArgs MVar3;
  int in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  MVar3.Skeleton = in_register_00000014;
  MVar3.Value = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshConstantArgs)(*pcVar1)();
      return MVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshConstantArgs)(*pcVar1)();
      return MVar3;
    }
  }
  *(undefined8 *)MVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return MVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshFormatArgs> @ 14aa8d880

MeshFormatArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshFormatArgs>
          (FProgram *this,MeshFormatArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  MeshFormatArgs *pMVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pMVar6 = (MeshFormatArgs *)(*pcVar2)();
      return pMVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pMVar6 = (MeshFormatArgs *)(*pcVar2)();
      return pMVar6;
    }
  }
  pFVar1 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  uVar3 = *(undefined8 *)pFVar1;
  uVar4 = *(undefined8 *)(pFVar1 + 8);
  __return_storage_ptr__->source = (int)uVar3;
  __return_storage_ptr__->format = (int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->EFlags = (int)uVar4;
  __return_storage_ptr__->Flags = (char)((ulonglong)uVar4 >> 0x20);
  *(int3 *)&__return_storage_ptr__->field_0xd = (int3)((ulonglong)uVar4 >> 0x28);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshMaskClipMeshArgs> @ 14aa8d970

MeshMaskClipMeshArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshMaskClipMeshArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  MeshMaskClipMeshArgs MVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  MVar3.clip = in_register_00000014;
  MVar3.source = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshMaskClipMeshArgs)(*pcVar1)();
      return MVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshMaskClipMeshArgs)(*pcVar1)();
      return MVar3;
    }
  }
  *(undefined8 *)MVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return MVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshMaskClipUVMaskArgs> @ 14aa8da60

MeshMaskClipUVMaskArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshMaskClipUVMaskArgs>
          (FProgram *this,MeshMaskClipUVMaskArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  MeshMaskClipUVMaskArgs *pMVar8;
  uint uVar9;
  uint uVar10;
  
  __return_storage_ptr__->Source = 0;
  __return_storage_ptr__->UVSource = 0;
  __return_storage_ptr__->MaskImage = 0;
  __return_storage_ptr__->MaskLayout = 0;
  __return_storage_ptr__->LayoutIndex = '\0';
  uVar9 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar9 = ~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pMVar8 = (MeshMaskClipUVMaskArgs *)(*pcVar4)();
      return pMVar8;
    }
  }
  uVar10 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar9 = 0;
  if ((int)uVar10 < (this->ByteCode).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pMVar8 = (MeshMaskClipUVMaskArgs *)(*pcVar4)();
      return pMVar8;
    }
  }
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (int)uVar10;
  uVar5 = *(undefined8 *)pFVar1;
  uVar6 = *(undefined8 *)(pFVar1 + 8);
  uVar2 = *(undefined4 *)(pFVar3 + (longlong)(int)uVar10 + 0x10);
  __return_storage_ptr__->Source = (int)uVar5;
  __return_storage_ptr__->UVSource = (int)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->MaskImage = (int)uVar6;
  __return_storage_ptr__->MaskLayout = (int)((ulonglong)uVar6 >> 0x20);
  *(undefined4 *)&__return_storage_ptr__->LayoutIndex = uVar2;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshMaskDiffArgs> @ 14aa8db60

MeshMaskDiffArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshMaskDiffArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  MeshMaskDiffArgs MVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  MVar3.Fragment = in_register_00000014;
  MVar3.Source = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshMaskDiffArgs)(*pcVar1)();
      return MVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshMaskDiffArgs)(*pcVar1)();
      return MVar3;
    }
  }
  *(undefined8 *)MVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return MVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshMergeArgs> @ 14aa8dc50

MeshMergeArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshMergeArgs>
          (FProgram *this,MeshMergeArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  MeshMergeArgs *pMVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pMVar5 = (MeshMergeArgs *)(*pcVar3)();
      return pMVar5;
    }
  }
  uVar6 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar7 = 0;
  if ((int)uVar6 < (this->ByteCode).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pMVar5 = (MeshMergeArgs *)(*pcVar3)();
      return pMVar5;
    }
  }
  pFVar2 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar2 + (int)uVar6);
  uVar7 = *(uint *)(pFVar2 + (longlong)(int)uVar6 + 8);
  __return_storage_ptr__->Base = (int)uVar1;
  __return_storage_ptr__->Added = (int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->NewSurfaceID = uVar7;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshMorphReshapeArgs> @ 14aa8dd50

MeshMorphReshapeArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshMorphReshapeArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  MeshMorphReshapeArgs MVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  MVar3.Reshape = in_register_00000014;
  MVar3.Morph = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshMorphReshapeArgs)(*pcVar1)();
      return MVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshMorphReshapeArgs)(*pcVar1)();
      return MVar3;
    }
  }
  *(undefined8 *)MVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return MVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshOptimizeSkinningArgs> @ 14aa8de40

MeshOptimizeSkinningArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshOptimizeSkinningArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_00000014;
  uint uVar4;
  uint in_R8D;
  
  uVar3 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (MeshOptimizeSkinningArgs)uVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar3 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (MeshOptimizeSkinningArgs)uVar3;
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined4 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return (MeshOptimizeSkinningArgs)param_1;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshPrepareLayoutArgs> @ 14aa8df30

MeshPrepareLayoutArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshPrepareLayoutArgs>
          (FProgram *this,MeshPrepareLayoutArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  MeshPrepareLayoutArgs *pMVar6;
  uint uVar7;
  uint uVar8;
  
  __return_storage_ptr__->LayoutChannel = '\0';
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pMVar6 = (MeshPrepareLayoutArgs *)(*pcVar4)();
      return pMVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pMVar6 = (MeshPrepareLayoutArgs *)(*pcVar4)();
      return pMVar6;
    }
  }
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar3 + (int)uVar7);
  uVar2 = *(undefined4 *)(pFVar3 + (longlong)(int)uVar7 + 8);
  __return_storage_ptr__->Mesh = (int)uVar1;
  __return_storage_ptr__->Layout = (int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)&__return_storage_ptr__->LayoutChannel = uVar2;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshProjectArgs> @ 14aa8e030

MeshProjectArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshProjectArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  MeshProjectArgs MVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  MVar3.Projector = in_register_00000014;
  MVar3.Mesh = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshProjectArgs)(*pcVar1)();
      return MVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshProjectArgs)(*pcVar1)();
      return MVar3;
    }
  }
  *(undefined8 *)MVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return MVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshSetSkeletonArgs> @ 14aa8e120

MeshSetSkeletonArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshSetSkeletonArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  MeshSetSkeletonArgs MVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  MVar3.Skeleton = in_register_00000014;
  MVar3.Source = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshSetSkeletonArgs)(*pcVar1)();
      return MVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshSetSkeletonArgs)(*pcVar1)();
      return MVar3;
    }
  }
  *(undefined8 *)MVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return MVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshTransformArgs> @ 14aa8e210

MeshTransformArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshTransformArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  MeshTransformArgs MVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  MVar3.matrix = in_register_00000014;
  MVar3.source = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshTransformArgs)(*pcVar1)();
      return MVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      MVar3 = (MeshTransformArgs)(*pcVar1)();
      return MVar3;
    }
  }
  *(undefined8 *)MVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return MVar3;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshTransformWithBoneArgs> @ 14aa8e300

MeshTransformWithBoneArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshTransformWithBoneArgs>
          (FProgram *this,MeshTransformWithBoneArgs *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  MeshTransformWithBoneArgs *pMVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pMVar6 = (MeshTransformWithBoneArgs *)(*pcVar2)();
      return pMVar6;
    }
  }
  uVar7 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar8 = 0;
  if ((int)uVar7 < (this->ByteCode).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pMVar6 = (MeshTransformWithBoneArgs *)(*pcVar2)();
      return pMVar6;
    }
  }
  pFVar1 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  uVar3 = *(undefined8 *)pFVar1;
  uVar4 = *(undefined8 *)(pFVar1 + 8);
  __return_storage_ptr__->SourceMesh = (int)uVar3;
  __return_storage_ptr__->Matrix = (int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->BoneId = (int)uVar4;
  __return_storage_ptr__->ThresholdFactor = (float)(int)((ulonglong)uVar4 >> 0x20);
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshTransformWithinMeshArgs> @ 14aa8e3f0

MeshTransformWithinMeshArgs * __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::MeshTransformWithinMeshArgs>
          (FProgram *this,MeshTransformWithinMeshArgs *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  MeshTransformWithinMeshArgs *pMVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pMVar5 = (MeshTransformWithinMeshArgs *)(*pcVar3)();
      return pMVar5;
    }
  }
  uVar6 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar7 = 0;
  if ((int)uVar6 < (this->ByteCode).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pMVar5 = (MeshTransformWithinMeshArgs *)(*pcVar3)();
      return pMVar5;
    }
  }
  pFVar2 = (this->ByteCode).AllocatorInstance.Data;
  uVar1 = *(undefined8 *)(pFVar2 + (int)uVar6);
  uVar7 = *(uint *)(pFVar2 + (longlong)(int)uVar6 + 8);
  __return_storage_ptr__->sourceMesh = (int)uVar1;
  __return_storage_ptr__->boundingMesh = (int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->matrix = uVar7;
  return __return_storage_ptr__;
}

// GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ScalarCurveArgs> @ 14aa8e4f0

ScalarCurveArgs __thiscall
UE::Mutable::Private::FProgram::
GetOpArgs<UE::Mutable::Private::TOperation<unsigned_int>::ScalarCurveArgs>
          (FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ScalarCurveArgs SVar3;
  uint in_register_00000014;
  uint uVar4;
  uint in_R8D;
  uint uVar5;
  
  SVar3.curve = in_register_00000014;
  SVar3.time = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->OpAddress).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      SVar3 = (ScalarCurveArgs)(*pcVar1)();
      return SVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)in_R8D * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      SVar3 = (ScalarCurveArgs)(*pcVar1)();
      return SVar3;
    }
  }
  *(undefined8 *)SVar3 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
  return SVar3;
}

// FProgram @ 14aa93080

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FProgram * __thiscall UE::Mutable::Private::FProgram::FProgram(FProgram *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FProgram *pFVar7;
  undefined4 local_18 [4];
  
  (this->OpAddress).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpAddress).ArrayNum = 0;
  (this->OpAddress).ArrayMax = 0;
  (this->ByteCode).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCode).ArrayNum = 0;
  (this->ByteCode).ArrayMax = 0;
  (this->States).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->States).ArrayNum = 0;
  (this->States).ArrayMax = 0;
  (this->Roms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Roms).ArrayNum = 0;
  (this->Roms).ArrayMax = 0;
  (this->RomsCompileData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RomsCompileData).ArrayNum = 0;
  (this->RomsCompileData).ArrayMax = 0;
  *(undefined8 *)&this->LoadedMemTrackedRoms = 0;
  *(undefined8 *)&(this->LoadedMemTrackedRoms).field_0x8 = 0;
  *(undefined8 *)&(this->LoadedMemTrackedRoms).field_0x20 = 0;
  *(undefined4 *)&(this->LoadedMemTrackedRoms).field_0x28 = 0;
  *(undefined4 *)&(this->LoadedMemTrackedRoms).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadedMemTrackedRoms).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LoadedMemTrackedRoms).field_0x34 = 0;
  (this->ConstantImageLODsPermanent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantImageLODsPermanent).ArrayNum = 0;
  (this->ConstantImageLODsPermanent).ArrayMax = 0;
  *(undefined8 *)&this->ConstantImageLODsStreamed = 0;
  *(undefined8 *)&(this->ConstantImageLODsStreamed).field_0x8 = 0;
  *(undefined8 *)&(this->ConstantImageLODsStreamed).field_0x20 = 0;
  *(undefined4 *)&(this->ConstantImageLODsStreamed).field_0x28 = 0;
  *(undefined4 *)&(this->ConstantImageLODsStreamed).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstantImageLODsStreamed).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstantImageLODsStreamed).field_0x34 = 0;
  *(undefined8 *)&(this->ConstantImageLODsStreamed).field_0x40 = 0;
  *(undefined4 *)&(this->ConstantImageLODsStreamed).field_0x48 = 0;
  (this->ConstantImageLODIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantImageLODIndices).ArrayNum = 0;
  (this->ConstantImageLODIndices).ArrayMax = 0;
  (this->ConstantImages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantImages).ArrayNum = 0;
  (this->ConstantImages).ArrayMax = 0;
  (this->ConstantMeshContentIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantMeshContentIndices).ArrayNum = 0;
  (this->ConstantMeshContentIndices).ArrayMax = 0;
  (this->ConstantMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantMeshes).ArrayNum = 0;
  (this->ConstantMeshes).ArrayMax = 0;
  (this->ConstantMeshesPermanent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantMeshesPermanent).ArrayNum = 0;
  (this->ConstantMeshesPermanent).ArrayMax = 0;
  *(undefined8 *)&this->ConstantMeshesStreamed = 0;
  *(undefined8 *)&(this->ConstantMeshesStreamed).field_0x8 = 0;
  *(undefined8 *)&(this->ConstantMeshesStreamed).field_0x20 = 0;
  *(undefined4 *)&(this->ConstantMeshesStreamed).field_0x28 = 0;
  *(undefined4 *)&(this->ConstantMeshesStreamed).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstantMeshesStreamed).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstantMeshesStreamed).field_0x34 = 0;
  *(undefined8 *)&(this->ConstantMeshesStreamed).field_0x40 = 0;
  *(undefined4 *)&(this->ConstantMeshesStreamed).field_0x48 = 0;
  (this->ConstantExtensionData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantExtensionData).ArrayNum = 0;
  (this->ConstantExtensionData).ArrayMax = 0;
  (this->ConstantStrings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantStrings).ArrayNum = 0;
  (this->ConstantStrings).ArrayMax = 0;
  (this->ConstantUInt32Lists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantUInt32Lists).ArrayNum = 0;
  (this->ConstantUInt32Lists).ArrayMax = 0;
  (this->ConstantUInt64Lists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantUInt64Lists).ArrayNum = 0;
  (this->ConstantUInt64Lists).ArrayMax = 0;
  (this->ConstantLayouts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantLayouts).ArrayNum = 0;
  (this->ConstantLayouts).ArrayMax = 0;
  (this->ConstantProjectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantProjectors).ArrayNum = 0;
  (this->ConstantProjectors).ArrayMax = 0;
  (this->ConstantMatrices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantMatrices).ArrayNum = 0;
  (this->ConstantMatrices).ArrayMax = 0;
  (this->ConstantShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantShapes).ArrayNum = 0;
  (this->ConstantShapes).ArrayMax = 0;
  (this->ConstantCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantCurves).ArrayNum = 0;
  (this->ConstantCurves).ArrayMax = 0;
  (this->ConstantSkeletons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantSkeletons).ArrayNum = 0;
  (this->ConstantSkeletons).ArrayMax = 0;
  (this->ConstantPhysicsBodies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantPhysicsBodies).ArrayNum = 0;
  (this->ConstantPhysicsBodies).ArrayMax = 0;
  (this->Parameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters).ArrayNum = 0;
  (this->Parameters).ArrayMax = 0;
  (this->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ranges).ArrayNum = 0;
  (this->Ranges).ArrayMax = 0;
  (this->ParameterLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterLists).ArrayNum = 0;
  (this->ParameterLists).ArrayMax = 0;
  (this->ConstantMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantMaterials).ArrayNum = 0;
  (this->ConstantMaterials).ArrayMax = 0;
  uVar1 = (this->ByteCode).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&this->ByteCode,uVar1 + 2,No);
  uVar5 = 0;
  if ((int)uVar1 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FProgram *)(*pcVar3)();
      return pFVar7;
    }
  }
  local_18[0] = 0;
  *(undefined2 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar1) = 0;
  pFVar2 = (this->OpAddress).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->OpAddress).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FProgram *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (this->OpAddress).ArrayNum;
  if (iVar6 == (this->OpAddress).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,&(this->OpAddress).ArrayMax);
  }
  (this->OpAddress).ArrayNum = iVar6 + 1;
  *(undefined4 *)((this->OpAddress).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_18[0];
  return this;
}

// ~FProgram @ 14aa93d40

void __thiscall UE::Mutable::Private::FProgram::~FProgram(FProgram *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)
             (this->ConstantMaterials).AllocatorInstance.Data,(this->ConstantMaterials).ArrayNum);
  pFVar1 = (this->ConstantMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
             (this->ParameterLists).AllocatorInstance.Data,(this->ParameterLists).ArrayNum);
  pFVar1 = (this->ParameterLists).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Mutable::Private::FRangeDesc,int>
            ((FRangeDesc *)(this->Ranges).AllocatorInstance.Data,(this->Ranges).ArrayNum);
  pFVar1 = (this->Ranges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Mutable::Private::FParameterDesc,int>
            ((FParameterDesc *)(this->Parameters).AllocatorInstance.Data,(this->Parameters).ArrayNum
            );
  pFVar1 = (this->Parameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *)
             (this->ConstantPhysicsBodies).AllocatorInstance.Data,
             (this->ConstantPhysicsBodies).ArrayNum);
  pFVar1 = (this->ConstantPhysicsBodies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> *)
             (this->ConstantSkeletons).AllocatorInstance.Data,(this->ConstantSkeletons).ArrayNum);
  pFVar1 = (this->ConstantSkeletons).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRichCurve,int>
            ((FRichCurve *)(this->ConstantCurves).AllocatorInstance.Data,
             (this->ConstantCurves).ArrayNum);
  pFVar1 = (this->ConstantCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstantShapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstantMatrices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstantProjectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)
             (this->ConstantLayouts).AllocatorInstance.Data,(this->ConstantLayouts).ArrayNum);
  pFVar1 = (this->ConstantLayouts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)
             (this->ConstantUInt64Lists).AllocatorInstance.Data,(this->ConstantUInt64Lists).ArrayNum
            );
  pFVar1 = (this->ConstantUInt64Lists).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
             (this->ConstantUInt32Lists).AllocatorInstance.Data,(this->ConstantUInt32Lists).ArrayNum
            );
  pFVar1 = (this->ConstantUInt32Lists).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ConstantStrings).AllocatorInstance.Data,
             (this->ConstantStrings).ArrayNum);
  pFVar1 = (this->ConstantStrings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Mutable::Private::FExtensionDataConstant,int>
            ((FExtensionDataConstant *)(this->ConstantExtensionData).AllocatorInstance.Data,
             (this->ConstantExtensionData).ArrayNum);
  pFVar1 = (this->ConstantExtensionData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ConstantMeshesStreamed).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ConstantMeshesStreamed).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConstantMeshesStreamed);
  DestructItems<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)
             (this->ConstantMeshesPermanent).AllocatorInstance.Data,
             (this->ConstantMeshesPermanent).ArrayNum);
  pFVar1 = (this->ConstantMeshesPermanent).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstantMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstantMeshContentIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstantImages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstantImageLODIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ConstantImageLODsStreamed).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ConstantImageLODsStreamed).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConstantImageLODsStreamed);
  DestructItems<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)
             (this->ConstantImageLODsPermanent).AllocatorInstance.Data,
             (this->ConstantImageLODsPermanent).ArrayNum);
  pFVar1 = (this->ConstantImageLODsPermanent).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TSparseArray<unsigned_char,FDefaultSparseArrayAllocator>::
  ~TSparseArray<unsigned_char,FDefaultSparseArrayAllocator>(&this->LoadedMemTrackedRoms);
  pFVar1 = (this->RomsCompileData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Roms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Mutable::Private::FProgram::FState,int>
            ((FState *)(this->States).AllocatorInstance.Data,(this->States).ArrayNum);
  pFVar1 = (this->States).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ByteCode).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OpAddress).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Check @ 14aabdf00

void __thiscall UE::Mutable::Private::FProgram::Check(FProgram *this)

{
  return;
}

// GetOpArgsPointer @ 14aacff90

uchar * __thiscall UE::Mutable::Private::FProgram::GetOpArgsPointer(FProgram *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if ((int)param_1 < (this->OpAddress).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  uVar4 = *(int *)((this->OpAddress).AllocatorInstance.Data + (longlong)(int)param_1 * 4) + 2;
  uVar5 = 0;
  if ((int)uVar4 < (this->ByteCode).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  return (uchar *)((this->ByteCode).AllocatorInstance.Data + (int)uVar4);
}

// LogHistogram @ 14aadd570

void __thiscall UE::Mutable::Private::FProgram::LogHistogram(FProgram *this)

{
  return;
}

// Serialise @ 14aaf56c0

void __thiscall UE::Mutable::Private::FProgram::Serialise(FProgram *this,FOutputArchive *param_1)

{
  void *pvVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  uchar local_res8 [16];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  int local_dc;
  int local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
  uint local_c4;
  int local_c0 [5];
  undefined1 local_ac [8];
  undefined1 local_a4 [12];
  int *local_98;
  void *local_90;
  void *local_88;
  void *local_80;
  int **local_78;
  int *local_70;
  void **local_68;
  int *local_60;
  void **local_58;
  int *local_50;
  void **local_48;
  int *local_40;
  
  local_e4 = (this->OpAddress).ArrayNum;
  Private::operator<<(param_1,&local_e4);
  if (local_e4 != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->OpAddress).AllocatorInstance.Data,(ulonglong)local_e4 << 2);
  }
  local_e0 = (this->ByteCode).ArrayNum;
  Private::operator<<(param_1,&local_e0);
  if (local_e0 != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->ByteCode).AllocatorInstance.Data,local_e0);
  }
  operator<<<UE::Mutable::Private::FProgram::FState_TSizedDefaultAllocator<32>_>
            (param_1,&this->States);
  local_res18[0] = (this->Roms).ArrayNum;
  Private::operator<<(param_1,local_res18);
  uVar9 = 0;
  if (local_res18[0] != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->Roms).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,(this->Roms).AllocatorInstance.Data + (longlong)(int)uVar8 * 4,4);
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_res18[0]);
  }
  local_res20[0] = (this->RomsCompileData).ArrayNum;
  Private::operator<<(param_1,local_res20);
  uVar9 = 0;
  if (local_res20[0] != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->RomsCompileData).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,
                 (this->RomsCompileData).AllocatorInstance.Data + (longlong)(int)uVar8 * 4,4);
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_res20[0]);
  }
  operator<<<TSharedPtr<UE::Mutable::Private::FImage_const__1>_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantImageLODsPermanent);
  operator<<<UE::Mutable::Private::FConstantResourceIndex_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantImageLODIndices);
  local_118 = (this->ConstantImages).ArrayNum;
  Private::operator<<(param_1,&local_118);
  uVar9 = 0;
  if (local_118 != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->ConstantImages).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,
                 (this->ConstantImages).AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc,0xc);
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_118);
  }
  local_114 = (this->ConstantMeshesPermanent).ArrayNum;
  Private::operator<<(param_1,&local_114);
  uVar9 = 0;
  if (local_114 != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->ConstantMeshesPermanent).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      pFVar10 = (this->ConstantMeshesPermanent).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10
      ;
      piVar7 = *(int **)pFVar10;
      if (piVar7 == (int *)0x0) {
        local_c0[1] = 0xffffffff;
        piVar6 = local_c0 + 1;
LAB_14aaf5a22:
        Private::operator<<(param_1,piVar6);
      }
      else {
        piVar6 = TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                 ::Find((TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                         *)&param_1->History,piVar7);
        if (piVar6 != (int *)0x0) goto LAB_14aaf5a22;
        local_dc = *(int *)&(param_1->History).field_0x8 - *(int *)&(param_1->History).field_0x34;
        local_78 = &local_98;
        local_70 = &local_dc;
        local_98 = piVar7;
        TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
                    *)&param_1->History,(TPairInitializer<void_const_*_&&,int_const_&> *)local_ac,
                   (bool *)&local_78);
        Private::operator<<(param_1,&local_dc);
        FMesh::Serialise(*(FMesh **)pFVar10,param_1);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_114);
  }
  operator<<<UE::Mutable::Private::FConstantResourceIndex_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantMeshContentIndices);
  local_110 = (this->ConstantMeshes).ArrayNum;
  Private::operator<<(param_1,&local_110);
  uVar9 = 0;
  if (local_110 != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->ConstantMeshes).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,
                 (this->ConstantMeshes).AllocatorInstance.Data + (longlong)(int)uVar8 * 8,8);
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_110);
  }
  local_10c = (this->ConstantExtensionData).ArrayNum;
  Private::operator<<(param_1,&local_10c);
  uVar9 = 0;
  if (local_10c != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->ConstantExtensionData).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      pFVar10 = (this->ConstantExtensionData).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      pvVar1 = *(void **)pFVar10;
      if (pvVar1 == (void *)0x0) {
        local_c0[2] = 0xffffffff;
        piVar7 = local_c0 + 2;
LAB_14aaf5bf9:
        Private::operator<<(param_1,piVar7);
      }
      else {
        piVar7 = TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                 ::Find((TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                         *)&param_1->History,pvVar1);
        if (piVar7 != (int *)0x0) goto LAB_14aaf5bf9;
        local_d8 = *(int *)&(param_1->History).field_0x8 - *(int *)&(param_1->History).field_0x34;
        local_68 = &local_90;
        local_60 = &local_d8;
        local_90 = pvVar1;
        TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
                    *)&param_1->History,
                   (TPairInitializer<void_const_*_&&,int_const_&> *)(local_ac + 4),(bool *)&local_68
                  );
        Private::operator<<(param_1,&local_d8);
        lVar2 = *(longlong *)pFVar10;
        Private::operator<<(param_1,(short *)(lVar2 + 8));
        local_res8[0] = *(uchar *)(lVar2 + 10);
        Private::operator<<(param_1,local_res8);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_10c);
  }
  operator<<<FString,TSizedDefaultAllocator<32>_>(param_1,&this->ConstantStrings);
  local_108 = (this->ConstantUInt32Lists).ArrayNum;
  Private::operator<<(param_1,&local_108);
  uVar9 = 0;
  if (local_108 != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->ConstantUInt32Lists).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      pFVar10 = (this->ConstantUInt32Lists).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      local_d4 = *(uint *)(pFVar10 + 8);
      Private::operator<<(param_1,&local_d4);
      if (local_d4 != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,*(undefined8 *)pFVar10,(ulonglong)local_d4 << 2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_108);
  }
  local_104 = (this->ConstantUInt64Lists).ArrayNum;
  Private::operator<<(param_1,&local_104);
  uVar9 = 0;
  if (local_104 != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->ConstantUInt64Lists).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      pFVar10 = (this->ConstantUInt64Lists).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      local_d0 = *(uint *)(pFVar10 + 8);
      Private::operator<<(param_1,&local_d0);
      if (local_d0 != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,*(undefined8 *)pFVar10,(ulonglong)local_d0 << 3);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_104);
  }
  operator<<<TSharedPtr<UE::Mutable::Private::FLayout_const__1>_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantLayouts);
  local_100 = (this->ConstantProjectors).ArrayNum;
  Private::operator<<(param_1,&local_100);
  uVar9 = 0;
  if (local_100 != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->ConstantProjectors).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      operator<<<UE::Mutable::Private::FProjector>
                (param_1,(FProjector *)
                         ((this->ConstantProjectors).AllocatorInstance.Data +
                         (longlong)(int)uVar8 * 0x38));
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_100);
  }
  local_cc = (this->ConstantMatrices).ArrayNum;
  Private::operator<<(param_1,&local_cc);
  if (local_cc != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->ConstantMatrices).AllocatorInstance.Data,
               (ulonglong)local_cc << 6);
  }
  local_fc = (this->ConstantShapes).ArrayNum;
  Private::operator<<(param_1,&local_fc);
  uVar9 = 0;
  if (local_fc != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->ConstantShapes).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      pFVar10 = (this->ConstantShapes).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x34;
      Private::operator<<(param_1,(float *)pFVar10);
      Private::operator<<(param_1,(float *)(pFVar10 + 4));
      Private::operator<<(param_1,(float *)(pFVar10 + 8));
      Private::operator<<(param_1,(float *)(pFVar10 + 0xc));
      Private::operator<<(param_1,(float *)(pFVar10 + 0x10));
      Private::operator<<(param_1,(float *)(pFVar10 + 0x14));
      Private::operator<<(param_1,(float *)(pFVar10 + 0x18));
      Private::operator<<(param_1,(float *)(pFVar10 + 0x1c));
      Private::operator<<(param_1,(float *)(pFVar10 + 0x20));
      Private::operator<<(param_1,(float *)(pFVar10 + 0x24));
      Private::operator<<(param_1,(float *)(pFVar10 + 0x28));
      Private::operator<<(param_1,(float *)(pFVar10 + 0x2c));
      Private::operator<<(param_1,(uchar *)(pFVar10 + 0x30));
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_fc);
  }
  local_f8 = (this->ConstantCurves).ArrayNum;
  Private::operator<<(param_1,&local_f8);
  uVar9 = 0;
  if (local_f8 != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->ConstantCurves).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      Private::operator<<(param_1,(FRichCurve *)
                                  ((this->ConstantCurves).AllocatorInstance.Data +
                                  (longlong)(int)uVar8 * 0x80));
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_f8);
  }
  local_f4 = (this->ConstantSkeletons).ArrayNum;
  Private::operator<<(param_1,&local_f4);
  uVar9 = 0;
  if (local_f4 != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->ConstantSkeletons).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      pFVar10 = (this->ConstantSkeletons).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      pvVar1 = *(void **)pFVar10;
      if (pvVar1 == (void *)0x0) {
        local_c0[3] = 0xffffffff;
        piVar7 = local_c0 + 3;
LAB_14aaf614f:
        Private::operator<<(param_1,piVar7);
      }
      else {
        piVar7 = TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                 ::Find((TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                         *)&param_1->History,pvVar1);
        if (piVar7 != (int *)0x0) goto LAB_14aaf614f;
        local_c8 = *(int *)&(param_1->History).field_0x8 - *(int *)&(param_1->History).field_0x34;
        local_58 = &local_88;
        local_50 = &local_c8;
        local_88 = pvVar1;
        TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
                    *)&param_1->History,(TPairInitializer<void_const_*_&&,int_const_&> *)local_a4,
                   (bool *)&local_58);
        Private::operator<<(param_1,&local_c8);
        FSkeleton::Serialise(*(FSkeleton **)pFVar10,param_1);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_f4);
  }
  operator<<<UE::Mutable::Private::FParameterDesc_TSizedDefaultAllocator<32>_>
            (param_1,&this->Parameters);
  local_f0 = (this->Ranges).ArrayNum;
  Private::operator<<(param_1,&local_f0);
  uVar9 = 0;
  if (local_f0 != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->Ranges).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      pFVar10 = (this->Ranges).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x28;
      Private::operator<<(param_1,(FString *)pFVar10);
      Private::operator<<(param_1,(FString *)(pFVar10 + 0x10));
      Private::operator<<(param_1,(int *)(pFVar10 + 0x20));
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_f0);
  }
  local_ec = (this->ParameterLists).ArrayNum;
  Private::operator<<(param_1,&local_ec);
  uVar9 = 0;
  if (local_ec != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->ParameterLists).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      pFVar10 = (this->ParameterLists).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      local_c4 = *(uint *)(pFVar10 + 8);
      Private::operator<<(param_1,&local_c4);
      if (local_c4 != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,*(undefined8 *)pFVar10,(ulonglong)local_c4 * 2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_ec);
  }
  local_e8 = (this->ConstantMaterials).ArrayNum;
  Private::operator<<(param_1,&local_e8);
  uVar9 = 0;
  if (local_e8 != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->ConstantMaterials).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      pFVar10 = (this->ConstantMaterials).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      pvVar1 = *(void **)pFVar10;
      if (pvVar1 == (void *)0x0) {
        local_c0[4] = 0xffffffff;
        piVar7 = local_c0 + 4;
LAB_14aaf641d:
        Private::operator<<(param_1,piVar7);
      }
      else {
        piVar7 = TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                 ::Find((TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                         *)&param_1->History,pvVar1);
        if (piVar7 != (int *)0x0) goto LAB_14aaf641d;
        local_c0[0] = *(int *)&(param_1->History).field_0x8 - *(int *)&(param_1->History).field_0x34
        ;
        local_48 = &local_80;
        local_40 = local_c0;
        local_80 = pvVar1;
        TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
                    *)&param_1->History,
                   (TPairInitializer<void_const_*_&&,int_const_&> *)(local_a4 + 4),(bool *)&local_48
                  );
        Private::operator<<(param_1,local_c0);
        lVar2 = *(longlong *)pFVar10;
        Private::operator<<(param_1,(int *)(lVar2 + 0x10));
        operator<<<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const__1>_>_>
                  (param_1,(TMap<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
                            *)(lVar2 + 0x18));
        operator<<<FName,UE::Math::TVector4<float>_>
                  (param_1,(TMap<FName,UE::Math::TVector4<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector4<float>,0>_>
                            *)(lVar2 + 0x68));
        operator<<<FName,float>
                  (param_1,(TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                            *)(lVar2 + 0xb8));
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_e8);
  }
  return;
}

// Unserialise @ 14aafd610

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Mutable::Private::FProgram::Unserialise(FProgram *this,FInputArchive *param_1)

{
  uint local_res8 [2];
  
  operator>><TSizedDefaultAllocator<32>_>(param_1,&this->OpAddress);
  Private::operator>>(param_1,local_res8);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&this->ByteCode,local_res8[0],Default);
  if (local_res8[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->ByteCode).AllocatorInstance.Data,local_res8[0]);
  }
  operator>><UE::Mutable::Private::FProgram::FState_TSizedDefaultAllocator<32>_>
            (param_1,&this->States);
  operator>><UE::Mutable::Private::FRomDataRuntime_TSizedDefaultAllocator<32>_>(param_1,&this->Roms)
  ;
  operator>><UE::Mutable::Private::FRomDataCompile_TSizedDefaultAllocator<32>_>
            (param_1,&this->RomsCompileData);
  operator>><TSharedPtr<UE::Mutable::Private::FImage_const__1>_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantImageLODsPermanent);
  operator>><UE::Mutable::Private::FConstantResourceIndex_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantImageLODIndices);
  operator>><UE::Mutable::Private::FImageLODRange_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantImages);
  operator>><TSharedPtr<UE::Mutable::Private::FMesh_const__1>_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantMeshesPermanent);
  operator>><UE::Mutable::Private::FConstantResourceIndex_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantMeshContentIndices);
  operator>><UE::Mutable::Private::FMeshContentRange_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantMeshes);
  operator>><UE::Mutable::Private::FExtensionDataConstant_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantExtensionData);
  operator>><FString,TSizedDefaultAllocator<32>_>(param_1,&this->ConstantStrings);
  operator>><TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantUInt32Lists);
  operator>><TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantUInt64Lists);
  operator>><TSharedPtr<UE::Mutable::Private::FLayout_const__1>_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantLayouts);
  operator>><UE::Mutable::Private::FProjector_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantProjectors);
  operator>><TSizedDefaultAllocator<32>_>(param_1,&this->ConstantMatrices);
  operator>><UE::Mutable::Private::FShape_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantShapes);
  operator>><FRichCurve,TSizedDefaultAllocator<32>_>(param_1,&this->ConstantCurves);
  operator>><TSharedPtr<UE::Mutable::Private::FSkeleton_const__1>_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantSkeletons);
  operator>><UE::Mutable::Private::FParameterDesc_TSizedDefaultAllocator<32>_>
            (param_1,&this->Parameters);
  operator>><UE::Mutable::Private::FRangeDesc_TSizedDefaultAllocator<32>_>(param_1,&this->Ranges);
  operator>><TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,&this->ParameterLists);
  operator>><TSharedPtr<UE::Mutable::Private::FMaterial_const__1>_TSizedDefaultAllocator<32>_>
            (param_1,&this->ConstantMaterials);
  return;
}

// operator() @ 1505573d0

bool __thiscall
`UE::Mutable::Private::FProgram::
GetConstant<`UE::Mutable::Private::CodeRunner::RunCode_ConstantResource'::__l9::<lambda_2>_>'::__l43
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<7906830531881337625>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7906830531881337625>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

