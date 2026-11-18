// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FSoundBuffer @ 1475aa2c0

void __thiscall FSoundBuffer::~FSoundBuffer(FSoundBuffer *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FSoundBuffer__6B_;
  pFVar1 = (this->ResourceName).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// Describe @ 1475be970

FString * __thiscall
FSoundBuffer::Describe(FSoundBuffer *this,FString *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FString *pFVar2;
  ForAnyElementType FVar3;
  wchar_t *pwVar4;
  char *pcVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  ForAnyElementType local_78;
  undefined8 local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  FVar6.Data = (FScriptContainerElement *)0x0;
  GetSoundClassName(this);
  pwVar4 = L"";
  if (this->bAllocationInPermanentPool != false) {
    pwVar4 = L"Permanent, ";
  }
  ::FString::FString(&local_58,pwVar4);
  iVar1 = this->NumChannels;
  if (iVar1 == 1) {
    pcVar5 = "Mono";
  }
  else if (iVar1 == 2) {
    pcVar5 = "Stereo";
  }
  else if (iVar1 == 6) {
    pcVar5 = "5.1";
  }
  else {
    if (iVar1 != 8) {
      ::FString::PrintfImpl(&local_68,L"%d Channels");
      goto LAB_1475bea19;
    }
    pcVar5 = "7.1";
  }
  ::FString::FString(&local_68,pcVar5);
LAB_1475bea19:
  if (param_1) {
    _Src = (this->ResourceName).Data.AllocatorInstance.Data;
    local_78.Data = (FScriptContainerElement *)0x0;
    iVar1 = (this->ResourceName).Data.ArrayNum;
    local_70 = CONCAT44(local_70._4_4_,iVar1);
    if (iVar1 == 0) {
      local_70 = 0;
      local_78.Data = (FScriptContainerElement *)0x0;
      FVar3.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,&local_78,iVar1,(int *)((longlong)&local_70 + 4));
      memcpy(local_78.Data,_Src,(longlong)iVar1 * 2);
      FVar6.Data = local_78.Data;
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70 = 0;
      FVar3.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    pFVar2 = FPaths::GetExtension(&local_48,&this->ResourceName,false);
    FVar6.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    FVar3.Data = local_48.Data.AllocatorInstance.Data;
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  ::FName::ToString(&local_res8,&local_48);
  (**(code **)(this->_padding_ + 8))(this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%8.2fkb, %s%s, \'%s\', Class: %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetChannelsDesc @ 1475d3080

FString * __thiscall
FSoundBuffer::GetChannelsDesc(FSoundBuffer *this,FString *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = this->NumChannels;
  if (iVar1 == 1) {
    ::FString::FString(__return_storage_ptr__,"Mono");
    return __return_storage_ptr__;
  }
  if (iVar1 == 2) {
    ::FString::FString(__return_storage_ptr__,"Stereo");
    return __return_storage_ptr__;
  }
  if (iVar1 == 6) {
    ::FString::FString(__return_storage_ptr__,"5.1");
    return __return_storage_ptr__;
  }
  if (iVar1 != 8) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%d Channels");
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,"7.1");
  return __return_storage_ptr__;
}

// GetSoundClassName @ 1475dde00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FName __thiscall FSoundBuffer::GetSoundClassName(FSoundBuffer *this)

{
  USoundCue *this_00;
  TObjectPtr<USoundNode>_u_0 TVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  FName FVar10;
  FName in_RDX;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  TObjectPtr<USoundNode>_u_0 local_res18;
  TArray<USoundNodeWavePlayer_*,TSizedDefaultAllocator<32>_> local_58;
  TObjectIterator<USoundBase> local_48;
  
  local_48.Index = 0xffffffff;
  local_48.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ObjectArray.ArrayNum = 0;
  local_48.ObjectArray.ArrayMax = 0;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = Z_Construct_UClass_USoundBase_NoRegister();
  GetObjectsOfClass(pUVar9,&local_48.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
LAB_1475dde62:
  do {
    uVar11 = 0;
    TObjectIterator<USoundBase>::Advance(&local_48);
    lVar13 = (longlong)local_48.Index;
    if ((local_48.Index < 0) || (local_48.ObjectArray.ArrayNum <= local_48.Index)) {
      if (local_48.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ObjectArray.AllocatorInstance.Data);
      }
      *(undefined8 *)in_RDX = 0;
      return in_RDX;
    }
    uVar7 = 0;
    if (local_48.Index < local_48.ObjectArray.ArrayNum) {
      uVar7 = (uint)~local_48.Index >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        FVar10 = (FName)(*pcVar3)();
        return FVar10;
      }
    }
    this_00 = *(USoundCue **)(local_48.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
    iVar8 = local_48.ObjectArray.ArrayNum;
    if (this_00 != (USoundCue *)0x0) {
      pUVar9 = Z_Construct_UClass_USoundCue_NoRegister();
      iVar8 = (int)pUVar9->_padding_;
      if ((iVar8 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar9->_padding_)) {
        TVar1 = (TObjectPtr<USoundNode>_u_0)(this_00->FirstNode).field0_0x0.DebugPtr;
        local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.ArrayNum = 0;
        local_58.ArrayMax = 0;
        if (TVar1.DebugPtr != (USoundNode *)0x0) {
          pUVar9 = Z_Construct_UClass_USoundNodeWavePlayer_NoRegister();
          iVar8 = (int)pUVar9->_padding_;
          if ((*(int *)((TVar1.DebugPtr)->_padding_ + 0x38) < iVar8) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)((TVar1.DebugPtr)->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar9->_padding_)) {
            local_res18.DebugPtr = (USoundNode *)0x0;
          }
          else {
            local_res18 = TVar1;
            TArray<USoundNodeWavePlayer_*,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<USoundNodeWavePlayer_*_const_&>
                      (&local_58,(USoundNodeWavePlayer **)&local_res18.DebugPtr);
          }
          iVar8 = (**(code **)((TVar1.DebugPtr)->_padding_ + 0x300))(TVar1.DebugPtr);
          if (0 < ((TVar1.DebugPtr)->ChildNodes).ArrayNum) {
            uVar15 = uVar11;
            do {
              if ((longlong)iVar8 <= (longlong)uVar15) break;
              uVar12 = (uint)uVar11;
              uVar7 = 0;
              if ((int)uVar12 < ((TVar1.DebugPtr)->ChildNodes).ArrayNum) {
                uVar7 = ~uVar12 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                FVar10 = (FName)(*pcVar3)();
                return FVar10;
              }
              USoundCue::RecursiveFindNode<USoundNodeWavePlayer>
                        (this_00,*(USoundNode **)
                                  (((TVar1.DebugPtr)->ChildNodes).AllocatorInstance.Data +
                                  uVar15 * 8),&local_58);
              uVar11 = (ulonglong)(uVar12 + 1);
              uVar15 = uVar15 + 1;
            } while ((int)(uVar12 + 1) < ((TVar1.DebugPtr)->ChildNodes).ArrayNum);
          }
          uVar11 = (ulonglong)(uint)local_58.ArrayNum;
        }
        uVar14 = 0;
        uVar15 = uVar14;
        if (0 < (int)uVar11) {
          do {
            uVar12 = (uint)uVar14;
            uVar7 = 0;
            if ((int)uVar12 < (int)uVar11) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if (uVar7 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                FVar10 = (FName)(*pcVar3)();
                return FVar10;
              }
              uVar11 = (ulonglong)(uint)local_58.ArrayNum;
            }
            if ((*(longlong *)(*(longlong *)(local_58.AllocatorInstance.Data + uVar15) + 0x70) != 0)
               && (*(int *)(*(longlong *)
                             (*(longlong *)(local_58.AllocatorInstance.Data + uVar15) + 0x70) +
                           0x38c) == this->ResourceID)) {
              lVar13 = (**(code **)(this_00->_padding_ + 0x330))(this_00);
              if (lVar13 == 0) {
                *(undefined8 *)in_RDX = 0;
              }
              else {
                lVar13 = (**(code **)(this_00->_padding_ + 0x330))(this_00);
                *(undefined8 *)in_RDX = *(undefined8 *)(lVar13 + 0x18);
              }
              if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.AllocatorInstance.Data);
              }
              goto LAB_1475de19b;
            }
            uVar14 = (ulonglong)(uVar12 + 1);
            uVar15 = uVar15 + 8;
          } while ((int)(uVar12 + 1) < (int)uVar11);
        }
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
        goto LAB_1475dde62;
      }
      iVar8 = local_48.ObjectArray.ArrayNum;
    }
    iVar4 = local_48.Index;
    uVar7 = 0;
    if (local_48.Index < iVar8) {
      uVar7 = (uint)~local_48.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      FVar10 = (FName)(*pcVar3)();
      return FVar10;
    }
    plVar2 = *(longlong **)(local_48.ObjectArray.AllocatorInstance.Data + (longlong)iVar4 * 8);
    if (plVar2 != (longlong *)0x0) {
      pUVar9 = Z_Construct_UClass_USoundWave_NoRegister();
      iVar8 = (int)pUVar9->_padding_;
      if (((iVar8 <= *(int *)(plVar2[2] + 0x38)) &&
          ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar8 * 8) ==
           &pUVar9->_padding_)) && (*(int *)((longlong)plVar2 + 0x38c) == this->ResourceID)) {
        lVar13 = (**(code **)(*plVar2 + 0x330))(plVar2);
        if (lVar13 == 0) {
          *(undefined8 *)in_RDX = 0;
        }
        else {
          lVar13 = (**(code **)(*plVar2 + 0x330))(plVar2);
          *(undefined8 *)in_RDX = *(undefined8 *)(lVar13 + 0x18);
        }
LAB_1475de19b:
        if (local_48.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.ObjectArray.AllocatorInstance.Data);
        }
        return in_RDX;
      }
    }
  } while( true );
}

