// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// GetFactoryIdFromName @ 14427a630

uchar __cdecl UE::Net::FNetObjectFactoryRegistry::GetFactoryIdFromName(FName param_1)

{
  int iVar1;
  undefined8 uVar2;
  TArray<UE::Net::FNetObjectFactoryRegistry::FFactoryData,TFixedAllocator<16>_> *pTVar3;
  undefined1 local_res10 [8];
  
  pTVar3 = &NetFactories;
  iVar1 = NetFactories.ArrayNum;
  uVar2 = NetFactories._320_8_;
  while( true ) {
    if ((int)uVar2 != iVar1) {
      `TCheckedPointerIterator<UE::Net::FNetObjectFactoryRegistry::FFactoryData,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res10);
      uVar2 = NetFactories._320_8_;
    }
    if (pTVar3 == (TArray<UE::Net::FNetObjectFactoryRegistry::FFactoryData,TFixedAllocator<16>_> *)
                  (NetFactories.AllocatorInstance.InlineData + iVar1)) break;
    if (*(FName *)(pTVar3->AllocatorInstance).InlineData[0].Pad == param_1) {
      return (pTVar3->AllocatorInstance).InlineData[0].Pad[8];
    }
    pTVar3 = (TArray<UE::Net::FNetObjectFactoryRegistry::FFactoryData,TFixedAllocator<16>_> *)
             ((pTVar3->AllocatorInstance).InlineData + 1);
  }
  return 0xff;
}

// GetNumBits @ 14427ad80

uint __cdecl UE::Net::FNetObjectFactoryRegistry::GetNumBits(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = GetNumBits(param_1 >> 1);
  return uVar1 + 1;
}

// IsValidFactoryId @ 144283040

bool __cdecl UE::Net::FNetObjectFactoryRegistry::IsValidFactoryId(uchar param_1)

{
  if ((int)(uint)param_1 < NetFactories.ArrayNum) {
    return *(longlong *)NetFactories.AllocatorInstance.InlineData[param_1].Pad != 0;
  }
  return false;
}

// RegisterFactory @ 14428b360

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Net::FNetObjectFactoryRegistry::RegisterFactory(UClass *param_1,FName param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  uint uVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  uint uVar8;
  FName FVar9;
  uint uVar10;
  TArray<UE::Net::FNetObjectFactoryRegistry::FFactoryData,TFixedAllocator<16>_> *pTVar11;
  ulonglong uVar12;
  TArray<UE::Net::FNetObjectFactoryRegistry::FFactoryData,TFixedAllocator<16>_> *pTVar13;
  FName local_res10;
  undefined1 local_res18 [8];
  FName local_res20;
  FNameEntryId local_178;
  uint uStack_174;
  undefined4 uStack_170;
  FWeakObjectPtr FStack_16c;
  FName local_164;
  undefined4 uStack_15c;
  FWeakObjectPtr FStack_158;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  UClass *local_c0;
  UClass *local_b8;
  FName local_b0;
  FName local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_res10 = param_2;
  if (Net::Private::bIsFactoryRegistrationAllowed) {
    if ((param_1 == (UClass *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FactoryClass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetObjectFactoryRegistry.cpp"
                           ,0x23,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = NetFactories.ArrayNum;
    if (local_res10 == (FName)0x0) {
      if (param_1 == (UClass *)0x0) {
        ::FString::FString(&local_140,L"None");
      }
      else {
        local_e0 = (FName)param_1->_padding_;
        ::FName::ToString(&local_e0,&local_140);
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FactoryName.IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetObjectFactoryRegistry.cpp"
                         ,0x27,
                         L"FNetObjectFactoryRegistry::RegisterFactory cannot register %s due to invalid name"
                        );
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (!bVar3) {
        return;
      }
    }
    else {
      uVar12 = (ulonglong)NetFactories.ArrayNum;
      if ((uint)NetFactories.ArrayNum < 0x10) {
        pTVar11 = &NetFactories;
        pTVar13 = (TArray<UE::Net::FNetObjectFactoryRegistry::FFactoryData,TFixedAllocator<16>_> *)
                  (NetFactories.AllocatorInstance.InlineData + uVar12);
        FVar9 = local_res10;
        while( true ) {
          if ((int)uVar12 != iVar1) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<UE::Net::FNetObjectFactoryRegistry::FFactoryData,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res18);
            uVar12 = (ulonglong)(uint)NetFactories.ArrayNum;
            FVar9 = local_res10;
          }
          if (pTVar11 == pTVar13) {
            pUVar7 = UNetObjectFactory::StaticClass();
            FVar9 = local_res10;
            if (pUVar7 != (UClass *)0x0) {
              iVar1 = (int)pUVar7->_padding_;
              if (((int)param_1->_padding_ < iVar1) ||
                 ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
                  &pUVar7->_padding_)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                pTVar11 = &NetFactories;
                goto joined_r0x00014428b7e3;
              }
            }
            pUVar7 = UNetObjectFactory::StaticClass();
            if (pUVar7 != (UClass *)0x0) {
              iVar1 = (int)pUVar7->_padding_;
              if (((int)param_1->_padding_ < iVar1) ||
                 ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
                  &pUVar7->_padding_)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                return;
              }
            }
            ::FName::ToString(&local_res10,&local_50);
            if (param_1 == (UClass *)0x0) {
              ::FString::FString(&local_f0,L"None");
            }
            else {
              local_a8 = (FName)param_1->_padding_;
              ::FName::ToString(&local_a8,&local_f0);
            }
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("FactoryClass->IsChildOf<UNetObjectFactory>()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetObjectFactoryRegistry.cpp"
                               ,0x40,
                               L"FNetObjectFactoryRegistry::RegisterFactory factory: %s name: %s is not derived from UNetObjectFactory."
                              );
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
            if (!bVar3) {
              return;
            }
            goto code_r0x00014428bca6;
          }
          if (*(FName *)(pTVar11->AllocatorInstance).InlineData[0].Pad == FVar9) break;
          pTVar11 = (TArray<UE::Net::FNetObjectFactoryRegistry::FFactoryData,TFixedAllocator<16>_> *
                    )((pTVar11->AllocatorInstance).InlineData + 1);
        }
        if (1 < (byte)LogIris._0_1_) {
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                       ((pTVar11->AllocatorInstance).InlineData[0].Pad + 0xc));
          if (pUVar6 == (UObject *)0x0) {
            ::FString::FString(&local_110,L"None");
          }
          else {
            local_d0.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
            local_d0.Number = *(uint *)&pUVar6->field_0x1c;
            ::FName::ToString(&local_d0,&local_110);
          }
          ::FName::ToString(&local_res10,&local_70);
          if (param_1 == (UClass *)0x0) {
            ::FString::FString(&local_120,L"None");
          }
          else {
            local_c8 = (FName)param_1->_padding_;
            ::FName::ToString(&local_c8,&local_120);
          }
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
        }
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5564595620523540536>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetObjectFactoryRegistry.cpp"
                           ,0x38,"false");
        if (!bVar3) {
          return;
        }
      }
      else {
        if (1 < (byte)LogIris._0_1_) {
          ::FName::ToString(&local_res10,&local_80);
          if (param_1 == (UClass *)0x0) {
            ::FString::FString(&local_130,L"None");
          }
          else {
            local_d8 = (FName)param_1->_padding_;
            ::FName::ToString(&local_d8,&local_130);
          }
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
        }
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5564595620523540526>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetObjectFactoryRegistry.cpp"
                           ,0x2e,"false");
        if (!bVar3) {
          return;
        }
      }
    }
  }
  else {
    if (1 < (byte)LogIris._0_1_) {
      ::FName::ToString(&local_res10,&local_90);
      if (param_1 == (UClass *)0x0) {
        ::FString::FString(&local_150,L"None");
      }
      else {
        local_res20 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res20,&local_150);
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (Net::Private::bIsFactoryRegistrationAllowed != false) {
        return;
      }
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsFactoryRegistrationAllowed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetObjectFactoryRegistry.cpp"
                       ,0x1f,L"");
    if (!bVar3) {
      return;
    }
  }
code_r0x00014428bca6:
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
joined_r0x00014428b7e3:
  if ((TArray<UE::Net::FNetObjectFactoryRegistry::FFactoryData,TFixedAllocator<16>_> *)
      (NetFactories.AllocatorInstance.InlineData + NetFactories.ArrayNum) == pTVar11) {
    uVar5 = 0xffffffff;
LAB_14428b7fd:
    if (uVar5 == 0xffffffff) {
      local_164 = local_res10;
      uStack_15c = CONCAT31(uStack_15c._1_3_,0xff);
      if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)param_1);
      }
      FStack_158.ObjectIndex = 0;
      FStack_158.ObjectSerialNumber = 0;
      local_b8 = param_1;
      if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&FStack_158,(FObjectPtr)&local_b8);
      uVar5 = NetFactories.ArrayNum;
      if (NetFactories.ArrayNum == NetFactories.ArrayMax) {
        uVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<16>::ForElementType<UE::Net::FNetObjectFactoryRegistry::FFactoryData>_>
                          (0x414,&NetFactories.AllocatorInstance,&NetFactories.ArrayMax);
      }
      NetFactories.ArrayNum = uVar5 + 1;
      *(FName *)(NetFactories.AllocatorInstance.InlineData + (int)uVar5) = local_164;
      *(ulonglong *)(NetFactories.AllocatorInstance.InlineData[(int)uVar5].Pad + 8) =
           CONCAT44(FStack_158.ObjectIndex,uStack_15c);
      *(int *)(NetFactories.AllocatorInstance.InlineData[(int)uVar5].Pad + 0x10) =
           FStack_158.ObjectSerialNumber;
      uVar4 = IntCastChecked<unsigned_char,int>(uVar5);
      uVar8 = 0;
      if ((int)uVar5 < NetFactories.ArrayNum) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      NetFactories.AllocatorInstance.InlineData[(int)uVar5].Pad[8] = uVar4;
    }
    else {
      uVar4 = IntCastChecked<unsigned_char,int>(uVar5);
      uStack_170 = CONCAT31(uStack_170._1_3_,uVar4);
      if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)param_1);
      }
      FStack_16c.ObjectIndex = 0;
      FStack_16c.ObjectSerialNumber = 0;
      local_c0 = param_1;
      if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&FStack_16c,(FObjectPtr)&local_c0);
      local_178 = FVar9.ComparisonIndex.Value;
      uStack_174 = FVar9.Number;
      iVar1 = FStack_16c.ObjectSerialNumber;
      local_a0 = local_178.Value;
      uStack_9c = uStack_174;
      uStack_98 = uStack_170;
      iStack_94 = FStack_16c.ObjectIndex;
      uVar8 = 0;
      if ((int)uVar5 < NetFactories.ArrayNum) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(uint *)NetFactories.AllocatorInstance.InlineData[(int)uVar5].Pad = local_a0;
      *(uint *)(NetFactories.AllocatorInstance.InlineData[(int)uVar5].Pad + 4) = uStack_9c;
      *(undefined4 *)(NetFactories.AllocatorInstance.InlineData[(int)uVar5].Pad + 8) = uStack_98;
      *(int *)(NetFactories.AllocatorInstance.InlineData[(int)uVar5].Pad + 0xc) = iStack_94;
      *(int *)(NetFactories.AllocatorInstance.InlineData[(int)uVar5].Pad + 0x10) = iVar1;
    }
    if (5 < (byte)LogIris._0_1_) {
      uVar10 = ~uVar5 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar5 < NetFactories.ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = 0;
      if ((int)uVar5 < NetFactories.ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FName::ToString((FName *)(NetFactories.AllocatorInstance.InlineData + (int)uVar5),&local_60)
      ;
      uVar8 = 0;
      if ((int)uVar5 < NetFactories.ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   (NetFactories.AllocatorInstance.InlineData[(int)uVar5].Pad + 0xc)
                                  );
      if (pUVar6 == (UObject *)0x0) {
        ::FString::FString(&local_100,L"None");
      }
      else {
        local_b0.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
        local_b0.Number = *(uint *)&pUVar6->field_0x1c;
        ::FName::ToString(&local_b0,&local_100);
      }
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
  if (*(longlong *)pTVar11 == 0) {
    uVar5 = (uint)((longlong)
                   ((((TArray<UE::Net::FNetObjectFactoryRegistry::FFactoryData,TFixedAllocator<16>_>
                       *)((longlong)pTVar11 + 0xfffffffeab4475c0))->AllocatorInstance).InlineData
                    [0xf].Pad + 0x10) / 0x14);
    goto LAB_14428b7fd;
  }
  pTVar11 = (TArray<UE::Net::FNetObjectFactoryRegistry::FFactoryData,TFixedAllocator<16>_> *)
            ((longlong)pTVar11 + 0x14);
  goto joined_r0x00014428b7e3;
}

// SetFactoryRegistrationAllowed @ 144293a60

void __cdecl UE::Net::FNetObjectFactoryRegistry::SetFactoryRegistrationAllowed(bool param_1)

{
  Net::Private::bIsFactoryRegistrationAllowed = param_1;
  return;
}

// UnregisterFactory @ 144299b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Net::FNetObjectFactoryRegistry::UnregisterFactory(FName param_1)

{
  FName *this;
  code *pcVar1;
  TTypeCompatibleBytes<UE::Net::FNetObjectFactoryRegistry::FFactoryData> *pTVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  int iVar6;
  uint uVar7;
  TArray<UE::Net::FNetObjectFactoryRegistry::FFactoryData,TFixedAllocator<16>_> *pTVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  FName local_res8;
  FName local_res10;
  FString local_a8;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  local_res8 = param_1;
  if (Net::Private::bIsFactoryRegistrationAllowed) {
    uVar7 = 0;
    if (0 < NetFactories.ArrayNum) {
      pTVar8 = &NetFactories;
      iVar6 = NetFactories.ArrayNum;
      do {
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar6 = NetFactories.ArrayNum, bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this = (FName *)(NetFactories.AllocatorInstance.InlineData + (int)uVar7);
        if (*(FName *)(pTVar8->AllocatorInstance).InlineData[0].Pad == local_res8) {
          if (5 < (byte)LogIris._0_1_) {
            ::FName::ToString(this,&local_78);
            pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                         (NetFactories.AllocatorInstance.InlineData[(int)uVar7].Pad
                                         + 0xc));
            if (pUVar5 == (UObject *)0x0) {
              ::FString::FString(&local_a8,L"None");
            }
            else {
              local_res10.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
              local_res10.Number = *(uint *)&pUVar5->field_0x1c;
              ::FName::ToString(&local_res10,&local_a8);
            }
            Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            iVar6 = NetFactories.ArrayNum;
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
              iVar6 = NetFactories.ArrayNum;
            }
          }
          local_58 = 0;
          uStack_50 = CONCAT31(uStack_50._1_3_,0xff);
          uStack_4c = 0;
          uVar4 = 0;
          if ((int)uVar7 < iVar6) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          local_58._0_4_ = 0;
          local_58._4_4_ = 0;
          uStack_4c._0_4_ = 0;
          local_98 = 0;
          uStack_94 = 0;
          uStack_90 = uStack_50;
          uStack_8c = 0;
          uVar9 = (uint)local_58;
          uVar10 = local_58._4_4_;
          uVar11 = (undefined4)uStack_4c;
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar9 = local_98, uVar10 = uStack_94, uVar11 = uStack_8c, bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (this->ComparisonIndex).Value = uVar9;
          *(undefined4 *)(NetFactories.AllocatorInstance.InlineData[(int)uVar7].Pad + 4) = uVar10;
          *(undefined4 *)(NetFactories.AllocatorInstance.InlineData[(int)uVar7].Pad + 8) = uStack_90
          ;
          *(undefined4 *)(NetFactories.AllocatorInstance.InlineData[(int)uVar7].Pad + 0xc) = uVar11;
          pTVar2 = NetFactories.AllocatorInstance.InlineData + (int)uVar7;
          pTVar2->Pad[0x10] = '\0';
          pTVar2->Pad[0x11] = '\0';
          pTVar2->Pad[0x12] = '\0';
          pTVar2->Pad[0x13] = '\0';
          return;
        }
        uVar7 = uVar7 + 1;
        pTVar8 = (TArray<UE::Net::FNetObjectFactoryRegistry::FFactoryData,TFixedAllocator<16>_> *)
                 ((pTVar8->AllocatorInstance).InlineData + 1);
      } while ((int)uVar7 < iVar6);
    }
    if (1 < (byte)LogIris._0_1_) {
      ::FName::ToString(&local_res8,&local_68);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5564595620523540602>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetObjectFactoryRegistry.cpp"
                       ,0x7a,"false");
    if (bVar3) goto code_r0x000144299e0d;
  }
  else {
    if (1 < (byte)LogIris._0_1_) {
      ::FName::ToString(&local_res8,&local_88);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (Net::Private::bIsFactoryRegistrationAllowed != false) {
        return;
      }
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsFactoryRegistrationAllowed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetObjectFactoryRegistry.cpp"
                       ,0x68,L"");
    if (bVar3) {
code_r0x000144299e0d:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

