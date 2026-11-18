// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// HasNonZeroData @ 147ecb450

bool __thiscall FQuantizedLightmapData::HasNonZeroData(FQuantizedLightmapData *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  
  uVar1 = this->SizeY;
  uVar11 = 0;
  if (0 < (this->Data).ArrayNum) {
    lVar13 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->Data).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar12 = (this->Data).AllocatorInstance.Data + lVar13;
      if ((uVar1 != 1) <= (byte)*pFVar12) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
             ((IConsoleManager::SetupSingleton(),
              IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
              (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Singleton != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                  ,0x4fb,L""), bVar3)))) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          plVar7 = (longlong *)
                   (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                             (IConsoleManager::Singleton,L"r.SupportLowQualityLightmaps",1);
          pTVar8 = (TConsoleVariableData<int> *)0x0;
          if (plVar7 != (longlong *)0x0) {
            pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
          }
          CVarSupportLowQualityLightmaps = pTVar8;
          _Init_thread_footer(&::_TSS0);
        }
        pTVar8 = CVarSupportLowQualityLightmaps;
        if (CVarSupportLowQualityLightmaps == (TConsoleVariableData<int> *)0x0) {
LAB_147ecb53e:
          lVar10 = 4;
        }
        else {
          bVar3 = IsInParallelGameThread();
          if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
            lVar5 = 0;
          }
          else {
            lVar5 = 4;
          }
          lVar10 = 2;
          if (*(int *)((longlong)pTVar8->ShadowedValue + lVar5) != 0) goto LAB_147ecb53e;
        }
        lVar5 = 0;
        pFVar6 = pFVar12 + 2;
        do {
          if (pFVar6[-1] != (FScriptContainerElement)0x0) {
            return true;
          }
          if (*pFVar6 != (FScriptContainerElement)0x0) {
            return true;
          }
          if (pFVar6[1] != (FScriptContainerElement)0x0) {
            return true;
          }
          lVar5 = lVar5 + 1;
          pFVar6 = pFVar6 + 4;
        } while (lVar5 < lVar10);
        if (this->bHasSkyShadowing != false) {
          uVar9 = 0;
          pFVar6 = pFVar12 + 0x11;
          do {
            if (*pFVar6 != (FScriptContainerElement)0x0) {
              return true;
            }
            uVar9 = uVar9 + 1;
            pFVar6 = pFVar6 + 1;
          } while (uVar9 < 4);
        }
        if (pFVar12[0x15] != (FScriptContainerElement)0x0) {
          return true;
        }
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x16;
    } while ((int)uVar11 < (this->Data).ArrayNum);
  }
  return false;
}

// Serialize @ 147edb8a0

void __thiscall FQuantizedLightmapData::Serialize(FQuantizedLightmapData *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->SizeX);
    }
  }
  else {
    this->SizeX = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &this->SizeY;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FLightMapCoefficients,TSizedDefaultAllocator<32>_>
            (param_1,&this->Data);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this->Scale,0x40);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this->Add,0x40);
  TArrayPrivateFriend::Serialize<FGuid,TSizedDefaultAllocator<32>_>(param_1,&this->LightGuids);
  ::operator<<(param_1,&this->bHasSkyShadowing);
  return;
}

