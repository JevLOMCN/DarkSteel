// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIOWrapper
// Functions: 11

// FOpenColorIOWrapperProcessor @ 14d75ea80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOpenColorIOWrapperProcessor * __thiscall
FOpenColorIOWrapperProcessor::FOpenColorIOWrapperProcessor
          (FOpenColorIOWrapperProcessor *this,FOpenColorIOWrapperConfig *param_1,
          TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3,TStringView<wchar_t> *param_4,
          bool param_5,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_6)

{
  int *piVar1;
  wchar_t *pwVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  wchar_t wVar6;
  char *pcVar7;
  char *pcVar8;
  shared_ptr<OpenColorIO_v2_4::Config_const_> *psVar9;
  Config *this_00;
  char *pcVar10;
  code *pcVar11;
  TStringView<wchar_t> *pTVar12;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar13;
  bool bVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  shared_ptr<OpenColorIO_v2_4::Context_const_> *psVar17;
  FOpenColorIOWrapperProcessor *pFVar18;
  longlong lVar19;
  size_t sVar20;
  FScriptContainerElement *pFVar21;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar22;
  IOpenColorIOWrapperModule *pIVar23;
  shared_ptr<OpenColorIO_v2_4::Processor_const_> *psVar24;
  undefined1 *puVar25;
  FScriptContainerElement *pFVar26;
  int iVar27;
  wchar_t *pwVar28;
  ulong64 _Size;
  FScriptContainerElement *_Dst;
  uint uVar29;
  ForAnyElementType FVar30;
  uint *puVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  uint uVar33;
  uint uVar34;
  TPimplPtr<FOpenColorIOProcessorPimpl,1> *pTVar35;
  undefined1 auStackY_6c8 [32];
  undefined1 local_677 [7];
  Context *local_670;
  Context *local_668;
  longlong *plStack_660;
  TPimplPtr<FOpenColorIOConfigPimpl,1> local_658;
  TPimplPtr<FOpenColorIOProcessorPimpl,1> *local_650;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_648;
  uint uStack_640;
  uint uStack_63c;
  undefined1 *local_638;
  undefined4 uStack_630;
  uint uStack_62c;
  uint local_628;
  uint uStack_624;
  int iStack_620;
  undefined4 uStack_61c;
  int local_618;
  int local_614;
  TBitArray<FDefaultBitArrayAllocator> *local_610;
  TStringView<wchar_t> *local_608;
  TStringView<wchar_t> *local_600;
  TStringView<wchar_t> *local_5f8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_5f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5e8;
  undefined8 uStack_5c8;
  Context *local_5b8;
  longlong *plStack_5b0;
  Context *local_5a8;
  longlong *plStack_5a0;
  Context *local_598;
  longlong *plStack_590;
  undefined1 local_588 [16];
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  FScriptContainerElement local_558 [128];
  ForAnyElementType local_4d8;
  FScriptContainerElement *local_4d0;
  int local_4c8;
  FScriptContainerElement local_4b8 [128];
  ForAnyElementType local_438;
  FScriptContainerElement *local_430;
  int local_428;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_418;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_378;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_2d8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_238;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_198;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  local_600 = param_4;
  local_650 = &this->Pimpl;
  local_608 = param_2;
  local_5f8 = param_3;
  pFVar16 = ::operator_new(0x20);
  _Dst = (FScriptContainerElement *)0x0;
  pFVar21 = _Dst;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    *(code **)pFVar16 = UE::Core::Private::PimplPtr::DeleterFunc<FOpenColorIOProcessorPimpl>;
    *(code **)(pFVar16 + 8) = UE::Core::Private::PimplPtr::CopyFunc<FOpenColorIOProcessorPimpl>;
    *(undefined8 *)(pFVar16 + 0x10) = 0;
    *(undefined8 *)(pFVar16 + 0x18) = 0;
    pFVar21 = pFVar16;
  }
  this->Pimpl = (TPimplPtr<FOpenColorIOProcessorPimpl,1>)((longlong)pFVar21 + 0x10);
  if (param_1 != (FOpenColorIOWrapperConfig *)0x0) {
    local_658 = param_1->Pimpl;
    if (*(Config **)local_658 != (Config *)0x0) {
      psVar17 = OpenColorIO_v2_4::Config::getCurrentContext
                          (*(Config **)local_658,
                           (shared_ptr<OpenColorIO_v2_4::Context_const_> *)local_588);
      OpenColorIO_v2_4::Context::createEditableCopy
                (*(Context **)psVar17,(shared_ptr<OpenColorIO_v2_4::Context> *)&local_668);
      if ((longlong *)local_588._8_8_ != (longlong *)0x0) {
        LOCK();
        plVar4 = (longlong *)(local_588._8_8_ + 8);
        lVar19 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (*(code *)**(undefined8 **)local_588._8_8_)(local_588._8_8_);
          LOCK();
          piVar1 = (int *)(local_588._8_8_ + 0xc);
          iVar27 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar27 == 1) {
            (**(code **)(*(longlong *)local_588._8_8_ + 8))(local_588._8_8_);
          }
        }
      }
      uStack_640 = 0;
      uVar34 = *(uint *)&param_6->field_0x28;
      pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)&param_6->field_0x10;
      uStack_63c = 1;
      local_628 = 0;
      uStack_62c = local_628;
      if (uVar34 != 0) {
        puVar31 = *(uint **)&param_6->field_0x20;
        if (*(uint **)&param_6->field_0x20 == (uint *)0x0) {
          puVar31 = (uint *)pTVar32;
        }
        uVar29 = *puVar31;
        pFVar21 = _Dst;
        pFVar16 = _Dst;
        local_628 = 0;
        uStack_640 = 0;
        while (uVar29 == 0) {
          iVar27 = (int)pFVar21;
          local_628 = (int)pFVar16 + 0x20;
          pFVar16 = (FScriptContainerElement *)(ulonglong)local_628;
          uStack_640 = iVar27 + 1;
          pFVar21 = (FScriptContainerElement *)(ulonglong)uStack_640;
          uStack_62c = uVar34;
          if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_640)
          goto LAB_14d75ec1d;
          uVar29 = puVar31[(longlong)iVar27 + 1];
        }
        uStack_63c = -uVar29 & uVar29;
        uVar5 = (ulonglong)uStack_63c * 2 + 1;
        lVar19 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_618 = (int)lVar19;
        uStack_62c = (local_628 - 1) + local_618;
        if ((int)uVar34 < (int)uStack_62c) {
          uStack_62c = uVar34;
        }
      }
LAB_14d75ec1d:
      uVar29 = *(uint *)&param_6->field_0x28;
      iStack_620 = *(int *)&param_6->field_0x8 - *(int *)&param_6->field_0x34;
      local_648 = param_6;
      uVar33 = uVar29 & 0xffffffe0;
      TStack_5e8._padding_ = CONCAT44(uStack_63c,uStack_640);
      uStack_630 = 0xffffffff;
      TStack_5e8.CurrentBitIndex = uStack_62c;
      TStack_5e8.UnvisitedBitMask = 0xffffffff;
      local_5f0 = param_6;
      iVar27 = (int)uVar29 >> 5;
      TStack_5e8._28_4_ = uStack_62c;
      TStack_5e8.BaseBitIndex = local_628;
      uStack_5c8 = CONCAT44(uStack_61c,iStack_620);
      local_670 = (Context *)CONCAT44(local_670._4_4_,uVar29);
      local_638 = (undefined1 *)pTVar32;
      uStack_624 = uStack_62c;
      local_610 = pTVar32;
      TStack_5e8.Array = pTVar32;
      if ((((int)uVar29 < 0) || ((int)uVar34 < (int)uVar29)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        pFVar18 = (FOpenColorIOWrapperProcessor *)(*pcVar11)();
        return pFVar18;
      }
      uVar34 = *(uint *)&param_6->field_0x28;
      if (uVar29 != uVar34) {
        local_670 = (Context *)CONCAT44(local_670._4_4_,uVar34);
        puVar25 = *(undefined1 **)&param_6->field_0x20;
        if (*(undefined1 **)&param_6->field_0x20 == (undefined1 *)0x0) {
          puVar25 = (undefined1 *)pTVar32;
        }
        uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar27 * 4);
        while (uVar29 == 0) {
          lVar19 = (longlong)iVar27;
          uVar33 = uVar33 + 0x20;
          iVar27 = iVar27 + 1;
          if ((int)(((int)(uVar34 - 1) >> 0x1f & 0x1fU) + (uVar34 - 1)) >> 5 < iVar27)
          goto LAB_14d75ed1f;
          uVar29 = *(uint *)(puVar25 + lVar19 * 4 + 4);
        }
        uVar5 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_614 = (int)lVar19;
        uVar33 = local_614 + -1 + uVar33;
        if ((int)uVar34 < (int)uVar33) {
          uVar33 = uVar34;
        }
        local_670 = (Context *)CONCAT44(local_670._4_4_,uVar33);
      }
LAB_14d75ed1f:
      iVar27 = (int)local_670;
      do {
        pTVar13 = local_5f0;
        if (*(int *)&local_5f0->field_0x8 - *(int *)&local_5f0->field_0x34 != (int)uStack_5c8) {
          local_677[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_677);
        }
        if (((TStack_5e8.CurrentBitIndex == iVar27) && (TStack_5e8.Array == pTVar32)) &&
           (pTVar13 == param_6)) {
          pwVar28 = L"Working Color Space";
          pFVar21 = _Dst;
          do {
            pwVar2 = pwVar28 + 1;
            pwVar28 = pwVar28 + 1;
            iVar27 = (int)pFVar21;
            pFVar21 = (FScriptContainerElement *)(ulonglong)(iVar27 + 1);
          } while (*pwVar2 != L'\0');
          _Size = (ulong64)(iVar27 + 2);
          pFVar21 = operator_new__(_Size);
          if (pFVar21 != (FScriptContainerElement *)0x0) {
            memset(pFVar21,0,_Size);
            _Dst = pFVar21;
          }
          pTVar22 = StringCast<char,128,wchar_t>(&local_418,L"Working Color Space");
          memcpy(_Dst,pTVar22->Ptr,_Size);
          if ((void *)local_418._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_418._padding_);
          }
          pTVar12 = local_608;
          iVar27 = (int)*(undefined8 *)&local_608->Size;
          if (iVar27 != 0) {
            iVar15 = FGenericPlatformStricmp::Strnicmp
                               (local_608->DataPtr,L"Working Color Space",(longlong)iVar27);
            if ((iVar15 == 0) && (L"Working Color Space"[iVar27] == L'\0')) {
              bVar14 = true;
              goto LAB_14d75f07c;
            }
          }
          bVar14 = false;
LAB_14d75f07c:
          pwVar28 = local_5f8->DataPtr;
          if (bVar14) {
            pTVar22 = StringCast<char,128,wchar_t>(&local_2d8,local_600->DataPtr);
            pcVar7 = pTVar22->Ptr;
            pTVar22 = StringCast<char,128,wchar_t>(&local_378,pwVar28);
            pcVar8 = pTVar22->Ptr;
            if (plStack_660 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_660 + 1) = (int)plStack_660[1] + 1;
              UNLOCK();
            }
            local_5a8 = local_668;
            plStack_5a0 = plStack_660;
            pIVar23 = IOpenColorIOWrapperModule::Get();
            lVar19 = (**(code **)((longlong)*pIVar23 + 0x40))(pIVar23);
            psVar9 = *(shared_ptr<OpenColorIO_v2_4::Config_const_> **)(lVar19 + 8);
            if (plStack_660 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_660 + 1) = (int)plStack_660[1] + 1;
              UNLOCK();
            }
            local_5b8 = local_668;
            plStack_5b0 = plStack_660;
            psVar24 = OpenColorIO_v2_4::Config::GetProcessorFromConfigs
                                ((shared_ptr<OpenColorIO_v2_4::Processor_const_> *)local_578,
                                 (shared_ptr<OpenColorIO_v2_4::Context_const_> *)&local_5b8,psVar9,
                                 (char *)_Dst,
                                 (shared_ptr<OpenColorIO_v2_4::Context_const_> *)&local_5a8,
                                 (shared_ptr<OpenColorIO_v2_4::Config_const_> *)local_658,pcVar8,
                                 pcVar7,(uint)param_5);
            pTVar35 = local_650;
            std::shared_ptr<OpenColorIO_v2_4::Processor_const_>::operator=
                      ((shared_ptr<OpenColorIO_v2_4::Processor_const_> *)*local_650,psVar24);
            if ((longlong *)local_578._8_8_ != (longlong *)0x0) {
              LOCK();
              plVar4 = (longlong *)(local_578._8_8_ + 8);
              lVar19 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (*(code *)**(undefined8 **)local_578._8_8_)(local_578._8_8_);
                LOCK();
                piVar1 = (int *)(local_578._8_8_ + 0xc);
                iVar27 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar27 == 1) {
                  (**(code **)(*(longlong *)local_578._8_8_ + 8))(local_578._8_8_);
                }
              }
            }
            plVar4 = plStack_5b0;
            if (plStack_5b0 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_5b0 + 1;
              lVar19 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*plStack_5b0)(plStack_5b0);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar27 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar27 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4);
                }
              }
            }
            plVar4 = plStack_5a0;
            if (plStack_5a0 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_5a0 + 1;
              lVar19 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*plStack_5a0)(plStack_5a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar27 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar27 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4);
                }
              }
            }
            local_f8._padding_ = local_2d8._padding_;
            if ((void *)local_378._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_378._padding_);
              local_f8._padding_ = local_2d8._padding_;
            }
          }
          else {
            this_00 = *(Config **)local_658;
            pTVar22 = StringCast<char,128,wchar_t>(&local_f8,local_600->DataPtr);
            pcVar7 = pTVar22->Ptr;
            pTVar22 = StringCast<char,128,wchar_t>(&local_198,pwVar28);
            pcVar8 = pTVar22->Ptr;
            pTVar22 = StringCast<char,128,wchar_t>(&local_238,pTVar12->DataPtr);
            pcVar10 = pTVar22->Ptr;
            if (plStack_660 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_660 + 1) = (int)plStack_660[1] + 1;
              UNLOCK();
            }
            local_598 = local_668;
            plStack_590 = plStack_660;
            psVar24 = OpenColorIO_v2_4::Config::getProcessor
                                (this_00,(shared_ptr<OpenColorIO_v2_4::Processor_const_> *)local_568
                                 ,(shared_ptr<OpenColorIO_v2_4::Context_const_> *)&local_598,pcVar10
                                 ,pcVar8,pcVar7,(uint)param_5);
            pTVar35 = local_650;
            std::shared_ptr<OpenColorIO_v2_4::Processor_const_>::operator=
                      ((shared_ptr<OpenColorIO_v2_4::Processor_const_> *)*local_650,psVar24);
            if ((longlong *)local_568._8_8_ != (longlong *)0x0) {
              LOCK();
              plVar4 = (longlong *)(local_568._8_8_ + 8);
              lVar19 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (*(code *)**(undefined8 **)local_568._8_8_)(local_568._8_8_);
                LOCK();
                piVar1 = (int *)(local_568._8_8_ + 0xc);
                iVar27 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar27 == 1) {
                  (**(code **)(*(longlong *)local_568._8_8_ + 8))(local_568._8_8_);
                }
              }
            }
            plVar4 = plStack_590;
            if (plStack_590 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_590 + 1;
              lVar19 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*plStack_590)(plStack_590);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar27 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar27 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4);
                }
              }
            }
            if ((void *)local_238._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_238._padding_);
            }
            if ((void *)local_198._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_198._padding_);
            }
          }
          if ((void *)local_f8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_f8._padding_);
          }
          operator_delete__(_Dst);
          if (plStack_660 == (longlong *)0x0) {
            return (FOpenColorIOWrapperProcessor *)pTVar35;
          }
          LOCK();
          plVar4 = plStack_660 + 1;
          lVar19 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar19 != 1) {
            return (FOpenColorIOWrapperProcessor *)pTVar35;
          }
          (**(code **)*plStack_660)(plStack_660);
          LOCK();
          piVar1 = (int *)((longlong)plStack_660 + 0xc);
          iVar27 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar27 != 1) {
            return (FOpenColorIOWrapperProcessor *)pTVar35;
          }
          (**(code **)(*plStack_660 + 8))(plStack_660);
          return (FOpenColorIOWrapperProcessor *)pTVar35;
        }
        local_438.Data = (FScriptContainerElement *)0x0;
        lVar19 = *(longlong *)pTVar13;
        plVar4 = (longlong *)(lVar19 + (longlong)TStack_5e8.CurrentBitIndex * 0x28);
        local_670 = local_668;
        if (*(int *)(lVar19 + 0x18 + (longlong)TStack_5e8.CurrentBitIndex * 0x28) == 0) {
          pwVar28 = L"";
LAB_14d75edb8:
          sVar20 = wcslen(pwVar28);
          local_428 = (int)sVar20;
          uVar34 = local_428 + 1;
          FVar30.Data = _Dst;
          if (0x80 < uVar34) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_438,0,uVar34,1);
            FVar30.Data = local_438.Data;
          }
          lVar19 = (longlong)(int)uVar34;
          pFVar21 = local_4b8;
          if (FVar30.Data != (FScriptContainerElement *)0x0) {
            pFVar21 = FVar30.Data;
          }
          bVar14 = false;
          pFVar16 = _Dst;
          local_430 = pFVar21;
          if (0 < (int)uVar34) {
            do {
              wVar6 = pwVar28[(longlong)pFVar16];
              pFVar21[(longlong)pFVar16] = SUB21(wVar6,0);
              pFVar16 = pFVar16 + 1;
              bVar14 = (bool)(bVar14 | 0x7f < (ushort)wVar6);
            } while ((longlong)pFVar16 < lVar19);
            pFVar16 = _Dst;
            if (bVar14) {
              do {
                if (0x7f < (ushort)pwVar28[(longlong)pFVar16]) {
                  pFVar21[(longlong)pFVar16] = (FScriptContainerElement)0x3f;
                }
                pFVar16 = pFVar16 + 1;
              } while ((longlong)pFVar16 < lVar19);
            }
          }
          if ((pFVar21 + lVar19 == (FScriptContainerElement *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Result",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                  ,0x25,L""), bVar14)) {
            pcVar11 = (code *)swi(3);
            pFVar18 = (FOpenColorIOWrapperProcessor *)(*pcVar11)();
            return pFVar18;
          }
        }
        else {
          pwVar28 = (wchar_t *)plVar4[2];
          if (pwVar28 != (wchar_t *)0x0) goto LAB_14d75edb8;
          local_430 = (FScriptContainerElement *)0x0;
          local_428 = 0;
        }
        pFVar21 = local_430;
        local_4d8.Data = (FScriptContainerElement *)0x0;
        if ((int)plVar4[1] == 0) {
          pwVar28 = L"";
LAB_14d75eeb3:
          sVar20 = wcslen(pwVar28);
          local_4c8 = (int)sVar20;
          uVar34 = local_4c8 + 1;
          FVar30.Data = _Dst;
          if (0x80 < uVar34) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_4d8,0,uVar34,1);
            FVar30.Data = local_4d8.Data;
          }
          lVar19 = (longlong)(int)uVar34;
          pFVar16 = local_558;
          if (FVar30.Data != (FScriptContainerElement *)0x0) {
            pFVar16 = FVar30.Data;
          }
          bVar14 = false;
          pFVar26 = _Dst;
          local_4d0 = pFVar16;
          if (0 < (int)uVar34) {
            do {
              wVar6 = pwVar28[(longlong)pFVar26];
              pFVar16[(longlong)pFVar26] = SUB21(wVar6,0);
              pFVar26 = pFVar26 + 1;
              bVar14 = (bool)(bVar14 | 0x7f < (ushort)wVar6);
            } while ((longlong)pFVar26 < lVar19);
            pFVar26 = _Dst;
            if (bVar14) {
              do {
                if (0x7f < (ushort)pwVar28[(longlong)pFVar26]) {
                  pFVar16[(longlong)pFVar26] = (FScriptContainerElement)0x3f;
                }
                pFVar26 = pFVar26 + 1;
              } while ((longlong)pFVar26 < lVar19);
            }
          }
          if ((pFVar16 + lVar19 == (FScriptContainerElement *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Result",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                  ,0x25,L""), bVar14)) {
            pcVar11 = (code *)swi(3);
            pFVar18 = (FOpenColorIOWrapperProcessor *)(*pcVar11)();
            return pFVar18;
          }
        }
        else {
          pwVar28 = (wchar_t *)*plVar4;
          if (pwVar28 != (wchar_t *)0x0) goto LAB_14d75eeb3;
          local_4d0 = (FScriptContainerElement *)0x0;
          local_4c8 = 0;
        }
        OpenColorIO_v2_4::Context::setStringVar(local_670,(char *)local_4d0,(char *)pFVar21);
        if (local_4d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d8.Data);
        }
        if (local_438.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_438.Data);
        }
        TStack_5e8.UnvisitedBitMask = TStack_5e8.UnvisitedBitMask & ~TStack_5e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5e8);
        pTVar32 = local_610;
      } while( true );
    }
  }
  return this;
}

// FOpenColorIOWrapperProcessor @ 14d75f3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOpenColorIOWrapperProcessor * __thiscall
FOpenColorIOWrapperProcessor::FOpenColorIOWrapperProcessor
          (FOpenColorIOWrapperProcessor *this,FOpenColorIOWrapperConfig *param_1,
          TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_4)

{
  int *piVar1;
  wchar_t *pwVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  wchar_t wVar6;
  char *pcVar7;
  shared_ptr<OpenColorIO_v2_4::Config_const_> *psVar8;
  Config *this_00;
  char *pcVar9;
  code *pcVar10;
  TStringView<wchar_t> *pTVar11;
  TStringView<wchar_t> *pTVar12;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar13;
  bool bVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  shared_ptr<OpenColorIO_v2_4::Context_const_> *psVar17;
  FOpenColorIOWrapperProcessor *pFVar18;
  longlong lVar19;
  size_t sVar20;
  FScriptContainerElement *pFVar21;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar22;
  IOpenColorIOWrapperModule *pIVar23;
  shared_ptr<OpenColorIO_v2_4::Processor_const_> *psVar24;
  undefined1 *puVar25;
  FScriptContainerElement *pFVar26;
  int iVar27;
  wchar_t *pwVar28;
  ulong64 _Size;
  FScriptContainerElement *_Dst;
  uint uVar29;
  ForAnyElementType FVar30;
  uint *puVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  uint uVar33;
  uint uVar34;
  TPimplPtr<FOpenColorIOProcessorPimpl,1> *pTVar35;
  undefined1 auStackY_648 [32];
  undefined1 local_608 [16];
  Context *local_5f8;
  longlong *plStack_5f0;
  Context *local_5e8;
  TPimplPtr<FOpenColorIOConfigPimpl,1> local_5e0;
  TPimplPtr<FOpenColorIOProcessorPimpl,1> *local_5d8;
  TStringView<wchar_t> *local_5d0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_5c8;
  uint uStack_5c0;
  uint uStack_5bc;
  undefined1 *local_5b8;
  undefined4 uStack_5b0;
  uint uStack_5ac;
  uint local_5a8;
  uint uStack_5a4;
  int iStack_5a0;
  undefined4 uStack_59c;
  int local_598;
  int local_594;
  TBitArray<FDefaultBitArrayAllocator> *local_590;
  TStringView<wchar_t> *local_588;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_580;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_578;
  undefined8 uStack_558;
  Context *local_548;
  longlong *plStack_540;
  Context *local_538;
  longlong *plStack_530;
  Context *local_528;
  longlong *plStack_520;
  Context *local_518;
  longlong *plStack_510;
  Context *local_508;
  longlong *plStack_500;
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  FScriptContainerElement local_4b8 [128];
  ForAnyElementType local_438;
  FScriptContainerElement *local_430;
  int local_428;
  FScriptContainerElement local_418 [128];
  ForAnyElementType local_398;
  FScriptContainerElement *local_390;
  int local_388;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_378;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_2d8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_238;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_198;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_648;
  local_5d8 = &this->Pimpl;
  local_5d0 = param_3;
  local_588 = param_2;
  pFVar16 = ::operator_new(0x20);
  _Dst = (FScriptContainerElement *)0x0;
  pFVar21 = _Dst;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    *(code **)pFVar16 = UE::Core::Private::PimplPtr::DeleterFunc<FOpenColorIOProcessorPimpl>;
    *(code **)(pFVar16 + 8) = UE::Core::Private::PimplPtr::CopyFunc<FOpenColorIOProcessorPimpl>;
    *(undefined8 *)(pFVar16 + 0x10) = 0;
    *(undefined8 *)(pFVar16 + 0x18) = 0;
    pFVar21 = pFVar16;
  }
  this->Pimpl = (TPimplPtr<FOpenColorIOProcessorPimpl,1>)((longlong)pFVar21 + 0x10);
  if (param_1 != (FOpenColorIOWrapperConfig *)0x0) {
    local_5e0 = param_1->Pimpl;
    if (*(Config **)local_5e0 != (Config *)0x0) {
      psVar17 = OpenColorIO_v2_4::Config::getCurrentContext
                          (*(Config **)local_5e0,
                           (shared_ptr<OpenColorIO_v2_4::Context_const_> *)local_4f8);
      OpenColorIO_v2_4::Context::createEditableCopy
                (*(Context **)psVar17,(shared_ptr<OpenColorIO_v2_4::Context> *)&local_5f8);
      if ((longlong *)local_4f8._8_8_ != (longlong *)0x0) {
        LOCK();
        plVar4 = (longlong *)(local_4f8._8_8_ + 8);
        lVar19 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (*(code *)**(undefined8 **)local_4f8._8_8_)(local_4f8._8_8_);
          LOCK();
          piVar1 = (int *)(local_4f8._8_8_ + 0xc);
          iVar27 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar27 == 1) {
            (**(code **)(*(longlong *)local_4f8._8_8_ + 8))(local_4f8._8_8_);
          }
        }
      }
      uStack_5c0 = 0;
      uVar34 = *(uint *)&param_4->field_0x28;
      pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)&param_4->field_0x10;
      uStack_5bc = 1;
      local_5a8 = 0;
      uStack_5ac = local_5a8;
      if (uVar34 != 0) {
        puVar31 = *(uint **)&param_4->field_0x20;
        if (*(uint **)&param_4->field_0x20 == (uint *)0x0) {
          puVar31 = (uint *)pTVar32;
        }
        uVar29 = *puVar31;
        pFVar21 = _Dst;
        pFVar16 = _Dst;
        local_5a8 = 0;
        uStack_5c0 = 0;
        while (uVar29 == 0) {
          iVar27 = (int)pFVar21;
          local_5a8 = (int)pFVar16 + 0x20;
          pFVar16 = (FScriptContainerElement *)(ulonglong)local_5a8;
          uStack_5c0 = iVar27 + 1;
          pFVar21 = (FScriptContainerElement *)(ulonglong)uStack_5c0;
          uStack_5ac = uVar34;
          if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_5c0)
          goto LAB_14d75f53d;
          uVar29 = puVar31[(longlong)iVar27 + 1];
        }
        uStack_5bc = -uVar29 & uVar29;
        uVar5 = (ulonglong)uStack_5bc * 2 + 1;
        lVar19 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_598 = (int)lVar19;
        uStack_5ac = (local_5a8 - 1) + local_598;
        if ((int)uVar34 < (int)uStack_5ac) {
          uStack_5ac = uVar34;
        }
      }
LAB_14d75f53d:
      uVar29 = *(uint *)&param_4->field_0x28;
      iStack_5a0 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
      local_5c8 = param_4;
      uVar33 = uVar29 & 0xffffffe0;
      TStack_578._padding_ = CONCAT44(uStack_5bc,uStack_5c0);
      uStack_5b0 = 0xffffffff;
      TStack_578.CurrentBitIndex = uStack_5ac;
      TStack_578.UnvisitedBitMask = 0xffffffff;
      local_580 = param_4;
      iVar27 = (int)uVar29 >> 5;
      TStack_578._28_4_ = uStack_5ac;
      TStack_578.BaseBitIndex = local_5a8;
      uStack_558 = CONCAT44(uStack_59c,iStack_5a0);
      local_5e8 = (Context *)CONCAT44(local_5e8._4_4_,uVar29);
      local_5b8 = (undefined1 *)pTVar32;
      uStack_5a4 = uStack_5ac;
      local_590 = pTVar32;
      TStack_578.Array = pTVar32;
      if ((((int)uVar29 < 0) || ((int)uVar34 < (int)uVar29)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        pFVar18 = (FOpenColorIOWrapperProcessor *)(*pcVar10)();
        return pFVar18;
      }
      uVar34 = *(uint *)&param_4->field_0x28;
      if (uVar29 != uVar34) {
        local_5e8 = (Context *)CONCAT44(local_5e8._4_4_,uVar34);
        puVar25 = *(undefined1 **)&param_4->field_0x20;
        if (*(undefined1 **)&param_4->field_0x20 == (undefined1 *)0x0) {
          puVar25 = (undefined1 *)pTVar32;
        }
        uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar27 * 4);
        while (uVar29 == 0) {
          lVar19 = (longlong)iVar27;
          uVar33 = uVar33 + 0x20;
          iVar27 = iVar27 + 1;
          if ((int)(((int)(uVar34 - 1) >> 0x1f & 0x1fU) + (uVar34 - 1)) >> 5 < iVar27)
          goto LAB_14d75f63f;
          uVar29 = *(uint *)(puVar25 + lVar19 * 4 + 4);
        }
        uVar5 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_594 = (int)lVar19;
        uVar33 = local_594 + -1 + uVar33;
        if ((int)uVar34 < (int)uVar33) {
          uVar33 = uVar34;
        }
        local_5e8 = (Context *)CONCAT44(local_5e8._4_4_,uVar33);
      }
LAB_14d75f63f:
      iVar27 = (int)local_5e8;
      do {
        pTVar13 = local_580;
        if (*(int *)&local_580->field_0x8 - *(int *)&local_580->field_0x34 != (int)uStack_558) {
          local_608[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_608);
        }
        if (((TStack_578.CurrentBitIndex == iVar27) && (TStack_578.Array == pTVar32)) &&
           (pTVar13 == param_4)) {
          pwVar28 = L"Working Color Space";
          pFVar21 = _Dst;
          do {
            pwVar2 = pwVar28 + 1;
            pwVar28 = pwVar28 + 1;
            iVar27 = (int)pFVar21;
            pFVar21 = (FScriptContainerElement *)(ulonglong)(iVar27 + 1);
          } while (*pwVar2 != L'\0');
          _Size = (ulong64)(iVar27 + 2);
          pFVar21 = operator_new__(_Size);
          if (pFVar21 != (FScriptContainerElement *)0x0) {
            memset(pFVar21,0,_Size);
            _Dst = pFVar21;
          }
          pTVar22 = StringCast<char,128,wchar_t>(&local_378,L"Working Color Space");
          memcpy(_Dst,pTVar22->Ptr,_Size);
          if ((void *)local_378._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_378._padding_);
          }
          pTVar12 = local_588;
          iVar27 = (int)*(undefined8 *)&local_588->Size;
          if (iVar27 == 0) {
LAB_14d75fadf:
            pTVar11 = local_5d0;
            iVar27 = (int)*(undefined8 *)&local_5d0->Size;
            if (iVar27 != 0) {
              iVar15 = FGenericPlatformStricmp::Strnicmp
                                 (local_5d0->DataPtr,L"Working Color Space",(longlong)iVar27);
              if ((iVar15 == 0) && (L"Working Color Space"[iVar27] == L'\0')) {
                pIVar23 = IOpenColorIOWrapperModule::Get();
                lVar19 = (**(code **)((longlong)*pIVar23 + 0x40))(pIVar23);
                psVar8 = *(shared_ptr<OpenColorIO_v2_4::Config_const_> **)(lVar19 + 8);
                if (plStack_5f0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_5f0 + 1) = (int)plStack_5f0[1] + 1;
                  UNLOCK();
                }
                local_518 = local_5f8;
                plStack_510 = plStack_5f0;
                pTVar22 = StringCast<char,128,wchar_t>(&local_238,pTVar12->DataPtr);
                pcVar7 = pTVar22->Ptr;
                if (plStack_5f0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_5f0 + 1) = (int)plStack_5f0[1] + 1;
                  UNLOCK();
                }
                local_528 = local_5f8;
                plStack_520 = plStack_5f0;
                psVar24 = OpenColorIO_v2_4::Config::GetProcessorFromConfigs
                                    ((shared_ptr<OpenColorIO_v2_4::Processor_const_> *)local_4d8,
                                     (shared_ptr<OpenColorIO_v2_4::Context_const_> *)&local_528,
                                     (shared_ptr<OpenColorIO_v2_4::Config_const_> *)local_5e0,pcVar7
                                     ,(shared_ptr<OpenColorIO_v2_4::Context_const_> *)&local_518,
                                     psVar8,(char *)_Dst);
                pTVar35 = local_5d8;
                std::shared_ptr<OpenColorIO_v2_4::Processor_const_>::operator=
                          ((shared_ptr<OpenColorIO_v2_4::Processor_const_> *)*local_5d8,psVar24);
                if ((longlong *)local_4d8._8_8_ != (longlong *)0x0) {
                  LOCK();
                  plVar4 = (longlong *)(local_4d8._8_8_ + 8);
                  lVar19 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar19 == 1) {
                    (*(code *)**(undefined8 **)local_4d8._8_8_)(local_4d8._8_8_);
                    LOCK();
                    piVar1 = (int *)(local_4d8._8_8_ + 0xc);
                    iVar27 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar27 == 1) {
                      (**(code **)(*(longlong *)local_4d8._8_8_ + 8))(local_4d8._8_8_);
                    }
                  }
                }
                plVar4 = plStack_520;
                if (plStack_520 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = plStack_520 + 1;
                  lVar19 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar19 == 1) {
                    (**(code **)*plStack_520)(plStack_520);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar4 + 0xc);
                    iVar27 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar27 == 1) {
                      (**(code **)(*plVar4 + 8))(plVar4);
                    }
                  }
                }
                if ((void *)local_238._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_238._padding_);
                }
                plVar4 = plStack_510;
                if (plStack_510 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = plStack_510 + 1;
                  lVar19 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar19 == 1) {
                    (**(code **)*plStack_510)(plStack_510);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar4 + 0xc);
                    iVar27 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar27 == 1) {
                      (**(code **)(*plVar4 + 8))(plVar4);
                    }
                  }
                }
                goto LAB_14d75fd65;
              }
            }
            this_00 = *(Config **)local_5e0;
            pTVar22 = StringCast<char,128,wchar_t>(&local_f8,pTVar11->DataPtr);
            pcVar7 = pTVar22->Ptr;
            pTVar22 = StringCast<char,128,wchar_t>(&local_198,pTVar12->DataPtr);
            pcVar9 = pTVar22->Ptr;
            if (plStack_5f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_5f0 + 1) = (int)plStack_5f0[1] + 1;
              UNLOCK();
            }
            local_508 = local_5f8;
            plStack_500 = plStack_5f0;
            psVar24 = OpenColorIO_v2_4::Config::getProcessor
                                (this_00,(shared_ptr<OpenColorIO_v2_4::Processor_const_> *)local_4c8
                                 ,(shared_ptr<OpenColorIO_v2_4::Context_const_> *)&local_508,pcVar9,
                                 pcVar7);
            pTVar35 = local_5d8;
            std::shared_ptr<OpenColorIO_v2_4::Processor_const_>::operator=
                      ((shared_ptr<OpenColorIO_v2_4::Processor_const_> *)*local_5d8,psVar24);
            if ((longlong *)local_4c8._8_8_ != (longlong *)0x0) {
              LOCK();
              plVar4 = (longlong *)(local_4c8._8_8_ + 8);
              lVar19 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (*(code *)**(undefined8 **)local_4c8._8_8_)(local_4c8._8_8_);
                LOCK();
                piVar1 = (int *)(local_4c8._8_8_ + 0xc);
                iVar27 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar27 == 1) {
                  (**(code **)(*(longlong *)local_4c8._8_8_ + 8))(local_4c8._8_8_);
                }
              }
            }
            plVar4 = plStack_500;
            if (plStack_500 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_500 + 1;
              lVar19 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*plStack_500)(plStack_500);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar27 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar27 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4);
                }
              }
            }
            if ((void *)local_198._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_198._padding_);
            }
          }
          else {
            iVar15 = FGenericPlatformStricmp::Strnicmp
                               (local_588->DataPtr,L"Working Color Space",(longlong)iVar27);
            if ((iVar15 != 0) || (L"Working Color Space"[iVar27] != L'\0')) goto LAB_14d75fadf;
            pTVar22 = StringCast<char,128,wchar_t>(&local_2d8,local_5d0->DataPtr);
            pcVar7 = pTVar22->Ptr;
            if (plStack_5f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_5f0 + 1) = (int)plStack_5f0[1] + 1;
              UNLOCK();
            }
            local_538 = local_5f8;
            plStack_530 = plStack_5f0;
            pIVar23 = IOpenColorIOWrapperModule::Get();
            lVar19 = (**(code **)((longlong)*pIVar23 + 0x40))(pIVar23);
            psVar8 = *(shared_ptr<OpenColorIO_v2_4::Config_const_> **)(lVar19 + 8);
            if (plStack_5f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_5f0 + 1) = (int)plStack_5f0[1] + 1;
              UNLOCK();
            }
            local_548 = local_5f8;
            plStack_540 = plStack_5f0;
            psVar24 = OpenColorIO_v2_4::Config::GetProcessorFromConfigs
                                ((shared_ptr<OpenColorIO_v2_4::Processor_const_> *)local_4e8,
                                 (shared_ptr<OpenColorIO_v2_4::Context_const_> *)&local_548,psVar8,
                                 (char *)_Dst,
                                 (shared_ptr<OpenColorIO_v2_4::Context_const_> *)&local_538,
                                 (shared_ptr<OpenColorIO_v2_4::Config_const_> *)local_5e0,pcVar7);
            pTVar35 = local_5d8;
            std::shared_ptr<OpenColorIO_v2_4::Processor_const_>::operator=
                      ((shared_ptr<OpenColorIO_v2_4::Processor_const_> *)*local_5d8,psVar24);
            if ((longlong *)local_4e8._8_8_ != (longlong *)0x0) {
              LOCK();
              plVar4 = (longlong *)(local_4e8._8_8_ + 8);
              lVar19 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (*(code *)**(undefined8 **)local_4e8._8_8_)(local_4e8._8_8_);
                LOCK();
                piVar1 = (int *)(local_4e8._8_8_ + 0xc);
                iVar27 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar27 == 1) {
                  (**(code **)(*(longlong *)local_4e8._8_8_ + 8))(local_4e8._8_8_);
                }
              }
            }
            plVar4 = plStack_540;
            if (plStack_540 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_540 + 1;
              lVar19 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*plStack_540)(plStack_540);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar27 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar27 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4);
                }
              }
            }
            plVar4 = plStack_530;
            local_f8._padding_ = local_2d8._padding_;
            if (plStack_530 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_530 + 1;
              lVar19 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*plStack_530)(plStack_530);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar27 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                local_f8._padding_ = local_2d8._padding_;
                if (iVar27 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4);
                  local_f8._padding_ = local_2d8._padding_;
                }
              }
            }
          }
          if ((void *)local_f8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_f8._padding_);
          }
LAB_14d75fd65:
          operator_delete__(_Dst);
          if (plStack_5f0 == (longlong *)0x0) {
            return (FOpenColorIOWrapperProcessor *)pTVar35;
          }
          LOCK();
          plVar4 = plStack_5f0 + 1;
          lVar19 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar19 != 1) {
            return (FOpenColorIOWrapperProcessor *)pTVar35;
          }
          (**(code **)*plStack_5f0)(plStack_5f0);
          LOCK();
          piVar1 = (int *)((longlong)plStack_5f0 + 0xc);
          iVar27 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar27 != 1) {
            return (FOpenColorIOWrapperProcessor *)pTVar35;
          }
          (**(code **)(*plStack_5f0 + 8))(plStack_5f0);
          return (FOpenColorIOWrapperProcessor *)pTVar35;
        }
        local_398.Data = (FScriptContainerElement *)0x0;
        lVar19 = *(longlong *)pTVar13;
        plVar4 = (longlong *)(lVar19 + (longlong)TStack_578.CurrentBitIndex * 0x28);
        local_5e8 = local_5f8;
        if (*(int *)(lVar19 + 0x18 + (longlong)TStack_578.CurrentBitIndex * 0x28) == 0) {
          pwVar28 = L"";
LAB_14d75f6d8:
          sVar20 = wcslen(pwVar28);
          local_388 = (int)sVar20;
          uVar34 = local_388 + 1;
          FVar30.Data = _Dst;
          if (0x80 < uVar34) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_398,0,uVar34,1);
            FVar30.Data = local_398.Data;
          }
          lVar19 = (longlong)(int)uVar34;
          pFVar21 = local_418;
          if (FVar30.Data != (FScriptContainerElement *)0x0) {
            pFVar21 = FVar30.Data;
          }
          bVar14 = false;
          pFVar16 = _Dst;
          local_390 = pFVar21;
          if (0 < (int)uVar34) {
            do {
              wVar6 = pwVar28[(longlong)pFVar16];
              pFVar16[(longlong)pFVar21] = SUB21(wVar6,0);
              pFVar16 = pFVar16 + 1;
              bVar14 = (bool)(bVar14 | 0x7f < (ushort)wVar6);
            } while ((longlong)pFVar16 < lVar19);
            pFVar16 = _Dst;
            if (bVar14) {
              do {
                if (0x7f < (ushort)pwVar28[(longlong)pFVar16]) {
                  pFVar16[(longlong)pFVar21] = (FScriptContainerElement)0x3f;
                }
                pFVar16 = pFVar16 + 1;
              } while ((longlong)pFVar16 < lVar19);
            }
          }
          if ((pFVar21 + lVar19 == (FScriptContainerElement *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Result",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                  ,0x25,L""), bVar14)) {
            pcVar10 = (code *)swi(3);
            pFVar18 = (FOpenColorIOWrapperProcessor *)(*pcVar10)();
            return pFVar18;
          }
        }
        else {
          pwVar28 = (wchar_t *)plVar4[2];
          if (pwVar28 != (wchar_t *)0x0) goto LAB_14d75f6d8;
          local_390 = (FScriptContainerElement *)0x0;
          local_388 = 0;
        }
        pFVar21 = local_390;
        local_438.Data = (FScriptContainerElement *)0x0;
        if ((int)plVar4[1] == 0) {
          pwVar28 = L"";
LAB_14d75f7d3:
          sVar20 = wcslen(pwVar28);
          local_428 = (int)sVar20;
          uVar34 = local_428 + 1;
          FVar30.Data = _Dst;
          if (0x80 < uVar34) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_438,0,uVar34,1);
            FVar30.Data = local_438.Data;
          }
          lVar19 = (longlong)(int)uVar34;
          pFVar16 = local_4b8;
          if (FVar30.Data != (FScriptContainerElement *)0x0) {
            pFVar16 = FVar30.Data;
          }
          bVar14 = false;
          pFVar26 = _Dst;
          local_430 = pFVar16;
          if (0 < (int)uVar34) {
            do {
              wVar6 = pwVar28[(longlong)pFVar26];
              pFVar26[(longlong)pFVar16] = SUB21(wVar6,0);
              pFVar26 = pFVar26 + 1;
              bVar14 = (bool)(bVar14 | 0x7f < (ushort)wVar6);
            } while ((longlong)pFVar26 < lVar19);
            pFVar26 = _Dst;
            if (bVar14) {
              do {
                if (0x7f < (ushort)pwVar28[(longlong)pFVar26]) {
                  pFVar26[(longlong)pFVar16] = (FScriptContainerElement)0x3f;
                }
                pFVar26 = pFVar26 + 1;
              } while ((longlong)pFVar26 < lVar19);
            }
          }
          if ((pFVar16 + lVar19 == (FScriptContainerElement *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Result",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                  ,0x25,L""), bVar14)) {
            pcVar10 = (code *)swi(3);
            pFVar18 = (FOpenColorIOWrapperProcessor *)(*pcVar10)();
            return pFVar18;
          }
        }
        else {
          pwVar28 = (wchar_t *)*plVar4;
          if (pwVar28 != (wchar_t *)0x0) goto LAB_14d75f7d3;
          local_430 = (FScriptContainerElement *)0x0;
          local_428 = 0;
        }
        OpenColorIO_v2_4::Context::setStringVar(local_5e8,(char *)local_430,(char *)pFVar21);
        if (local_438.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_438.Data);
        }
        if (local_398.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.Data);
        }
        TStack_578.UnvisitedBitMask = TStack_578.UnvisitedBitMask & ~TStack_578._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_578);
        pTVar32 = local_590;
      } while( true );
    }
  }
  return this;
}

// FOpenColorIOWrapperProcessor @ 14d75fdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOpenColorIOWrapperProcessor * __thiscall
FOpenColorIOWrapperProcessor::FOpenColorIOWrapperProcessor
          (FOpenColorIOWrapperProcessor *this,FOpenColorIOWrapperConfig *param_1,
          TStringView<wchar_t> *param_2,bool param_3,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  wchar_t wVar5;
  Config *this_00;
  char *pcVar6;
  code *pcVar7;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar8
  ;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  shared_ptr<OpenColorIO_v2_4::Context_const_> *psVar12;
  FOpenColorIOWrapperProcessor *pFVar13;
  longlong lVar14;
  size_t sVar15;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar16;
  shared_ptr<OpenColorIO_v2_4::Processor_const_> *psVar17;
  undefined1 *puVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  wchar_t *pwVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  uint *puVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStackY_348 [32];
  undefined1 local_318;
  byte local_317;
  Context *local_310;
  Context *local_308;
  longlong *plStack_300;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_2f8;
  uint uStack_2f0;
  uint uStack_2ec;
  undefined1 *local_2e8;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  uint local_2d8;
  uint uStack_2d4;
  int iStack_2d0;
  undefined4 uStack_2cc;
  int local_2c8;
  int local_2c4;
  TBitArray<FDefaultBitArrayAllocator> *local_2c0;
  TPimplPtr<FOpenColorIOConfigPimpl,1> local_2b8;
  TStringView<wchar_t> *local_2b0;
  TPimplPtr<FOpenColorIOProcessorPimpl,1> *local_2a8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_2a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_298;
  undefined8 uStack_278;
  Context *local_268;
  longlong *plStack_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  FScriptContainerElement local_238 [128];
  ForAnyElementType local_1b8;
  FScriptContainerElement *local_1b0;
  int local_1a8;
  FScriptContainerElement local_198 [128];
  ForAnyElementType local_118;
  FScriptContainerElement *local_110;
  int local_108;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_317 = param_3;
  local_2b0 = param_2;
  local_2a8 = &this->Pimpl;
  pFVar10 = ::operator_new(0x20);
  pFVar22 = (FScriptContainerElement *)0x0;
  pFVar11 = pFVar22;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    *(code **)pFVar10 = UE::Core::Private::PimplPtr::DeleterFunc<FOpenColorIOProcessorPimpl>;
    *(code **)(pFVar10 + 8) = UE::Core::Private::PimplPtr::CopyFunc<FOpenColorIOProcessorPimpl>;
    *(undefined8 *)(pFVar10 + 0x10) = 0;
    *(undefined8 *)(pFVar10 + 0x18) = 0;
    pFVar11 = pFVar10;
  }
  this->Pimpl = (TPimplPtr<FOpenColorIOProcessorPimpl,1>)((longlong)pFVar11 + 0x10);
  if (param_1 != (FOpenColorIOWrapperConfig *)0x0) {
    local_2b8 = param_1->Pimpl;
    if (*(Config **)local_2b8 != (Config *)0x0) {
      psVar12 = OpenColorIO_v2_4::Config::getCurrentContext
                          (*(Config **)local_2b8,
                           (shared_ptr<OpenColorIO_v2_4::Context_const_> *)local_258);
      OpenColorIO_v2_4::Context::createEditableCopy
                (*(Context **)psVar12,(shared_ptr<OpenColorIO_v2_4::Context> *)&local_308);
      if ((longlong *)local_258._8_8_ != (longlong *)0x0) {
        LOCK();
        plVar3 = (longlong *)(local_258._8_8_ + 8);
        lVar14 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (*(code *)**(undefined8 **)local_258._8_8_)(local_258._8_8_);
          LOCK();
          piVar1 = (int *)(local_258._8_8_ + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*(longlong *)local_258._8_8_ + 8))(local_258._8_8_);
          }
        }
      }
      uStack_2f0 = 0;
      uVar28 = *(uint *)&param_4->field_0x28;
      pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&param_4->field_0x10;
      uStack_2ec = 1;
      local_2d8 = 0;
      uStack_2dc = local_2d8;
      if (uVar28 != 0) {
        puVar25 = *(uint **)&param_4->field_0x20;
        if (*(uint **)&param_4->field_0x20 == (uint *)0x0) {
          puVar25 = (uint *)pTVar26;
        }
        uVar23 = *puVar25;
        pFVar11 = pFVar22;
        pFVar10 = pFVar22;
        local_2d8 = 0;
        uStack_2f0 = 0;
        while (uVar23 == 0) {
          iVar20 = (int)pFVar11;
          local_2d8 = (int)pFVar10 + 0x20;
          pFVar10 = (FScriptContainerElement *)(ulonglong)local_2d8;
          uStack_2f0 = iVar20 + 1;
          pFVar11 = (FScriptContainerElement *)(ulonglong)uStack_2f0;
          uStack_2dc = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2f0)
          goto LAB_14d75ff7d;
          uVar23 = puVar25[(longlong)iVar20 + 1];
        }
        uStack_2ec = -uVar23 & uVar23;
        uVar4 = (ulonglong)uStack_2ec * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_2c8 = (int)lVar14;
        uStack_2dc = (local_2d8 - 1) + local_2c8;
        if ((int)uVar28 < (int)uStack_2dc) {
          uStack_2dc = uVar28;
        }
      }
LAB_14d75ff7d:
      uVar23 = *(uint *)&param_4->field_0x28;
      iStack_2d0 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
      local_2f8 = param_4;
      uVar27 = uVar23 & 0xffffffe0;
      TStack_298._padding_ = CONCAT44(uStack_2ec,uStack_2f0);
      uStack_2e0 = 0xffffffff;
      TStack_298.CurrentBitIndex = uStack_2dc;
      TStack_298.UnvisitedBitMask = 0xffffffff;
      local_2a0 = param_4;
      iVar20 = (int)uVar23 >> 5;
      TStack_298._28_4_ = uStack_2dc;
      TStack_298.BaseBitIndex = local_2d8;
      uStack_278 = CONCAT44(uStack_2cc,iStack_2d0);
      local_310 = (Context *)CONCAT44(local_310._4_4_,uVar23);
      local_2e8 = (undefined1 *)pTVar26;
      uStack_2d4 = uStack_2dc;
      local_2c0 = pTVar26;
      TStack_298.Array = pTVar26;
      if ((((int)uVar23 < 0) || ((int)uVar28 < (int)uVar23)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FOpenColorIOWrapperProcessor *)(*pcVar7)();
        return pFVar13;
      }
      uVar28 = *(uint *)&param_4->field_0x28;
      if (uVar23 != uVar28) {
        local_310 = (Context *)CONCAT44(local_310._4_4_,uVar28);
        puVar18 = *(undefined1 **)&param_4->field_0x20;
        if (*(undefined1 **)&param_4->field_0x20 == (undefined1 *)0x0) {
          puVar18 = (undefined1 *)pTVar26;
        }
        uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar20 * 4);
        while (uVar23 == 0) {
          lVar14 = (longlong)iVar20;
          uVar27 = uVar27 + 0x20;
          iVar20 = iVar20 + 1;
          if ((int)(((int)(uVar28 - 1) >> 0x1f & 0x1fU) + (uVar28 - 1)) >> 5 < iVar20)
          goto LAB_14d76008f;
          uVar23 = *(uint *)(puVar18 + lVar14 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_2c4 = (int)lVar14;
        uVar27 = local_2c4 + -1 + uVar27;
        if ((int)uVar28 < (int)uVar27) {
          uVar27 = uVar28;
        }
        local_310 = (Context *)CONCAT44(local_310._4_4_,uVar27);
      }
LAB_14d76008f:
      iVar20 = (int)local_310;
      while( true ) {
        pTVar8 = local_2a0;
        if (*(int *)&local_2a0->field_0x8 - *(int *)&local_2a0->field_0x34 != (int)uStack_278) {
          local_318 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_318);
        }
        if (((TStack_298.CurrentBitIndex == iVar20) && (TStack_298.Array == pTVar26)) &&
           (pTVar8 == param_4)) break;
        local_118.Data = (FScriptContainerElement *)0x0;
        lVar14 = *(longlong *)pTVar8;
        plVar3 = (longlong *)(lVar14 + (longlong)TStack_298.CurrentBitIndex * 0x28);
        local_310 = local_308;
        if (*(int *)(lVar14 + 0x18 + (longlong)TStack_298.CurrentBitIndex * 0x28) == 0) {
          pwVar21 = L"";
LAB_14d760128:
          sVar15 = wcslen(pwVar21);
          local_108 = (int)sVar15;
          uVar28 = local_108 + 1;
          FVar24.Data = pFVar22;
          if (0x80 < uVar28) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_118,0,uVar28,1);
            FVar24.Data = local_118.Data;
          }
          lVar14 = (longlong)(int)uVar28;
          pFVar11 = local_198;
          if (FVar24.Data != (FScriptContainerElement *)0x0) {
            pFVar11 = FVar24.Data;
          }
          bVar9 = false;
          pFVar10 = pFVar22;
          local_110 = pFVar11;
          if (0 < (int)uVar28) {
            do {
              wVar5 = pwVar21[(longlong)pFVar10];
              pFVar10[(longlong)pFVar11] = SUB21(wVar5,0);
              pFVar10 = pFVar10 + 1;
              bVar9 = (bool)(bVar9 | 0x7f < (ushort)wVar5);
            } while ((longlong)pFVar10 < lVar14);
            pFVar10 = pFVar22;
            if (bVar9) {
              do {
                if (0x7f < (ushort)pwVar21[(longlong)pFVar10]) {
                  pFVar11[(longlong)pFVar10] = (FScriptContainerElement)0x3f;
                }
                pFVar10 = pFVar10 + 1;
              } while ((longlong)pFVar10 < lVar14);
            }
          }
          if ((pFVar11 + lVar14 == (FScriptContainerElement *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            pFVar13 = (FOpenColorIOWrapperProcessor *)(*pcVar7)();
            return pFVar13;
          }
        }
        else {
          pwVar21 = (wchar_t *)plVar3[2];
          if (pwVar21 != (wchar_t *)0x0) goto LAB_14d760128;
          local_110 = (FScriptContainerElement *)0x0;
          local_108 = 0;
        }
        pFVar11 = local_110;
        local_1b8.Data = (FScriptContainerElement *)0x0;
        if ((int)plVar3[1] == 0) {
          pwVar21 = L"";
LAB_14d760223:
          sVar15 = wcslen(pwVar21);
          local_1a8 = (int)sVar15;
          uVar28 = local_1a8 + 1;
          FVar24.Data = pFVar22;
          if (0x80 < uVar28) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1b8,0,uVar28,1);
            FVar24.Data = local_1b8.Data;
          }
          lVar14 = (longlong)(int)uVar28;
          pFVar10 = local_238;
          if (FVar24.Data != (FScriptContainerElement *)0x0) {
            pFVar10 = FVar24.Data;
          }
          bVar9 = false;
          pFVar19 = pFVar22;
          local_1b0 = pFVar10;
          if (0 < (int)uVar28) {
            do {
              wVar5 = pwVar21[(longlong)pFVar19];
              pFVar10[(longlong)pFVar19] = SUB21(wVar5,0);
              pFVar19 = pFVar19 + 1;
              bVar9 = (bool)(bVar9 | 0x7f < (ushort)wVar5);
            } while ((longlong)pFVar19 < lVar14);
            pFVar19 = pFVar22;
            if (bVar9) {
              do {
                if (0x7f < (ushort)pwVar21[(longlong)pFVar19]) {
                  pFVar19[(longlong)pFVar10] = (FScriptContainerElement)0x3f;
                }
                pFVar19 = pFVar19 + 1;
              } while ((longlong)pFVar19 < lVar14);
            }
          }
          if ((pFVar10 + lVar14 == (FScriptContainerElement *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            pFVar13 = (FOpenColorIOWrapperProcessor *)(*pcVar7)();
            return pFVar13;
          }
        }
        else {
          pwVar21 = (wchar_t *)*plVar3;
          if (pwVar21 != (wchar_t *)0x0) goto LAB_14d760223;
          local_1b0 = (FScriptContainerElement *)0x0;
          local_1a8 = 0;
        }
        OpenColorIO_v2_4::Context::setStringVar(local_310,(char *)local_1b0,(char *)pFVar11);
        if (local_1b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data);
        }
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data);
        }
        TStack_298.UnvisitedBitMask = TStack_298.UnvisitedBitMask & ~TStack_298._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_298);
        pTVar26 = local_2c0;
      }
      this_00 = *(Config **)local_2b8;
      pTVar16 = StringCast<char,128,wchar_t>(&local_f8,local_2b0->DataPtr);
      pcVar6 = pTVar16->Ptr;
      if (plStack_300 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_300 + 1) = (int)plStack_300[1] + 1;
        UNLOCK();
      }
      local_268 = local_308;
      plStack_260 = plStack_300;
      psVar17 = OpenColorIO_v2_4::Config::getProcessor
                          (this_00,(shared_ptr<OpenColorIO_v2_4::Processor_const_> *)local_248,
                           (shared_ptr<OpenColorIO_v2_4::Context_const_> *)&local_268,pcVar6,
                           (uint)local_317);
      this = (FOpenColorIOWrapperProcessor *)local_2a8;
      std::shared_ptr<OpenColorIO_v2_4::Processor_const_>::operator=
                ((shared_ptr<OpenColorIO_v2_4::Processor_const_> *)*local_2a8,psVar17);
      if ((longlong *)local_248._8_8_ != (longlong *)0x0) {
        LOCK();
        plVar3 = (longlong *)(local_248._8_8_ + 8);
        lVar14 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (*(code *)**(undefined8 **)local_248._8_8_)(local_248._8_8_);
          LOCK();
          piVar1 = (int *)(local_248._8_8_ + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*(longlong *)local_248._8_8_ + 8))(local_248._8_8_);
          }
        }
      }
      plVar3 = plStack_260;
      if (plStack_260 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_260 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_260)(plStack_260);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3);
          }
        }
      }
      if ((void *)local_f8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_f8._padding_);
      }
      if (plStack_300 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_300 + 1;
        lVar14 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_300)(plStack_300);
          LOCK();
          piVar1 = (int *)((longlong)plStack_300 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plStack_300 + 8))(plStack_300);
          }
        }
      }
    }
  }
  return this;
}

// FOpenColorIOWrapperProcessor @ 14d7604a0

FOpenColorIOWrapperProcessor * __thiscall
FOpenColorIOWrapperProcessor::FOpenColorIOWrapperProcessor(FOpenColorIOWrapperProcessor *this)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = UE::Core::Private::PimplPtr::DeleterFunc<FOpenColorIOProcessorPimpl>;
    puVar1[1] = UE::Core::Private::PimplPtr::CopyFunc<FOpenColorIOProcessorPimpl>;
    puVar1[2] = 0;
    puVar1[3] = 0;
    this->Pimpl = (TPimplPtr<FOpenColorIOProcessorPimpl,1>)(puVar1 + 2);
    return this;
  }
  this->Pimpl = (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x10;
  return this;
}

// CreateTransformToWorkingColorSpace @ 14d760840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FOpenColorIOWrapperProcessor __cdecl
FOpenColorIOWrapperProcessor::CreateTransformToWorkingColorSpace
          (FOpenColorIOWrapperSourceColorSettings *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  EChromaticAdaptationMethod EVar4;
  Config *this;
  code *pcVar5;
  TPimplPtr<FOpenColorIOConfigPimpl,1> TVar6;
  longlong *plVar7;
  double dVar8;
  longlong lVar9;
  bool bVar10;
  IOpenColorIOWrapperModule *pIVar11;
  FOpenColorIOWrapperConfig *pFVar12;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar13;
  shared_ptr<OpenColorIO_v2_4::NamedTransform_const_> *psVar14;
  FOpenColorIOWrapperProcessor FVar15;
  FColorSpace *pFVar16;
  FColorSpace *pFVar17;
  FColorSpaceTransform *pFVar18;
  FColorSpace *pFVar19;
  FColorSpace *pFVar20;
  FOpenColorIOWrapperSourceColorSettings *in_RDX;
  ForAnyElementType FVar21;
  longlong lVar22;
  undefined1 auStackY_f98 [32];
  longlong *local_f68;
  longlong *plStack_f60;
  longlong *local_f58;
  longlong *plStack_f50;
  longlong *local_f48;
  longlong *plStack_f40;
  longlong *local_f38;
  longlong *plStack_f30;
  longlong *local_f28;
  longlong *plStack_f20;
  longlong *local_f18;
  longlong *plStack_f10;
  longlong *local_f08;
  longlong *plStack_f00;
  longlong *local_ef8;
  longlong *plStack_ef0;
  longlong *local_ee8;
  longlong *plStack_ee0;
  longlong *local_ed8;
  longlong *plStack_ed0;
  longlong *local_ec8;
  longlong *plStack_ec0;
  longlong *local_eb8;
  longlong *plStack_eb0;
  FString local_ea8;
  longlong *local_e98;
  longlong *plStack_e90;
  longlong *local_e88;
  longlong *plStack_e80;
  longlong *local_e78;
  longlong *plStack_e70;
  longlong *local_e68;
  longlong *plStack_e60;
  Config *local_e58;
  longlong *local_e50;
  longlong *local_e48;
  longlong *plStack_e40;
  longlong *local_e38;
  longlong *plStack_e30;
  longlong *local_e28;
  longlong *plStack_e20;
  longlong *local_e18;
  longlong *plStack_e10;
  longlong *local_e08;
  longlong *plStack_e00;
  FScriptContainerElement *local_df8;
  int iStack_df0;
  undefined4 uStack_dec;
  undefined1 local_de8 [16];
  longlong *local_dd8;
  longlong *plStack_dd0;
  longlong *local_dc8;
  longlong *plStack_dc0;
  longlong *local_db8;
  longlong *plStack_db0;
  longlong *local_da8;
  longlong *plStack_da0;
  longlong *local_d98;
  longlong *plStack_d90;
  longlong *local_d88;
  longlong *plStack_d80;
  longlong *local_d78;
  longlong *plStack_d70;
  longlong *local_d68;
  longlong *plStack_d60;
  longlong *local_d58;
  longlong *plStack_d50;
  longlong *local_d48;
  longlong *plStack_d40;
  longlong *local_d38;
  longlong *plStack_d30;
  longlong *local_d28;
  longlong *plStack_d20;
  longlong *local_d18;
  longlong *plStack_d10;
  longlong *local_d08;
  longlong *plStack_d00;
  longlong *local_cf8;
  longlong *plStack_cf0;
  longlong *local_ce8;
  longlong *plStack_ce0;
  longlong *local_cd8;
  longlong *plStack_cd0;
  TStringView<wchar_t> local_cc8;
  FColorSpace local_cb8;
  char local_b68;
  undefined1 local_b58 [64];
  void *local_b18;
  ulonglong local_b10;
  undefined8 local_b08;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined8 local_af0;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined8 local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined8 local_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  double local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined8 uStack_978;
  undefined8 local_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 local_940;
  double local_938 [4];
  undefined8 uStack_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  double local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 local_820;
  double local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 local_700;
  double local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  TMatrix<double> local_598;
  TMatrix<double> local_518;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_498;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_3f8;
  FColorSpaceTransform local_358;
  FColorSpace local_2d8;
  FColorSpace local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f98;
  pIVar11 = IOpenColorIOWrapperModule::Get();
  pFVar12 = (FOpenColorIOWrapperConfig *)(**(code **)((longlong)*pIVar11 + 0x40))(pIVar11);
  GetTransformToWorkingColorSpaceName(&local_ea8,in_RDX);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&BuiltInConfigCriticalSection,4000);
    atexit(`FOpenColorIOWrapperProcessor::CreateTransformToWorkingColorSpace'::__l2::
           _dynamic_atexit_destructor_for__BuiltInConfigCriticalSection__);
    _Init_thread_footer(&::_TSS0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&BuiltInConfigCriticalSection);
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_ea8.Data.ArrayNum != 0) {
    FVar21.Data = local_ea8.Data.AllocatorInstance.Data;
  }
  this = *(Config **)pFVar12->Pimpl;
  pTVar13 = StringCast<char,128,wchar_t>(&local_498,(wchar_t *)FVar21.Data);
  psVar14 = OpenColorIO_v2_4::Config::getNamedTransform
                      (this,(shared_ptr<OpenColorIO_v2_4::NamedTransform_const_> *)local_de8,
                       pTVar13->Ptr);
  lVar22 = *(longlong *)psVar14;
  if ((longlong *)local_de8._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar7 = (longlong *)(local_de8._8_8_ + 8);
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (*(code *)**(undefined8 **)local_de8._8_8_)(local_de8._8_8_);
      LOCK();
      piVar1 = (int *)(local_de8._8_8_ + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)local_de8._8_8_ + 8))(local_de8._8_8_);
      }
    }
  }
  if ((void *)local_498._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_498._padding_);
  }
  if (lVar22 != 0) goto LAB_14d762079;
  OpenColorIO_v2_4::GroupTransform::Create
            ((shared_ptr<OpenColorIO_v2_4::GroupTransform> *)&local_f58);
  OpenColorIO_v2_4::NamedTransform::Create
            ((shared_ptr<OpenColorIO_v2_4::NamedTransform> *)&local_f68);
  plVar7 = local_f68;
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_ea8.Data.ArrayNum != 0) {
    FVar21.Data = local_ea8.Data.AllocatorInstance.Data;
  }
  pcVar5 = *(code **)(*local_f68 + 0x10);
  pTVar13 = StringCast<char,128,wchar_t>(&local_3f8,(wchar_t *)FVar21.Data);
  (*pcVar5)(plVar7,pTVar13->Ptr);
  if ((void *)local_3f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_3f8._padding_);
  }
  lVar22 = 2;
  switch(in_RDX->EncodingOverride) {
  case None:
  case Linear:
    (**(code **)(*local_f68 + 0xa0))(local_f68,"scene-linear");
    goto LAB_14d761b6c;
  case sRGB:
    OpenColorIO_v2_4::ExponentWithLinearTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::ExponentWithLinearTransform> *)&local_e98);
    local_5f8 = ___xmm_40033333333333334003333333333333;
    uStack_5f0 = _UNK_152bcbe08;
    local_5e8 = ___xmm_3ff00000000000004003333333333333;
    uStack_5e0 = _UNK_152bcbde8;
    (**(code **)(*local_e98 + 0x50))(local_e98,&local_5f8);
    local_5b8 = ___xmm_3fac28f5c28f5c293fac28f5c28f5c29;
    uStack_5b0 = _UNK_152bcbc98;
    local_5a8 = ___xmm_00000000000000003fac28f5c28f5c29;
    uStack_5a0 = _UNK_152bcbbf8;
    (**(code **)(*local_e98 + 0x60))(local_e98,&local_5b8);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_e90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_e90 + 1) = (int)plStack_e90[1] + 1;
      UNLOCK();
    }
    local_dd8 = local_e98;
    plStack_dd0 = plStack_e90;
    (*pcVar5)(local_f58,&local_dd8);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"sdr-video");
    plStack_ec0 = plStack_e90;
    break;
  case ST2084:
    OpenColorIO_v2_4::BuiltinTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::BuiltinTransform> *)&local_e38);
    (**(code **)(*local_e38 + 0x38))(local_e38,"CURVE - ST-2084_to_LINEAR");
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_e30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_e30 + 1) = (int)plStack_e30[1] + 1;
      UNLOCK();
    }
    local_dc8 = local_e38;
    plStack_dc0 = plStack_e30;
    (*pcVar5)(local_f58,&local_dc8);
    OpenColorIO_v2_4::MatrixTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::MatrixTransform> *)&local_e48);
    local_598.M[1][0] = ___xmm_40590000000000000000000000000000;
    local_598.M[1][1] = _UNK_150f34e28;
    local_598.M[0][0] = ___xmm_00000000000000004059000000000000;
    local_598.M[0][1] = _UNK_150f34e18;
    local_598.M[2][0] = 0.0;
    local_598.M[2][1] = 0.0;
    local_598.M[3][2] = ___xmm_3ff00000000000000000000000000000;
    local_598.M[3][3] = _UNK_15061cbc8;
    local_598.M[0][2] = 0.0;
    local_598.M[0][3] = 0.0;
    local_598.M[1][2] = 0.0;
    local_598.M[1][3] = 0.0;
    local_598.M[2][2] = ___xmm_00000000000000004059000000000000;
    local_598.M[2][3] = _UNK_150f34e18;
    local_598.M[3][0] = 0.0;
    local_598.M[3][1] = 0.0;
    VectorMatrixMultiply(&local_518,&local_598,&UE::Math::TMatrix<double>::Identity);
    (**(code **)(*local_e48 + 0x50))(local_e48,&local_518);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_e40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_e40 + 1) = (int)plStack_e40[1] + 1;
      UNLOCK();
    }
    local_db8 = local_e48;
    plStack_db0 = plStack_e40;
    (*pcVar5)(local_f58,&local_db8);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"hdr-video");
    plStack_ec0 = plStack_e30;
    if (plStack_e40 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_e40 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_e40)(plStack_e40);
        LOCK();
        piVar1 = (int *)((longlong)plStack_e40 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plStack_ec0 = plStack_e30;
        if (iVar3 == 1) {
          (**(code **)(*plStack_e40 + 8))(plStack_e40);
          plStack_ec0 = plStack_e30;
        }
      }
    }
    break;
  case Gamma22:
    OpenColorIO_v2_4::ExponentTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::ExponentTransform> *)&local_e88);
    local_5d8 = ___xmm_400199999999999a400199999999999a;
    uStack_5d0 = _UNK_152ad4d08;
    local_5c8 = ___xmm_3ff0000000000000400199999999999a;
    uStack_5c0 = _UNK_152bcbdd8;
    (**(code **)(*local_e88 + 0x50))(local_e88,&local_5d8);
    (**(code **)(*local_e88 + 0x60))(local_e88,2);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_e80 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_e80 + 1) = (int)plStack_e80[1] + 1;
      UNLOCK();
    }
    local_da8 = local_e88;
    plStack_da0 = plStack_e80;
    (*pcVar5)(local_f58,&local_da8);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"sdr-video");
    plStack_ec0 = plStack_e80;
    break;
  case BT1886:
    OpenColorIO_v2_4::ExponentTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::ExponentTransform> *)&local_e78);
    local_638 = ___xmm_40033333333333334003333333333333;
    uStack_630 = _UNK_152bcbe08;
    local_628 = ___xmm_3ff00000000000004003333333333333;
    uStack_620 = _UNK_152bcbde8;
    (**(code **)(*local_e78 + 0x50))(local_e78,&local_638);
    (**(code **)(*local_e78 + 0x60))(local_e78,2);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_e70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_e70 + 1) = (int)plStack_e70[1] + 1;
      UNLOCK();
    }
    local_d98 = local_e78;
    plStack_d90 = plStack_e70;
    (*pcVar5)(local_f58,&local_d98);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"sdr-video");
    plStack_ec0 = plStack_e70;
    break;
  case Gamma26:
    OpenColorIO_v2_4::ExponentTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::ExponentTransform> *)&local_e68);
    local_618 = ___xmm_4004cccccccccccd4004cccccccccccd;
    uStack_610 = _UNK_152bcbe28;
    local_608 = ___xmm_3ff00000000000004004cccccccccccd;
    uStack_600 = _UNK_152bcbdf8;
    (**(code **)(*local_e68 + 0x50))(local_e68,&local_618);
    (**(code **)(*local_e68 + 0x60))(local_e68,2);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_e60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_e60 + 1) = (int)plStack_e60[1] + 1;
      UNLOCK();
    }
    local_d88 = local_e68;
    plStack_d80 = plStack_e60;
    (*pcVar5)(local_f58,&local_d88);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"sdr-video");
    plStack_ec0 = plStack_e60;
    break;
  case Cineon:
    OpenColorIO_v2_4::LogAffineTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::LogAffineTransform> *)&local_f28);
    local_7a0 = ___xmm_3fefa78b793d0bd43fefa78b793d0bd4;
    uStack_798 = _UNK_152bcbdb8;
    local_790 = __real_3fefa78b793d0bd4;
    (**(code **)(*local_f28 + 0x80))(local_f28,&local_7a0);
    local_668 = ___xmm_3f861d21b0bd0af53f861d21b0bd0af5;
    uStack_660 = _UNK_152bcbc48;
    local_658 = __real_3f861d21b0bd0af5;
    (**(code **)(*local_f28 + 0x90))(local_f28,&local_668);
    local_650 = ___xmm_3fd2c4b12c4b12c53fd2c4b12c4b12c5;
    uStack_648 = _UNK_152bcbd08;
    local_640 = __real_3fd2c4b12c4b12c5;
    (**(code **)(*local_f28 + 0x60))(local_f28,&local_650);
    local_a88 = ___xmm_3fe56d5b56d5b56d3fe56d5b56d5b56d;
    uStack_a80 = _UNK_152bcbd98;
    local_a78 = __real_3fe56d5b56d5b56d;
    (**(code **)(*local_f28 + 0x70))(local_f28,&local_a88);
    (**(code **)(*local_f28 + 0x50))(local_f28,__real_4024000000000000);
    (**(code **)(*local_f28 + 0x10))(local_f28,1);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_f20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_f20 + 1) = (int)plStack_f20[1] + 1;
      UNLOCK();
    }
    local_d78 = local_f28;
    plStack_d70 = plStack_f20;
    (*pcVar5)(local_f58,&local_d78);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"log");
    plStack_ec0 = plStack_f20;
    break;
  case REDLog:
    OpenColorIO_v2_4::LogAffineTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::LogAffineTransform> *)&local_f18);
    local_a70 = ___xmm_3fefae72c40fc0623fefae72c40fc062;
    uStack_a68 = _UNK_152bcbdc8;
    local_a60 = __real_3fefae72c40fc062;
    (**(code **)(*local_f18 + 0x80))(local_f18,&local_a70);
    local_a58 = ___xmm_3f84634efc0fe76a3f84634efc0fe76a;
    uStack_a50 = _UNK_152bcbc28;
    local_a48 = __real_3f84634efc0fe76a;
    (**(code **)(*local_f18 + 0x90))(local_f18,&local_a58);
    local_a40 = ___xmm_3fdff7fdff7fdff83fdff7fdff7fdff8;
    uStack_a38 = _UNK_152bcbd48;
    local_a30 = __real_3fdff7fdff7fdff8;
    (**(code **)(*local_f18 + 0x60))(local_f18,&local_a40);
    local_a28 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_a20 = _UNK_150689688;
    local_a18 = __real_3ff0000000000000;
    (**(code **)(*local_f18 + 0x70))(local_f18,&local_a28);
    (**(code **)(*local_f18 + 0x50))(local_f18,__real_4024000000000000);
    (**(code **)(*local_f18 + 0x10))(local_f18,1);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_f10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_f10 + 1) = (int)plStack_f10[1] + 1;
      UNLOCK();
    }
    local_d68 = local_f18;
    plStack_d60 = plStack_f10;
    (*pcVar5)(local_f58,&local_d68);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"log");
    plStack_ec0 = plStack_f10;
    break;
  case REDLog3G10:
    local_a10 = ___xmm_bf847ae147ae147bbf847ae147ae147b;
    uStack_a08 = _UNK_152bcbea8;
    local_a00 = __real_bf847ae147ae147b;
    OpenColorIO_v2_4::LogCameraTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::LogCameraTransform> *)&local_f08,&local_a10);
    local_9f8 = ___xmm_40637f35e0f7fcfc40637f35e0f7fcfc;
    uStack_9f0 = _UNK_152bcbe98;
    local_9e8 = __real_40637f35e0f7fcfc;
    (**(code **)(*local_f08 + 0x80))(local_f08,&local_9f8);
    local_9e0 = ___xmm_40047a5fec23d51c40047a5fec23d51c;
    uStack_9d8 = _UNK_152bcbe18;
    local_9d0 = __real_40047a5fec23d51c;
    (**(code **)(*local_f08 + 0x90))(local_f08,&local_9e0);
    local_9c8 = ___xmm_3fccb545c78a6dad3fccb545c78a6dad;
    uStack_9c0 = _UNK_152bcbcc8;
    local_9b8 = __real_3fccb545c78a6dad;
    (**(code **)(*local_f08 + 0x60))(local_f08,&local_9c8);
    local_9a0 = 0;
    local_9b0 = 0;
    uStack_9a8 = 0;
    (**(code **)(*local_f08 + 0x70))(local_f08,&local_9b0);
    (**(code **)(*local_f08 + 0x50))(local_f08,__real_4024000000000000);
    (**(code **)(*local_f08 + 0x10))(local_f08,1);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_f00 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_f00 + 1) = (int)plStack_f00[1] + 1;
      UNLOCK();
    }
    local_d58 = local_f08;
    plStack_d50 = plStack_f00;
    (*pcVar5)(local_f58,&local_d58);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"log");
    plStack_ec0 = plStack_f00;
    break;
  case SLog1:
    OpenColorIO_v2_4::LogAffineTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::LogAffineTransform> *)&local_ef8);
    local_998 = ___xmm_3ff1c71c71c71c723ff1c71c71c71c72;
    uStack_990 = _UNK_1508ffb08;
    local_988 = __real_3ff1c71c71c71c72;
    (**(code **)(*local_ef8 + 0x80))(local_ef8,&local_998);
    local_980 = ___xmm_3fa33e35c5b4aa973fa33e35c5b4aa97;
    uStack_978 = _UNK_152bcbc68;
    local_970 = __real_3fa33e35c5b4aa97;
    (**(code **)(*local_ef8 + 0x90))(local_ef8,&local_980);
    local_968 = ___xmm_3fd7b6a335e29f813fd7b6a335e29f81;
    uStack_960 = _UNK_152bcbd18;
    local_958 = __real_3fd7b6a335e29f81;
    (**(code **)(*local_ef8 + 0x60))(local_ef8,&local_968);
    local_950 = ___xmm_3fe3b846544c47c83fe3b846544c47c8;
    uStack_948 = _UNK_152bcbd88;
    local_940 = __real_3fe3b846544c47c8;
    (**(code **)(*local_ef8 + 0x70))(local_ef8,&local_950);
    (**(code **)(*local_ef8 + 0x50))(local_ef8,__real_4024000000000000);
    (**(code **)(*local_ef8 + 0x10))(local_ef8,1);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_ef0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_ef0 + 1) = (int)plStack_ef0[1] + 1;
      UNLOCK();
    }
    local_d48 = local_ef8;
    plStack_d40 = plStack_ef0;
    (*pcVar5)(local_f58,&local_d48);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"log");
    plStack_ec0 = plStack_ef0;
    break;
  case SLog2:
    local_938[2] = 0.0;
    local_938[0] = 0.0;
    local_938[1] = 0.0;
    OpenColorIO_v2_4::LogCameraTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::LogCameraTransform> *)&local_f48,local_938);
    local_938[3] = (double)___xmm_3fe92a364a8d92a43fe92a364a8d92a4;
    uStack_918 = _UNK_152bcbda8;
    local_910 = __real_3fe92a364a8d92a4;
    (**(code **)(*local_f48 + 0x80))(local_f48,local_938 + 3);
    local_908 = ___xmm_3fa33e35c5b4aa973fa33e35c5b4aa97;
    uStack_900 = _UNK_152bcbc68;
    local_8f8 = __real_3fa33e35c5b4aa97;
    (**(code **)(*local_f48 + 0x90))(local_f48,&local_908);
    local_8f0 = ___xmm_3fd7b6a335e29f813fd7b6a335e29f81;
    uStack_8e8 = _UNK_152bcbd18;
    local_8e0 = __real_3fd7b6a335e29f81;
    (**(code **)(*local_f48 + 0x60))(local_f48,&local_8f0);
    local_8d8 = ___xmm_3fe3b846544c47c73fe3b846544c47c7;
    uStack_8d0 = _UNK_152bcbd78;
    local_8c8 = __real_3fe3b846544c47c7;
    (**(code **)(*local_f48 + 0x70))(local_f48,&local_8d8);
    local_8c0 = ___xmm_400aef9f81a06819400aef9f81a06819;
    uStack_8b8 = _UNK_152bcbe38;
    local_8b0 = __real_400aef9f81a06819;
    (**(code **)(*local_f48 + 0xb0))(local_f48,&local_8c0);
    (**(code **)(*local_f48 + 0x50))(local_f48,__real_4024000000000000);
    (**(code **)(*local_f48 + 0x10))(local_f48,1);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_f40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_f40 + 1) = (int)plStack_f40[1] + 1;
      UNLOCK();
    }
    local_d38 = local_f48;
    plStack_d30 = plStack_f40;
    (*pcVar5)(local_f58,&local_d38);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"log");
    plStack_ec0 = plStack_f40;
    break;
  case SLog3:
    local_8a8 = ___xmm_3f870a3d70a3d70a3f870a3d70a3d70a;
    uStack_8a0 = _UNK_152bcbc58;
    local_898 = __real_3f870a3d70a3d70a;
    OpenColorIO_v2_4::LogCameraTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::LogCameraTransform> *)&local_f38,&local_8a8);
    local_890 = ___xmm_40150d79435e50d540150d79435e50d5;
    uStack_888 = _UNK_152bcbe48;
    local_880 = __real_40150d79435e50d5;
    (**(code **)(*local_f38 + 0x80))(local_f38,&local_890);
    local_878 = ___xmm_3faaf286bca1af253faaf286bca1af25;
    uStack_870 = _UNK_152bcbc88;
    local_868 = __real_3faaf286bca1af25;
    (**(code **)(*local_f38 + 0x90))(local_f38,&local_878);
    local_860 = ___xmm_3fd05c1705c1705f3fd05c1705c1705f;
    uStack_858 = _UNK_152bcbcf8;
    local_850 = __real_3fd05c1705c1705f;
    (**(code **)(*local_f38 + 0x60))(local_f38,&local_860);
    local_848 = ___xmm_3fda4691a4691a443fda4691a4691a44;
    uStack_840 = _UNK_152bcbd38;
    local_838 = __real_3fda4691a4691a44;
    (**(code **)(*local_f38 + 0x70))(local_f38,&local_848);
    local_830 = ___xmm_401a7cdecff81eb8401a7cdecff81eb8;
    uStack_828 = _UNK_152bcbe68;
    local_820 = __real_401a7cdecff81eb8;
    (**(code **)(*local_f38 + 0xb0))(local_f38,&local_830);
    (**(code **)(*local_f38 + 0x50))(local_f38,__real_4024000000000000);
    (**(code **)(*local_f38 + 0x10))(local_f38,1);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_f30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_f30 + 1) = (int)plStack_f30[1] + 1;
      UNLOCK();
    }
    local_d28 = local_f38;
    plStack_d20 = plStack_f30;
    (*pcVar5)(local_f58,&local_d28);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"log");
    plStack_ec0 = plStack_f30;
    break;
  case AlexaV3LogC:
    local_818 = ___xmm_3f85b0baae7b78ad3f85b0baae7b78ad;
    uStack_810 = _UNK_152bcbc38;
    local_808 = __real_3f85b0baae7b78ad;
    OpenColorIO_v2_4::LogCameraTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::LogCameraTransform> *)&local_ee8,&local_818);
    local_800 = ___xmm_401638e38e38e393401638e38e38e393;
    uStack_7f8 = _UNK_152bcbe58;
    local_7f0 = __real_401638e38e38e393;
    (**(code **)(*local_ee8 + 0x80))(local_ee8,&local_800);
    local_7e8 = ___xmm_3faac36e7f70f4c93faac36e7f70f4c9;
    uStack_7e0 = _UNK_152bcbc78;
    local_7d8 = __real_3faac36e7f70f4c9;
    (**(code **)(*local_ee8 + 0x90))(local_ee8,&local_7e8);
    local_7d0 = ___xmm_3fcfa3e8fa3e8fb33fcfa3e8fa3e8fb3;
    uStack_7c8 = _UNK_152bcbce8;
    local_7c0 = __real_3fcfa3e8fa3e8fb3;
    (**(code **)(*local_ee8 + 0x60))(local_ee8,&local_7d0);
    local_7b8 = ___xmm_3fd8aca360320ce73fd8aca360320ce7;
    uStack_7b0 = _UNK_152bcbd28;
    local_7a8 = __real_3fd8aca360320ce7;
    (**(code **)(*local_ee8 + 0x70))(local_ee8,&local_7b8);
    (**(code **)(*local_ee8 + 0x50))(local_ee8,__real_4024000000000000);
    (**(code **)(*local_ee8 + 0x10))(local_ee8,1);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_ee0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_ee0 + 1) = (int)plStack_ee0[1] + 1;
      UNLOCK();
    }
    local_d18 = local_ee8;
    plStack_d10 = plStack_ee0;
    (*pcVar5)(local_f58,&local_d18);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"log");
    plStack_ec0 = plStack_ee0;
    break;
  case CanonLog:
    OpenColorIO_v2_4::LogAffineTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::LogAffineTransform> *)&local_ed8);
    local_680 = ___xmm_402451b71758e219402451b71758e219;
    uStack_678 = _UNK_152bcbe78;
    local_670 = __real_402451b71758e219;
    (**(code **)(*local_ed8 + 0x80))(local_ed8,&local_680);
    local_788 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_780 = _UNK_150689688;
    local_778 = __real_3ff0000000000000;
    (**(code **)(*local_ed8 + 0x90))(local_ed8,&local_788);
    local_770 = ___xmm_3fe0eeae9ee45c363fe0eeae9ee45c36;
    uStack_768 = _UNK_152bcbd58;
    local_760 = __real_3fe0eeae9ee45c36;
    (**(code **)(*local_ed8 + 0x60))(local_ed8,&local_770);
    local_758 = ___xmm_3fb2b40a5e27d3843fb2b40a5e27d384;
    uStack_750 = _UNK_152bcbca8;
    local_748 = __real_3fb2b40a5e27d384;
    (**(code **)(*local_ed8 + 0x70))(local_ed8,&local_758);
    (**(code **)(*local_ed8 + 0x50))(local_ed8,__real_4024000000000000);
    (**(code **)(*local_ed8 + 0x10))(local_ed8,1);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_ed0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_ed0 + 1) = (int)plStack_ed0[1] + 1;
      UNLOCK();
    }
    local_d08 = local_ed8;
    plStack_d00 = plStack_ed0;
    (*pcVar5)(local_f58,&local_d08);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"log");
    plStack_ec0 = plStack_ed0;
    break;
  case ProTune:
    OpenColorIO_v2_4::LogAffineTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::LogAffineTransform> *)&local_eb8);
    local_740 = ___xmm_405c000000000000405c000000000000;
    uStack_738 = _UNK_152bcbe88;
    local_730 = __real_405c000000000000;
    (**(code **)(*local_eb8 + 0x80))(local_eb8,&local_740);
    local_728 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_720 = _UNK_150689688;
    local_718 = __real_3ff0000000000000;
    (**(code **)(*local_eb8 + 0x90))(local_eb8,&local_728);
    local_710 = ___xmm_3fcb1386076fce353fcb1386076fce35;
    uStack_708 = _UNK_152bcbcb8;
    local_700 = __real_3fcb1386076fce35;
    (**(code **)(*local_eb8 + 0x60))(local_eb8,&local_710);
    (**(code **)(*local_eb8 + 0x50))(local_eb8,__real_4005bf0a8b145769);
    (**(code **)(*local_eb8 + 0x10))(local_eb8,1);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_eb0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_eb0 + 1) = (int)plStack_eb0[1] + 1;
      UNLOCK();
    }
    local_cf8 = local_eb8;
    plStack_cf0 = plStack_eb0;
    (*pcVar5)(local_f58,&local_cf8);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"log");
    plStack_ec0 = plStack_eb0;
    break;
  case VLog:
    local_6f8 = ___xmm_3f847ae147ae147b3f847ae147ae147b;
    uStack_6f0 = _UNK_152b00158;
    local_6e8 = __real_3f847ae147ae147b;
    OpenColorIO_v2_4::LogCameraTransform::Create
              ((shared_ptr<OpenColorIO_v2_4::LogCameraTransform> *)&local_ec8,&local_6f8);
    local_6e0 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_6d8 = _UNK_150689688;
    local_6d0 = __real_3ff0000000000000;
    (**(code **)(*local_ec8 + 0x80))(local_ec8,&local_6e0);
    local_6c8 = ___xmm_3f81e108c3f3e0373f81e108c3f3e037;
    uStack_6c0 = _UNK_152bcbc18;
    local_6b8 = __real_3f81e108c3f3e037;
    (**(code **)(*local_ec8 + 0x90))(local_ec8,&local_6c8);
    local_6b0 = ___xmm_3fcee9ee45c358b03fcee9ee45c358b0;
    uStack_6a8 = _UNK_152bcbcd8;
    local_6a0 = __real_3fcee9ee45c358b0;
    (**(code **)(*local_ec8 + 0x60))(local_ec8,&local_6b0);
    local_698 = ___xmm_3fe32480e8c8abd63fe32480e8c8abd6;
    uStack_690 = _UNK_152bcbd68;
    local_688 = __real_3fe32480e8c8abd6;
    (**(code **)(*local_ec8 + 0x70))(local_ec8,&local_698);
    (**(code **)(*local_ec8 + 0x50))(local_ec8,__real_4024000000000000);
    (**(code **)(*local_ec8 + 0x10))(local_ec8,1);
    pcVar5 = *(code **)(*local_f58 + 0x58);
    if (plStack_ec0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_ec0 + 1) = (int)plStack_ec0[1] + 1;
      UNLOCK();
    }
    local_ce8 = local_ec8;
    plStack_ce0 = plStack_ec0;
    (*pcVar5)(local_f58,&local_ce8);
    (**(code **)(*local_f68 + 0xa0))(local_f68,"log");
    break;
  default:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\OpenColorIOWrapper.cpp"
                        ,0x378,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      FVar15.Pimpl = (TPimplPtr<FOpenColorIOProcessorPimpl,1>)(*pcVar5)();
      return (FOpenColorIOWrapperProcessor)FVar15.Pimpl;
    }
    goto LAB_14d761b6c;
  }
  if (plStack_ec0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_ec0 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_ec0)(plStack_ec0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_ec0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_ec0 + 8))(plStack_ec0);
      }
    }
  }
LAB_14d761b6c:
  local_b68 = '\0';
  if ((in_RDX->ColorSpaceOverride).bIsSet == false) {
    if (in_RDX->ColorSpace != None) {
      pFVar16 = UE::Color::FColorSpace::FColorSpace(&local_188,in_RDX->ColorSpace);
      if (pFVar16 == &local_cb8) goto LAB_14d761cbd;
      pFVar20 = &local_cb8;
      do {
        pFVar19 = (FColorSpace *)((pFVar20->RgbToXYZ).M + 2);
        dVar8 = (pFVar16->Chromaticities).Elements[0].field0_0x0._s_0.Y;
        pFVar17 = (FColorSpace *)((pFVar16->RgbToXYZ).M + 2);
        (pFVar20->Chromaticities).Elements[0].field0_0x0._s_0.X =
             (pFVar16->Chromaticities).Elements[0].field0_0x0._s_0.X;
        (pFVar20->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar8;
        dVar8 = (pFVar16->Chromaticities).Elements[1].field0_0x0._s_0.Y;
        (pFVar20->Chromaticities).Elements[1].field0_0x0._s_0.X =
             (pFVar16->Chromaticities).Elements[1].field0_0x0._s_0.X;
        (pFVar20->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar8;
        dVar8 = (pFVar16->Chromaticities).Elements[2].field0_0x0._s_0.Y;
        (pFVar20->Chromaticities).Elements[2].field0_0x0._s_0.X =
             (pFVar16->Chromaticities).Elements[2].field0_0x0._s_0.X;
        (pFVar20->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar8;
        dVar8 = (pFVar16->Chromaticities).Elements[3].field0_0x0._s_0.Y;
        (pFVar20->Chromaticities).Elements[3].field0_0x0._s_0.X =
             (pFVar16->Chromaticities).Elements[3].field0_0x0._s_0.X;
        (pFVar20->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar8;
        dVar8 = (pFVar16->RgbToXYZ).M[0][1];
        (pFVar20->RgbToXYZ).M[0][0] = (pFVar16->RgbToXYZ).M[0][0];
        (pFVar20->RgbToXYZ).M[0][1] = dVar8;
        dVar8 = (pFVar16->RgbToXYZ).M[0][3];
        (pFVar20->RgbToXYZ).M[0][2] = (pFVar16->RgbToXYZ).M[0][2];
        (pFVar20->RgbToXYZ).M[0][3] = dVar8;
        dVar8 = (pFVar16->RgbToXYZ).M[1][1];
        (pFVar20->RgbToXYZ).M[1][0] = (pFVar16->RgbToXYZ).M[1][0];
        (pFVar20->RgbToXYZ).M[1][1] = dVar8;
        dVar8 = (pFVar16->RgbToXYZ).M[1][3];
        (pFVar20->RgbToXYZ).M[1][2] = (pFVar16->RgbToXYZ).M[1][2];
        (pFVar20->RgbToXYZ).M[1][3] = dVar8;
        lVar22 = lVar22 + -1;
        pFVar16 = pFVar17;
        pFVar20 = pFVar19;
      } while (lVar22 != 0);
      goto LAB_14d761c08;
    }
  }
  else {
    pFVar16 = UE::Color::FColorSpace::FColorSpace
                        (&local_2d8,(TVector2<double> *)&in_RDX->ColorSpaceOverride,
                         (in_RDX->ColorSpaceOverride).TypedValue.Elements + 1,
                         (in_RDX->ColorSpaceOverride).TypedValue.Elements + 2,
                         (in_RDX->ColorSpaceOverride).TypedValue.Elements + 3);
    if (pFVar16 == &local_cb8) {
LAB_14d761cbd:
      if (local_b68 == '\0') goto LAB_14d761e93;
    }
    else {
      pFVar20 = &local_cb8;
      do {
        pFVar19 = (FColorSpace *)((pFVar20->RgbToXYZ).M + 2);
        dVar8 = (pFVar16->Chromaticities).Elements[0].field0_0x0._s_0.Y;
        pFVar17 = (FColorSpace *)((pFVar16->RgbToXYZ).M + 2);
        (pFVar20->Chromaticities).Elements[0].field0_0x0._s_0.X =
             (pFVar16->Chromaticities).Elements[0].field0_0x0._s_0.X;
        (pFVar20->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar8;
        dVar8 = (pFVar16->Chromaticities).Elements[1].field0_0x0._s_0.Y;
        (pFVar20->Chromaticities).Elements[1].field0_0x0._s_0.X =
             (pFVar16->Chromaticities).Elements[1].field0_0x0._s_0.X;
        (pFVar20->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar8;
        dVar8 = (pFVar16->Chromaticities).Elements[2].field0_0x0._s_0.Y;
        (pFVar20->Chromaticities).Elements[2].field0_0x0._s_0.X =
             (pFVar16->Chromaticities).Elements[2].field0_0x0._s_0.X;
        (pFVar20->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar8;
        dVar8 = (pFVar16->Chromaticities).Elements[3].field0_0x0._s_0.Y;
        (pFVar20->Chromaticities).Elements[3].field0_0x0._s_0.X =
             (pFVar16->Chromaticities).Elements[3].field0_0x0._s_0.X;
        (pFVar20->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar8;
        dVar8 = (pFVar16->RgbToXYZ).M[0][1];
        (pFVar20->RgbToXYZ).M[0][0] = (pFVar16->RgbToXYZ).M[0][0];
        (pFVar20->RgbToXYZ).M[0][1] = dVar8;
        dVar8 = (pFVar16->RgbToXYZ).M[0][3];
        (pFVar20->RgbToXYZ).M[0][2] = (pFVar16->RgbToXYZ).M[0][2];
        (pFVar20->RgbToXYZ).M[0][3] = dVar8;
        dVar8 = (pFVar16->RgbToXYZ).M[1][1];
        (pFVar20->RgbToXYZ).M[1][0] = (pFVar16->RgbToXYZ).M[1][0];
        (pFVar20->RgbToXYZ).M[1][1] = dVar8;
        dVar8 = (pFVar16->RgbToXYZ).M[1][3];
        (pFVar20->RgbToXYZ).M[1][2] = (pFVar16->RgbToXYZ).M[1][2];
        (pFVar20->RgbToXYZ).M[1][3] = dVar8;
        lVar22 = lVar22 + -1;
        pFVar16 = pFVar17;
        pFVar20 = pFVar19;
      } while (lVar22 != 0);
LAB_14d761c08:
      dVar8 = (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.Y;
      (pFVar19->Chromaticities).Elements[0].field0_0x0._s_0.X =
           (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (pFVar19->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar8;
      dVar8 = (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.Y;
      (pFVar19->Chromaticities).Elements[1].field0_0x0._s_0.X =
           (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.X;
      (pFVar19->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar8;
      dVar8 = (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.Y;
      (pFVar19->Chromaticities).Elements[2].field0_0x0._s_0.X =
           (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.X;
      (pFVar19->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar8;
      dVar8 = (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.Y;
      (pFVar19->Chromaticities).Elements[3].field0_0x0._s_0.X =
           (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.X;
      (pFVar19->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar8;
      dVar8 = (pFVar17->RgbToXYZ).M[0][1];
      (pFVar19->RgbToXYZ).M[0][0] = (pFVar17->RgbToXYZ).M[0][0];
      (pFVar19->RgbToXYZ).M[0][1] = dVar8;
      local_b68 = '\x01';
    }
    pFVar16 = UE::Color::FColorSpace::GetWorking();
    bVar10 = UE::Color::FColorSpace::Equals(&local_cb8,pFVar16,__real_3e7ad7f29abcaf48);
    if (!bVar10) {
      EVar4 = in_RDX->ChromaticAdaptationMethod;
      pFVar16 = UE::Color::FColorSpace::GetWorking();
      if ((local_b68 == '\0') &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        FVar15.Pimpl = (TPimplPtr<FOpenColorIOProcessorPimpl,1>)(*pcVar5)();
        return (FOpenColorIOWrapperProcessor)FVar15.Pimpl;
      }
      pFVar18 = UE::Color::FColorSpaceTransform::FColorSpaceTransform
                          (&local_358,&local_cb8,pFVar16,EVar4);
      local_b08 = *(undefined8 *)pFVar18;
      local_b00 = *(undefined8 *)&pFVar18->field_0x20;
      local_af8 = *(undefined8 *)&pFVar18->field_0x40;
      local_af0 = *(undefined8 *)&pFVar18->field_0x60;
      local_ae8 = *(undefined8 *)&pFVar18->field_0x8;
      local_ae0 = *(undefined8 *)&pFVar18->field_0x28;
      local_ad8 = *(undefined8 *)&pFVar18->field_0x48;
      local_ad0 = *(undefined8 *)&pFVar18->field_0x68;
      local_ac8 = *(undefined8 *)&pFVar18->field_0x10;
      local_ac0 = *(undefined8 *)&pFVar18->field_0x30;
      local_ab8 = *(undefined8 *)&pFVar18->field_0x50;
      local_ab0 = *(undefined8 *)&pFVar18->field_0x70;
      local_aa8 = *(undefined8 *)&pFVar18->field_0x18;
      local_aa0 = *(undefined8 *)&pFVar18->field_0x38;
      local_a98 = *(undefined8 *)&pFVar18->field_0x58;
      local_a90 = *(undefined8 *)&pFVar18->field_0x78;
      OpenColorIO_v2_4::MatrixTransform::Create
                ((shared_ptr<OpenColorIO_v2_4::MatrixTransform> *)&local_e28);
      (**(code **)(*local_e28 + 0x50))(local_e28,&local_b08);
      pcVar5 = *(code **)(*local_f58 + 0x58);
      if (plStack_e20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_e20 + 1) = (int)plStack_e20[1] + 1;
        UNLOCK();
      }
      local_cd8 = local_e28;
      plStack_cd0 = plStack_e20;
      (*pcVar5)(local_f58,&local_cd8);
      if (plStack_e20 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_e20 + 1;
        lVar22 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*plStack_e20)(plStack_e20);
          LOCK();
          piVar1 = (int *)((longlong)plStack_e20 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_e20 + 8))(plStack_e20);
          }
        }
      }
    }
  }
LAB_14d761e93:
  pcVar5 = *(code **)(*local_f68 + 0xb0);
  if (plStack_f50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_f50 + 1) = (int)plStack_f50[1] + 1;
    UNLOCK();
  }
  local_e18 = local_f58;
  plStack_e10 = plStack_f50;
  (*pcVar5)(local_f68,&local_e18,0);
  plVar7 = plStack_e10;
  if (plStack_e10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_e10 + 1;
    lVar22 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar22 == 1) {
      (**(code **)*plStack_e10)(plStack_e10);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  TVar6 = pFVar12->Pimpl;
  OpenColorIO_v2_4::Config::createEditableCopy
            (*(Config **)TVar6,(shared_ptr<OpenColorIO_v2_4::Config> *)&local_e58);
  if (plStack_f60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_f60 + 1) = (int)plStack_f60[1] + 1;
    UNLOCK();
  }
  local_e08 = local_f68;
  plStack_e00 = plStack_f60;
  OpenColorIO_v2_4::Config::addNamedTransform
            (local_e58,(shared_ptr<OpenColorIO_v2_4::NamedTransform_const_> *)&local_e08);
  plVar7 = plStack_e00;
  if (plStack_e00 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_e00 + 1;
    lVar22 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar22 == 1) {
      (**(code **)*plStack_e00)(plStack_e00);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  if (local_e50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_e50 + 1) = (int)local_e50[1] + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)((longlong)TVar6 + 8);
  *(Config **)TVar6 = local_e58;
  *(longlong **)((longlong)TVar6 + 8) = local_e50;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar22 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar22 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  if (local_e50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_e50 + 1;
    lVar22 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar22 == 1) {
      (**(code **)*local_e50)(local_e50);
      LOCK();
      piVar1 = (int *)((longlong)local_e50 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_e50 + 8))(local_e50);
      }
    }
  }
  if (plStack_f60 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_f60 + 1;
    lVar22 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar22 == 1) {
      (**(code **)*plStack_f60)(plStack_f60);
      LOCK();
      piVar1 = (int *)((longlong)plStack_f60 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_f60 + 8))(plStack_f60);
      }
    }
  }
  if (plStack_f50 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_f50 + 1;
    lVar22 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar22 == 1) {
      (**(code **)*plStack_f50)(plStack_f50);
      LOCK();
      piVar1 = (int *)((longlong)plStack_f50 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_f50 + 8))(plStack_f50);
      }
    }
  }
LAB_14d762079:
  local_df8 = local_ea8.Data.AllocatorInstance.Data;
  local_b58._16_8_ = 0;
  local_b58._24_8_ = 0;
  local_b58._56_8_ = 0;
  local_b10 = 0;
  local_b58._0_8_ = 0;
  iStack_df0 = local_ea8.Data.ArrayNum + -1;
  if (local_ea8.Data.ArrayNum == 0) {
    iStack_df0 = 0;
  }
  local_b58._8_8_ = 0;
  local_cc8._12_4_ = uStack_dec;
  local_cc8.Size = iStack_df0;
  local_cc8.DataPtr = (wchar_t *)local_ea8.Data.AllocatorInstance.Data;
  local_b58._32_8_ = 0;
  local_b58._40_4_ = 0;
  local_b58._44_4_ = 0x80;
  local_b58._48_4_ = 0xffffffff;
  local_b58._52_4_ = 0;
  local_b18 = (void *)0x0;
  FOpenColorIOWrapperProcessor
            ((FOpenColorIOWrapperProcessor *)param_1,pFVar12,&local_cc8,false,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_b58);
  local_b10 = local_b10 & 0xffffffff00000000;
  if (local_b18 != (void *)0x0) {
    FMemory::Free(local_b18);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b58);
  LeaveCriticalSection((LPCRITICAL_SECTION)&BuiltInConfigCriticalSection);
  if (local_ea8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ea8.Data.AllocatorInstance.Data);
  }
  return (FOpenColorIOWrapperProcessor)(TPimplPtr<FOpenColorIOProcessorPimpl,1>)param_1;
}

// GetCacheID @ 14d762560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FOpenColorIOWrapperProcessor::GetCacheID
          (FOpenColorIOWrapperProcessor *this,FString *__return_storage_ptr__)

{
  char *pcVar1;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar2;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (*(Processor **)this->Pimpl == (Processor *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    pcVar1 = OpenColorIO_v2_4::Processor::getCacheID(*(Processor **)this->Pimpl);
    pTVar2 = StringCast<wchar_t,128,char>(&local_138,pcVar1);
    ::FString::FString(__return_storage_ptr__,pTVar2->Ptr);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return __return_storage_ptr__;
}

// GetTransformToWorkingColorSpaceName @ 14d7639e0

FString * __cdecl
FOpenColorIOWrapperProcessor::GetTransformToWorkingColorSpaceName
          (FString *__return_storage_ptr__,FOpenColorIOWrapperSourceColorSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  int iVar4;
  FString local_18;
  
  ::FString::PrintfImpl(__return_storage_ptr__,L"UE_%u");
  if ((param_1->ColorSpaceOverride).bIsSet != false) {
    FCrc::MemCrc_DEPRECATED(&param_1->ColorSpaceOverride,0x10,0);
    if ((param_1->ColorSpaceOverride).bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    FCrc::MemCrc_DEPRECATED((param_1->ColorSpaceOverride).TypedValue.Elements + 1,0x10,0);
    if ((param_1->ColorSpaceOverride).bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    FCrc::MemCrc_DEPRECATED((param_1->ColorSpaceOverride).TypedValue.Elements + 2,0x10,0);
    if ((param_1->ColorSpaceOverride).bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    FCrc::MemCrc_DEPRECATED((param_1->ColorSpaceOverride).TypedValue.Elements + 3,0x10,0);
    ::FString::PrintfImpl(&local_18,L"_%u");
    iVar4 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// IsValid @ 14d763d20

bool __thiscall FOpenColorIOWrapperProcessor::IsValid(FOpenColorIOWrapperProcessor *this)

{
  return *(longlong *)this->Pimpl != 0;
}

// TransformColor @ 14d763e10

bool __thiscall
FOpenColorIOWrapperProcessor::TransformColor
          (FOpenColorIOWrapperProcessor *this,FLinearColor *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  CPUProcessor *local_18;
  longlong *local_10;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId971,"FOpenColorIOWrapperProcessor::TransformColor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\OpenColorIOWrapper.cpp"
               ,0x3cb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId971);
  }
  if (*(Processor **)this->Pimpl == (Processor *)0x0) {
    bVar5 = false;
  }
  else {
    OpenColorIO_v2_4::Processor::getDefaultCPUProcessor
              (*(Processor **)this->Pimpl,
               (shared_ptr<OpenColorIO_v2_4::CPUProcessor_const_> *)&local_18);
    OpenColorIO_v2_4::CPUProcessor::applyRGBA(local_18,(float *)param_1);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10);
        }
      }
    }
    bVar5 = true;
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// TransformImage @ 14d763ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "OptimizationFlags": Some values do not have unique names */

bool __thiscall
FOpenColorIOWrapperProcessor::TransformImage
          (FOpenColorIOWrapperProcessor *this,FImageView *param_1,FImageView *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  BitDepth BVar6;
  BitDepth BVar7;
  bool bVar8;
  bool bVar9;
  PackedImageDesc local_38;
  PackedImageDesc local_28;
  CPUProcessor *local_18;
  longlong *local_10;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1028,"FOpenColorIOWrapperProcessor::TransformImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\OpenColorIOWrapper.cpp"
               ,0x404);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1028);
  }
  if (*(longlong *)this->Pimpl != 0) {
    cVar4 = *(char *)((longlong)&param_1->_padding_ + 4);
    if (((((cVar4 == '\x01') || (cVar4 == '\x03')) || (cVar4 == '\x04')) || (cVar4 == '\x05')) &&
       (((cVar4 = *(char *)((longlong)&param_2->_padding_ + 4), cVar4 == '\x01' || (cVar4 == '\x03')
         ) || ((cVar4 == '\x04' || (cVar4 == '\x05')))))) {
      ::`anonymous_namespace'::GetImageDesc(&local_28,param_1);
      ::`anonymous_namespace'::GetImageDesc(&local_38,param_2);
      BVar6 = OpenColorIO_v2_4::PackedImageDesc::getBitDepth(&local_28);
      BVar7 = OpenColorIO_v2_4::PackedImageDesc::getBitDepth(&local_38);
      OpenColorIO_v2_4::Processor::getOptimizedCPUProcessor
                (*(Processor **)this->Pimpl,
                 (shared_ptr<OpenColorIO_v2_4::CPUProcessor_const_> *)&local_18,BVar6,BVar7,
                 OPTIMIZATION_DEFAULT);
      OpenColorIO_v2_4::CPUProcessor::apply(local_18,(ImageDesc *)&local_28,(ImageDesc *)&local_38);
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)local_10 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10);
          }
        }
      }
      OpenColorIO_v2_4::PackedImageDesc::~PackedImageDesc(&local_38);
      OpenColorIO_v2_4::PackedImageDesc::~PackedImageDesc(&local_28);
      bVar8 = true;
      goto LAB_14d763faa;
    }
    if (2 < (byte)LogOpenColorIOWrapper._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIOWrapper);
    }
  }
  bVar8 = false;
LAB_14d763faa:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar8;
}

// TransformImage @ 14d764090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "OptimizationFlags": Some values do not have unique names */

bool __thiscall
FOpenColorIOWrapperProcessor::TransformImage(FOpenColorIOWrapperProcessor *this,FImageView *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  BitDepth BVar6;
  int iVar7;
  PackedImageDesc *pPVar8;
  bool bVar9;
  <lambda_1> local_res8 [8];
  undefined1 local_68 [16];
  TArrayView<std::nullptr_t,int> local_58;
  PackedImageDesc local_48;
  longlong local_38;
  longlong lStack_30;
  void *local_28;
  undefined1 *local_18;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId989,"FOpenColorIOWrapperProcessor::TransformImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\OpenColorIOWrapper.cpp"
               ,0x3dd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId989);
  }
  if (*(longlong *)this->Pimpl != 0) {
    cVar3 = *(char *)((longlong)&param_1->_padding_ + 4);
    if ((((cVar3 == '\x01') || (cVar3 == '\x03')) || (cVar3 == '\x04')) || (cVar3 == '\x05')) {
      pPVar8 = ::`anonymous_namespace'::GetImageDesc(&local_48,param_1);
      BVar6 = (**(code **)(pPVar8->_padding_ + 0x28))(pPVar8);
      OpenColorIO_v2_4::PackedImageDesc::~PackedImageDesc(&local_48);
      OpenColorIO_v2_4::Processor::getOptimizedCPUProcessor
                (*(Processor **)this->Pimpl,
                 (shared_ptr<OpenColorIO_v2_4::CPUProcessor_const_> *)local_68,BVar6,BVar6,
                 OPTIMIZATION_DEFAULT);
      bVar5 = OpenColorIO_v2_4::CPUProcessor::isNoOp((CPUProcessor *)local_68._0_8_);
      if (!bVar5) {
        iVar7 = FImageCore::ImageParallelForComputeNumJobs(param_1,(long64 *)local_res8);
        local_38 = param_1->_padding_;
        lStack_30 = param_1->_padding_;
        local_18 = local_68;
        local_28 = param_1->RawData;
        local_58.DataPtr = (void **)0x0;
        local_58.ArrayNum = 0;
        local_48._padding_ =
             (longlong)
             UE::Core::Private::Function::
             TFunctionRefCaller<`FImageCore::ImageParallelFor<`FOpenColorIOWrapperProcessor::TransformImage'::__l11::<lambda_1>_>'::__l2::<lambda_1>,void,int>
             ::Call;
        local_48.m_impl = (Impl *)&local_38;
        ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                  (L"FOpenColorIOWrapperProcessor.TransformImage.PF",iVar7,1,
                   (TFunctionRef<void___cdecl(int)> *)&local_48,local_res8[0],Unbalanced,&local_58);
      }
      if ((longlong *)local_68._8_8_ != (longlong *)0x0) {
        LOCK();
        plVar1 = (longlong *)(local_68._8_8_ + 8);
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (*(code *)**(undefined8 **)local_68._8_8_)(local_68._8_8_);
          LOCK();
          piVar2 = (int *)(local_68._8_8_ + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*(longlong *)local_68._8_8_ + 8))(local_68._8_8_);
          }
        }
      }
      bVar5 = true;
      goto LAB_14d764139;
    }
    if (2 < (byte)LogOpenColorIOWrapper._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIOWrapper);
    }
  }
  bVar5 = false;
LAB_14d764139:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

