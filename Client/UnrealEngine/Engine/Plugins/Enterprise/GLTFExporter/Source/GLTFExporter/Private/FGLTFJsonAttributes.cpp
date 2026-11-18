// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// HasValue @ 14e600fd0

bool __thiscall FGLTFJsonAttributes::HasValue(FGLTFJsonAttributes *this)

{
  if ((((((this->Position == (FGLTFJsonAccessor *)0x0) || (this->Position->Count == 0)) &&
        ((this->Color0 == (FGLTFJsonAccessor *)0x0 || (this->Color0->Count == 0)))) &&
       ((this->Normal == (FGLTFJsonAccessor *)0x0 || (this->Normal->Count == 0)))) &&
      ((this->Tangent == (FGLTFJsonAccessor *)0x0 || (this->Tangent->Count == 0)))) &&
     ((((this->TexCoords).ArrayNum == 0 && ((this->Joints).ArrayNum == 0)) &&
      ((this->Weights).ArrayNum == 0)))) {
    return false;
  }
  return true;
}

// WriteObject @ 14e61a770

void __thiscall FGLTFJsonAttributes::WriteObject(FGLTFJsonAttributes *this,IGLTFJsonWriter *param_1)

{
  FGLTFJsonAccessor *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pFVar1 = this->Position;
  if (pFVar1 != (FGLTFJsonAccessor *)0x0) {
    ::FString::FString(&local_88,L"POSITION");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_88);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar1->_padding_);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = this->Color0;
  if (pFVar1 != (FGLTFJsonAccessor *)0x0) {
    ::FString::FString(&local_78,L"COLOR_0");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_78);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar1->_padding_);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = this->Normal;
  if (pFVar1 != (FGLTFJsonAccessor *)0x0) {
    ::FString::FString(&local_68,L"NORMAL");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_68);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar1->_padding_);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = this->Tangent;
  if (pFVar1 != (FGLTFJsonAccessor *)0x0) {
    ::FString::FString(&local_58,L"TANGENT");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_58);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar1->_padding_);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  uVar8 = 0;
  uVar7 = uVar8;
  uVar9 = uVar8;
  if (0 < (this->TexCoords).ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < (this->TexCoords).ArrayNum) {
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
      lVar2 = *(longlong *)((this->TexCoords).AllocatorInstance.Data + uVar9);
      if (lVar2 != 0) {
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_b8,uVar6);
        ::FString::ConcatCF(&local_48,L"TEXCOORD_",&local_b8);
        (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_48);
        (**(code **)(param_1->_padding_ + 0x30))(param_1,*(undefined4 *)(lVar2 + 8));
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar9 = uVar9 + 8;
    } while ((int)(uVar6 + 1) < (this->TexCoords).ArrayNum);
  }
  uVar7 = uVar8;
  uVar9 = uVar8;
  if (0 < (this->Joints).ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < (this->Joints).ArrayNum) {
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
      lVar2 = *(longlong *)((this->Joints).AllocatorInstance.Data + uVar9);
      if (lVar2 != 0) {
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Data.ArrayNum = 0;
        local_a8.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_a8,uVar6);
        ::FString::ConcatCF(&local_38,L"JOINTS_",&local_a8);
        (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
        (**(code **)(param_1->_padding_ + 0x30))(param_1,*(undefined4 *)(lVar2 + 8));
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar9 = uVar9 + 8;
    } while ((int)(uVar6 + 1) < (this->Joints).ArrayNum);
  }
  uVar7 = uVar8;
  if (0 < (this->Weights).ArrayNum) {
    do {
      uVar6 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar6 < (this->Weights).ArrayNum) {
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
      lVar2 = *(longlong *)((this->Weights).AllocatorInstance.Data + uVar7);
      if (lVar2 != 0) {
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_98,uVar6);
        ::FString::ConcatCF(&local_28,L"WEIGHTS_",&local_98);
        (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
        (**(code **)(param_1->_padding_ + 0x30))(param_1,*(undefined4 *)(lVar2 + 8));
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      uVar8 = (ulonglong)(uVar6 + 1);
      uVar7 = uVar7 + 8;
    } while ((int)(uVar6 + 1) < (this->Weights).ArrayNum);
  }
  return;
}

