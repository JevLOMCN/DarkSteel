// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureRtAudio
// Functions: 182

// `dynamic_initializer_for_'ModuleRegistrantAudioCaptureRtAudio'' @ 1413c7230

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioCaptureRtAudio__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioCaptureRtAudio";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioCaptureRtAudio",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<Audio::FAudioCaptureRtAudioModule>::InitializeModule)
  ;
  return;
}

// `scalar_deleting_destructor' @ 14d0c2200

void * __thiscall
Audio::FAudioCaptureRtAudioFactory::_scalar_deleting_destructor_
          (FAudioCaptureRtAudioFactory *this,uint param_1)

{
  *this = (FAudioCaptureRtAudioFactory)&___7IAudioCaptureFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0c23c0

void * __thiscall
Audio::FAudioCaptureRtAudioModule::_scalar_deleting_destructor_
          (FAudioCaptureRtAudioModule *this,uint param_1)

{
  this->AudioCaptureFactory = (FAudioCaptureRtAudioFactory)&___7IAudioCaptureFactory_Audio__6B_;
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// DestructItems<Audio::FCaptureDeviceInfo,int> @ 14d0c2440

void __cdecl DestructItems<Audio::FCaptureDeviceInfo,int>(FCaptureDeviceInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->DeviceId).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->DeviceName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// _Copy_backward_memmove<unsigned_int_*,unsigned_int_*> @ 14d0c2490

uint * __cdecl
std::_Copy_backward_memmove<unsigned_int_*,unsigned_int_*>
          (uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  
  puVar1 = memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
                   (longlong)param_2 - (longlong)param_1);
  return puVar1;
}

// _Copy_memmove<enum_RtAudio::Api_*,enum_RtAudio::Api_*> @ 14d0c24b0

Api * __cdecl
std::_Copy_memmove<enum_RtAudio::Api_*,enum_RtAudio::Api_*>(Api *param_1,Api *param_2,Api *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (Api *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_tail<enum_RtAudio::Api_*> @ 14d0c24f0

Api * __cdecl
std::_Copy_memmove_tail<enum_RtAudio::Api_*>
          (char *param_1,Api *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (Api *)((longlong)param_2 + param_3);
}

// _Emplace_reallocate<DsDevice_const_&> @ 14d0c2520

DsDevice * __thiscall
std::vector<DsDevice,std::allocator<DsDevice>_>::_Emplace_reallocate<DsDevice_const_&>
          (vector<DsDevice,std::allocator<DsDevice>_> *this,DsDevice *param_1,DsDevice *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  _GUID *p_Var4;
  DsDevice *pDVar5;
  DsDevice *pDVar6;
  DsDevice *pDVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  DsDevice *pDVar10;
  DsDevice *pDVar11;
  
  pDVar6 = (this->_Mypair)._Myval2._Myfirst;
  lVar3 = ((longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pDVar6) / 0x38;
  if (lVar3 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar3 + 1;
  uVar2 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar6) / 0x38;
  if (0x492492492492492 - (uVar2 >> 1) < uVar2) {
    uVar9 = 0x492492492492492;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar9 = uVar1;
    if (uVar1 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0x492492492492492 < uVar9) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  pDVar5 = _Allocate<16,std::_Default_allocate_traits>(uVar9 * 0x38);
  pDVar11 = pDVar5 + ((longlong)param_1 - (longlong)pDVar6) / 0x38;
  p_Var4 = param_2->id[1];
  pDVar11->id[0] = param_2->id[0];
  pDVar11->id[1] = p_Var4;
  *(undefined2 *)pDVar11->validId = *(undefined2 *)param_2->validId;
  pDVar11->found = param_2->found;
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&pDVar11->name,&param_2->name);
  pDVar7 = (this->_Mypair)._Myval2._Mylast;
  pDVar6 = (this->_Mypair)._Myval2._Myfirst;
  pDVar10 = pDVar5;
  if (param_1 != pDVar7) {
    _Uninitialized_move<DsDevice_*,std::allocator<DsDevice>_>
              (pDVar6,param_1,pDVar5,(allocator<DsDevice> *)this);
    pDVar7 = (this->_Mypair)._Myval2._Mylast;
    pDVar6 = param_1;
    pDVar10 = pDVar11 + 1;
  }
  _Uninitialized_move<DsDevice_*,std::allocator<DsDevice>_>
            (pDVar6,pDVar7,pDVar10,(allocator<DsDevice> *)this);
  pDVar6 = (this->_Mypair)._Myval2._Myfirst;
  if (pDVar6 != (DsDevice *)0x0) {
    pDVar7 = (this->_Mypair)._Myval2._Mylast;
    for (; pDVar6 != pDVar7; pDVar6 = pDVar6 + 1) {
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&pDVar6->name);
    }
    pDVar6 = (this->_Mypair)._Myval2._Myfirst;
    uVar8 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar6) / 0x38) * 0x38;
    pDVar7 = pDVar6;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      pDVar7 = (DsDevice *)pDVar6[-1].name._Mypair._Myval2._Myres;
      if (0x1f < (ulonglong)((longlong)pDVar6 + (-8 - (longlong)pDVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pDVar7,uVar8);
  }
  (this->_Mypair)._Myval2._Myfirst = pDVar5;
  (this->_Mypair)._Myval2._Mylast = pDVar5 + uVar1;
  (this->_Mypair)._Myval2._Myend = pDVar5 + uVar9;
  return pDVar11;
}

// _Emplace_reallocate<enum_RtAudio::Api> @ 14d0c2770

Api * __thiscall
std::vector<enum_RtAudio::Api,std::allocator<enum_RtAudio::Api>_>::
_Emplace_reallocate<enum_RtAudio::Api>(void *this,Api *param_1,Api *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  Api *_Src;
  void *pvVar3;
  longlong lVar4;
  Api *_Dst;
  ulonglong uVar5;
  ulonglong uVar6;
  Api *_Dst_00;
  void *pvVar7;
  ulong64 uVar8;
  longlong lVar9;
  size_t _Size;
  
  lVar2 = *(longlong *)this;
  lVar9 = (longlong)param_1 - lVar2 >> 2;
  lVar4 = *(longlong *)((longlong)this + 8) - lVar2 >> 2;
  if (lVar4 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar5 = *(longlong *)((longlong)this + 0x10) - lVar2 >> 2;
  uVar1 = lVar4 + 1;
  if (0x3fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar6 = 0x3fffffffffffffff;
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar1;
    if (uVar1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x3fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar6 * 4);
  _Dst[lVar9] = *param_2;
  _Src = *(Api **)this;
  if (param_1 == *(Api **)((longlong)this + 8)) {
    _Size = (longlong)*(Api **)((longlong)this + 8) - (longlong)_Src;
    _Dst_00 = _Dst;
    param_1 = _Src;
  }
  else {
    memmove(_Dst,_Src,(longlong)param_1 - (longlong)_Src);
    _Dst_00 = _Dst + lVar9 + 1;
    _Size = *(longlong *)((longlong)this + 8) - (longlong)param_1;
  }
  memmove(_Dst_00,param_1,_Size);
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    uVar8 = *(longlong *)((longlong)this + 0x10) - (longlong)pvVar3 & 0xfffffffffffffffc;
    pvVar7 = pvVar3;
    if (0xfff < uVar8) {
      pvVar7 = *(void **)((longlong)pvVar3 + -8);
      uVar8 = uVar8 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar7,uVar8);
  }
  *(Api **)this = _Dst;
  *(Api **)((longlong)this + 8) = _Dst + uVar1;
  *(Api **)((longlong)this + 0x10) = _Dst + uVar6;
  return _Dst + lVar9;
}

// _Guess_median_unchecked<unsigned_int_*,std::less<void>_> @ 14d0c28f0

void __cdecl
std::_Guess_median_unchecked<unsigned_int_*,std::less<void>_>
          (uint *param_1,uint *param_2,uint *param_3,less<void> param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = *param_1;
  lVar3 = (longlong)param_3 - (longlong)param_1 >> 2;
  if (lVar3 < 0x29) {
    uVar2 = *param_2;
    if (uVar2 < uVar1) {
      *param_2 = uVar1;
      *param_1 = uVar2;
    }
    uVar1 = *param_3;
    if (uVar1 < *param_2) {
      *param_3 = *param_2;
      *param_2 = uVar1;
      if (uVar1 < *param_1) {
        *param_2 = *param_1;
        *param_1 = uVar1;
        return;
      }
    }
  }
  else {
    lVar3 = lVar3 + 1 >> 3;
    uVar2 = param_1[lVar3];
    if (uVar2 < uVar1) {
      param_1[lVar3] = uVar1;
      *param_1 = uVar2;
    }
    uVar1 = param_1[lVar3 * 2];
    if (uVar1 < param_1[lVar3]) {
      param_1[lVar3 * 2] = param_1[lVar3];
      param_1[lVar3] = uVar1;
      if (uVar1 < *param_1) {
        param_1[lVar3] = *param_1;
        *param_1 = uVar1;
      }
    }
    uVar1 = *param_2;
    puVar4 = param_2 + -lVar3;
    if (uVar1 < *puVar4) {
      *param_2 = *puVar4;
      *puVar4 = uVar1;
    }
    uVar1 = param_2[lVar3];
    if (uVar1 < *param_2) {
      param_2[lVar3] = *param_2;
      *param_2 = uVar1;
      if (uVar1 < *puVar4) {
        *param_2 = *puVar4;
        *puVar4 = uVar1;
      }
    }
    puVar5 = param_3 + lVar3 * -2;
    puVar4 = param_3 + -lVar3;
    uVar1 = *puVar4;
    if (uVar1 < *puVar5) {
      *puVar4 = *puVar5;
      *puVar5 = uVar1;
    }
    uVar1 = *param_3;
    if (uVar1 < *puVar4) {
      *param_3 = *puVar4;
      *puVar4 = uVar1;
      if (uVar1 < *puVar5) {
        *puVar4 = *puVar5;
        *puVar5 = uVar1;
      }
    }
    uVar1 = *param_2;
    if (uVar1 < param_1[lVar3]) {
      *param_2 = param_1[lVar3];
      param_1[lVar3] = uVar1;
    }
    uVar1 = *puVar4;
    if (uVar1 < *param_2) {
      *puVar4 = *param_2;
      *param_2 = uVar1;
      if (uVar1 < param_1[lVar3]) {
        *param_2 = param_1[lVar3];
        param_1[lVar3] = uVar1;
      }
    }
  }
  return;
}

// _Sort_unchecked<unsigned_int_*,std::less<void>_> @ 14d0c2a40

void __cdecl
std::_Sort_unchecked<unsigned_int_*,std::less<void>_>
          (uint *param_1,uint *param_2,long64 param_3,less<void> param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    if ((longlong)(uVar2 & 0xfffffffffffffffc) < 0x81) {
      puVar7 = param_1;
      if (param_1 != param_2) {
        while (puVar9 = puVar7 + 1, puVar9 != param_2) {
          uVar5 = *puVar9;
          if (uVar5 < *param_1) {
            memmove((void *)((longlong)puVar9 + (4 - ((longlong)puVar9 - (longlong)param_1))),
                    param_1,(longlong)puVar9 - (longlong)param_1);
            *param_1 = uVar5;
            puVar7 = puVar9;
          }
          else {
            uVar1 = *puVar7;
            puVar7 = puVar9;
            while (uVar5 < uVar1) {
              *puVar7 = uVar1;
              uVar1 = puVar7[-2];
              puVar7 = puVar7 + -1;
            }
            *puVar7 = uVar5;
            puVar7 = puVar9;
          }
        }
      }
      return;
    }
    lVar10 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (param_3 < 1) {
      uVar2 = (longlong)param_2 - (longlong)param_1 >> 2;
      if (0 < lVar10) {
        lVar12 = (longlong)(uVar2 - 1) >> 1;
        do {
          uVar5 = param_1[lVar10 + -1];
          lVar10 = lVar10 + -1;
          lVar11 = lVar10;
          while (lVar11 < lVar12) {
            lVar4 = lVar11 * 2 +
                    (2 - (ulonglong)(param_1[lVar11 * 2 + 2] < param_1[lVar11 * 2 + 1]));
            param_1[lVar11] = param_1[lVar4];
            lVar11 = lVar4;
          }
          if ((lVar11 == lVar12) && ((uVar2 & 1) == 0)) {
            param_1[lVar11] = param_1[uVar2 - 1];
            lVar11 = uVar2 - 1;
          }
          while (lVar10 < lVar11) {
            lVar4 = lVar11 + -1 >> 1;
            if (uVar5 <= param_1[lVar4]) break;
            param_1[lVar11] = param_1[lVar4];
            lVar11 = lVar4;
          }
          param_1[lVar11] = uVar5;
        } while (0 < lVar10);
      }
      if ((longlong)((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffffcU) < 8) {
        return;
      }
      puVar7 = param_2 + -1;
      do {
        uVar5 = *puVar7;
        uVar2 = (longlong)puVar7 - (longlong)param_1 >> 2;
        lVar10 = 0;
        *puVar7 = *param_1;
        lVar11 = (longlong)(uVar2 - 1) >> 1;
        lVar12 = lVar10;
        if (0 < lVar11) {
          do {
            lVar10 = lVar12 * 2 +
                     (2 - (ulonglong)(param_1[lVar12 * 2 + 2] < param_1[lVar12 * 2 + 1]));
            param_1[lVar12] = param_1[lVar10];
            lVar12 = lVar10;
          } while (lVar10 < lVar11);
        }
        if ((lVar10 == lVar11) && ((uVar2 & 1) == 0)) {
          param_1[lVar10] = param_1[uVar2 - 1];
          lVar10 = uVar2 - 1;
        }
        while (0 < lVar10) {
          lVar12 = lVar10 + -1 >> 1;
          if (uVar5 <= param_1[lVar12]) break;
          param_1[lVar10] = param_1[lVar12];
          lVar10 = lVar12;
        }
        puVar7 = puVar7 + -1;
        param_1[lVar10] = uVar5;
        if ((longlong)((4 - (longlong)param_1) + (longlong)puVar7 & 0xfffffffffffffffcU) < 8) {
          return;
        }
      } while( true );
    }
    puVar9 = param_1 + lVar10;
    _Guess_median_unchecked<unsigned_int_*,std::less<void>_>(param_1,puVar9,param_2 + -1,param_4);
    puVar7 = puVar9 + 1;
    if (param_1 < puVar9) {
      uVar5 = *puVar9;
      do {
        uVar1 = puVar9[-1];
        puVar8 = puVar9 + -1;
        if ((uVar1 < uVar5) || (*puVar9 < uVar1)) break;
        puVar9 = puVar8;
        uVar5 = uVar1;
      } while (param_1 < puVar8);
    }
    puVar8 = puVar7;
    puVar6 = puVar9;
    if (puVar7 < param_2) {
      do {
        puVar8 = puVar7;
        if ((*puVar7 < *puVar9) || (*puVar7 != *puVar9)) break;
        puVar7 = puVar7 + 1;
        puVar8 = puVar7;
      } while (puVar7 < param_2);
    }
joined_r0x00014d0c2af3:
    puVar3 = puVar9;
    if (puVar7 < param_2) {
      uVar5 = *puVar7;
      if (uVar5 <= *puVar6) {
        if (*puVar6 != uVar5) goto joined_r0x00014d0c2b18;
        if (puVar8 != puVar7) {
          uVar1 = *puVar8;
          *puVar8 = uVar5;
          *puVar7 = uVar1;
        }
        puVar8 = puVar8 + 1;
      }
      puVar7 = puVar7 + 1;
      goto joined_r0x00014d0c2af3;
    }
joined_r0x00014d0c2b18:
    for (; param_1 < puVar9; puVar9 = puVar9 + -1) {
      puVar3 = puVar3 + -1;
      uVar5 = *puVar3;
      if (*puVar6 <= uVar5) {
        if (uVar5 != *puVar6) break;
        puVar6 = puVar6 + -1;
        if (puVar6 != puVar3) {
          uVar1 = *puVar6;
          *puVar6 = uVar5;
          *puVar3 = uVar1;
        }
      }
    }
    if (puVar9 != param_1) {
      puVar9 = puVar9 + -1;
      if (puVar7 == param_2) {
        puVar6 = puVar6 + -1;
        if (puVar9 != puVar6) {
          uVar5 = *puVar9;
          *puVar9 = *puVar6;
          *puVar6 = uVar5;
        }
        uVar5 = *puVar6;
        *puVar6 = puVar8[-1];
        puVar8[-1] = uVar5;
        puVar8 = puVar8 + -1;
      }
      else {
        uVar5 = *puVar7;
        *puVar7 = *puVar9;
        puVar7 = puVar7 + 1;
        *puVar9 = uVar5;
      }
      goto joined_r0x00014d0c2af3;
    }
    if (puVar7 != param_2) {
      if (puVar8 != puVar7) {
        uVar5 = *puVar6;
        *puVar6 = *puVar8;
        *puVar8 = uVar5;
      }
      uVar5 = *puVar6;
      *puVar6 = *puVar7;
      *puVar7 = uVar5;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      goto joined_r0x00014d0c2af3;
    }
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)puVar6 - (longlong)param_1 & 0xfffffffffffffffcU) <
        (longlong)((longlong)param_2 - (longlong)puVar8 & 0xfffffffffffffffcU)) {
      _Sort_unchecked<unsigned_int_*,std::less<void>_>(param_1,puVar6,param_3,param_4);
      puVar6 = param_2;
      param_1 = puVar8;
    }
    else {
      _Sort_unchecked<unsigned_int_*,std::less<void>_>(puVar8,param_2,param_3,param_4);
    }
    uVar2 = (longlong)puVar6 - (longlong)param_1;
    param_2 = puVar6;
  } while( true );
}

// _Uninitialized_move<DsDevice_*,std::allocator<DsDevice>_> @ 14d0c2e50

DsDevice * __cdecl
std::_Uninitialized_move<DsDevice_*,std::allocator<DsDevice>_>
          (DsDevice *param_1,DsDevice *param_2,DsDevice *param_3,allocator<DsDevice> *param_4)

{
  bool *pbVar1;
  DsDevice *pDVar2;
  _GUID *p_Var3;
  char *pcVar4;
  bool *pbVar5;
  DsDevice *pDVar6;
  
  pDVar6 = param_3;
  if (param_1 != param_2) {
    pbVar5 = param_1->validId;
    do {
      p_Var3 = *(_GUID **)(pbVar5 + -8);
      pbVar1 = pbVar5 + 0x38;
      pDVar2 = (DsDevice *)(pbVar5 + 0x28);
      pDVar6->id[0] = ((DsDevice *)(pbVar5 + -0x10))->id[0];
      pDVar6->id[1] = p_Var3;
      pDVar6 = pDVar6 + 1;
      *(undefined2 *)(pbVar1 + (longlong)param_3 + (-0x38 - (longlong)param_1)) =
           *(undefined2 *)pbVar5;
      pbVar1[(longlong)param_3 + (-0x36 - (longlong)param_1)] = pbVar5[2];
      *(undefined8 *)(pbVar1 + (longlong)param_3 + (-0x30 - (longlong)param_1)) = 0;
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
       (pbVar1 + (longlong)param_3 + (-0x30 - (longlong)param_1) + 8))->_Mypair)._Myval2._Bx._Ptr =
           (char *)0x0;
      *(undefined8 *)(pbVar1 + (longlong)param_3 + (-0x20 - (longlong)param_1)) = 0;
      *(undefined8 *)(pbVar1 + (longlong)param_3 + (-0x18 - (longlong)param_1)) = 0;
      pcVar4 = *(char **)(pbVar5 + 0x10);
      *(char **)(pbVar1 + (longlong)param_3 + (-0x30 - (longlong)param_1)) =
           (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pbVar5 + 8))->
           _Mypair)._Myval2._Bx._Ptr;
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
       (pbVar1 + (longlong)param_3 + (-0x30 - (longlong)param_1) + 8))->_Mypair)._Myval2._Bx._Ptr =
           pcVar4;
      pcVar4 = *(char **)(pbVar5 + 0x20);
      *(ulong64 *)(pbVar1 + (longlong)param_3 + (-0x20 - (longlong)param_1)) =
           *(ulong64 *)(pbVar5 + 0x18);
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
       (pbVar1 + (longlong)param_3 + (-0x20 - (longlong)param_1) + 8))->_Mypair)._Myval2._Bx._Ptr =
           pcVar4;
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pbVar5 + 8))->_Mypair).
      _Myval2._Bx._Buf[0] = '\0';
      *(ulong64 *)(pbVar5 + 0x18) = 0;
      *(ulong64 *)(pbVar5 + 0x20) = 0xf;
      pbVar5 = pbVar1;
    } while (pDVar2 != param_2);
  }
  return pDVar6;
}

// basic_string<char,std::char_traits<char>,std::allocator<char>_> @ 14d0c2ef0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
basic_string<char,std::char_traits<char>,std::allocator<char>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,ulong64 param_1,
          char param_2)

{
  ulonglong uVar1;
  char *_Dst;
  ulonglong uVar2;
  
  (this->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 0;
  if (param_1 < 0x8000000000000000) {
    if (param_1 < 0x10) {
      (this->_Mypair)._Myval2._Mysize = param_1;
      (this->_Mypair)._Myval2._Myres = 0xf;
      memset(this,(int)param_2,param_1);
      (this->_Mypair)._Myval2._Bx._Buf[param_1] = '\0';
    }
    else {
      uVar1 = param_1 | 0xf;
      uVar2 = 0x7fffffffffffffff;
      if ((uVar1 < 0x8000000000000000) && (uVar2 = uVar1, uVar1 < 0x16)) {
        uVar2 = 0x16;
      }
      _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar2 + 1);
      (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
      (this->_Mypair)._Myval2._Mysize = param_1;
      (this->_Mypair)._Myval2._Myres = uVar2;
      memset(_Dst,(int)param_2,param_1);
      _Dst[param_1] = '\0';
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _Xlen_string();
}

// ConvertInfo @ 14d0c2fd0

ConvertInfo * __thiscall RtApi::ConvertInfo::ConvertInfo(ConvertInfo *this)

{
  (this->inOffset)._Mypair._Myval2._Myfirst = (int *)0x0;
  (this->inOffset)._Mypair._Myval2._Mylast = (int *)0x0;
  (this->inOffset)._Mypair._Myval2._Myend = (int *)0x0;
  (this->outOffset)._Mypair._Myval2._Myfirst = (int *)0x0;
  (this->outOffset)._Mypair._Myval2._Mylast = (int *)0x0;
  (this->outOffset)._Mypair._Myval2._Myend = (int *)0x0;
  return this;
}

// RtApi @ 14d0c30b0

RtApi * __thiscall RtApi::RtApi(RtApi *this)

{
  basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  
  this->_padding_ = (longlong)&___7RtApi__6B_;
  this_00 = &this->errorStream_;
  *(undefined1 **)this_00 =
       &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)&(this->errorStream_).field_0x88);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)this_00,
             (basic_streambuf<char,std::char_traits<char>_> *)&(this->errorStream_)._Stringbuffer,
             false);
  *(undefined ***)(&this_00->field_0x0 + *(int *)(*(longlong *)this_00 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)*(int *)(*(longlong *)this_00 + 4) + -4 + (longlong)this_00) =
       *(int *)(*(longlong *)this_00 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&(this->errorStream_)._Stringbuffer);
  (this->errorStream_)._Stringbuffer._padding_ =
       (longlong)std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  (this->errorStream_)._Stringbuffer._Seekhigh = (char *)0x0;
  (this->errorStream_)._Stringbuffer._Mystate = 4;
  (this->errorText_)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(this->errorText_)._Mypair._Myval2._Bx + 8) = 0;
  (this->errorText_)._Mypair._Myval2._Mysize = 0;
  (this->errorText_)._Mypair._Myval2._Myres = 0xf;
  (this->errorText_)._Mypair._Myval2._Bx._Buf[0] = '\0';
  (this->stream_).apiHandle = (void *)0x0;
  (this->stream_).deviceBuffer = (char *)0x0;
  (this->stream_).callbackInfo.object = (void *)0x0;
  (this->stream_).callbackInfo.callback = (void *)0x0;
  (this->stream_).callbackInfo.userData = (void *)0x0;
  (this->stream_).callbackInfo.errorCallback = (void *)0x0;
  (this->stream_).callbackInfo.apiInfo = (void *)0x0;
  (this->stream_).callbackInfo.isRunning = false;
  (this->stream_).callbackInfo.doRealtime = false;
  (this->stream_).callbackInfo.priority = 0;
  _eh_vector_constructor_iterator_
            ((this->stream_).convertInfo,0x48,2,ConvertInfo::ConvertInfo,ConvertInfo::~ConvertInfo);
  (this->stream_).device[0] = 0x2b67;
  (this->stream_).device[1] = 0x2b67;
  (this->stream_).state = STREAM_CLOSED;
  (this->stream_).mode = UNINITIALIZED;
  (this->stream_).apiHandle = (void *)0x0;
  (this->stream_).userBuffer[0] = (char *)0x0;
  (this->stream_).userBuffer[1] = (char *)0x0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&(this->stream_).mutex);
  this->showWarnings_ = true;
  this->firstErrorOccurred_ = false;
  return this;
}

// RtApiDs @ 14d0c3250

RtApiDs * __thiscall RtApiDs::RtApiDs(RtApiDs *this)

{
  longlong *this_00;
  HRESULT HVar1;
  
  this->_padding_ = (longlong)&___7RtApi__6B_;
  this_00 = &this->_padding_;
  *this_00 = (longlong)
             &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_
  ;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)&this->_padding_);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)this_00,
             (basic_streambuf<char,std::char_traits<char>_> *)&this->_padding_,false);
  *(undefined ***)((longlong)this_00 + (longlong)*(int *)(*this_00 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)*(int *)(*this_00 + 4) + -4 + (longlong)this_00) =
       *(int *)(*this_00 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&this->_padding_);
  this->_padding_ =
       (longlong)std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 4;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0xf;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  _eh_vector_constructor_iterator_
            (&this->_padding_,0x48,2,RtApi::ConvertInfo::ConvertInfo,
             RtApi::ConvertInfo::~ConvertInfo);
  *(undefined4 *)&this->_padding_ = 0x2b67;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x2b67;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffce;
  *(undefined4 *)&this->_padding_ = 0xffffffb5;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7RtApiDs__6B_;
  (this->dsDevices)._Mypair._Myval2._Myfirst = (DsDevice *)0x0;
  (this->dsDevices)._Mypair._Myval2._Mylast = (DsDevice *)0x0;
  (this->dsDevices)._Mypair._Myval2._Myend = (DsDevice *)0x0;
  this->coInitialized_ = false;
  HVar1 = CoInitialize((LPVOID)0x0);
  if (-1 < HVar1) {
    this->coInitialized_ = true;
  }
  return this;
}

// RtAudio @ 14d0c3420

/* WARNING: Removing unreachable block (ram,0x00014d0c34d1) */
/* WARNING: Removing unreachable block (ram,0x00014d0c34ad) */
/* WARNING: Removing unreachable block (ram,0x00014d0c34e9) */
/* WARNING: Removing unreachable block (ram,0x00014d0c34fe) */
/* WARNING: Removing unreachable block (ram,0x00014d0c3514) */
/* WARNING: Removing unreachable block (ram,0x00014d0c35a1) */
/* WARNING: Removing unreachable block (ram,0x00014d0c361a) */
/* WARNING: Removing unreachable block (ram,0x00014d0c362d) */
/* WARNING: Removing unreachable block (ram,0x00014d0c362f) */
/* WARNING: Enum "Type": Some values do not have unique names */

RtAudio * __thiscall RtAudio::RtAudio(RtAudio *this,Api param_1)

{
  Api *_Dst;
  
  this->rtapi_ = (RtApi *)0x0;
  if (param_1 != UNSPECIFIED) {
    openRtApi(this,param_1);
    if (this->rtapi_ != (RtApi *)0x0) {
      return this;
    }
    if (2 < (byte)LogAudioCaptureCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
    }
  }
  _Dst = std::_Allocate<16,std::_Default_allocate_traits>(4);
  *_Dst = WINDOWS_DS;
  memmove(_Dst,(void *)0x0,0);
  openRtApi(this,*_Dst);
  if (this->rtapi_ != (RtApi *)0x0) {
    (**(code **)(this->rtapi_->_padding_ + 0x10))();
  }
  if ((this->rtapi_ == (RtApi *)0x0) && (1 < (byte)LogAudioCaptureCore._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (_Dst != (Api *)0x0) {
    ::operator_delete(_Dst,4);
  }
  return this;
}

// ~vector<unsigned_int,std::allocator<unsigned_int>_> @ 14d0c3710

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::
~vector<unsigned_int,std::allocator<unsigned_int>_>
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this)

{
  uint *puVar1;
  uint *puVar2;
  ulong64 uVar3;
  
  puVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (puVar1 != (uint *)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar1 & 0xfffffffffffffffc;
    puVar2 = puVar1;
    if (0xfff < uVar3) {
      puVar2 = *(uint **)(puVar1 + -2);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)puVar1 + (-8 - (longlong)puVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(puVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (uint *)0x0;
    (this->_Mypair)._Myval2._Mylast = (uint *)0x0;
    (this->_Mypair)._Myval2._Myend = (uint *)0x0;
  }
  return;
}

// ~vector<DsDevice,std::allocator<DsDevice>_> @ 14d0c3790

void __thiscall
std::vector<DsDevice,std::allocator<DsDevice>_>::~vector<DsDevice,std::allocator<DsDevice>_>
          (vector<DsDevice,std::allocator<DsDevice>_> *this)

{
  ulong64 uVar1;
  DsDevice *pDVar2;
  DsDevice *pDVar3;
  
  pDVar2 = (this->_Mypair)._Myval2._Myfirst;
  if (pDVar2 != (DsDevice *)0x0) {
    pDVar3 = (this->_Mypair)._Myval2._Mylast;
    for (; pDVar2 != pDVar3; pDVar2 = pDVar2 + 1) {
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&pDVar2->name);
    }
    pDVar2 = (this->_Mypair)._Myval2._Myfirst;
    uVar1 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pDVar2) / 0x38) * 0x38;
    pDVar3 = pDVar2;
    if (0xfff < uVar1) {
      pDVar3 = (DsDevice *)pDVar2[-1].name._Mypair._Myval2._Myres;
      uVar1 = uVar1 + 0x27;
      if (0x1f < (ulonglong)((longlong)pDVar2 + (-8 - (longlong)pDVar3))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pDVar3,uVar1);
    (this->_Mypair)._Myval2._Myfirst = (DsDevice *)0x0;
    (this->_Mypair)._Myval2._Mylast = (DsDevice *)0x0;
    (this->_Mypair)._Myval2._Myend = (DsDevice *)0x0;
  }
  return;
}

// ~vector<enum_RtAudio::Api,std::allocator<enum_RtAudio::Api>_> @ 14d0c3860

void __thiscall
std::vector<enum_RtAudio::Api,std::allocator<enum_RtAudio::Api>_>::
~vector<enum_RtAudio::Api,std::allocator<enum_RtAudio::Api>_>(void *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = *(longlong *)((longlong)this + 0x10) - (longlong)pvVar1 & 0xfffffffffffffffc;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar2,uVar3);
    *(undefined8 *)this = 0;
    *(undefined8 *)((longlong)this + 8) = 0;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  return;
}

// ~ConvertInfo @ 14d0c38e0

void __thiscall RtApi::ConvertInfo::~ConvertInfo(ConvertInfo *this)

{
  std::vector<int,std::allocator<int>_>::~vector<int,std::allocator<int>_>(&this->outOffset);
  std::vector<int,std::allocator<int>_>::~vector<int,std::allocator<int>_>(&this->inOffset);
  return;
}

// ~DeviceInfo @ 14d0c3910

void __thiscall RtAudio::DeviceInfo::~DeviceInfo(DeviceInfo *this)

{
  std::vector<unsigned_int,std::allocator<unsigned_int>_>::
  ~vector<unsigned_int,std::allocator<unsigned_int>_>(&this->sampleRates);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (&this->deviceId);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (&this->name);
  return;
}

// ~DsDevice @ 14d0c3940

void __thiscall DsDevice::~DsDevice(DsDevice *this)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (&this->name);
  return;
}

// ~RtApi @ 14d0c3990

void __thiscall RtApi::~RtApi(RtApi *this)

{
  this->_padding_ = (longlong)&___7RtApi__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->stream_).mutex);
  _eh_vector_destructor_iterator_((this->stream_).convertInfo,0x48,2,ConvertInfo::~ConvertInfo);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (&this->errorText_);
  std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbase_destructor_
            (&this->errorStream_);
  return;
}

// ~RtApiDs @ 14d0c39f0

void __thiscall RtApiDs::~RtApiDs(RtApiDs *this)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7RtApiDs__6B_;
  if (*(int *)((longlong)&this->_padding_ + 4) != -0x32) {
    *(undefined1 *)&this->_padding_ = 0;
    WaitForSingleObject((HANDLE)this->_padding_,0xffffffff);
    CloseHandle((HANDLE)this->_padding_);
    pvVar1 = (void *)this->_padding_;
    if (pvVar1 != (void *)0x0) {
      plVar2 = *(longlong **)((longlong)pvVar1 + 0x18);
      if (plVar2 != (longlong *)0x0) {
        plVar3 = *(longlong **)((longlong)pvVar1 + 8);
        (**(code **)(*plVar2 + 0x90))(plVar2);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      plVar2 = *(longlong **)((longlong)pvVar1 + 0x20);
      if (plVar2 != (longlong *)0x0) {
        plVar3 = *(longlong **)((longlong)pvVar1 + 0x10);
        (**(code **)(*plVar2 + 0x50))(plVar2);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      CloseHandle(*(HANDLE *)((longlong)pvVar1 + 0x48));
      ::operator_delete(pvVar1,0x50);
      this->_padding_ = 0;
    }
    if ((void *)this->_padding_ != (void *)0x0) {
      free((void *)this->_padding_);
      this->_padding_ = 0;
    }
    if ((void *)this->_padding_ != (void *)0x0) {
      free((void *)this->_padding_);
      this->_padding_ = 0;
    }
    if ((void *)this->_padding_ != (void *)0x0) {
      free((void *)this->_padding_);
      this->_padding_ = 0;
    }
    *(undefined4 *)&this->_padding_ = 0xffffffb5;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffce;
  }
  if (this->coInitialized_ != false) {
    CoUninitialize();
  }
  std::vector<DsDevice,std::allocator<DsDevice>_>::~vector<DsDevice,std::allocator<DsDevice>_>
            (&this->dsDevices);
  this->_padding_ = (longlong)&___7RtApi__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  _eh_vector_destructor_iterator_(&this->_padding_,0x48,2,RtApi::ConvertInfo::~ConvertInfo);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_);
  std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbase_destructor_
            ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             &this->_padding_);
  return;
}

// ~RtAudio @ 14d0c3bb0

void __thiscall RtAudio::~RtAudio(RtAudio *this)

{
  RtApi *pRVar1;
  
  pRVar1 = this->rtapi_;
  if (pRVar1 != (RtApi *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0c3bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pRVar1->_padding_)(pRVar1,1);
    return;
  }
  return;
}

// ~_Reallocation_guard @ 14d0c3bd0

void __thiscall
std::vector<DsDevice,std::allocator<DsDevice>_>::_Reallocation_guard::~_Reallocation_guard
          (_Reallocation_guard *this)

{
  DsDevice *pDVar1;
  ulong64 uVar2;
  DsDevice *pDVar3;
  
  if (this->_New_begin == (DsDevice *)0x0) {
    return;
  }
  pDVar1 = this->_Constructed_last;
  for (pDVar3 = this->_Constructed_first; pDVar3 != pDVar1; pDVar3 = pDVar3 + 1) {
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(&pDVar3->name)
    ;
  }
  uVar2 = this->_New_capacity * 0x38;
  pDVar3 = this->_New_begin;
  pDVar1 = pDVar3;
  if (0xfff < uVar2) {
    pDVar1 = (DsDevice *)pDVar3[-1].name._Mypair._Myval2._Myres;
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)pDVar3 + (-8 - (longlong)pDVar1))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  ::operator_delete(pDVar1,uVar2);
  return;
}

// ~_Sentry_base @ 14d0c3c70

void __thiscall
std::basic_ostream<char,std::char_traits<char>_>::_Sentry_base::~_Sentry_base(_Sentry_base *this)

{
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  
  pbVar1 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      ((longlong)&this->_Myostr->field_0x0 +
                      (longlong)*(int *)(*(longlong *)this->_Myostr + 4)));
  if (pbVar1 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(pbVar1->_padding_ + 0x10))(pbVar1);
  }
  return;
}

// ~sentry @ 14d0c3cb0

void __thiscall std::basic_ostream<char,std::char_traits<char>_>::sentry::~sentry(sentry *this)

{
  int iVar1;
  basic_streambuf<char,std::char_traits<char>_> *pbVar2;
  
  iVar1 = uncaught_exceptions();
  if (iVar1 == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,std::char_traits<char>_> *)this->_padding_);
  }
  pbVar2 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      ((longlong)*(int *)(*(longlong *)this->_padding_ + 4) + this->_padding_));
  if (pbVar2 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(pbVar2->_padding_ + 0x10))(pbVar2);
  }
  return;
}

// `scalar_deleting_destructor' @ 14d0c3d00

void * __thiscall
Audio::FAudioCaptureRtAudioStream::_scalar_deleting_destructor_
          (FAudioCaptureRtAudioStream *this,uint param_1)

{
  RtApi *pRVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pRVar1 = (this->CaptureDevice).rtapi_;
  if (pRVar1 != (RtApi *)0x0) {
    (**(code **)pRVar1->_padding_)(pRVar1,1);
  }
  if (*(longlong *)&this->OnCapture != 0) {
    plVar2 = *(longlong **)&(this->OnCapture).field_0x28;
    plVar3 = (longlong *)&(this->OnCapture).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IAudioCaptureStream_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0c3d80

void * __thiscall RtApi::_scalar_deleting_destructor_(RtApi *this,uint param_1)

{
  this->_padding_ = (longlong)&___7RtApi__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->stream_).mutex);
  _eh_vector_destructor_iterator_((this->stream_).convertInfo,0x48,2,ConvertInfo::~ConvertInfo);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (&this->errorText_);
  std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbase_destructor_
            (&this->errorStream_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x288);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0c3e10

void * __thiscall RtApiDs::_scalar_deleting_destructor_(RtApiDs *this,uint param_1)

{
  ~RtApiDs(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a8);
  }
  return this;
}

// GetAudioFormatFromEncoding @ 14d0c3ef0

bool __cdecl GetAudioFormatFromEncoding(EPCMAudioEncoding param_1,ulong *param_2)

{
  switch(param_1) {
  case UNKNOWN:
  case FLOATING_POINT_32:
    *param_2 = 0x10;
    return true;
  case PCM_8:
    *param_2 = 1;
    return true;
  case PCM_16:
    *param_2 = 2;
    return true;
  case PCM_24:
    *param_2 = 4;
    return true;
  default:
    return false;
  case PCM_32:
    *param_2 = 8;
    return true;
  case FLOATING_POINT_64:
    *param_2 = 0x20;
    return true;
  }
}

// OnAudioCaptureCallback @ 14d0c4960

int __cdecl
OnAudioCaptureCallback
          (void *param_1,void *param_2,uint param_3,double param_4,uint param_5,void *param_6)

{
  (**(code **)(*(longlong *)param_6 + 0x70))();
  return 0;
}

// _Xlength @ 14d0c4e80

void __cdecl std::vector<DsDevice,std::allocator<DsDevice>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 14d0c4ea0

void __cdecl std::vector<enum_RtAudio::Api,std::allocator<enum_RtAudio::Api>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// abortStream @ 14d0c4ec0

void __thiscall RtApiDs::abortStream(RtApiDs *this)

{
  if (*(int *)((longlong)&this->_padding_ + 4) == -0x32) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               "RtApi:: a stream is not open!",0x1d);
    RtApi::error((RtApi *)this,INVALID_USE);
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               "RtApiDs::abortStream(): the stream is already stopped!",0x36);
    RtApi::error((RtApi *)this,WARNING);
    return;
  }
  *(undefined4 *)this->_padding_ = 2;
                    /* WARNING: Could not recover jumptable at 0x00014d0c4f4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x40))(this);
  return;
}

// byteSwapBuffer @ 14d0c4f60

void __thiscall RtApi::byteSwapBuffer(RtApi *this,char *param_1,uint param_2,ulong param_3)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  if (param_3 == 2) {
    if (param_2 != 0) {
      uVar3 = (ulonglong)param_2;
      do {
        cVar1 = *param_1;
        *param_1 = param_1[1];
        param_1[1] = cVar1;
        param_1 = param_1 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      return;
    }
  }
  else if ((param_3 - 8 & 0xfffffff7) == 0) {
    if (param_2 != 0) {
      uVar3 = (ulonglong)param_2;
      do {
        cVar1 = *param_1;
        *param_1 = param_1[3];
        param_1[3] = cVar1;
        cVar1 = param_1[1];
        param_1[1] = param_1[2];
        param_1[2] = cVar1;
        param_1 = param_1 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  else if (param_3 == 4) {
    if (param_2 != 0) {
      cVar1 = *param_1;
      uVar3 = (ulonglong)param_2;
      do {
        pcVar2 = param_1 + 2;
        *param_1 = *pcVar2;
        *pcVar2 = cVar1;
        uVar3 = uVar3 - 1;
        param_1 = pcVar2;
      } while (uVar3 != 0);
      return;
    }
  }
  else if ((param_3 == 0x20) && (param_2 != 0)) {
    uVar3 = (ulonglong)param_2;
    do {
      cVar1 = *param_1;
      *param_1 = param_1[7];
      param_1[7] = cVar1;
      cVar1 = param_1[1];
      param_1[1] = param_1[6];
      param_1[6] = cVar1;
      cVar1 = param_1[2];
      param_1[2] = param_1[5];
      param_1[5] = cVar1;
      cVar1 = param_1[3];
      param_1[3] = param_1[4];
      param_1[4] = cVar1;
      param_1 = param_1 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    return;
  }
  return;
}

// callbackEvent @ 14d0c5070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall RtApiDs::callbackEvent(RtApiDs *this)

{
  longlong *plVar1;
  int iVar2;
  uint *puVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  basic_ostream<char,std::char_traits<char>_> *pbVar27;
  char *pcVar28;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar29;
  uint uVar30;
  longlong *plVar31;
  undefined8 uVar32;
  uint uVar33;
  ulong uVar34;
  int iVar35;
  uint uVar36;
  ulong64 uVar37;
  longlong lVar38;
  longlong *plVar39;
  longlong *plVar40;
  int iVar41;
  undefined4 uVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auStackY_108 [32];
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  void *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  uint local_98 [2];
  void *local_90;
  undefined1 local_88 [8];
  _Bxty local_80;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_108;
  iVar35 = *(int *)((longlong)&this->_padding_ + 4);
  if ((iVar35 == 0) || (iVar35 == 1)) {
    Sleep(0x32);
    return;
  }
  if (iVar35 == -0x32) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               "RtApiDs::callbackEvent(): the stream is closed ... this shouldn\'t happen!",0x49);
    RtApi::error((RtApi *)this,WARNING);
    return;
  }
  puVar3 = (uint *)this->_padding_;
  if ((int)this->_padding_ + 2U < *puVar3) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
    if ((char)puVar3[1] == '\0') {
      SetEvent(*(HANDLE *)(puVar3 + 0x12));
      return;
    }
    (**(code **)(this->_padding_ + 0x40))(this);
    return;
  }
  iVar41 = 0;
  iVar35 = 0;
  if (*puVar3 == 0) {
    pcVar4 = (code *)this->_padding_;
    uVar42 = (**(code **)(this->_padding_ + 0x50))(this);
    if (((int)this->_padding_ != 1) && ((char)puVar3[10] == '\x01')) {
      *(undefined1 *)(puVar3 + 10) = 0;
    }
    if (((int)this->_padding_ != 0) && (*(char *)((longlong)puVar3 + 0x29) == '\x01')) {
      *(undefined1 *)((longlong)puVar3 + 0x29) = 0;
    }
    iVar23 = (*pcVar4)(this->_padding_,this->_padding_,
                       *(undefined4 *)((longlong)&this->_padding_ + 4),uVar42);
    if (iVar23 == 2) {
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
      *puVar3 = 2;
      (**(code **)(this->_padding_ + 0x48))(this);
      return;
    }
    if (iVar23 == 1) {
      *puVar3 = 1;
      *(undefined1 *)(puVar3 + 1) = 1;
    }
  }
  local_90 = (void *)0x0;
  local_b0 = (void *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  if (*(int *)((longlong)&this->_padding_ + 4) == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    return;
  }
  if (this->buffersRolling == false) {
    iVar23 = (int)this->_padding_;
    if (iVar23 == 2) {
      plVar40 = *(longlong **)(puVar3 + 6);
      plVar39 = *(longlong **)(puVar3 + 8);
      iVar23 = (**(code **)(*plVar40 + 0x20))(plVar40,0,&local_b8);
      if (iVar23 < 0) {
        pbVar27 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                             "RtApiDs::callbackEvent: error (");
        pcVar28 = getErrorString(iVar23);
        pbVar27 = std::operator<<<std::char_traits<char>_>(pbVar27,pcVar28);
        std::operator<<<std::char_traits<char>_>(pbVar27,") getting current write position!");
        pbVar29 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                            ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
                              *)&this->_padding_,
                             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_80);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   &this->_padding_,pbVar29);
        if (local_68 < 0x10) goto LAB_14d0c565c;
        uVar37 = local_68 + 1;
        uVar32 = local_80._Ptr;
        if (0xfff < uVar37) {
          uVar37 = local_68 + 0x28;
          uVar32 = *(char **)(local_80._Ptr + -8);
          if ((char *)0x1f < local_80._Ptr + (-8 - (longlong)*(char **)(local_80._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
      else {
        iVar23 = (**(code **)(*plVar39 + 0x20))(plVar39,0,&local_b4);
        if (iVar23 < 0) {
          pbVar27 = std::operator<<<std::char_traits<char>_>
                              ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                               "RtApiDs::callbackEvent: error (");
          pcVar28 = getErrorString(iVar23);
          pbVar27 = std::operator<<<std::char_traits<char>_>(pbVar27,pcVar28);
          std::operator<<<std::char_traits<char>_>(pbVar27,") getting current read position!");
          pbVar29 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                              ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
                                *)&this->_padding_,
                               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_80);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     &this->_padding_,pbVar29);
          if (local_68 < 0x10) goto LAB_14d0c565c;
          uVar37 = local_68 + 1;
          uVar32 = local_80._Ptr;
          if (0xfff < uVar37) {
            uVar37 = local_68 + 0x28;
            uVar32 = *(char **)(local_80._Ptr + -8);
            if ((char *)0x1f < local_80._Ptr + (-8 - (longlong)*(char **)(local_80._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
        else {
          iVar23 = (**(code **)(*plVar40 + 0x20))(plVar40,0,&local_bc);
          while (-1 < iVar23) {
            iVar23 = (**(code **)(*plVar39 + 0x20))(plVar39,0,&local_c0);
            if (iVar23 < 0) {
              pbVar27 = std::operator<<<std::char_traits<char>_>
                                  ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                                   "RtApiDs::callbackEvent: error (");
              pcVar28 = getErrorString(iVar23);
              pbVar27 = std::operator<<<std::char_traits<char>_>(pbVar27,pcVar28);
              std::operator<<<std::char_traits<char>_>(pbVar27,") getting current read position!");
              pbVar29 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
                        ::str((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
                               *)&this->_padding_,
                              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_80);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &this->_padding_,pbVar29);
              if (local_68 < 0x10) goto LAB_14d0c565c;
              uVar37 = local_68 + 1;
              uVar32 = local_80._Ptr;
              if (0xfff < uVar37) {
                uVar37 = local_68 + 0x28;
                uVar32 = *(char **)(local_80._Ptr + -8);
                if ((char *)0x1f < local_80._Ptr + (-8 - (longlong)*(char **)(local_80._Ptr + -8)))
                {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              goto LAB_14d0c5657;
            }
            if ((local_bc != local_b8) && (local_c0 != local_b4)) {
              uVar33 = puVar3[0xf] + local_bc;
              puVar3[0xb] = uVar33;
              if (puVar3[0xd] <= uVar33) {
                puVar3[0xb] = uVar33 - puVar3[0xd];
              }
              puVar3[0xc] = local_c0;
              goto LAB_14d0c5690;
            }
            Sleep(1);
            iVar23 = (**(code **)(*plVar40 + 0x20))(plVar40,0,&local_bc);
          }
          pbVar27 = std::operator<<<std::char_traits<char>_>
                              ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                               "RtApiDs::callbackEvent: error (");
          pcVar28 = getErrorString(iVar23);
          pbVar27 = std::operator<<<std::char_traits<char>_>(pbVar27,pcVar28);
          std::operator<<<std::char_traits<char>_>(pbVar27,") getting current write position!");
          pbVar29 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                              ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
                                *)&this->_padding_,
                               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_80);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     &this->_padding_,pbVar29);
          if (local_68 < 0x10) goto LAB_14d0c565c;
          uVar37 = local_68 + 1;
          uVar32 = local_80._Ptr;
          if (0xfff < uVar37) {
            uVar37 = local_68 + 0x28;
            uVar32 = *(char **)(local_80._Ptr + -8);
            if ((char *)0x1f < local_80._Ptr + (-8 - (longlong)*(char **)(local_80._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
LAB_14d0c5657:
      ::operator_delete((void *)uVar32,uVar37);
LAB_14d0c565c:
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
      RtApi::error((RtApi *)this,SYSTEM_ERROR);
      return;
    }
    if (iVar23 == 0) {
      iVar23 = (**(code **)(**(longlong **)(puVar3 + 6) + 0x20))
                         (*(longlong **)(puVar3 + 6),local_98,&local_bc);
      if (iVar23 < 0) {
        pbVar27 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                             "RtApiDs::callbackEvent: error (");
        pcVar28 = getErrorString(iVar23);
        pbVar27 = std::operator<<<std::char_traits<char>_>(pbVar27,pcVar28);
        std::operator<<<std::char_traits<char>_>(pbVar27,") getting current write position!");
        pbVar29 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                            ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
                              *)&this->_padding_,
                             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_80);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   &this->_padding_,pbVar29);
        if (local_68 < 0x10) goto LAB_14d0c565c;
        uVar37 = local_68 + 1;
        uVar32 = local_80._Ptr;
        if (0xfff < uVar37) {
          uVar32 = *(undefined8 *)(local_80._Ptr + -8);
          uVar37 = local_68 + 0x28;
          if ((char *)0x1f < local_80._Ptr + (-8 - uVar32)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        goto LAB_14d0c5657;
      }
      uVar33 = puVar3[0xf] + local_bc;
      puVar3[0xb] = uVar33;
      if (puVar3[0xd] <= uVar33) {
        puVar3[0xb] = uVar33 - puVar3[0xd];
      }
    }
LAB_14d0c5690:
    this->buffersRolling = true;
  }
  dVar6 = __real_408f400000000000;
  dVar5 = __real_3ff0000000000000;
  iVar23 = (int)this->_padding_;
  if ((iVar23 == 0) || (iVar23 == 2)) {
    local_a8 = *(longlong **)(puVar3 + 6);
    if (1 < *puVar3) {
      iVar23 = *(int *)((longlong)&this->_padding_ + 4);
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      uVar33 = RtApi::formatBytes((RtApi *)this,*(ulong *)((longlong)&this->_padding_ + 4));
      memset((void *)this->_padding_,0,(longlong)(int)(uVar33 * iVar23 * iVar2));
    }
    if ((char)this->_padding_ == '\0') {
      plVar40 = (longlong *)this->_padding_;
      iVar23 = *(int *)((longlong)&this->_padding_ + 4);
      uVar34 = *(ulong *)((longlong)&this->_padding_ + 4);
      local_a0 = plVar40;
    }
    else {
      plVar40 = (longlong *)this->_padding_;
      local_a0 = plVar40;
      RtApi::convertBuffer
                ((RtApi *)this,(char *)plVar40,(char *)this->_padding_,
                 (ConvertInfo *)&this->_padding_);
      uVar34 = (ulong)this->_padding_;
      iVar23 = *(int *)((longlong)&this->_padding_ + 4);
    }
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    uVar33 = RtApi::formatBytes((RtApi *)this,uVar34);
    plVar39 = local_a8;
    cVar22 = UNK_1508be4ff;
    cVar21 = UNK_1508be4fe;
    cVar20 = UNK_1508be4fd;
    cVar19 = UNK_1508be4fc;
    cVar18 = UNK_1508be4fb;
    cVar17 = UNK_1508be4fa;
    cVar16 = UNK_1508be4f9;
    cVar15 = UNK_1508be4f8;
    cVar14 = UNK_1508be4f7;
    cVar13 = UNK_1508be4f6;
    cVar12 = UNK_1508be4f5;
    cVar11 = UNK_1508be4f4;
    cVar10 = UNK_1508be4f3;
    cVar9 = UNK_1508be4f2;
    cVar8 = UNK_1508be4f1;
    cVar7 = __xmm_80808080808080808080808080808080;
    uVar33 = uVar33 * iVar23 * iVar2;
    if ((int)this->_padding_ == 1) {
      if ((0 < (int)uVar33) && (0x3f < uVar33)) {
        uVar30 = uVar33 & 0x8000003f;
        if ((int)uVar30 < 0) {
          uVar30 = (uVar30 - 1 | 0xffffffc0) + 1;
        }
        plVar31 = plVar40 + 4;
        iVar35 = iVar41;
        do {
          plVar1 = plVar31 + 8;
          iVar35 = iVar35 + 0x40;
          *(char *)(plVar31 + -4) = cVar7 + (char)plVar31[-4];
          *(char *)((longlong)plVar31 + -0x1f) = cVar8 + *(char *)((longlong)plVar31 + -0x1f);
          *(char *)((longlong)plVar31 + -0x1e) = cVar9 + *(char *)((longlong)plVar31 + -0x1e);
          *(char *)((longlong)plVar31 + -0x1d) = cVar10 + *(char *)((longlong)plVar31 + -0x1d);
          *(char *)((longlong)plVar31 + -0x1c) = cVar11 + *(char *)((longlong)plVar31 + -0x1c);
          *(char *)((longlong)plVar31 + -0x1b) = cVar12 + *(char *)((longlong)plVar31 + -0x1b);
          *(char *)((longlong)plVar31 + -0x1a) = cVar13 + *(char *)((longlong)plVar31 + -0x1a);
          *(char *)((longlong)plVar31 + -0x19) = cVar14 + *(char *)((longlong)plVar31 + -0x19);
          *(char *)(plVar31 + -3) = cVar15 + (char)plVar31[-3];
          *(char *)((longlong)plVar31 + -0x17) = cVar16 + *(char *)((longlong)plVar31 + -0x17);
          *(char *)((longlong)plVar31 + -0x16) = cVar17 + *(char *)((longlong)plVar31 + -0x16);
          *(char *)((longlong)plVar31 + -0x15) = cVar18 + *(char *)((longlong)plVar31 + -0x15);
          *(char *)((longlong)plVar31 + -0x14) = cVar19 + *(char *)((longlong)plVar31 + -0x14);
          *(char *)((longlong)plVar31 + -0x13) = cVar20 + *(char *)((longlong)plVar31 + -0x13);
          *(char *)((longlong)plVar31 + -0x12) = cVar21 + *(char *)((longlong)plVar31 + -0x12);
          *(char *)((longlong)plVar31 + -0x11) = cVar22 + *(char *)((longlong)plVar31 + -0x11);
          *(char *)(plVar31 + -2) = cVar7 + (char)plVar31[-2];
          *(char *)((longlong)plVar31 + -0xf) = cVar8 + *(char *)((longlong)plVar31 + -0xf);
          *(char *)((longlong)plVar31 + -0xe) = cVar9 + *(char *)((longlong)plVar31 + -0xe);
          *(char *)((longlong)plVar31 + -0xd) = cVar10 + *(char *)((longlong)plVar31 + -0xd);
          *(char *)((longlong)plVar31 + -0xc) = cVar11 + *(char *)((longlong)plVar31 + -0xc);
          *(char *)((longlong)plVar31 + -0xb) = cVar12 + *(char *)((longlong)plVar31 + -0xb);
          *(char *)((longlong)plVar31 + -10) = cVar13 + *(char *)((longlong)plVar31 + -10);
          *(char *)((longlong)plVar31 + -9) = cVar14 + *(char *)((longlong)plVar31 + -9);
          *(char *)(plVar31 + -1) = cVar15 + (char)plVar31[-1];
          *(char *)((longlong)plVar31 + -7) = cVar16 + *(char *)((longlong)plVar31 + -7);
          *(char *)((longlong)plVar31 + -6) = cVar17 + *(char *)((longlong)plVar31 + -6);
          *(char *)((longlong)plVar31 + -5) = cVar18 + *(char *)((longlong)plVar31 + -5);
          *(char *)((longlong)plVar31 + -4) = cVar19 + *(char *)((longlong)plVar31 + -4);
          *(char *)((longlong)plVar31 + -3) = cVar20 + *(char *)((longlong)plVar31 + -3);
          *(char *)((longlong)plVar31 + -2) = cVar21 + *(char *)((longlong)plVar31 + -2);
          *(char *)((longlong)plVar31 + -1) = cVar22 + *(char *)((longlong)plVar31 + -1);
          *(char *)plVar31 = cVar7 + (char)*plVar31;
          *(char *)((longlong)plVar31 + 1) = cVar8 + *(char *)((longlong)plVar31 + 1);
          *(char *)((longlong)plVar31 + 2) = cVar9 + *(char *)((longlong)plVar31 + 2);
          *(char *)((longlong)plVar31 + 3) = cVar10 + *(char *)((longlong)plVar31 + 3);
          *(char *)((longlong)plVar31 + 4) = cVar11 + *(char *)((longlong)plVar31 + 4);
          *(char *)((longlong)plVar31 + 5) = cVar12 + *(char *)((longlong)plVar31 + 5);
          *(char *)((longlong)plVar31 + 6) = cVar13 + *(char *)((longlong)plVar31 + 6);
          *(char *)((longlong)plVar31 + 7) = cVar14 + *(char *)((longlong)plVar31 + 7);
          *(char *)(plVar31 + 1) = cVar15 + (char)plVar31[1];
          *(char *)((longlong)plVar31 + 9) = cVar16 + *(char *)((longlong)plVar31 + 9);
          *(char *)((longlong)plVar31 + 10) = cVar17 + *(char *)((longlong)plVar31 + 10);
          *(char *)((longlong)plVar31 + 0xb) = cVar18 + *(char *)((longlong)plVar31 + 0xb);
          *(char *)((longlong)plVar31 + 0xc) = cVar19 + *(char *)((longlong)plVar31 + 0xc);
          *(char *)((longlong)plVar31 + 0xd) = cVar20 + *(char *)((longlong)plVar31 + 0xd);
          *(char *)((longlong)plVar31 + 0xe) = cVar21 + *(char *)((longlong)plVar31 + 0xe);
          *(char *)((longlong)plVar31 + 0xf) = cVar22 + *(char *)((longlong)plVar31 + 0xf);
          auVar44[0] = cVar7 + (char)plVar31[2];
          auVar44[1] = cVar8 + *(char *)((longlong)plVar31 + 0x11);
          auVar44[2] = cVar9 + *(char *)((longlong)plVar31 + 0x12);
          auVar44[3] = cVar10 + *(char *)((longlong)plVar31 + 0x13);
          auVar44[4] = cVar11 + *(char *)((longlong)plVar31 + 0x14);
          auVar44[5] = cVar12 + *(char *)((longlong)plVar31 + 0x15);
          auVar44[6] = cVar13 + *(char *)((longlong)plVar31 + 0x16);
          auVar44[7] = cVar14 + *(char *)((longlong)plVar31 + 0x17);
          auVar44[8] = cVar15 + (char)plVar31[3];
          auVar44[9] = cVar16 + *(char *)((longlong)plVar31 + 0x19);
          auVar44[10] = cVar17 + *(char *)((longlong)plVar31 + 0x1a);
          auVar44[0xb] = cVar18 + *(char *)((longlong)plVar31 + 0x1b);
          auVar44[0xc] = cVar19 + *(char *)((longlong)plVar31 + 0x1c);
          auVar44[0xd] = cVar20 + *(char *)((longlong)plVar31 + 0x1d);
          auVar44[0xe] = cVar21 + *(char *)((longlong)plVar31 + 0x1e);
          auVar44[0xf] = cVar22 + *(char *)((longlong)plVar31 + 0x1f);
          *(undefined1 (*) [16])(plVar31 + 2) = auVar44;
          plVar31 = plVar1;
        } while ((longlong)((-0x20 - (longlong)plVar40) + (longlong)plVar1) <
                 (longlong)(int)(uVar33 - uVar30));
      }
      lVar38 = (longlong)iVar35;
      if (lVar38 < (int)uVar33) {
        pcVar28 = (char *)(lVar38 + (longlong)plVar40);
        lVar38 = (int)uVar33 - lVar38;
        do {
          *pcVar28 = *pcVar28 + -0x80;
          pcVar28 = pcVar28 + 1;
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
      }
    }
    uVar30 = puVar3[0xd];
    uVar26 = puVar3[0xb];
    local_b8 = (**(code **)(*local_a8 + 0x20))(local_a8,local_98,&local_bc);
    while (-1 < (int)local_b8) {
      uVar24 = uVar26 + uVar33;
      uVar25 = puVar3[0xf] + local_bc;
      uVar36 = uVar25 - uVar30;
      if (uVar25 <= uVar30) {
        uVar36 = uVar25;
      }
      local_b4 = uVar36 + uVar30;
      if (uVar26 <= uVar36) {
        local_b4 = uVar36;
      }
      if (uVar24 <= local_b4) {
        uVar25 = uVar26 - uVar30;
        if (uVar26 <= uVar30) {
          uVar25 = uVar26;
        }
        uVar36 = local_bc;
        if (local_bc < local_98[0]) {
          uVar36 = local_bc + uVar30;
        }
        if (((uVar25 < local_98[0]) && (uVar25 = uVar25 + uVar30, uVar25 < local_98[0])) ||
           (uVar36 <= uVar25)) {
          uVar25 = uVar24 - uVar30;
          if (uVar24 <= uVar30) {
            uVar25 = uVar24;
          }
          uVar24 = local_bc;
          if (local_bc < local_98[0]) {
            uVar24 = local_bc + uVar30;
          }
          if (((local_98[0] <= uVar25) || (uVar25 = uVar25 + uVar30, local_98[0] <= uVar25)) &&
             (uVar25 < uVar24)) goto LAB_14d0c5a10;
        }
        else {
LAB_14d0c5a10:
          *(undefined1 *)(puVar3 + 10) = 1;
          local_bc = local_bc + (puVar3[0xf] - uVar33);
          uVar26 = local_bc - uVar30;
          if (local_bc < uVar30) {
            uVar26 = local_bc;
          }
          puVar3[0xb] = uVar26;
        }
        iVar35 = (**(code **)(*plVar39 + 0x58))(plVar39,uVar26,uVar33);
        plVar40 = local_a0;
        if (iVar35 < 0) {
          pbVar27 = std::operator<<<std::char_traits<char>_>
                              ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                               "RtApiDs::callbackEvent: error (");
          pcVar28 = getErrorString(iVar35);
          pbVar27 = std::operator<<<std::char_traits<char>_>(pbVar27,pcVar28);
          std::operator<<<std::char_traits<char>_>(pbVar27,") locking buffer during playback!");
          pbVar29 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                              ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
                                *)&this->_padding_,
                               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_80);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     &this->_padding_,pbVar29);
          if (local_68 < 0x10) goto LAB_14d0c6184;
          uVar37 = local_68 + 1;
          uVar32 = local_80._Ptr;
          if (0xfff < uVar37) {
            uVar37 = local_68 + 0x28;
            uVar32 = *(char **)(local_80._Ptr + -8);
            if ((char *)0x1f < local_80._Ptr + (-8 - (longlong)*(char **)(local_80._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          goto LAB_14d0c617f;
        }
        memcpy(local_90,local_a0,0);
        if (local_b0 != (void *)0x0) {
          memcpy(local_b0,plVar40,0);
        }
        (**(code **)(*local_a8 + 0x98))(local_a8,local_90,0);
        puVar3[0xb] = uVar26 % uVar30;
        goto LAB_14d0c5b75;
      }
      lVar38 = this->_padding_;
      uVar24 = RtApi::formatBytes((RtApi *)this,(ulong)this->_padding_);
      dVar43 = ((double)((uVar26 + uVar33) - local_b4) * dVar6) /
               (double)(uVar24 * (int)lVar38 * *(int *)((longlong)&this->_padding_ + 4));
      if (dVar43 <= dVar5) {
        dVar43 = dVar5;
      }
      Sleep((DWORD)(longlong)dVar43);
      plVar39 = local_a8;
      local_b8 = (**(code **)(*local_a8 + 0x20))(local_a8,local_98,&local_bc);
    }
    pbVar27 = std::operator<<<std::char_traits<char>_>
                        ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                         "RtApiDs::callbackEvent: error (");
    pcVar28 = getErrorString(local_b8);
    pbVar27 = std::operator<<<std::char_traits<char>_>(pbVar27,pcVar28);
    std::operator<<<std::char_traits<char>_>(pbVar27,") getting current write position!");
    pbVar29 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                        ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                         &this->_padding_,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               pbVar29);
    if (local_68 < 0x10) goto LAB_14d0c6184;
    uVar37 = local_68 + 1;
    uVar32 = local_80._Ptr;
    if (0xfff < uVar37) {
      uVar37 = local_68 + 0x28;
      uVar32 = *(char **)(local_80._Ptr + -8);
      if ((char *)0x1f < local_80._Ptr + (-8 - (longlong)*(char **)(local_80._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
LAB_14d0c5b75:
    if (*puVar3 != 0) {
      *puVar3 = *puVar3 + 1;
LAB_14d0c60e3:
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
      this->_padding_ =
           (longlong)
           ((double)*(uint *)((longlong)&this->_padding_ + 4) / (double)(uint)this->_padding_ +
           (double)this->_padding_);
      return;
    }
    iVar35 = (int)this->_padding_;
    if ((iVar35 != 1) && (iVar35 != 2)) goto LAB_14d0c60e3;
    if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
      local_a8 = (longlong *)this->_padding_;
      iVar35 = (int)this->_padding_;
      uVar34 = *(ulong *)((longlong)&this->_padding_ + 4);
    }
    else {
      local_a8 = (longlong *)this->_padding_;
      iVar35 = (int)this->_padding_;
      uVar34 = *(ulong *)((longlong)&this->_padding_ + 4);
    }
    iVar23 = *(int *)((longlong)&this->_padding_ + 4);
    uVar26 = RtApi::formatBytes((RtApi *)this,uVar34);
    local_a0 = *(longlong **)(puVar3 + 8);
    uVar33 = puVar3[0xc];
    uVar26 = uVar26 * iVar35 * iVar23;
    uVar30 = puVar3[0xe];
    local_b8 = uVar30;
    iVar35 = (**(code **)(*local_a0 + 0x20))(local_a0,local_88,&local_c0);
    if (iVar35 < 0) {
      pbVar27 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::callbackEvent: error (");
      pcVar28 = getErrorString(iVar35);
      pbVar27 = std::operator<<<std::char_traits<char>_>(pbVar27,pcVar28);
      std::operator<<<std::char_traits<char>_>(pbVar27,") getting current read position!");
      pbVar29 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_80);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar29);
      if (local_68 < 0x10) goto LAB_14d0c6184;
      uVar37 = local_68 + 1;
      uVar32 = local_80._Ptr;
      if (0xfff < uVar37) {
        uVar37 = local_68 + 0x28;
        uVar32 = *(char **)(local_80._Ptr + -8);
        if ((char *)0x1f < local_80._Ptr + (-8 - (longlong)*(char **)(local_80._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
    else {
      if (local_c0 < uVar33) {
        local_c0 = local_c0 + uVar30;
      }
      uVar24 = uVar33 + uVar26;
      if ((int)this->_padding_ == 2) {
        if (local_c0 < uVar24) {
          if (this->duplexPrerollBytes < 1) {
            *(undefined1 *)((longlong)puVar3 + 0x29) = 1;
            uVar25 = (local_c0 - (uVar24 - local_c0)) - uVar26;
            if ((int)(uVar26 * 2) <= (int)(uVar24 - local_c0)) {
              uVar25 = local_c0 + uVar26 * -2;
            }
            uVar33 = uVar30 + uVar25;
            if (-1 < (int)uVar25) {
              uVar33 = uVar25;
            }
          }
          else {
            for (uVar33 = local_c0 - uVar26; (int)uVar33 < 0; uVar33 = uVar33 + uVar30) {
            }
          }
        }
      }
      else {
        while ((local_c0 < uVar24 && ((char)this->_padding_ != '\0'))) {
          lVar38 = this->_padding_;
          uVar30 = uVar24 - local_c0;
          uVar25 = RtApi::formatBytes((RtApi *)this,*(ulong *)((longlong)&this->_padding_ + 4));
          dVar43 = ((double)uVar30 * dVar6) / (double)(uVar25 * (int)lVar38 * (int)this->_padding_);
          if (dVar43 <= dVar5) {
            dVar43 = dVar5;
          }
          Sleep((DWORD)(longlong)dVar43);
          local_b4 = (**(code **)(*local_a0 + 0x20))(local_a0,local_88,&local_c0);
          if ((int)local_b4 < 0) {
            pbVar27 = std::operator<<<std::char_traits<char>_>
                                ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                                 "RtApiDs::callbackEvent: error (");
            pcVar28 = getErrorString(local_b4);
            pbVar27 = std::operator<<<std::char_traits<char>_>(pbVar27,pcVar28);
            std::operator<<<std::char_traits<char>_>(pbVar27,") getting current read position!");
            pbVar29 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
                      str((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                          &this->_padding_,
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_80);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &this->_padding_,pbVar29);
            if (local_68 < 0x10) goto LAB_14d0c6184;
            uVar37 = local_68 + 1;
            uVar32 = local_80._Ptr;
            if (0xfff < uVar37) {
              uVar32 = *(undefined8 *)(local_80._Ptr + -8);
              uVar37 = local_68 + 0x28;
              if ((char *)0x1f < local_80._Ptr + (-8 - uVar32)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            goto LAB_14d0c617f;
          }
          uVar30 = local_b8;
          if (local_c0 < uVar33) {
            local_c0 = local_c0 + local_b8;
          }
        }
      }
      iVar35 = (**(code **)(*local_a0 + 0x40))(local_a0,uVar33,uVar26);
      plVar40 = local_a8;
      if (-1 < iVar35) {
        if (this->duplexPrerollBytes < 1) {
          memcpy(local_a8,local_90,0);
          if (local_b0 != (void *)0x0) {
            memcpy(plVar40,local_b0,0);
          }
        }
        else {
          memset(local_a8,0,0);
          if (local_b0 != (void *)0x0) {
            memset(plVar40,0,0);
          }
          this->duplexPrerollBytes = this->duplexPrerollBytes;
        }
        (**(code **)(*local_a0 + 0x58))(local_a0,local_90,0,local_b0);
        puVar3[0xc] = uVar33 % uVar30;
        cVar22 = UNK_1508be4ff;
        cVar21 = UNK_1508be4fe;
        cVar20 = UNK_1508be4fd;
        cVar19 = UNK_1508be4fc;
        cVar18 = UNK_1508be4fb;
        cVar17 = UNK_1508be4fa;
        cVar16 = UNK_1508be4f9;
        cVar15 = UNK_1508be4f8;
        cVar14 = UNK_1508be4f7;
        cVar13 = UNK_1508be4f6;
        cVar12 = UNK_1508be4f5;
        cVar11 = UNK_1508be4f4;
        cVar10 = UNK_1508be4f3;
        cVar9 = UNK_1508be4f2;
        cVar8 = UNK_1508be4f1;
        cVar7 = __xmm_80808080808080808080808080808080;
        if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
          plVar39 = plVar40;
          if ((0 < (int)uVar26) && (0x3f < uVar26)) {
            uVar33 = uVar26 & 0x8000003f;
            if ((int)uVar33 < 0) {
              uVar33 = (uVar33 - 1 | 0xffffffc0) + 1;
            }
            plVar31 = plVar40 + 4;
            do {
              plVar1 = plVar31 + 8;
              iVar41 = iVar41 + 0x40;
              *(char *)(plVar31 + -4) = cVar7 + (char)plVar31[-4];
              *(char *)((longlong)plVar31 + -0x1f) = cVar8 + *(char *)((longlong)plVar31 + -0x1f);
              *(char *)((longlong)plVar31 + -0x1e) = cVar9 + *(char *)((longlong)plVar31 + -0x1e);
              *(char *)((longlong)plVar31 + -0x1d) = cVar10 + *(char *)((longlong)plVar31 + -0x1d);
              *(char *)((longlong)plVar31 + -0x1c) = cVar11 + *(char *)((longlong)plVar31 + -0x1c);
              *(char *)((longlong)plVar31 + -0x1b) = cVar12 + *(char *)((longlong)plVar31 + -0x1b);
              *(char *)((longlong)plVar31 + -0x1a) = cVar13 + *(char *)((longlong)plVar31 + -0x1a);
              *(char *)((longlong)plVar31 + -0x19) = cVar14 + *(char *)((longlong)plVar31 + -0x19);
              *(char *)(plVar31 + -3) = cVar15 + (char)plVar31[-3];
              *(char *)((longlong)plVar31 + -0x17) = cVar16 + *(char *)((longlong)plVar31 + -0x17);
              *(char *)((longlong)plVar31 + -0x16) = cVar17 + *(char *)((longlong)plVar31 + -0x16);
              *(char *)((longlong)plVar31 + -0x15) = cVar18 + *(char *)((longlong)plVar31 + -0x15);
              *(char *)((longlong)plVar31 + -0x14) = cVar19 + *(char *)((longlong)plVar31 + -0x14);
              *(char *)((longlong)plVar31 + -0x13) = cVar20 + *(char *)((longlong)plVar31 + -0x13);
              *(char *)((longlong)plVar31 + -0x12) = cVar21 + *(char *)((longlong)plVar31 + -0x12);
              *(char *)((longlong)plVar31 + -0x11) = cVar22 + *(char *)((longlong)plVar31 + -0x11);
              *(char *)(plVar31 + -2) = cVar7 + (char)plVar31[-2];
              *(char *)((longlong)plVar31 + -0xf) = cVar8 + *(char *)((longlong)plVar31 + -0xf);
              *(char *)((longlong)plVar31 + -0xe) = cVar9 + *(char *)((longlong)plVar31 + -0xe);
              *(char *)((longlong)plVar31 + -0xd) = cVar10 + *(char *)((longlong)plVar31 + -0xd);
              *(char *)((longlong)plVar31 + -0xc) = cVar11 + *(char *)((longlong)plVar31 + -0xc);
              *(char *)((longlong)plVar31 + -0xb) = cVar12 + *(char *)((longlong)plVar31 + -0xb);
              *(char *)((longlong)plVar31 + -10) = cVar13 + *(char *)((longlong)plVar31 + -10);
              *(char *)((longlong)plVar31 + -9) = cVar14 + *(char *)((longlong)plVar31 + -9);
              *(char *)(plVar31 + -1) = cVar15 + (char)plVar31[-1];
              *(char *)((longlong)plVar31 + -7) = cVar16 + *(char *)((longlong)plVar31 + -7);
              *(char *)((longlong)plVar31 + -6) = cVar17 + *(char *)((longlong)plVar31 + -6);
              *(char *)((longlong)plVar31 + -5) = cVar18 + *(char *)((longlong)plVar31 + -5);
              *(char *)((longlong)plVar31 + -4) = cVar19 + *(char *)((longlong)plVar31 + -4);
              *(char *)((longlong)plVar31 + -3) = cVar20 + *(char *)((longlong)plVar31 + -3);
              *(char *)((longlong)plVar31 + -2) = cVar21 + *(char *)((longlong)plVar31 + -2);
              *(char *)((longlong)plVar31 + -1) = cVar22 + *(char *)((longlong)plVar31 + -1);
              *(char *)plVar31 = cVar7 + (char)*plVar31;
              *(char *)((longlong)plVar31 + 1) = cVar8 + *(char *)((longlong)plVar31 + 1);
              *(char *)((longlong)plVar31 + 2) = cVar9 + *(char *)((longlong)plVar31 + 2);
              *(char *)((longlong)plVar31 + 3) = cVar10 + *(char *)((longlong)plVar31 + 3);
              *(char *)((longlong)plVar31 + 4) = cVar11 + *(char *)((longlong)plVar31 + 4);
              *(char *)((longlong)plVar31 + 5) = cVar12 + *(char *)((longlong)plVar31 + 5);
              *(char *)((longlong)plVar31 + 6) = cVar13 + *(char *)((longlong)plVar31 + 6);
              *(char *)((longlong)plVar31 + 7) = cVar14 + *(char *)((longlong)plVar31 + 7);
              *(char *)(plVar31 + 1) = cVar15 + (char)plVar31[1];
              *(char *)((longlong)plVar31 + 9) = cVar16 + *(char *)((longlong)plVar31 + 9);
              *(char *)((longlong)plVar31 + 10) = cVar17 + *(char *)((longlong)plVar31 + 10);
              *(char *)((longlong)plVar31 + 0xb) = cVar18 + *(char *)((longlong)plVar31 + 0xb);
              *(char *)((longlong)plVar31 + 0xc) = cVar19 + *(char *)((longlong)plVar31 + 0xc);
              *(char *)((longlong)plVar31 + 0xd) = cVar20 + *(char *)((longlong)plVar31 + 0xd);
              *(char *)((longlong)plVar31 + 0xe) = cVar21 + *(char *)((longlong)plVar31 + 0xe);
              *(char *)((longlong)plVar31 + 0xf) = cVar22 + *(char *)((longlong)plVar31 + 0xf);
              *(char *)(plVar31 + 2) = cVar7 + (char)plVar31[2];
              *(char *)((longlong)plVar31 + 0x11) = cVar8 + *(char *)((longlong)plVar31 + 0x11);
              *(char *)((longlong)plVar31 + 0x12) = cVar9 + *(char *)((longlong)plVar31 + 0x12);
              *(char *)((longlong)plVar31 + 0x13) = cVar10 + *(char *)((longlong)plVar31 + 0x13);
              *(char *)((longlong)plVar31 + 0x14) = cVar11 + *(char *)((longlong)plVar31 + 0x14);
              *(char *)((longlong)plVar31 + 0x15) = cVar12 + *(char *)((longlong)plVar31 + 0x15);
              *(char *)((longlong)plVar31 + 0x16) = cVar13 + *(char *)((longlong)plVar31 + 0x16);
              *(char *)((longlong)plVar31 + 0x17) = cVar14 + *(char *)((longlong)plVar31 + 0x17);
              *(char *)(plVar31 + 3) = cVar15 + (char)plVar31[3];
              *(char *)((longlong)plVar31 + 0x19) = cVar16 + *(char *)((longlong)plVar31 + 0x19);
              *(char *)((longlong)plVar31 + 0x1a) = cVar17 + *(char *)((longlong)plVar31 + 0x1a);
              *(char *)((longlong)plVar31 + 0x1b) = cVar18 + *(char *)((longlong)plVar31 + 0x1b);
              *(char *)((longlong)plVar31 + 0x1c) = cVar19 + *(char *)((longlong)plVar31 + 0x1c);
              *(char *)((longlong)plVar31 + 0x1d) = cVar20 + *(char *)((longlong)plVar31 + 0x1d);
              *(char *)((longlong)plVar31 + 0x1e) = cVar21 + *(char *)((longlong)plVar31 + 0x1e);
              *(char *)((longlong)plVar31 + 0x1f) = cVar22 + *(char *)((longlong)plVar31 + 0x1f);
              plVar31 = plVar1;
              plVar39 = local_a8;
            } while ((longlong)plVar1 + (-0x20 - (longlong)plVar40) <
                     (longlong)(int)(uVar26 - uVar33));
          }
          lVar38 = (longlong)iVar41;
          if (lVar38 < (int)uVar26) {
            pcVar28 = (char *)(lVar38 + (longlong)plVar39);
            lVar38 = (int)uVar26 - lVar38;
            do {
              *pcVar28 = *pcVar28 + -0x80;
              pcVar28 = pcVar28 + 1;
              lVar38 = lVar38 + -1;
            } while (lVar38 != 0);
          }
        }
        if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
          RtApi::convertBuffer
                    ((RtApi *)this,(char *)this->_padding_,(char *)this->_padding_,
                     (ConvertInfo *)&this->_padding_);
        }
        goto LAB_14d0c60e3;
      }
      pbVar27 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::callbackEvent: error (");
      pcVar28 = getErrorString(iVar35);
      pbVar27 = std::operator<<<std::char_traits<char>_>(pbVar27,pcVar28);
      std::operator<<<std::char_traits<char>_>(pbVar27,") locking capture buffer!");
      pbVar29 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_80);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar29);
      if (local_68 < 0x10) goto LAB_14d0c6184;
      uVar37 = local_68 + 1;
      uVar32 = local_80._Ptr;
      if (0xfff < uVar37) {
        uVar37 = local_68 + 0x28;
        uVar32 = *(char **)(local_80._Ptr + -8);
        if ((char *)0x1f < local_80._Ptr + (-8 - (longlong)*(char **)(local_80._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
  }
LAB_14d0c617f:
  ::operator_delete((void *)uVar32,uVar37);
LAB_14d0c6184:
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  RtApi::error((RtApi *)this,SYSTEM_ERROR);
  return;
}

// callbackHandler @ 14d0c61c0

uint __cdecl callbackHandler(void *param_1)

{
  char cVar1;
  RtApiDs *this;
  
  this = *(RtApiDs **)param_1;
  cVar1 = *(char *)((longlong)param_1 + 0x30);
  while (cVar1 == '\x01') {
    RtApiDs::callbackEvent(this);
    cVar1 = *(char *)((longlong)param_1 + 0x30);
  }
  _endthreadex(0);
  return 0;
}

// clearStreamInfo @ 14d0c6200

/* WARNING: Type propagation algorithm not settling */

void __thiscall RtApi::clearStreamInfo(RtApi *this)

{
  int *piVar1;
  
  (this->stream_).mode = UNINITIALIZED;
  (this->stream_).sampleRate = 0;
  (this->stream_).bufferSize = 0;
  (this->stream_).nBuffers = 0;
  (this->stream_).nUserChannels[0] = 0;
  (this->stream_).userFormat = 0;
  (this->stream_).deviceFormat[0] = 0;
  (this->stream_).streamTime = 0.0;
  (this->stream_).apiHandle = (void *)0x0;
  (this->stream_).deviceBuffer = (char *)0x0;
  (this->stream_).callbackInfo.callback = (void *)0x0;
  (this->stream_).callbackInfo.userData = (void *)0x0;
  (this->stream_).callbackInfo.isRunning = false;
  (this->stream_).callbackInfo.errorCallback = (void *)0x0;
  (this->stream_).state = STREAM_CLOSED;
  (this->stream_).userInterleaved = true;
  (this->stream_).deviceInterleaved[0] = true;
  (this->stream_).device[0] = 0x2b67;
  (this->stream_).doConvertBuffer[0] = false;
  (this->stream_).doByteSwap[0] = false;
  (this->stream_).nDeviceChannels[0] = 0;
  (this->stream_).channelOffset[0] = 0;
  (this->stream_).latency[0] = 0;
  (this->stream_).userBuffer[0] = (char *)0x0;
  (this->stream_).convertInfo[0].channels = 0;
  (this->stream_).convertInfo[0].inJump = 0;
  (this->stream_).convertInfo[0].outJump = 0;
  (this->stream_).convertInfo[0].inFormat = 0;
  (this->stream_).convertInfo[0].outFormat = 0;
  piVar1 = (this->stream_).convertInfo[0].inOffset._Mypair._Myval2._Myfirst;
  if (piVar1 != (this->stream_).convertInfo[0].inOffset._Mypair._Myval2._Mylast) {
    (this->stream_).convertInfo[0].inOffset._Mypair._Myval2._Mylast = piVar1;
  }
  piVar1 = (this->stream_).convertInfo[0].outOffset._Mypair._Myval2._Myfirst;
  if (piVar1 != (this->stream_).convertInfo[0].outOffset._Mypair._Myval2._Mylast) {
    (this->stream_).convertInfo[0].outOffset._Mypair._Myval2._Mylast = piVar1;
  }
  (this->stream_).device[1] = 0x2b67;
  (this->stream_).doConvertBuffer[1] = false;
  (this->stream_).deviceInterleaved[1] = true;
  (this->stream_).doByteSwap[1] = false;
  (this->stream_).nUserChannels[1] = 0;
  (this->stream_).nDeviceChannels[1] = 0;
  (this->stream_).channelOffset[1] = 0;
  (this->stream_).deviceFormat[1] = 0;
  (this->stream_).latency[1] = 0;
  (this->stream_).userBuffer[1] = (char *)0x0;
  (this->stream_).convertInfo[1].channels = 0;
  (this->stream_).convertInfo[1].inJump = 0;
  (this->stream_).convertInfo[1].outJump = 0;
  (this->stream_).convertInfo[1].inFormat = 0;
  (this->stream_).convertInfo[1].outFormat = 0;
  piVar1 = (this->stream_).convertInfo[1].inOffset._Mypair._Myval2._Myfirst;
  if (piVar1 != (this->stream_).convertInfo[1].inOffset._Mypair._Myval2._Mylast) {
    (this->stream_).convertInfo[1].inOffset._Mypair._Myval2._Mylast = piVar1;
  }
  piVar1 = (this->stream_).convertInfo[1].outOffset._Mypair._Myval2._Myfirst;
  if (piVar1 != (this->stream_).convertInfo[1].outOffset._Mypair._Myval2._Mylast) {
    (this->stream_).convertInfo[1].outOffset._Mypair._Myval2._Mylast = piVar1;
  }
  return;
}

// closeStream @ 14d0c6360

void __thiscall RtApi::closeStream(RtApi *this)

{
  return;
}

// closeStream @ 14d0c6370

void __thiscall RtApiDs::closeStream(RtApiDs *this)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(int *)((longlong)&this->_padding_ + 4) == -0x32) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               "RtApiDs::closeStream(): no open stream to close!",0x30);
    RtApi::error((RtApi *)this,WARNING);
    return;
  }
  *(undefined1 *)&this->_padding_ = 0;
  WaitForSingleObject((HANDLE)this->_padding_,0xffffffff);
  CloseHandle((HANDLE)this->_padding_);
  pvVar1 = (void *)this->_padding_;
  if (pvVar1 != (void *)0x0) {
    plVar2 = *(longlong **)((longlong)pvVar1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)pvVar1 + 8);
      (**(code **)(*plVar2 + 0x90))(plVar2);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    plVar2 = *(longlong **)((longlong)pvVar1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)pvVar1 + 0x10);
      (**(code **)(*plVar2 + 0x50))(plVar2);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    CloseHandle(*(HANDLE *)((longlong)pvVar1 + 0x48));
    ::operator_delete(pvVar1,0x50);
    this->_padding_ = 0;
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    free((void *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    free((void *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    free((void *)this->_padding_);
    this->_padding_ = 0;
  }
  *(undefined4 *)&this->_padding_ = 0xffffffb5;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffce;
  return;
}

// convertBuffer @ 14d0c64f0

void __thiscall RtApi::convertBuffer(RtApi *this,char *param_1,char *param_2,ConvertInfo *param_3)

{
  char cVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  int *piVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint uVar21;
  int *piVar22;
  int *piVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  char *pcVar31;
  
  if (((param_1 == (this->stream_).deviceBuffer) && ((this->stream_).mode == DUPLEX)) &&
     ((this->stream_).nDeviceChannels[0] < (this->stream_).nDeviceChannels[1])) {
    iVar28 = param_3->outJump;
    uVar30 = (this->stream_).bufferSize;
    uVar21 = formatBytes(this,param_3->outFormat);
    memset(param_1,0,(ulonglong)(uVar21 * iVar28 * uVar30));
  }
  dVar20 = __real_41dfffffffe00000;
  dVar19 = __real_415fffffe0000000;
  dVar18 = __real_40dfffe000000000;
  dVar17 = __real_3f00001000100010;
  dVar16 = __real_3e80000010000010;
  dVar15 = __real_3e00000000100000;
  fVar14 = __real_38000080;
  fVar13 = __real_34000001;
  dVar9 = __real_3f80101010101010;
  fVar12 = __real_3c008081;
  fVar11 = __real_46ffff00;
  fVar10 = __real_30000000;
  fVar8 = __real_4affffff;
  fVar7 = __real_3f000000;
  dVar6 = __real_3fe0000000000000;
  uVar3 = param_3->outFormat;
  if (uVar3 == 0x20) {
    uVar3 = param_3->inFormat;
    if (uVar3 == 1) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            piVar22 = (param_3->outOffset)._Mypair._Myval2._Myfirst;
            lVar29 = (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst - (longlong)piVar22;
            do {
              iVar26 = iVar26 + 1;
              *(double *)(param_1 + (longlong)*piVar22 * 8) =
                   (double)(int)param_2[*(int *)((longlong)piVar22 + lVar29)];
              *(double *)(param_1 + (longlong)*piVar22 * 8) =
                   *(double *)(param_1 + (longlong)*piVar22 * 8) + dVar6;
              iVar28 = *piVar22;
              piVar22 = piVar22 + 1;
              *(double *)(param_1 + (longlong)iVar28 * 8) =
                   *(double *)(param_1 + (longlong)iVar28 * 8) * dVar9;
              iVar28 = param_3->channels;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + param_3->inJump;
          param_1 = param_1 + (longlong)param_3->outJump * 8;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 2) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            piVar22 = (param_3->outOffset)._Mypair._Myval2._Myfirst;
            lVar29 = (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst - (longlong)piVar22;
            do {
              iVar26 = iVar26 + 1;
              *(double *)(param_1 + (longlong)*piVar22 * 8) =
                   (double)(int)*(short *)(param_2 +
                                          (longlong)*(int *)((longlong)piVar22 + lVar29) * 2);
              *(double *)(param_1 + (longlong)*piVar22 * 8) =
                   *(double *)(param_1 + (longlong)*piVar22 * 8) + dVar6;
              iVar28 = *piVar22;
              piVar22 = piVar22 + 1;
              *(double *)(param_1 + (longlong)iVar28 * 8) =
                   *(double *)(param_1 + (longlong)iVar28 * 8) * dVar17;
              iVar28 = param_3->channels;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 2;
          param_1 = param_1 + (longlong)param_3->outJump * 8;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 4) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            piVar22 = (param_3->outOffset)._Mypair._Myval2._Myfirst;
            lVar29 = (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst - (longlong)piVar22;
            do {
              lVar25 = (longlong)*(int *)(lVar29 + (longlong)piVar22);
              uVar27 = (uint)CONCAT21(CONCAT11(param_2[lVar25 * 3 + 2],param_2[lVar25 * 3 + 1]),
                                      param_2[lVar25 * 3]);
              uVar21 = uVar27 | 0xff000000;
              if (-1 < param_2[lVar25 * 3 + 2]) {
                uVar21 = uVar27;
              }
              iVar26 = iVar26 + 1;
              *(double *)(param_1 + (longlong)*piVar22 * 8) = (double)(int)uVar21;
              *(double *)(param_1 + (longlong)*piVar22 * 8) =
                   *(double *)(param_1 + (longlong)*piVar22 * 8) + dVar6;
              iVar28 = *piVar22;
              piVar22 = piVar22 + 1;
              *(double *)(param_1 + (longlong)iVar28 * 8) =
                   *(double *)(param_1 + (longlong)iVar28 * 8) * dVar16;
              iVar28 = param_3->channels;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 3;
          param_1 = param_1 + (longlong)param_3->outJump * 8;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 8) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            piVar22 = (param_3->outOffset)._Mypair._Myval2._Myfirst;
            lVar29 = (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst - (longlong)piVar22;
            do {
              iVar26 = iVar26 + 1;
              *(double *)(param_1 + (longlong)*piVar22 * 8) =
                   (double)*(int *)(param_2 + (longlong)*(int *)(lVar29 + (longlong)piVar22) * 4);
              *(double *)(param_1 + (longlong)*piVar22 * 8) =
                   *(double *)(param_1 + (longlong)*piVar22 * 8) + dVar6;
              iVar28 = *piVar22;
              piVar22 = piVar22 + 1;
              *(double *)(param_1 + (longlong)iVar28 * 8) =
                   *(double *)(param_1 + (longlong)iVar28 * 8) * dVar15;
              iVar28 = param_3->channels;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 4;
          param_1 = param_1 + (longlong)param_3->outJump * 8;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 0x10) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            piVar22 = (param_3->outOffset)._Mypair._Myval2._Myfirst;
            piVar5 = (param_3->inOffset)._Mypair._Myval2._Myfirst;
            piVar23 = piVar22;
            do {
              iVar26 = iVar26 + 1;
              *(double *)(param_1 + (longlong)*piVar23 * 8) =
                   (double)*(float *)(param_2 +
                                     (longlong)
                                     *(int *)(((longlong)piVar5 - (longlong)piVar22) +
                                             (longlong)piVar23) * 4);
              iVar28 = param_3->channels;
              piVar23 = piVar23 + 1;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 4;
          param_1 = param_1 + (longlong)param_3->outJump * 8;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if ((uVar3 == 0x20) && (uVar30 = 0, (this->stream_).bufferSize != 0)) {
      iVar28 = param_3->channels;
      do {
        iVar26 = 0;
        if (0 < iVar28) {
          piVar22 = (param_3->outOffset)._Mypair._Myval2._Myfirst;
          lVar29 = (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst - (longlong)piVar22;
          do {
            piVar5 = (int *)((longlong)piVar22 + lVar29);
            iVar26 = iVar26 + 1;
            iVar28 = *piVar22;
            piVar22 = piVar22 + 1;
            *(undefined8 *)(param_1 + (longlong)iVar28 * 8) =
                 *(undefined8 *)(param_2 + (longlong)*piVar5 * 8);
            iVar28 = param_3->channels;
          } while (iVar26 < iVar28);
        }
        uVar30 = uVar30 + 1;
        param_2 = param_2 + (longlong)param_3->inJump * 8;
        param_1 = param_1 + (longlong)param_3->outJump * 8;
      } while (uVar30 < (this->stream_).bufferSize);
    }
  }
  else if (uVar3 == 0x10) {
    uVar3 = param_3->inFormat;
    if (uVar3 == 1) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            piVar22 = (param_3->outOffset)._Mypair._Myval2._Myfirst;
            lVar29 = (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst - (longlong)piVar22;
            do {
              iVar26 = iVar26 + 1;
              *(float *)(param_1 + (longlong)*piVar22 * 4) =
                   (float)(int)param_2[*(int *)((longlong)piVar22 + lVar29)];
              *(float *)(param_1 + (longlong)*piVar22 * 4) =
                   *(float *)(param_1 + (longlong)*piVar22 * 4) + fVar7;
              iVar28 = *piVar22;
              piVar22 = piVar22 + 1;
              *(float *)(param_1 + (longlong)iVar28 * 4) =
                   *(float *)(param_1 + (longlong)iVar28 * 4) * fVar12;
              iVar28 = param_3->channels;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + param_3->inJump;
          param_1 = param_1 + (longlong)param_3->outJump * 4;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 2) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            piVar22 = (param_3->outOffset)._Mypair._Myval2._Myfirst;
            lVar29 = (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst - (longlong)piVar22;
            do {
              iVar26 = iVar26 + 1;
              *(float *)(param_1 + (longlong)*piVar22 * 4) =
                   (float)(int)*(short *)(param_2 +
                                         (longlong)*(int *)((longlong)piVar22 + lVar29) * 2);
              *(float *)(param_1 + (longlong)*piVar22 * 4) =
                   *(float *)(param_1 + (longlong)*piVar22 * 4) + fVar7;
              iVar28 = *piVar22;
              piVar22 = piVar22 + 1;
              *(float *)(param_1 + (longlong)iVar28 * 4) =
                   *(float *)(param_1 + (longlong)iVar28 * 4) * fVar14;
              iVar28 = param_3->channels;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 2;
          param_1 = param_1 + (longlong)param_3->outJump * 4;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 4) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            piVar22 = (param_3->outOffset)._Mypair._Myval2._Myfirst;
            lVar29 = (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst - (longlong)piVar22;
            do {
              lVar25 = (longlong)*(int *)(lVar29 + (longlong)piVar22);
              uVar27 = (uint)CONCAT21(CONCAT11(param_2[lVar25 * 3 + 2],param_2[lVar25 * 3 + 1]),
                                      param_2[lVar25 * 3]);
              uVar21 = uVar27 | 0xff000000;
              if (-1 < param_2[lVar25 * 3 + 2]) {
                uVar21 = uVar27;
              }
              iVar26 = iVar26 + 1;
              *(float *)(param_1 + (longlong)*piVar22 * 4) = (float)(int)uVar21;
              *(float *)(param_1 + (longlong)*piVar22 * 4) =
                   *(float *)(param_1 + (longlong)*piVar22 * 4) + fVar7;
              iVar28 = *piVar22;
              piVar22 = piVar22 + 1;
              *(float *)(param_1 + (longlong)iVar28 * 4) =
                   *(float *)(param_1 + (longlong)iVar28 * 4) * fVar13;
              iVar28 = param_3->channels;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 3;
          param_1 = param_1 + (longlong)param_3->outJump * 4;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 8) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            piVar22 = (param_3->outOffset)._Mypair._Myval2._Myfirst;
            lVar29 = (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst - (longlong)piVar22;
            do {
              iVar26 = iVar26 + 1;
              *(float *)(param_1 + (longlong)*piVar22 * 4) =
                   (float)*(int *)(param_2 + (longlong)*(int *)((longlong)piVar22 + lVar29) * 4);
              *(float *)(param_1 + (longlong)*piVar22 * 4) =
                   *(float *)(param_1 + (longlong)*piVar22 * 4) + fVar7;
              iVar28 = *piVar22;
              piVar22 = piVar22 + 1;
              *(float *)(param_1 + (longlong)iVar28 * 4) =
                   *(float *)(param_1 + (longlong)iVar28 * 4) * fVar10;
              iVar28 = param_3->channels;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 4;
          param_1 = param_1 + (longlong)param_3->outJump * 4;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 0x10) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            piVar22 = (param_3->outOffset)._Mypair._Myval2._Myfirst;
            lVar29 = (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst - (longlong)piVar22;
            do {
              piVar5 = (int *)((longlong)piVar22 + lVar29);
              iVar26 = iVar26 + 1;
              iVar28 = *piVar22;
              piVar22 = piVar22 + 1;
              *(undefined4 *)(param_1 + (longlong)iVar28 * 4) =
                   *(undefined4 *)(param_2 + (longlong)*piVar5 * 4);
              iVar28 = param_3->channels;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 4;
          param_1 = param_1 + (longlong)param_3->outJump * 4;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if ((uVar3 == 0x20) && (uVar30 = 0, (this->stream_).bufferSize != 0)) {
      iVar28 = param_3->channels;
      do {
        iVar26 = 0;
        if (0 < iVar28) {
          piVar22 = (param_3->outOffset)._Mypair._Myval2._Myfirst;
          piVar5 = (param_3->inOffset)._Mypair._Myval2._Myfirst;
          piVar23 = piVar22;
          do {
            iVar26 = iVar26 + 1;
            *(float *)(param_1 + (longlong)*piVar23 * 4) =
                 (float)*(double *)
                         (param_2 +
                         (longlong)
                         *(int *)((longlong)piVar23 + ((longlong)piVar5 - (longlong)piVar22)) * 8);
            iVar28 = param_3->channels;
            piVar23 = piVar23 + 1;
          } while (iVar26 < iVar28);
        }
        uVar30 = uVar30 + 1;
        param_2 = param_2 + (longlong)param_3->inJump * 8;
        param_1 = param_1 + (longlong)param_3->outJump * 4;
      } while (uVar30 < (this->stream_).bufferSize);
    }
  }
  else if (uVar3 == 8) {
    uVar3 = param_3->inFormat;
    if (uVar3 == 1) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              *(int *)(param_1 +
                      (longlong)
                      *(int *)(lVar29 + (longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst) * 4
                      ) = (int)param_2[*(int *)(lVar29 + (longlong)
                                                         (param_3->inOffset)._Mypair._Myval2.
                                                         _Myfirst)];
              *(int *)(param_1 +
                      (longlong)
                      *(int *)(lVar29 + (longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst) * 4
                      ) = *(int *)(param_1 +
                                  (longlong)
                                  *(int *)(lVar29 + (longlong)
                                                    (param_3->outOffset)._Mypair._Myval2._Myfirst) *
                                  4) << 0x18;
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + param_3->inJump;
          param_1 = param_1 + (longlong)param_3->outJump * 4;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 2) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              *(int *)(param_1 +
                      (longlong)
                      *(int *)(lVar29 + (longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst) * 4
                      ) = (int)*(short *)(param_2 +
                                         (longlong)
                                         *(int *)(lVar29 + (longlong)
                                                           (param_3->inOffset)._Mypair._Myval2.
                                                           _Myfirst) * 2);
              *(int *)(param_1 +
                      (longlong)
                      *(int *)(lVar29 + (longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst) * 4
                      ) = *(int *)(param_1 +
                                  (longlong)
                                  *(int *)(lVar29 + (longlong)
                                                    (param_3->outOffset)._Mypair._Myval2._Myfirst) *
                                  4) << 0x10;
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 2;
          param_1 = param_1 + (longlong)param_3->outJump * 4;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 4) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              lVar25 = (longlong)
                       *(int *)(lVar29 + (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst);
              uVar27 = (uint)CONCAT21(CONCAT11(param_2[lVar25 * 3 + 2],param_2[lVar25 * 3 + 1]),
                                      param_2[lVar25 * 3]);
              uVar21 = uVar27 | 0xff000000;
              if (-1 < param_2[lVar25 * 3 + 2]) {
                uVar21 = uVar27;
              }
              iVar26 = iVar26 + 1;
              *(uint *)(param_1 +
                       (longlong)
                       *(int *)(lVar29 + (longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst) *
                       4) = uVar21;
              *(int *)(param_1 +
                      (longlong)
                      *(int *)(lVar29 + (longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst) * 4
                      ) = *(int *)(param_1 +
                                  (longlong)
                                  *(int *)(lVar29 + (longlong)
                                                    (param_3->outOffset)._Mypair._Myval2._Myfirst) *
                                  4) << 8;
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 3;
          param_1 = param_1 + (longlong)param_3->outJump * 4;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 8) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              *(undefined4 *)
               (param_1 +
               (longlong)*(int *)(lVar29 + (longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst)
               * 4) = *(undefined4 *)
                       (param_2 +
                       (longlong)
                       *(int *)(lVar29 + (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst) * 4
                       );
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 4;
          param_1 = param_1 + (longlong)param_3->outJump * 4;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 0x10) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              piVar22 = (int *)((longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst + lVar29);
              piVar5 = (int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29);
              lVar29 = lVar29 + 4;
              *(int *)(param_1 + (longlong)*piVar5 * 4) =
                   (int)((double)*(float *)(param_2 + (longlong)*piVar22 * 4) * dVar20 - dVar6);
              iVar28 = param_3->channels;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 4;
          param_1 = param_1 + (longlong)param_3->outJump * 4;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if ((uVar3 == 0x20) && (uVar30 = 0, (this->stream_).bufferSize != 0)) {
      iVar28 = param_3->channels;
      do {
        iVar26 = 0;
        if (0 < iVar28) {
          lVar29 = 0;
          do {
            iVar26 = iVar26 + 1;
            piVar22 = (int *)((longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst + lVar29);
            piVar5 = (int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29);
            lVar29 = lVar29 + 4;
            *(int *)(param_1 + (longlong)*piVar5 * 4) =
                 (int)(*(double *)(param_2 + (longlong)*piVar22 * 8) * dVar20 - dVar6);
            iVar28 = param_3->channels;
          } while (iVar26 < iVar28);
        }
        uVar30 = uVar30 + 1;
        param_2 = param_2 + (longlong)param_3->inJump * 8;
        param_1 = param_1 + (longlong)param_3->outJump * 4;
      } while (uVar30 < (this->stream_).bufferSize);
    }
  }
  else if (uVar3 == 4) {
    uVar3 = param_3->inFormat;
    if (uVar3 == 1) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              cVar1 = param_2[*(int *)((longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst +
                                      lVar29)];
              lVar25 = (longlong)
                       *(int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29);
              param_1[lVar25 * 3] = '\0';
              param_1[lVar25 * 3 + 1] = '\0';
              param_1[lVar25 * 3 + 2] = cVar1;
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + param_3->inJump;
          param_1 = param_1 + (longlong)param_3->outJump * 3;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 2) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              uVar2 = *(undefined2 *)
                       (param_2 +
                       (longlong)
                       *(int *)((longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst + lVar29) * 2
                       );
              lVar25 = (longlong)
                       *(int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29);
              param_1[lVar25 * 3] = '\0';
              param_1[lVar25 * 3 + 2] = (char)((ushort)uVar2 >> 8);
              param_1[lVar25 * 3 + 1] = (char)uVar2;
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 2;
          param_1 = param_1 + (longlong)param_3->outJump * 3;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 4) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              lVar25 = (longlong)
                       *(int *)((longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst + lVar29);
              cVar1 = param_2[lVar25 * 3 + 2];
              lVar24 = (longlong)
                       *(int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29);
              *(undefined2 *)(param_1 + lVar24 * 3) = *(undefined2 *)(param_2 + lVar25 * 3);
              param_1[lVar24 * 3 + 2] = cVar1;
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 3;
          param_1 = param_1 + (longlong)param_3->outJump * 3;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 8) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              uVar4 = *(undefined4 *)
                       (param_2 +
                       (longlong)
                       *(int *)((longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst + lVar29) * 4
                       );
              lVar25 = (longlong)
                       *(int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29);
              param_1[lVar25 * 3] = (char)((uint)uVar4 >> 8);
              param_1[lVar25 * 3 + 2] = (char)((uint)uVar4 >> 0x18);
              param_1[lVar25 * 3 + 1] = (char)((uint)uVar4 >> 0x10);
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 4;
          param_1 = param_1 + (longlong)param_3->outJump * 3;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 0x10) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              piVar22 = (int *)((longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst + lVar29);
              lVar25 = (longlong)
                       *(int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29);
              lVar29 = lVar29 + 4;
              iVar28 = (int)(*(float *)(param_2 + (longlong)*piVar22 * 4) * fVar8 - fVar7);
              param_1[lVar25 * 3] = (char)iVar28;
              param_1[lVar25 * 3 + 1] = (char)((uint)iVar28 >> 8);
              param_1[lVar25 * 3 + 2] = (char)((uint)iVar28 >> 0x10);
              iVar28 = param_3->channels;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 4;
          param_1 = param_1 + (longlong)param_3->outJump * 3;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if ((uVar3 == 0x20) && (uVar30 = 0, (this->stream_).bufferSize != 0)) {
      iVar28 = param_3->channels;
      do {
        iVar26 = 0;
        if (0 < iVar28) {
          lVar29 = 0;
          do {
            iVar26 = iVar26 + 1;
            piVar22 = (int *)(lVar29 + (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst);
            lVar25 = (longlong)
                     *(int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29);
            lVar29 = lVar29 + 4;
            iVar28 = (int)(*(double *)(param_2 + (longlong)*piVar22 * 8) * dVar19 - dVar6);
            param_1[lVar25 * 3] = (char)iVar28;
            param_1[lVar25 * 3 + 1] = (char)((uint)iVar28 >> 8);
            param_1[lVar25 * 3 + 2] = (char)((uint)iVar28 >> 0x10);
            iVar28 = param_3->channels;
          } while (iVar26 < iVar28);
        }
        uVar30 = uVar30 + 1;
        param_2 = param_2 + (longlong)param_3->inJump * 8;
        param_1 = param_1 + (longlong)param_3->outJump * 3;
      } while (uVar30 < (this->stream_).bufferSize);
    }
  }
  else if (uVar3 == 2) {
    uVar3 = param_3->inFormat;
    if (uVar3 == 1) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              *(short *)(param_1 +
                        (longlong)
                        *(int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29) *
                        2) = (short)param_2[*(int *)(lVar29 + (longlong)
                                                              (param_3->inOffset)._Mypair._Myval2.
                                                              _Myfirst)];
              *(short *)(param_1 +
                        (longlong)
                        *(int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29) *
                        2) = *(short *)(param_1 +
                                       (longlong)
                                       *(int *)((longlong)
                                                (param_3->outOffset)._Mypair._Myval2._Myfirst +
                                               lVar29) * 2) << 8;
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + param_3->inJump;
          param_1 = param_1 + (longlong)param_3->outJump * 2;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 2) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              *(undefined2 *)
               (param_1 +
               (longlong)*(int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29)
               * 2) = *(undefined2 *)
                       (param_2 +
                       (longlong)
                       *(int *)(lVar29 + (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst) * 2
                       );
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 2;
          param_1 = param_1 + (longlong)param_3->outJump * 2;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 4) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              lVar25 = (longlong)
                       *(int *)(lVar29 + (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst);
              iVar26 = iVar26 + 1;
              *(ushort *)
               (param_1 +
               (longlong)*(int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29)
               * 2) = CONCAT11(param_2[lVar25 * 3 + 2],param_2[lVar25 * 3 + 1]);
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 3;
          param_1 = param_1 + (longlong)param_3->outJump * 2;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 8) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              *(undefined2 *)
               (param_1 +
               (longlong)*(int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29)
               * 2) = *(undefined2 *)
                       (param_2 +
                       (longlong)
                       *(int *)(lVar29 + (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst) * 4
                       + 2);
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 4;
          param_1 = param_1 + (longlong)param_3->outJump * 2;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 0x10) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              piVar22 = (int *)(lVar29 + (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst);
              piVar5 = (int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29);
              lVar29 = lVar29 + 4;
              *(short *)(param_1 + (longlong)*piVar5 * 2) =
                   (short)(int)(*(float *)(param_2 + (longlong)*piVar22 * 4) * fVar11 - fVar7);
              iVar28 = param_3->channels;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 4;
          param_1 = param_1 + (longlong)param_3->outJump * 2;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if ((uVar3 == 0x20) && (uVar30 = 0, (this->stream_).bufferSize != 0)) {
      iVar28 = param_3->channels;
      do {
        iVar26 = 0;
        if (0 < iVar28) {
          lVar29 = 0;
          do {
            iVar26 = iVar26 + 1;
            piVar22 = (int *)(lVar29 + (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst);
            piVar5 = (int *)((longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst + lVar29);
            lVar29 = lVar29 + 4;
            *(short *)(param_1 + (longlong)*piVar5 * 2) =
                 (short)(int)(*(double *)(param_2 + (longlong)*piVar22 * 8) * dVar18 - dVar6);
            iVar28 = param_3->channels;
          } while (iVar26 < iVar28);
        }
        uVar30 = uVar30 + 1;
        param_2 = param_2 + (longlong)param_3->inJump * 8;
        param_1 = param_1 + (longlong)param_3->outJump * 2;
      } while (uVar30 < (this->stream_).bufferSize);
    }
  }
  else if (uVar3 == 1) {
    if ((param_3->inFormat == 1) && (uVar30 = 0, (this->stream_).bufferSize != 0)) {
      iVar28 = param_3->channels;
      pcVar31 = param_2;
      do {
        iVar26 = 0;
        if (0 < iVar28) {
          lVar29 = 0;
          do {
            iVar26 = iVar26 + 1;
            param_1[*(int *)(lVar29 + (longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst)] =
                 pcVar31[*(int *)(lVar29 + (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst)];
            iVar28 = param_3->channels;
            lVar29 = lVar29 + 4;
          } while (iVar26 < iVar28);
        }
        uVar30 = uVar30 + 1;
        pcVar31 = pcVar31 + param_3->inJump;
        param_1 = param_1 + param_3->outJump;
      } while (uVar30 < (this->stream_).bufferSize);
    }
    fVar8 = __real_42ff0000;
    dVar9 = __real_405fe00000000000;
    fVar7 = __real_3f000000;
    dVar6 = __real_3fe0000000000000;
    uVar3 = param_3->inFormat;
    if (uVar3 == 2) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              param_1[*(int *)(lVar29 + (longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst)] =
                   param_2[(longlong)
                           *(int *)(lVar29 + (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst)
                           * 2 + 1];
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 2;
          param_1 = param_1 + param_3->outJump;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 4) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              param_1[*(int *)(lVar29 + (longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst)] =
                   param_2[(longlong)
                           *(int *)(lVar29 + (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst)
                           * 3 + 2];
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 3;
          param_1 = param_1 + param_3->outJump;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 8) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              param_1[*(int *)(lVar29 + (longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst)] =
                   param_2[(longlong)
                           *(int *)(lVar29 + (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst)
                           * 4 + 3];
              iVar28 = param_3->channels;
              lVar29 = lVar29 + 4;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 4;
          param_1 = param_1 + param_3->outJump;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if (uVar3 == 0x10) {
      uVar30 = 0;
      if ((this->stream_).bufferSize != 0) {
        iVar28 = param_3->channels;
        do {
          iVar26 = 0;
          if (0 < iVar28) {
            lVar29 = 0;
            do {
              iVar26 = iVar26 + 1;
              piVar22 = (int *)(lVar29 + (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst);
              piVar5 = (int *)(lVar29 + (longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst);
              lVar29 = lVar29 + 4;
              param_1[*piVar5] =
                   (char)(int)(*(float *)(param_2 + (longlong)*piVar22 * 4) * fVar8 - fVar7);
              iVar28 = param_3->channels;
            } while (iVar26 < iVar28);
          }
          uVar30 = uVar30 + 1;
          param_2 = param_2 + (longlong)param_3->inJump * 4;
          param_1 = param_1 + param_3->outJump;
        } while (uVar30 < (this->stream_).bufferSize);
      }
    }
    else if ((uVar3 == 0x20) && (uVar30 = 0, (this->stream_).bufferSize != 0)) {
      iVar28 = param_3->channels;
      do {
        iVar26 = 0;
        if (0 < iVar28) {
          lVar29 = 0;
          do {
            iVar26 = iVar26 + 1;
            piVar22 = (int *)(lVar29 + (longlong)(param_3->inOffset)._Mypair._Myval2._Myfirst);
            piVar5 = (int *)(lVar29 + (longlong)(param_3->outOffset)._Mypair._Myval2._Myfirst);
            lVar29 = lVar29 + 4;
            param_1[*piVar5] =
                 (char)(int)(*(double *)(param_2 + (longlong)*piVar22 * 8) * dVar9 - dVar6);
            iVar28 = param_3->channels;
          } while (iVar26 < iVar28);
        }
        uVar30 = uVar30 + 1;
        param_2 = param_2 + (longlong)param_3->inJump * 8;
        param_1 = param_1 + param_3->outJump;
      } while (uVar30 < (this->stream_).bufferSize);
    }
  }
  return;
}

// convertGuidToStdString @ 14d0c7ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
convertGuidToStdString
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          _GUID *param_1)

{
  size_t sVar1;
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint local_a0;
  uint local_98;
  uint local_90;
  uint local_88;
  uint local_80;
  uint local_78;
  uint local_70;
  uint local_68;
  uint local_60;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_50;
  char local_48 [40];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_50 = __return_storage_ptr__;
  if (param_1 == (_GUID *)0x0) {
    local_48[0] = '\0';
  }
  else {
    local_60 = (uint)param_1->Data4[7];
    local_68 = (uint)param_1->Data4[6];
    local_70 = (uint)param_1->Data4[5];
    local_78 = (uint)param_1->Data4[4];
    local_80 = (uint)param_1->Data4[3];
    local_88 = (uint)param_1->Data4[2];
    local_90 = (uint)param_1->Data4[1];
    local_98 = (uint)param_1->Data4[0];
    local_a0 = (uint)param_1->Data3;
    local_a8 = (uint)param_1->Data2;
    snprintf(local_48,0x27,"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}");
  }
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  sVar1 = strlen(local_48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            (__return_storage_ptr__,local_48,sVar1);
  return __return_storage_ptr__;
}

// deviceQueryCallback @ 14d0c7c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl deviceQueryCallback(_GUID *param_1,wchar_t *param_2,wchar_t *param_3,void *param_4)

{
  DsDevice **ppDVar1;
  vector<DsDevice,std::allocator<DsDevice>_> *this;
  size_t _Size;
  DsDevice *pDVar2;
  bool bVar3;
  longlong lVar4;
  undefined3 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char *_Dst;
  undefined8 uVar9;
  longlong lVar10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Buf1;
  ulong64 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStackY_128 [32];
  DsDevice *local_e8;
  char *local_e0;
  _Bxty local_d8;
  ulonglong local_c8;
  ulonglong local_c0;
  DsDevice local_b8;
  undefined4 local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  this = *(vector<DsDevice,std::allocator<DsDevice>_> **)((longlong)param_4 + 8);
  bVar3 = false;
  local_e0 = param_4;
  if (*(char *)param_4 == '\x01') {
    iVar6 = DirectSoundCaptureCreate();
    if (iVar6 != 0) {
      return 1;
    }
    local_58 = 0x10;
    iVar6 = (**(code **)(local_e8->id[0] + 2))();
    if ((iVar6 == 0) && (local_4c != 0)) {
      bVar3 = local_50 != 0;
    }
  }
  else {
    iVar6 = DirectSoundCreate(param_1,&local_e8,0);
    if (iVar6 != 0) {
      return 1;
    }
    local_b8.id[0] = (_GUID *)CONCAT44(local_b8.id[0]._4_4_,0x60);
    iVar6 = (**(code **)(local_e8->id[0] + 2))();
    if ((iVar6 == 0) &&
       ((((ulonglong)local_b8.id[0] & 0x100000000) != 0 ||
        (((ulonglong)local_b8.id[0] & 0x200000000) != 0)))) {
      bVar3 = true;
    }
  }
  (**(code **)(local_e8->id[0] + 1))();
  iVar6 = WideCharToMultiByte(0xfde9,0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d8,
             (longlong)(iVar6 + -1),'\0');
  uVar7 = &local_d8;
  if (0xf < local_c0) {
    uVar7 = local_d8._Ptr;
  }
  WideCharToMultiByte(0xfde9,0,param_2,-1,(LPSTR)uVar7,iVar6,(LPCSTR)0x0,(LPBOOL)0x0);
  uVar7 = local_d8._Ptr;
  uVar12 = local_c0;
  if (param_1 == (_GUID *)0x0) {
    if (local_c0 < 0xe) {
      if (0x7fffffffffffffff - (local_c0 >> 1) < local_c0) {
        uVar12 = 0x7fffffffffffffff;
      }
      else {
        uVar13 = local_c0 + (local_c0 >> 1);
        uVar12 = 0xf;
        if (0xf < uVar13) {
          uVar12 = uVar13;
        }
      }
      uVar7 = std::_Allocate<16,std::_Default_allocate_traits>(uVar12 + 1);
      local_c8 = 0xe;
      *(undefined8 *)uVar7 = s_Default_Device._0_8_;
      *(undefined4 *)(uVar7 + 8) = s_Default_Device._8_4_;
      *(undefined2 *)(uVar7 + 0xc) = s_Default_Device._12_2_;
      *(char *)(uVar7 + 0xe) = '\0';
      if (0xf < local_c0) {
        uVar13 = local_c0 + 1;
        uVar9 = local_d8._Ptr;
        if (0xfff < uVar13) {
          uVar13 = local_c0 + 0x28;
          uVar9 = *(undefined8 *)(local_d8._Ptr + -8);
          local_c0 = uVar12;
          if ((char *)0x1f < local_d8._Ptr + (-8 - uVar9)) goto LAB_14d0c8054;
        }
        local_c0 = uVar12;
        operator_delete((void *)uVar9,uVar13);
        uVar12 = local_c0;
      }
    }
    else {
      uVar7 = &local_d8;
      if (0xf < local_c0) {
        uVar7 = local_d8._Ptr;
      }
      local_c8 = 0xe;
      memmove((void *)uVar7,"Default Device",0xe);
      *(char *)(uVar7 + 0xe) = '\0';
      uVar7 = local_d8._Ptr;
      uVar12 = local_c0;
    }
  }
  local_c0 = uVar12;
  local_d8._Ptr = (char *)uVar7;
  uVar12 = local_c8;
  uVar13 = 0;
  if (bVar3) {
    local_e8 = (this->_Mypair)._Myval2._Myfirst;
    lVar10 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)local_e8;
    lVar4 = lVar10 >> 0x3f;
    lVar10 = lVar10 / 0x38 + lVar4;
    uVar8 = local_c0;
    if (lVar10 != lVar4) {
      do {
        _Buf1 = &local_e8[uVar13].name;
        uVar7 = &local_d8;
        if (0xf < uVar8) {
          uVar7 = local_d8._Ptr;
        }
        _Size = (_Buf1->_Mypair)._Myval2._Mysize;
        if (0xf < (_Buf1->_Mypair)._Myval2._Myres) {
          _Buf1 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(_Buf1->_Mypair)._Myval2._Bx;
        }
        if ((_Size == uVar12) &&
           ((_Size == 0 || (iVar6 = memcmp(_Buf1,(void *)uVar7,_Size), uVar8 = local_c0, iVar6 == 0)
            ))) {
          local_e8[uVar13].found = true;
          pDVar2 = (this->_Mypair)._Myval2._Myfirst;
          if (*local_e0 == '\0') {
            pDVar2[uVar13].id[0] = param_1;
            (this->_Mypair)._Myval2._Myfirst[uVar13].validId[0] = true;
          }
          else {
            pDVar2[uVar13].id[1] = param_1;
            (this->_Mypair)._Myval2._Myfirst[uVar13].validId[1] = true;
          }
          goto LAB_14d0c8074;
        }
        uVar13 = (ulonglong)((int)uVar13 + 1);
      } while (uVar13 < (ulonglong)(lVar10 - lVar4));
    }
    local_b8.name._Mypair._Myval2._Bx._8_8_ = 0;
    local_b8.name._Mypair._Myval2._Mysize = ___xmm_000000000000000f0000000000000000;
    local_b8.name._Mypair._Myval2._Myres = _UNK_15076add8;
    local_b8.name._Mypair._Myval2._Bx._Ptr = (char *)0x0;
    local_b8.validId[0] = false;
    local_b8.validId[1] = false;
    local_b8.found = false;
    uVar7 = &local_d8;
    if (0xf < uVar8) {
      uVar7 = local_d8._Ptr;
    }
    if (uVar12 < 0x10) {
      local_b8.name._Mypair._Myval2._Mysize = uVar12;
      memmove((void *)((longlong)&local_b8 + 0x18),(void *)uVar7,uVar12);
      *(undefined1 *)((longlong)&local_b8 + uVar12 + 0x18) = 0;
    }
    else {
      if (0x7fffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
        std::_Xlen_string();
      }
      uVar8 = uVar12 | 0xf;
      uVar13 = 0x7fffffffffffffff;
      if ((uVar8 < 0x8000000000000000) && (uVar13 = uVar8, uVar8 < 0x16)) {
        uVar13 = 0x16;
      }
      _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar13 + 1);
      local_b8.name._Mypair._Myval2._Mysize = uVar12;
      local_b8.name._Mypair._Myval2._Myres = uVar13;
      memcpy(_Dst,(void *)uVar7,uVar12);
      _Dst[uVar12] = '\0';
      local_b8.name._Mypair._Myval2._Bx._Ptr = _Dst;
    }
    uVar5 = local_b8._16_3_;
    local_b8.found = true;
    if (*local_e0 == '\0') {
      local_b8.validId[0] = true;
      local_b8.id[0] = param_1;
    }
    else {
      local_b8.validId[0] = SUB31(uVar5,0);
      local_b8.validId[1] = true;
      local_b8.found = true;
      local_b8.id[1] = param_1;
    }
    pDVar2 = (this->_Mypair)._Myval2._Mylast;
    if (pDVar2 == (this->_Mypair)._Myval2._Myend) {
      std::vector<DsDevice,std::allocator<DsDevice>_>::_Emplace_reallocate<DsDevice_const_&>
                (this,pDVar2,&local_b8);
    }
    else {
      pDVar2->id[0] = local_b8.id[0];
      pDVar2->id[1] = local_b8.id[1];
      *&pDVar2->validId = local_b8.validId;
      pDVar2->found = true;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (&pDVar2->name,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((longlong)&local_b8 + 0x18));
      ppDVar1 = &(this->_Mypair)._Myval2._Mylast;
      *ppDVar1 = *ppDVar1 + 1;
    }
    if (0xf < local_b8.name._Mypair._Myval2._Myres) {
      uVar11 = local_b8.name._Mypair._Myval2._Myres + 1;
      uVar7 = local_b8.name._Mypair._Myval2._Bx._Ptr;
      if (0xfff < uVar11) {
        uVar11 = local_b8.name._Mypair._Myval2._Myres + 0x28;
        uVar7 = *(undefined8 *)(local_b8.name._Mypair._Myval2._Bx._Ptr + -8);
        if ((char *)0x1f < local_b8.name._Mypair._Myval2._Bx._Ptr + (-8 - uVar7)) {
LAB_14d0c8054:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      operator_delete((void *)uVar7,uVar11);
    }
  }
LAB_14d0c8074:
  if (0xf < local_c0) {
    uVar11 = local_c0 + 1;
    uVar7 = local_d8._Ptr;
    if (0xfff < uVar11) {
      uVar11 = local_c0 + 0x28;
      uVar7 = *(undefined8 *)(local_d8._Ptr + -8);
      if ((char *)0x1f < local_d8._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete((void *)uVar7,uVar11);
  }
  return 1;
}

// error @ 14d0c8100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall RtApi::error(RtApi *this,Type param_1)

{
  uint uVar1;
  code *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  char *pcVar8;
  ulong64 uVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  undefined1 auStackY_88 [32];
  char *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  uStack_50 = 0;
  local_48 = ___xmm_000000000000000f0000000000000000;
  uStack_40 = _UNK_15076add8;
  local_58 = (char *)0x0;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            (&(this->errorStream_)._Stringbuffer);
  uVar1 = (this->errorStream_)._Stringbuffer._Mystate;
  if (((uVar1 & 4) == 0) || ((uVar1 & 2) == 0)) {
    puVar5 = ::operator_new(0x11);
    *puVar5 = (ulonglong)local_58;
    puVar5[1] = uStack_50;
    uStack_40 = 0xf;
    local_58 = (char *)((ulonglong)local_58 & 0xffffffffffffff00);
    (this->errorStream_)._Stringbuffer._Seekhigh = (char *)puVar5;
    std::basic_streambuf<char,std::char_traits<char>_>::setp
              ((basic_streambuf<char,std::char_traits<char>_> *)&(this->errorStream_)._Stringbuffer,
               (char *)puVar5,(char *)puVar5,(char *)((longlong)puVar5 + 0x11));
    puVar12 = puVar5;
    if ((uVar1 & 4) == 0) {
      puVar12 = (ulonglong *)(this->errorStream_)._Stringbuffer._Seekhigh;
    }
    std::basic_streambuf<char,std::char_traits<char>_>::setg
              ((basic_streambuf<char,std::char_traits<char>_> *)&(this->errorStream_)._Stringbuffer,
               (char *)puVar5,(char *)puVar5,(char *)puVar12);
    uVar4 = 0x21;
  }
  else {
    (this->errorStream_)._Stringbuffer._Seekhigh = (char *)0x0;
    uVar4 = 0x20;
  }
  (this->errorStream_)._Stringbuffer._Mystate = uVar4 | uVar1;
  pcVar2 = (this->stream_).callbackInfo.errorCallback;
  if (pcVar2 == (code *)0x0) {
    if ((param_1 == WARNING) && (this->showWarnings_ == true)) {
      pbVar10 = &this->errorText_;
      pbVar7 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,'\n');
      if (0xf < (this->errorText_)._Mypair._Myval2._Myres) {
        pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (pbVar10->_Mypair)._Myval2._Bx._Ptr;
      }
      pbVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                         (pbVar7,(char *)pbVar10,(this->errorText_)._Mypair._Myval2._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar7,"\n\n");
    }
  }
  else if (this->firstErrorOccurred_ == false) {
    this->firstErrorOccurred_ = true;
    pbVar10 = &this->errorText_;
    local_58 = (char *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uVar3 = (this->errorText_)._Mypair._Myval2._Mysize;
    if (0xf < (this->errorText_)._Mypair._Myval2._Myres) {
      pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar10->_Mypair)._Myval2._Bx._Ptr;
    }
    if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::_Xlen_string();
    }
    if (uVar3 < 0x10) {
      uStack_40 = 0xf;
      local_58 = (pbVar10->_Mypair)._Myval2._Bx._Ptr;
      uStack_50 = *(undefined8 *)((longlong)&(pbVar10->_Mypair)._Myval2._Bx + 8);
      local_48 = uVar3;
    }
    else {
      uVar6 = uVar3 | 0xf;
      uVar11 = 0x7fffffffffffffff;
      if ((uVar6 < 0x8000000000000000) && (uVar11 = uVar6, uVar6 < 0x16)) {
        uVar11 = 0x16;
      }
      local_58 = std::_Allocate<16,std::_Default_allocate_traits>(uVar11 + 1);
      local_48 = uVar3;
      uStack_40 = uVar11;
      memcpy(local_58,pbVar10,uVar3 + 1);
    }
    if ((param_1 != WARNING) && ((this->stream_).state != STREAM_STOPPED)) {
      (this->stream_).callbackInfo.isRunning = false;
      (**(code **)(this->_padding_ + 0x48))(this);
    }
    (*pcVar2)(param_1,&local_58);
    this->firstErrorOccurred_ = false;
    if (0xf < uStack_40) {
      uVar9 = uStack_40 + 1;
      pcVar8 = local_58;
      if (0xfff < uVar9) {
        uVar9 = uStack_40 + 0x28;
        pcVar8 = *(char **)(local_58 + -8);
        if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar8)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pcVar8,uVar9);
    }
  }
  return;
}

// formatBytes @ 14d0c8390

uint __thiscall RtApi::formatBytes(RtApi *this,ulong param_1)

{
  if (param_1 == 2) {
    return 2;
  }
  if ((param_1 - 8 & 0xfffffff7) == 0) {
    return 4;
  }
  if (param_1 == 0x20) {
    return 8;
  }
  if (param_1 == 4) {
    return 3;
  }
  if (param_1 == 1) {
    return 1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&this->errorText_,"RtApi::formatBytes: undefined format.",0x25);
  error(this,WARNING);
  return 0;
}

// getCompiledApi @ 14d0c8420

void __cdecl RtAudio::getCompiledApi(vector<RtAudio::Api,std::allocator<RtAudio::Api>_> *param_1)

{
  Api **ppAVar1;
  Api *pAVar2;
  Api *pAVar3;
  Api local_res8 [8];
  
  pAVar3 = (param_1->_Mypair)._Myval2._Mylast;
  pAVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  if (pAVar2 != pAVar3) {
    (param_1->_Mypair)._Myval2._Mylast = pAVar2;
    pAVar3 = pAVar2;
  }
  local_res8[0] = WINDOWS_DS;
  if (pAVar3 != (param_1->_Mypair)._Myval2._Myend) {
    *pAVar3 = WINDOWS_DS;
    ppAVar1 = &(param_1->_Mypair)._Myval2._Mylast;
    *ppAVar1 = *ppAVar1 + 1;
    return;
  }
  std::vector<enum_RtAudio::Api,std::allocator<enum_RtAudio::Api>_>::
  _Emplace_reallocate<enum_RtAudio::Api>(param_1,pAVar3,local_res8);
  return;
}

// getCurrentApi @ 14d0c8470

Api __thiscall RtApiDs::getCurrentApi(RtApiDs *this)

{
  return WINDOWS_DS;
}

// getDefaultInputDevice @ 14d0c8480

uint __thiscall RtApi::getDefaultInputDevice(RtApi *this)

{
  return 0;
}

// getDefaultInputDevice @ 14d0c8490

uint __thiscall RtApiDs::getDefaultInputDevice(RtApiDs *this)

{
  return 0;
}

// getDefaultOutputDevice @ 14d0c84a0

uint __thiscall RtApi::getDefaultOutputDevice(RtApi *this)

{
  return 0;
}

// getDefaultOutputDevice @ 14d0c84b0

uint __thiscall RtApiDs::getDefaultOutputDevice(RtApiDs *this)

{
  return 0;
}

// getDeviceCount @ 14d0c84c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall RtApiDs::getDeviceCount(RtApiDs *this)

{
  DsDevice **ppDVar1;
  longlong lVar2;
  int iVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  char *pcVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  undefined8 uVar7;
  bool *pbVar8;
  longlong lVar9;
  ulong64 uVar10;
  DsDevice *pDVar11;
  DsDevice *pDVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStackY_88 [32];
  undefined1 local_58 [8];
  vector<DsDevice,std::allocator<DsDevice>_> *local_50;
  _Bxty local_48;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_50 = &this->dsDevices;
  uVar15 = 0;
  pDVar12 = (local_50->_Mypair)._Myval2._Myfirst;
  lVar9 = (longlong)(this->dsDevices)._Mypair._Myval2._Mylast - (longlong)pDVar12;
  lVar2 = lVar9 >> 0x3f;
  uVar13 = uVar15;
  if (lVar9 / 0x38 + lVar2 != lVar2) {
    do {
      uVar14 = (ulonglong)((int)uVar13 + 1);
      pDVar12[uVar13].found = false;
      pDVar12 = (local_50->_Mypair)._Myval2._Myfirst;
      uVar13 = uVar14;
    } while (uVar14 < (ulonglong)
                      (((longlong)(this->dsDevices)._Mypair._Myval2._Mylast - (longlong)pDVar12) /
                      0x38));
  }
  local_58[0] = 0;
  iVar3 = DirectSoundEnumerateW(deviceQueryCallback,local_58);
  if (iVar3 < 0) {
    pbVar4 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                        "RtApiDs::getDeviceCount: error (");
    pcVar5 = getErrorString(iVar3);
    pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,pcVar5);
    std::operator<<<std::char_traits<char>_>(pbVar4,") enumerating output devices!");
    pbVar6 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                       ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                        &this->_padding_,
                        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48
                       );
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               pbVar6);
    if (0xf < local_30) {
      uVar10 = local_30 + 1;
      uVar7 = local_48._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_48._Ptr + -8);
        uVar10 = local_30 + 0x28;
        if ((char *)0x1f < local_48._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
    RtApi::error((RtApi *)this,WARNING);
  }
  local_58[0] = 1;
  iVar3 = DirectSoundCaptureEnumerateW(deviceQueryCallback,local_58);
  if (iVar3 < 0) {
    pbVar4 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                        "RtApiDs::getDeviceCount: error (");
    pcVar5 = getErrorString(iVar3);
    pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,pcVar5);
    std::operator<<<std::char_traits<char>_>(pbVar4,") enumerating input devices!");
    pbVar6 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                       ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                        &this->_padding_,
                        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48
                       );
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               pbVar6);
    if (0xf < local_30) {
      uVar10 = local_30 + 1;
      uVar7 = local_48._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_48._Ptr + -8);
        uVar10 = local_30 + 0x28;
        if ((char *)0x1f < local_48._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
    RtApi::error((RtApi *)this,WARNING);
  }
  pDVar12 = (this->dsDevices)._Mypair._Myval2._Mylast;
  pDVar11 = (this->dsDevices)._Mypair._Myval2._Myfirst;
  lVar2 = (longlong)pDVar12 - (longlong)pDVar11 >> 0x3f;
  if (((longlong)pDVar12 - (longlong)pDVar11) / 0x38 + lVar2 != lVar2) {
    do {
      if (pDVar11[uVar15].found == false) {
        pDVar12 = (this->dsDevices)._Mypair._Myval2._Mylast;
        pDVar11 = pDVar11 + uVar15 + 1;
        if (pDVar11 != pDVar12) {
          pbVar8 = pDVar11[-1].validId;
          do {
            ((DsDevice *)(pbVar8 + -0x10))->id[0] = pDVar11->id[0];
            *(_GUID **)(pbVar8 + -8) = *(_GUID **)(pbVar8 + 0x30);
            *pbVar8 = pbVar8[0x38];
            pbVar8[1] = pbVar8[0x39];
            pbVar8[2] = pbVar8[0x3a];
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (pbVar8 + 8),
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (pbVar8 + 0x40));
            pDVar11 = pDVar11 + 1;
            pbVar8 = pbVar8 + 0x38;
          } while (pDVar11 != pDVar12);
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&(this->dsDevices)._Mypair._Myval2._Mylast[-1].name);
        ppDVar1 = &(this->dsDevices)._Mypair._Myval2._Mylast;
        *ppDVar1 = *ppDVar1 + -1;
      }
      else {
        uVar15 = (ulonglong)((int)uVar15 + 1);
      }
      pDVar12 = (this->dsDevices)._Mypair._Myval2._Mylast;
      pDVar11 = (this->dsDevices)._Mypair._Myval2._Myfirst;
    } while (uVar15 < (ulonglong)(((longlong)pDVar12 - (longlong)pDVar11) / 0x38));
  }
  return (uint)(((longlong)pDVar12 - (longlong)pDVar11) / 0x38);
}

// getDeviceInfo @ 14d0c8840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

DeviceInfo * __thiscall
RtApiDs::getDeviceInfo(RtApiDs *this,DeviceInfo *__return_storage_ptr__,uint param_1)

{
  uint **ppuVar1;
  uint uVar2;
  uint *puVar3;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var4;
  int iVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  uint *_Dst;
  char *pcVar9;
  undefined8 uVar10;
  char *pcVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  ulong64 uVar17;
  size_t _Size;
  DsDevice *pDVar18;
  DsDevice *pDVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStackY_158 [32];
  uint *local_128;
  vector<unsigned_int,std::allocator<unsigned_int>_> local_120;
  undefined4 local_108;
  uint local_104;
  longlong *local_100;
  longlong *local_f8;
  RtApiDs *local_f0;
  DeviceInfo *local_e8;
  undefined4 local_e0 [2];
  uint local_d8;
  uint local_d4;
  _Bxty local_d0;
  ulonglong local_b8;
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  ulonglong local_48;
  ulonglong uVar16;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar12 = (ulonglong)param_1;
  (__return_storage_ptr__->name)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->name)._Mypair._Myval2._Bx + 8) = 0;
  uVar16 = 0;
  (__return_storage_ptr__->name)._Mypair._Myval2._Mysize = 0;
  (__return_storage_ptr__->name)._Mypair._Myval2._Myres = 0xf;
  (__return_storage_ptr__->name)._Mypair._Myval2._Bx._Buf[0] = '\0';
  (__return_storage_ptr__->deviceId)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->deviceId)._Mypair._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->deviceId)._Mypair._Myval2._Mysize = 0;
  (__return_storage_ptr__->deviceId)._Mypair._Myval2._Myres = 0xf;
  (__return_storage_ptr__->deviceId)._Mypair._Myval2._Bx._Buf[0] = '\0';
  __return_storage_ptr__->outputChannels = 0;
  __return_storage_ptr__->inputChannels = 0;
  __return_storage_ptr__->duplexChannels = 0;
  __return_storage_ptr__->isDefaultOutput = false;
  __return_storage_ptr__->isDefaultInput = false;
  (__return_storage_ptr__->sampleRates)._Mypair._Myval2._Myfirst = (uint *)0x0;
  (__return_storage_ptr__->sampleRates)._Mypair._Myval2._Mylast = (uint *)0x0;
  (__return_storage_ptr__->sampleRates)._Mypair._Myval2._Myend = (uint *)0x0;
  __return_storage_ptr__->preferredSampleRate = 0;
  __return_storage_ptr__->nativeFormats = 0;
  local_108 = 1;
  __return_storage_ptr__->probed = false;
  pDVar19 = (this->dsDevices)._Mypair._Myval2._Myfirst;
  pDVar18 = (this->dsDevices)._Mypair._Myval2._Mylast;
  local_104 = param_1;
  local_f0 = this;
  local_e8 = __return_storage_ptr__;
  if (((longlong)pDVar18 - (longlong)pDVar19) / 0x38 == 0) {
    (**(code **)(this->_padding_ + 0x10))(this);
    pDVar19 = (this->dsDevices)._Mypair._Myval2._Myfirst;
    pDVar18 = (this->dsDevices)._Mypair._Myval2._Mylast;
    lVar20 = (longlong)pDVar18 - (longlong)pDVar19 >> 0x3f;
    if (((longlong)pDVar18 - (longlong)pDVar19) / 0x38 + lVar20 == lVar20) {
      uVar17 = 0x29;
      pcVar11 = "RtApiDs::getDeviceInfo: no devices found!";
      goto LAB_14d0c8954;
    }
  }
  if ((ulonglong)(((longlong)pDVar18 - (longlong)pDVar19) / 0x38) <= uVar12) {
    uVar17 = 0x2d;
    pcVar11 = "RtApiDs::getDeviceInfo: device ID is invalid!";
LAB_14d0c8954:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               pcVar11,uVar17);
    RtApi::error((RtApi *)this,INVALID_USE);
    return __return_storage_ptr__;
  }
  if (pDVar19[uVar12].validId[0] != false) {
    iVar5 = DirectSoundCreate(pDVar19[uVar12].id[0],&local_100);
    if (iVar5 < 0) {
      pbVar6 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                          "RtApiDs::getDeviceInfo: error (");
      pcVar11 = getErrorString(iVar5);
      pbVar6 = std::operator<<<std::char_traits<char>_>(pbVar6,pcVar11);
      pbVar6 = std::operator<<<std::char_traits<char>_>(pbVar6,") opening output device (");
      pbVar7 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar12].name;
      p_Var4 = &pbVar7->_Mypair;
      if (0xf < (pbVar7->_Mypair)._Myval2._Myres) {
        pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                  &(pbVar7->_Mypair)._Myval2._Bx;
      }
      pbVar6 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                         (pbVar6,(char *)pbVar7,(p_Var4->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar6,")!");
      pbVar7 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                         ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                          &this->_padding_,
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_d0);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar7);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d0);
      RtApi::error((RtApi *)this,WARNING);
    }
    else {
      local_a8 = 0x60;
      iVar5 = (**(code **)(*local_100 + 0x20))(local_100,&local_a8);
      if (iVar5 < 0) {
        (**(code **)(*local_100 + 0x10))();
        pbVar6 = std::operator<<<std::char_traits<char>_>
                           ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                            "RtApiDs::getDeviceInfo: error (");
        pcVar11 = getErrorString(iVar5);
        pbVar6 = std::operator<<<std::char_traits<char>_>(pbVar6,pcVar11);
        std::operator<<<std::char_traits<char>_>(pbVar6,") getting capabilities!");
        pbVar7 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                           ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
                             *)&this->_padding_,
                            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_d0);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   &this->_padding_,pbVar7);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d0);
        RtApi::error((RtApi *)this,WARNING);
      }
      else {
        __return_storage_ptr__->outputChannels = ((local_a4 & 2) != 0) + 1;
        puVar14 = (__return_storage_ptr__->sampleRates)._Mypair._Myval2._Myfirst;
        if (puVar14 != (__return_storage_ptr__->sampleRates)._Mypair._Myval2._Mylast) {
          (__return_storage_ptr__->sampleRates)._Mypair._Myval2._Mylast = puVar14;
        }
        puVar14 = RtApi::SAMPLE_RATES;
        do {
          if ((local_a0 <= *puVar14) && (*puVar14 <= local_9c)) {
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&__return_storage_ptr__->sampleRates,RtApi::SAMPLE_RATES + uVar16);
            if ((__return_storage_ptr__->preferredSampleRate == 0) ||
               ((*puVar14 < 0xbb81 && (__return_storage_ptr__->preferredSampleRate < *puVar14)))) {
              __return_storage_ptr__->preferredSampleRate = *puVar14;
            }
          }
          uVar15 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar15;
          puVar14 = puVar14 + 1;
        } while (uVar15 < 0xe);
        if ((local_a4 & 8) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 2;
        }
        if ((local_a4 & 4) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 1;
        }
        (**(code **)(*local_100 + 0x10))();
        uVar15 = (**(code **)(this->_padding_ + 0x28))(this);
        if (uVar15 == param_1) {
          __return_storage_ptr__->isDefaultOutput = true;
        }
        pDVar19 = (this->dsDevices)._Mypair._Myval2._Myfirst;
        if (pDVar19[uVar12].validId[1] == false) {
          pbVar7 = &pDVar19[uVar12].name;
          if (&__return_storage_ptr__->name != pbVar7) {
            p_Var4 = &pbVar7->_Mypair;
            if (0xf < (pbVar7->_Mypair)._Myval2._Myres) {
              pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                        &(pbVar7->_Mypair)._Myval2._Bx;
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (&__return_storage_ptr__->name,(char *)pbVar7,(p_Var4->_Myval2)._Mysize);
          }
          pbVar8 = convertGuidToStdString
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_d0,(this->dsDevices)._Mypair._Myval2._Myfirst[uVar12].id[0]);
          pbVar7 = &__return_storage_ptr__->deviceId;
          if (pbVar7 != pbVar8) {
            uVar16 = (__return_storage_ptr__->deviceId)._Mypair._Myval2._Myres;
            if (0xf < uVar16) {
              pcVar11 = (pbVar7->_Mypair)._Myval2._Bx._Ptr;
              uVar17 = uVar16 + 1;
              pcVar9 = pcVar11;
              if (0xfff < uVar17) {
                uVar17 = uVar16 + 0x28;
                pcVar9 = *(char **)(pcVar11 + -8);
                if ((char *)0x1f < pcVar11 + (-8 - (longlong)pcVar9)) goto LAB_14d0c8d97;
              }
              ::operator_delete(pcVar9,uVar17);
            }
            (__return_storage_ptr__->deviceId)._Mypair._Myval2._Mysize = 0;
            (__return_storage_ptr__->deviceId)._Mypair._Myval2._Myres = 0xf;
            (pbVar7->_Mypair)._Myval2._Bx._Buf[0] = '\0';
            uVar10 = *(undefined8 *)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + 8);
            (pbVar7->_Mypair)._Myval2._Bx._Ptr = (pbVar8->_Mypair)._Myval2._Bx._Ptr;
            *(undefined8 *)((longlong)&(__return_storage_ptr__->deviceId)._Mypair._Myval2._Bx + 8) =
                 uVar10;
            uVar17 = (pbVar8->_Mypair)._Myval2._Myres;
            (__return_storage_ptr__->deviceId)._Mypair._Myval2._Mysize =
                 (pbVar8->_Mypair)._Myval2._Mysize;
            (__return_storage_ptr__->deviceId)._Mypair._Myval2._Myres = uVar17;
            (pbVar8->_Mypair)._Myval2._Mysize = 0;
            (pbVar8->_Mypair)._Myval2._Myres = 0xf;
            (pbVar8->_Mypair)._Myval2._Bx._Buf[0] = '\0';
          }
          if (0xf < local_b8) {
            uVar17 = local_b8 + 1;
            uVar10 = local_d0._Ptr;
            if (0xfff < uVar17) {
              uVar17 = local_b8 + 0x28;
              uVar10 = *(undefined8 *)(local_d0._Ptr + -8);
              if ((char *)0x1f < local_d0._Ptr + (-8 - uVar10)) {
LAB_14d0c8d97:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar10,uVar17);
          }
          __return_storage_ptr__->probed = true;
          return __return_storage_ptr__;
        }
      }
    }
  }
  uVar16 = 0;
  iVar5 = DirectSoundCaptureCreate
                    ((this->dsDevices)._Mypair._Myval2._Myfirst[uVar12].id[1],&local_f8,0);
  if (iVar5 < 0) {
    pbVar6 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                        "RtApiDs::getDeviceInfo: error (");
    pcVar11 = getErrorString(iVar5);
    pbVar6 = std::operator<<<std::char_traits<char>_>(pbVar6,pcVar11);
    pbVar6 = std::operator<<<std::char_traits<char>_>(pbVar6,") opening input device (");
    pbVar7 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar12].name;
    p_Var4 = &pbVar7->_Mypair;
    if (0xf < (pbVar7->_Mypair)._Myval2._Myres) {
      pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                &(pbVar7->_Mypair)._Myval2._Bx;
    }
    pbVar6 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                       (pbVar6,(char *)pbVar7,(p_Var4->_Myval2)._Mysize);
    std::operator<<<std::char_traits<char>_>(pbVar6,")!");
    pbVar7 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                       ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                        &this->_padding_,
                        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d0
                       );
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               pbVar7);
    if (local_b8 < 0x10) goto LAB_14d0c8ec3;
    uVar17 = local_b8 + 1;
    uVar10 = local_d0._Ptr;
    if (0xfff < uVar17) {
      uVar17 = local_b8 + 0x28;
      uVar10 = *(char **)(local_d0._Ptr + -8);
      if ((char *)0x1f < local_d0._Ptr + (-8 - (longlong)*(char **)(local_d0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    local_e0[0] = 0x10;
    iVar5 = (**(code **)(*local_f8 + 0x20))(local_f8,local_e0);
    if (-1 < iVar5) {
      __return_storage_ptr__->inputChannels = local_d4;
      local_120._Mypair._Myval2._Myfirst = (uint *)0x0;
      local_120._Mypair._Myval2._Mylast = (uint *)0x0;
      local_120._Mypair._Myval2._Myend = (uint *)0x0;
      if (local_d4 < 2) {
        if (local_d4 != 1) {
          __return_storage_ptr__->inputChannels = 0;
          goto LAB_14d0c920c;
        }
        if ((local_d8 & 4) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 2;
        }
        if ((local_d8 & 0x40) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 2;
        }
        if ((local_d8 >> 10 & 1) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 2;
        }
        if ((local_d8 >> 0x12 & 1) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 2;
        }
        if ((local_d8 & 1) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 1;
        }
        if ((local_d8 & 0x10) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 1;
        }
        if ((local_d8 >> 8 & 1) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 1;
        }
        if ((local_d8 >> 0xc & 1) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 1;
        }
        if ((local_d8 >> 0x10 & 1) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 1;
        }
        if ((__return_storage_ptr__->nativeFormats & 2) == 0) {
          if ((__return_storage_ptr__->nativeFormats & 1) == 0) goto LAB_14d0c920c;
          if ((local_d8 & 1) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,0x2b11);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          if ((local_d8 & 0x10) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,0x5622);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          if ((local_d8 >> 8 & 1) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,0xac44);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          if ((local_d8 >> 0xc & 1) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,48000);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          bVar22 = (local_d8 & 0x10000) == 0;
        }
        else {
          if ((local_d8 & 4) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,0x2b11);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          if ((local_d8 & 0x40) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,0x5622);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          if ((local_d8 >> 10 & 1) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,0xac44);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          if ((local_d8 >> 0xe & 1) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,48000);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          bVar22 = (local_d8 & 0x40000) == 0;
        }
      }
      else {
        if ((local_d8 & 8) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 2;
        }
        if ((char)local_d8 < '\0') {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 2;
        }
        if ((local_d8 >> 0xb & 1) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 2;
        }
        if ((local_d8 >> 0x13 & 1) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 2;
        }
        if ((local_d8 & 2) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 1;
        }
        if ((local_d8 & 0x20) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 1;
        }
        if ((local_d8 >> 9 & 1) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 1;
        }
        if ((local_d8 >> 0xd & 1) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 1;
        }
        if ((local_d8 >> 0x11 & 1) != 0) {
          __return_storage_ptr__->nativeFormats = __return_storage_ptr__->nativeFormats | 1;
        }
        if ((__return_storage_ptr__->nativeFormats & 2) == 0) {
          if ((__return_storage_ptr__->nativeFormats & 1) == 0) goto LAB_14d0c920c;
          if ((local_d8 & 2) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,0x2b11);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          if ((local_d8 & 0x20) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,0x5622);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          if ((local_d8 >> 9 & 1) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,0xac44);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          if ((local_d8 >> 0xd & 1) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,48000);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          bVar22 = (local_d8 & 0x20000) == 0;
        }
        else {
          if ((local_d8 & 8) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,0x2b11);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          if ((char)local_d8 < '\0') {
            local_128 = (uint *)CONCAT44(local_128._4_4_,0x5622);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          if ((local_d8 >> 0xb & 1) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,0xac44);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          if ((local_d8 >> 0xf & 1) != 0) {
            local_128 = (uint *)CONCAT44(local_128._4_4_,48000);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                      (&local_120,(uint *)&local_128);
          }
          bVar22 = (local_d8 & 0x80000) == 0;
        }
      }
      if (!bVar22) {
        local_128 = (uint *)CONCAT44(local_128._4_4_,96000);
        std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
                  (&local_120,(uint *)&local_128);
      }
LAB_14d0c920c:
      (**(code **)(*local_f8 + 0x10))();
      if (__return_storage_ptr__->inputChannels == 0) {
        if (local_120._Mypair._Myval2._Myfirst == (uint *)0x0) {
          return __return_storage_ptr__;
        }
        std::allocator<unsigned_int>::deallocate
                  ((allocator<unsigned_int> *)&local_120,local_120._Mypair._Myval2._Myfirst,
                   (longlong)local_120._Mypair._Myval2._Myend -
                   (longlong)local_120._Mypair._Myval2._Myfirst >> 2);
        return __return_storage_ptr__;
      }
      puVar14 = local_120._Mypair._Myval2._Myfirst;
      if ((longlong)local_120._Mypair._Myval2._Mylast - (longlong)local_120._Mypair._Myval2._Myfirst
          >> 2 != 0) {
        do {
          uVar12 = 0;
          puVar13 = (__return_storage_ptr__->sampleRates)._Mypair._Myval2._Mylast;
          puVar3 = (__return_storage_ptr__->sampleRates)._Mypair._Myval2._Myfirst;
          if ((longlong)puVar13 - (longlong)puVar3 >> 2 != 0) {
            do {
              if (puVar14[uVar16] == puVar3[uVar12]) goto LAB_14d0c9395;
              uVar12 = (ulonglong)((int)uVar12 + 1);
            } while (uVar12 < (ulonglong)((longlong)puVar13 - (longlong)puVar3 >> 2));
          }
          local_128 = puVar14 + uVar16;
          puVar14 = (__return_storage_ptr__->sampleRates)._Mypair._Myval2._Myend;
          if (puVar13 == puVar14) {
            lVar20 = (longlong)puVar13 - (longlong)puVar3 >> 2;
            if (lVar20 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
            }
            uVar12 = (longlong)puVar14 - (longlong)puVar3 >> 2;
            if (0x3fffffffffffffff - (uVar12 >> 1) < uVar12) {
              uVar21 = 0x3fffffffffffffff;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
              uVar21 = lVar20 + 1U;
              if (lVar20 + 1U <= uVar12) {
                uVar21 = uVar12;
              }
              if (0x3fffffffffffffff < uVar21) {
                    /* WARNING: Subroutine does not return */
                std::_Throw_bad_array_new_length();
              }
            }
            _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar21 * 4);
            _Dst[lVar20] = *local_128;
            puVar14 = (__return_storage_ptr__->sampleRates)._Mypair._Myval2._Mylast;
            puVar3 = (__return_storage_ptr__->sampleRates)._Mypair._Myval2._Myfirst;
            if (puVar13 == puVar14) {
              _Size = (longlong)puVar14 - (longlong)puVar3;
              puVar14 = _Dst;
              puVar13 = puVar3;
            }
            else {
              memmove(_Dst,puVar3,(longlong)puVar13 - (longlong)puVar3);
              _Size = (longlong)(__return_storage_ptr__->sampleRates)._Mypair._Myval2._Mylast -
                      (longlong)puVar13;
              puVar14 = _Dst + lVar20 + 1;
            }
            memmove(puVar14,puVar13,_Size);
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Change_array
                      (&__return_storage_ptr__->sampleRates,_Dst,lVar20 + 1,uVar21);
            puVar14 = local_120._Mypair._Myval2._Myfirst;
          }
          else {
            *puVar13 = *local_128;
            ppuVar1 = &(__return_storage_ptr__->sampleRates)._Mypair._Myval2._Mylast;
            *ppuVar1 = *ppuVar1 + 1;
            puVar14 = local_120._Mypair._Myval2._Myfirst;
          }
LAB_14d0c9395:
          uVar16 = (ulonglong)((int)uVar16 + 1);
          this = local_f0;
          param_1 = local_104;
        } while (uVar16 < (ulonglong)
                          ((longlong)local_120._Mypair._Myval2._Mylast - (longlong)puVar14 >> 2));
      }
      uVar16 = 0;
      puVar14 = (__return_storage_ptr__->sampleRates)._Mypair._Myval2._Mylast;
      puVar13 = (__return_storage_ptr__->sampleRates)._Mypair._Myval2._Myfirst;
      std::_Sort_unchecked<unsigned_int_*,std::less<void>_>
                (puVar13,puVar14,(longlong)puVar14 - (longlong)puVar13 >> 2,(less<void>)0x0);
      puVar14 = (__return_storage_ptr__->sampleRates)._Mypair._Myval2._Myfirst;
      if ((longlong)(__return_storage_ptr__->sampleRates)._Mypair._Myval2._Mylast -
          (longlong)puVar14 >> 2 != 0) {
        uVar15 = __return_storage_ptr__->preferredSampleRate;
        do {
          uVar2 = puVar14[uVar16];
          if ((uVar15 < uVar2) && (uVar15 < 48000)) {
            __return_storage_ptr__->preferredSampleRate = uVar2;
            uVar15 = uVar2;
          }
          uVar16 = (ulonglong)((int)uVar16 + 1);
        } while (uVar16 < (ulonglong)
                          ((longlong)(__return_storage_ptr__->sampleRates)._Mypair._Myval2._Mylast -
                           (longlong)puVar14 >> 2));
      }
      uVar15 = __return_storage_ptr__->outputChannels;
      if ((uVar15 != 0) && (uVar2 = __return_storage_ptr__->inputChannels, uVar2 != 0)) {
        if (uVar2 < uVar15) {
          uVar15 = uVar2;
        }
        __return_storage_ptr__->duplexChannels = uVar15;
      }
      if (param_1 == 0) {
        __return_storage_ptr__->isDefaultInput = true;
      }
      pbVar7 = &(this->dsDevices)._Mypair._Myval2._Myfirst[param_1].name;
      if (&__return_storage_ptr__->name != pbVar7) {
        p_Var4 = &pbVar7->_Mypair;
        if (0xf < (pbVar7->_Mypair)._Myval2._Myres) {
          pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                    &(pbVar7->_Mypair)._Myval2._Bx;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (&__return_storage_ptr__->name,(char *)pbVar7,(p_Var4->_Myval2)._Mysize);
      }
      pbVar7 = convertGuidToStdString
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_d0,(this->dsDevices)._Mypair._Myval2._Myfirst[param_1].id[1]);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (&__return_storage_ptr__->deviceId,pbVar7);
      if (0xf < local_b8) {
        uVar17 = local_b8 + 1;
        uVar10 = local_d0._Ptr;
        if (0xfff < uVar17) {
          uVar17 = local_b8 + 0x28;
          uVar10 = *(undefined8 *)(local_d0._Ptr + -8);
          if ((char *)0x1f < local_d0._Ptr + (-8 - uVar10)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar17);
      }
      __return_storage_ptr__->probed = true;
      if (local_120._Mypair._Myval2._Myfirst == (uint *)0x0) {
        return __return_storage_ptr__;
      }
      uVar17 = (longlong)local_120._Mypair._Myval2._Myend -
               (longlong)local_120._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
      puVar14 = local_120._Mypair._Myval2._Myfirst;
      if (0xfff < uVar17) {
        uVar17 = uVar17 + 0x27;
        puVar14 = *(uint **)(local_120._Mypair._Myval2._Myfirst + -2);
        if (0x1f < (ulonglong)
                   ((longlong)local_120._Mypair._Myval2._Myfirst + (-8 - (longlong)puVar14))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(puVar14,uVar17);
      return __return_storage_ptr__;
    }
    (**(code **)(*local_f8 + 0x10))();
    pbVar6 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                        "RtApiDs::getDeviceInfo: error (");
    pcVar11 = getErrorString(iVar5);
    pbVar6 = std::operator<<<std::char_traits<char>_>(pbVar6,pcVar11);
    pbVar6 = std::operator<<<std::char_traits<char>_>(pbVar6,") getting object capabilities (");
    pbVar7 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar12].name;
    p_Var4 = &pbVar7->_Mypair;
    if (0xf < (pbVar7->_Mypair)._Myval2._Myres) {
      pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                &(pbVar7->_Mypair)._Myval2._Bx;
    }
    pbVar6 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                       (pbVar6,(char *)pbVar7,(p_Var4->_Myval2)._Mysize);
    std::operator<<<std::char_traits<char>_>(pbVar6,")!");
    pbVar7 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                       ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                        &this->_padding_,
                        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d0
                       );
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               pbVar7);
    if (local_b8 < 0x10) goto LAB_14d0c8ec3;
    uVar17 = local_b8 + 1;
    uVar10 = local_d0._Ptr;
    if (0xfff < uVar17) {
      uVar17 = local_b8 + 0x28;
      uVar10 = *(undefined8 *)(local_d0._Ptr + -8);
      if ((char *)0x1f < local_d0._Ptr + (-8 - uVar10)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  ::operator_delete((void *)uVar10,uVar17);
LAB_14d0c8ec3:
  RtApi::error((RtApi *)this,WARNING);
  return __return_storage_ptr__;
}

// getErrorString @ 14d0c9580

char * __cdecl getErrorString(int param_1)

{
  char *pcVar1;
  
  if (-0x7787fff6 < param_1) {
    switch(param_1) {
    case -0x7787ffe2:
      return "Control unavailable";
    default:
      return "DirectSound unknown error";
    case -0x7787ffce:
      return "Invalid call";
    case -0x7787ffba:
      return "Priority level needed";
    case -0x7787ff9c:
      return "The sample rate or the channel format is not supported";
    case -0x7787ff88:
      return "No driver";
    case -0x7787ff7e:
      return "Already initialized";
    case -0x7787ff6a:
      return "Buffer lost";
    case -0x7787ff60:
      return "Another application already has priority";
    case -0x7787ff56:
      return "Uninitialized";
    }
  }
  if (param_1 == -0x7787fff6) {
    return "Already allocated";
  }
  if (param_1 == -0x7fffbfff) {
    return "Not supported";
  }
  if (param_1 != -0x7fffbffb) {
    if (param_1 == -0x7ffbfef0) {
      return "No aggregation";
    }
    if (param_1 != -0x7ff8fff2) {
      pcVar1 = "DirectSound unknown error";
      if (param_1 == -0x7ff8ffa9) {
        pcVar1 = "Invalid parameter";
      }
      return pcVar1;
    }
    return "Out of memory";
  }
  return "Generic error";
}

// getStreamLatency @ 14d0c9730

long __thiscall RtApi::getStreamLatency(RtApi *this)

{
  StreamMode SVar1;
  ulong uVar2;
  
  if ((this->stream_).state == STREAM_CLOSED) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&this->errorText_,"RtApi:: a stream is not open!",0x1d);
    error(this,INVALID_USE);
  }
  SVar1 = (this->stream_).mode;
  uVar2 = 0;
  if ((SVar1 & ~DUPLEX) == OUTPUT) {
    uVar2 = (this->stream_).latency[0];
  }
  if (SVar1 - INPUT < 2) {
    uVar2 = uVar2 + (this->stream_).latency[1];
  }
  return uVar2;
}

// getStreamSampleRate @ 14d0c97a0

uint __thiscall RtApi::getStreamSampleRate(RtApi *this)

{
  if ((this->stream_).state == STREAM_CLOSED) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&this->errorText_,"RtApi:: a stream is not open!",0x1d);
    error(this,INVALID_USE);
    return (this->stream_).sampleRate;
  }
  return (this->stream_).sampleRate;
}

// getStreamTime @ 14d0c9800

double __thiscall RtApi::getStreamTime(RtApi *this)

{
  if ((this->stream_).state == STREAM_CLOSED) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&this->errorText_,"RtApi:: a stream is not open!",0x1d);
    error(this,INVALID_USE);
    return (this->stream_).streamTime;
  }
  return (this->stream_).streamTime;
}

// getVersion @ 14d0c9860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
RtAudio::getVersion(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                    *__return_storage_ptr__)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 5;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  *(undefined4 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = _s_5_0_0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[4] = DAT_152ab59b8;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[5] = '\0';
  return __return_storage_ptr__;
}

// openRtApi @ 14d0c98a0

void __thiscall RtAudio::openRtApi(RtAudio *this,Api param_1)

{
  basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  HRESULT HVar1;
  RtApi *pRVar2;
  
  pRVar2 = this->rtapi_;
  if (pRVar2 != (RtApi *)0x0) {
    (**(code **)pRVar2->_padding_)(pRVar2,1);
  }
  this->rtapi_ = (RtApi *)0x0;
  if (param_1 == WINDOWS_DS) {
    pRVar2 = ::operator_new(0x2a8);
    if (pRVar2 == (RtApi *)0x0) {
      pRVar2 = (RtApi *)0x0;
    }
    else {
      pRVar2->_padding_ = (longlong)&___7RtApi__6B_;
      this_00 = &pRVar2->errorStream_;
      *(undefined1 **)this_00 =
           &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_;
      std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                ((basic_ios<char,std::char_traits<char>_> *)&(pRVar2->errorStream_).field_0x88);
      std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)this_00,
                 (basic_streambuf<char,std::char_traits<char>_> *)
                 &(pRVar2->errorStream_)._Stringbuffer,false);
      *(undefined ***)(&this_00->field_0x0 + *(int *)(*(longlong *)this_00 + 4)) =
           std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((longlong)*(int *)(*(longlong *)this_00 + 4) + -4 + (longlong)this_00) =
           *(int *)(*(longlong *)this_00 + 4) + -0x88;
      std::basic_streambuf<char,std::char_traits<char>_>::
      basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)
                 &(pRVar2->errorStream_)._Stringbuffer);
      (pRVar2->errorStream_)._Stringbuffer._padding_ =
           (longlong)
           std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      (pRVar2->errorStream_)._Stringbuffer._Seekhigh = (char *)0x0;
      (pRVar2->errorStream_)._Stringbuffer._Mystate = 4;
      (pRVar2->errorText_)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
      *(undefined8 *)((longlong)&(pRVar2->errorText_)._Mypair._Myval2._Bx + 8) = 0;
      (pRVar2->errorText_)._Mypair._Myval2._Mysize = 0;
      (pRVar2->errorText_)._Mypair._Myval2._Myres = 0xf;
      (pRVar2->errorText_)._Mypair._Myval2._Bx._Buf[0] = '\0';
      (pRVar2->stream_).apiHandle = (void *)0x0;
      (pRVar2->stream_).deviceBuffer = (char *)0x0;
      (pRVar2->stream_).callbackInfo.object = (void *)0x0;
      (pRVar2->stream_).callbackInfo.callback = (void *)0x0;
      (pRVar2->stream_).callbackInfo.userData = (void *)0x0;
      (pRVar2->stream_).callbackInfo.errorCallback = (void *)0x0;
      (pRVar2->stream_).callbackInfo.apiInfo = (void *)0x0;
      (pRVar2->stream_).callbackInfo.isRunning = false;
      (pRVar2->stream_).callbackInfo.doRealtime = false;
      (pRVar2->stream_).callbackInfo.priority = 0;
      _eh_vector_constructor_iterator_
                ((pRVar2->stream_).convertInfo,0x48,2,RtApi::ConvertInfo::ConvertInfo,
                 RtApi::ConvertInfo::~ConvertInfo);
      (pRVar2->stream_).device[0] = 0x2b67;
      (pRVar2->stream_).device[1] = 0x2b67;
      (pRVar2->stream_).state = STREAM_CLOSED;
      (pRVar2->stream_).mode = UNINITIALIZED;
      (pRVar2->stream_).apiHandle = (void *)0x0;
      (pRVar2->stream_).userBuffer[0] = (char *)0x0;
      (pRVar2->stream_).userBuffer[1] = (char *)0x0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&(pRVar2->stream_).mutex);
      pRVar2->showWarnings_ = true;
      pRVar2->firstErrorOccurred_ = false;
      pRVar2->_padding_ = (longlong)&___7RtApiDs__6B_;
      *(undefined8 *)&pRVar2[1].errorStream_ = 0;
      pRVar2[1].errorStream_._Stringbuffer._padding_ = 0;
      pRVar2[1].errorStream_._Stringbuffer._padding_ = 0;
      *(undefined1 *)&pRVar2[1]._padding_ = 0;
      HVar1 = CoInitialize((LPVOID)0x0);
      if (-1 < HVar1) {
        *(undefined1 *)&pRVar2[1]._padding_ = 1;
      }
    }
    this->rtapi_ = pRVar2;
  }
  return;
}

// openStream @ 14d0c9ab0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
RtApi::openStream(RtApi *this,StreamParameters *param_1,StreamParameters *param_2,ulong param_3,
                 uint param_4,uint *param_5,
                 _func___cdecl_int_void_ptr_void_ptr_uint_double_uint_void_ptr *param_6,
                 void *param_7,StreamOptions *param_8,
                 _func___cdecl_void_Type_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
                 *param_9)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  ulong64 uVar6;
  uint uVar7;
  
  if ((this->stream_).state != STREAM_CLOSED) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&this->errorText_,"RtApi::openStream: a stream is already open!",0x2c);
    error(this,INVALID_USE);
    return;
  }
  (this->stream_).mode = UNINITIALIZED;
  (this->stream_).state = STREAM_CLOSED;
  (this->stream_).userInterleaved = true;
  (this->stream_).deviceInterleaved[0] = true;
  (this->stream_).sampleRate = 0;
  (this->stream_).bufferSize = 0;
  (this->stream_).nBuffers = 0;
  (this->stream_).nUserChannels[0] = 0;
  (this->stream_).userFormat = 0;
  (this->stream_).deviceFormat[0] = 0;
  (this->stream_).streamTime = 0.0;
  (this->stream_).apiHandle = (void *)0x0;
  (this->stream_).deviceBuffer = (char *)0x0;
  (this->stream_).callbackInfo.callback = (void *)0x0;
  (this->stream_).callbackInfo.userData = (void *)0x0;
  (this->stream_).callbackInfo.isRunning = false;
  (this->stream_).callbackInfo.errorCallback = (void *)0x0;
  (this->stream_).device[0] = 0x2b67;
  (this->stream_).doConvertBuffer[0] = false;
  (this->stream_).doByteSwap[0] = false;
  uVar7 = 0;
  (this->stream_).nDeviceChannels[0] = 0;
  (this->stream_).channelOffset[0] = 0;
  (this->stream_).latency[0] = 0;
  (this->stream_).userBuffer[0] = (char *)0x0;
  (this->stream_).convertInfo[0].channels = 0;
  (this->stream_).convertInfo[0].inJump = 0;
  (this->stream_).convertInfo[0].outJump = 0;
  (this->stream_).convertInfo[0].inFormat = 0;
  (this->stream_).convertInfo[0].outFormat = 0;
  piVar1 = (this->stream_).convertInfo[0].inOffset._Mypair._Myval2._Myfirst;
  if (piVar1 != (this->stream_).convertInfo[0].inOffset._Mypair._Myval2._Mylast) {
    (this->stream_).convertInfo[0].inOffset._Mypair._Myval2._Mylast = piVar1;
  }
  piVar1 = (this->stream_).convertInfo[0].outOffset._Mypair._Myval2._Myfirst;
  if (piVar1 != (this->stream_).convertInfo[0].outOffset._Mypair._Myval2._Mylast) {
    (this->stream_).convertInfo[0].outOffset._Mypair._Myval2._Mylast = piVar1;
  }
  (this->stream_).device[1] = 0x2b67;
  (this->stream_).doConvertBuffer[1] = false;
  (this->stream_).deviceInterleaved[1] = true;
  (this->stream_).doByteSwap[1] = false;
  (this->stream_).nUserChannels[1] = 0;
  (this->stream_).nDeviceChannels[1] = 0;
  (this->stream_).channelOffset[1] = 0;
  (this->stream_).deviceFormat[1] = 0;
  (this->stream_).latency[1] = 0;
  (this->stream_).userBuffer[1] = (char *)0x0;
  (this->stream_).convertInfo[1].channels = 0;
  (this->stream_).convertInfo[1].inJump = 0;
  (this->stream_).convertInfo[1].outJump = 0;
  (this->stream_).convertInfo[1].inFormat = 0;
  (this->stream_).convertInfo[1].outFormat = 0;
  piVar1 = (this->stream_).convertInfo[1].inOffset._Mypair._Myval2._Myfirst;
  if (piVar1 != (this->stream_).convertInfo[1].inOffset._Mypair._Myval2._Mylast) {
    (this->stream_).convertInfo[1].inOffset._Mypair._Myval2._Mylast = piVar1;
  }
  piVar1 = (this->stream_).convertInfo[1].outOffset._Mypair._Myval2._Myfirst;
  if (piVar1 != (this->stream_).convertInfo[1].outOffset._Mypair._Myval2._Mylast) {
    (this->stream_).convertInfo[1].outOffset._Mypair._Myval2._Mylast = piVar1;
  }
  if ((param_1 == (StreamParameters *)0x0) || (param_1->nChannels != 0)) {
    if ((param_2 == (StreamParameters *)0x0) || (param_2->nChannels != 0)) {
      if ((param_1 == (StreamParameters *)0x0) && (param_2 == (StreamParameters *)0x0)) {
        pcVar5 = "RtApi::openStream: input and output StreamParameters structures are both NULL!";
        uVar6 = 0x4e;
      }
      else {
        uVar3 = formatBytes(this,param_3);
        if (uVar3 != 0) {
          uVar4 = (**(code **)(this->_padding_ + 0x10))(this);
          uVar3 = uVar7;
          if ((param_1 == (StreamParameters *)0x0) ||
             (uVar3 = param_1->nChannels, param_1->deviceId < uVar4)) {
            if ((param_2 == (StreamParameters *)0x0) ||
               (uVar7 = param_2->nChannels, param_2->deviceId < uVar4)) {
              if ((uVar3 == 0) ||
                 (cVar2 = (**(code **)(this->_padding_ + 0x60))
                                    (this,param_1->deviceId,0,uVar3,param_1->firstChannel,param_4,
                                     param_3,param_5,param_8), cVar2 != '\0')) {
                if ((uVar7 == 0) ||
                   (cVar2 = (**(code **)(this->_padding_ + 0x60))
                                      (this,param_2->deviceId,1,uVar7,param_2->firstChannel,param_4,
                                       param_3,param_5,param_8), cVar2 != '\0')) {
                  (this->stream_).callbackInfo.callback = param_6;
                  (this->stream_).callbackInfo.userData = param_7;
                  (this->stream_).callbackInfo.errorCallback = param_9;
                  if (param_8 != (StreamOptions *)0x0) {
                    param_8->numberOfBuffers = (this->stream_).nBuffers;
                  }
                  (this->stream_).state = STREAM_STOPPED;
                  return;
                }
                if (uVar3 != 0) {
                  (**(code **)(this->_padding_ + 0x30))(this);
                }
              }
              error(this,SYSTEM_ERROR);
            }
            else {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                        (&this->errorText_,
                         "RtApi::openStream: input device parameter value is invalid.",0x3b);
              error(this,INVALID_USE);
            }
          }
          else {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (&this->errorText_,
                       "RtApi::openStream: output device parameter value is invalid.",0x3c);
            error(this,INVALID_USE);
          }
          return;
        }
        uVar6 = 0x39;
        pcVar5 = "RtApi::openStream: \'format\' parameter value is undefined.";
      }
    }
    else {
      pcVar5 = 
      "RtApi::openStream: a non-NULL input StreamParameters structure cannot have an nChannels value less than one."
      ;
      uVar6 = 0x6c;
    }
  }
  else {
    pcVar5 = 
    "RtApi::openStream: a non-NULL output StreamParameters structure cannot have an nChannels value less than one."
    ;
    uVar6 = 0x6d;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&this->errorText_,pcVar5,uVar6);
  error(this,INVALID_USE);
  return;
}

// openStream @ 14d0c9ed0

void __thiscall
RtAudio::openStream(RtAudio *this,StreamParameters *param_1,StreamParameters *param_2,ulong param_3,
                   uint param_4,uint *param_5,
                   _func___cdecl_int_void_ptr_void_ptr_uint_double_uint_void_ptr *param_6,
                   void *param_7,StreamOptions *param_8,
                   _func___cdecl_void_Type_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
                   *param_9)

{
  RtApi::openStream(this->rtapi_,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9);
  return;
}

// probeDeviceOpen @ 14d0c9ee0

bool __thiscall
RtApi::probeDeviceOpen
          (RtApi *this,uint param_1,StreamMode param_2,uint param_3,uint param_4,uint param_5,
          ulong param_6,uint *param_7,StreamOptions *param_8)

{
  return false;
}

// probeDeviceOpen @ 14d0c9ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
RtApiDs::probeDeviceOpen
          (RtApiDs *this,uint param_1,StreamMode param_2,uint param_3,uint param_4,uint param_5,
          ulong param_6,uint *param_7,StreamOptions *param_8)

{
  int iVar1;
  DsDevice *pDVar2;
  longlong *plVar3;
  undefined2 uVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  StreamMode SVar12;
  basic_ostream<char,std::char_traits<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  undefined8 uVar15;
  char *pcVar16;
  void *pvVar17;
  HANDLE pvVar18;
  longlong lVar19;
  ulong uVar20;
  ulong64 uVar21;
  HWND pHVar22;
  HWND pHVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  undefined1 auStackY_1d8 [32];
  longlong *local_198;
  longlong *local_190;
  StreamMode local_188;
  uint local_184;
  longlong *local_180;
  uint local_178;
  uint local_174;
  void *local_170;
  uint *local_168;
  undefined8 local_160;
  uint local_158;
  undefined4 local_154;
  undefined2 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  _Bxty local_138;
  undefined2 *puStack_128;
  ulonglong local_120;
  undefined8 uStack_118;
  undefined2 local_110;
  ushort local_10e;
  uint local_10c;
  undefined8 local_108;
  undefined2 local_100;
  _Bxty local_f8;
  ulonglong local_e0;
  _Bxty local_d8;
  ulonglong local_c0;
  undefined4 local_b8;
  uint local_b4;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar25 = (ulonglong)param_1;
  local_168 = param_7;
  local_188 = param_2;
  local_178 = param_3;
  local_174 = param_1;
  if (2 < param_4 + param_3) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               "RtApiDs::probeDeviceOpen: DirectSound does not support more than 2 channels per device."
               ,0x57);
    return false;
  }
  pDVar2 = (this->dsDevices)._Mypair._Myval2._Myfirst;
  lVar19 = (longlong)(this->dsDevices)._Mypair._Myval2._Mylast - (longlong)pDVar2;
  lVar24 = lVar19 >> 0x3f;
  lVar19 = lVar19 / 0x38 + lVar24;
  if (lVar19 == lVar24) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               "RtApiDs::probeDeviceOpen: no devices found!",0x2b);
    return false;
  }
  if ((ulonglong)(lVar19 - lVar24) <= uVar25) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               "RtApiDs::probeDeviceOpen: device ID is invalid!",0x2f);
    return false;
  }
  if (param_2 == OUTPUT) {
    if (pDVar2[uVar25].validId[0] == false) {
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: device (");
      pbVar13 = (basic_ostream<char,std::char_traits<char>_> *)
                std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar13,param_1);
      std::operator<<<std::char_traits<char>_>(pbVar13,") does not support output!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_d8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_c0 < 0x10) {
        return false;
      }
      pHVar22 = (HWND)CONCAT44(local_d8._4_4_,local_d8._0_4_);
      uVar21 = local_c0 + 1;
      uVar15 = pHVar22;
      if (0xfff < uVar21) {
        uVar21 = local_c0 + 0x28;
        uVar15 = *(HWND *)(pHVar22 + -2);
        if (0x1f < (ulonglong)((longlong)pHVar22 + (-8 - (longlong)*(HWND *)(pHVar22 + -2)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
  }
  else if (pDVar2[uVar25].validId[1] == false) {
    pbVar13 = std::operator<<<std::char_traits<char>_>
                        ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                         "RtApiDs::probeDeviceOpen: device (");
    pbVar13 = (basic_ostream<char,std::char_traits<char>_> *)
              std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar13,param_1);
    std::operator<<<std::char_traits<char>_>(pbVar13,") does not support input!");
    pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                        ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                         &this->_padding_,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_d8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               pbVar14);
    if (local_c0 < 0x10) {
      return false;
    }
    pHVar22 = (HWND)CONCAT44(local_d8._4_4_,local_d8._0_4_);
    uVar21 = local_c0 + 1;
    uVar15 = pHVar22;
    if (0xfff < uVar21) {
      uVar15 = *(undefined8 *)(pHVar22 + -2);
      uVar21 = local_c0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pHVar22 + (-8 - uVar15))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    goto LAB_14d0cb4b3;
  }
  uVar15 = GetDesktopWindow();
  if (param_8 == (StreamOptions *)0x0) {
LAB_14d0ca18a:
    local_184 = 3;
  }
  else {
    local_184 = param_8->numberOfBuffers;
    if ((param_8->flags & 2) == 0) {
      if ((int)local_184 < 2) goto LAB_14d0ca18a;
    }
    else {
      local_184 = 2;
    }
  }
  if (*param_7 < 0x20) {
    *param_7 = 0x20;
  }
  pHVar22 = (HWND)0x0;
  local_110 = 1;
  iVar7 = 0;
  local_10e = (short)param_4 + (short)param_3;
  local_108 = 0;
  uVar26 = 0x8000;
  local_10c = param_5;
  local_100 = 0;
  local_180 = (longlong *)0x0;
  local_198 = (longlong *)0x0;
  local_f8._Ptr = (char *)uVar15;
  if (param_2 == OUTPUT) {
    iVar7 = DirectSoundCreate((this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].id[0],&local_190,0)
    ;
    if (iVar7 < 0) {
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: error (");
      pcVar16 = getErrorString(iVar7);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,") opening output device (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,")!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_f8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_e0 < 0x10) {
        return false;
      }
      uVar21 = local_e0 + 1;
      uVar15 = local_f8._Ptr;
      if (0xfff < uVar21) {
        uVar21 = local_e0 + 0x28;
        uVar15 = *(HWND *)(local_f8._Ptr + -8);
        if ((char *)0x1f < local_f8._Ptr + (-8 - (longlong)*(HWND *)(local_f8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
LAB_14d0cb4b3:
      ::operator_delete((void *)uVar15,uVar21);
      return false;
    }
    local_b8 = 0x60;
    iVar7 = (**(code **)(*local_190 + 0x20))(local_190,&local_b8);
    if (iVar7 < 0) {
      (**(code **)(*local_190 + 0x10))();
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: error (");
      pcVar16 = getErrorString(iVar7);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,") getting capabilities (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,")!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_f8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_e0 < 0x10) {
        return false;
      }
      uVar21 = local_e0 + 1;
      uVar15 = local_f8._Ptr;
      if (0xfff < uVar21) {
        uVar21 = local_e0 + 0x28;
        uVar15 = *(HWND *)(local_f8._Ptr + -8);
        if ((char *)0x1f < local_f8._Ptr + (-8 - (longlong)*(HWND *)(local_f8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
    if ((param_4 + local_178 == 2) && ((local_b4 & 2) == 0)) {
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::getDeviceInfo: the output device (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,") does not support stereo playback.");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_f8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_e0 < 0x10) {
        return false;
      }
      uVar21 = local_e0 + 1;
      uVar15 = local_f8._Ptr;
      if (0xfff < uVar21) {
        uVar21 = local_e0 + 0x28;
        uVar15 = *(HWND *)(local_f8._Ptr + -8);
        if ((char *)0x1f < local_f8._Ptr + (-8 - (longlong)*(HWND *)(local_f8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
    if (((local_b4 & 8) == 0) || ((param_6 == 1 && ((local_b4 & 4) != 0)))) {
      uVar11 = 8;
      uVar8 = 1;
      uVar4 = 8;
    }
    else {
      uVar8 = 2;
      uVar4 = 0x10;
      uVar11 = 0x10;
      uVar15 = local_f8._Ptr;
    }
    *(undefined4 *)&this->_padding_ = uVar8;
    *(ulong *)((longlong)&this->_padding_ + 4) = param_6;
    uVar9 = (int)(local_10e * uVar11) >> 3;
    local_108 = CONCAT44(CONCAT22(uVar4,(short)uVar9),(uVar9 & 0xffff) * local_10c);
    iVar7 = (uVar11 >> 3) * *local_168 * local_178 * local_184;
    if (0x8000 < (uint)(iVar7 * 2)) {
      do {
        uVar26 = uVar26 * 2;
      } while ((uint)uVar26 < (uint)(iVar7 * 2));
    }
    iVar10 = (**(code **)(*local_190 + 0x30))(local_190,uVar15,2);
    if (iVar10 < 0) {
      (**(code **)(*local_190 + 0x10))();
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: error (");
      pcVar16 = getErrorString(iVar10);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,") setting cooperative level (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,")!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_f8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_e0 < 0x10) {
        return false;
      }
      uVar21 = local_e0 + 1;
      uVar15 = local_f8._Ptr;
      if (0xfff < uVar21) {
        uVar21 = local_e0 + 0x28;
        uVar15 = *(HWND *)(local_f8._Ptr + -8);
        if ((char *)0x1f < local_f8._Ptr + (-8 - (longlong)*(HWND *)(local_f8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
    local_138._0_4_ = 0x28;
    local_138._4_4_ = 1;
    local_138._8_8_ = 0;
    puStack_128 = (undefined2 *)0x0;
    local_120 = 0;
    uStack_118 = 0;
    iVar10 = (**(code **)(*local_190 + 0x18))(local_190,&local_138,&local_198);
    if (iVar10 < 0) {
      (**(code **)(*local_190 + 0x10))();
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: error (");
      pcVar16 = getErrorString(iVar10);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,") accessing primary buffer (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,")!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_f8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_e0 < 0x10) {
        return false;
      }
      uVar21 = local_e0 + 1;
      uVar15 = local_f8._Ptr;
      if (0xfff < uVar21) {
        uVar21 = local_e0 + 0x28;
        uVar15 = *(HWND *)(local_f8._Ptr + -8);
        if ((char *)0x1f < local_f8._Ptr + (-8 - (longlong)*(HWND *)(local_f8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
    iVar10 = (**(code **)(*local_198 + 0x70))(local_198,&local_110);
    if (iVar10 < 0) {
      (**(code **)(*local_190 + 0x10))();
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: error (");
      pcVar16 = getErrorString(iVar10);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          (pbVar13,") setting primary buffer format (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,")!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_f8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_e0 < 0x10) {
        return false;
      }
      uVar21 = local_e0 + 1;
      uVar15 = local_f8._Ptr;
      if (0xfff < uVar21) {
        uVar21 = local_e0 + 0x28;
        uVar15 = *(HWND *)(local_f8._Ptr + -8);
        if ((char *)0x1f < local_f8._Ptr + (-8 - (longlong)*(HWND *)(local_f8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
    puStack_128 = &local_110;
    local_138._0_4_ = 0x28;
    local_120 = 0;
    uStack_118 = 0;
    local_138._4_4_ = 0x1c004;
    local_138._12_4_ = 0;
    local_138._8_4_ = uVar26;
    iVar10 = (**(code **)(*local_190 + 0x18))(local_190,&local_138,&local_198);
    if (iVar10 < 0) {
      local_138._4_4_ = 0x1c008;
      iVar10 = (**(code **)(*local_190 + 0x18))(local_190,&local_138,&local_198);
      if (iVar10 < 0) {
        (**(code **)(*local_190 + 0x10))();
        pbVar13 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                             "RtApiDs::probeDeviceOpen: error (");
        pcVar16 = getErrorString(iVar10);
        pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
        pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,") creating secondary buffer (");
        pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
        p_Var5 = &pbVar14->_Mypair;
        if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
          pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                     &(pbVar14->_Mypair)._Myval2._Bx;
        }
        pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                            (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
        std::operator<<<std::char_traits<char>_>(pbVar13,")!");
        pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                            ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
                              *)&this->_padding_,
                             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_f8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   &this->_padding_,pbVar14);
        if (local_e0 < 0x10) {
          return false;
        }
        uVar21 = local_e0 + 1;
        uVar15 = local_f8._Ptr;
        if (0xfff < uVar21) {
          uVar21 = local_e0 + 0x28;
          uVar15 = *(HWND *)(local_f8._Ptr + -8);
          if ((char *)0x1f < local_f8._Ptr + (-8 - (longlong)*(HWND *)(local_f8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        goto LAB_14d0cb4b3;
      }
    }
    local_d8._0_4_ = 0x14;
    iVar10 = (**(code **)(*local_198 + 0x18))(local_198,&local_d8);
    if (iVar10 < 0) {
      (**(code **)(*local_190 + 0x10))();
      (**(code **)(*local_198 + 0x10))();
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: error (");
      pcVar16 = getErrorString(iVar10);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,") getting buffer settings (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,")!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_f8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_e0 < 0x10) {
        return false;
      }
      uVar21 = local_e0 + 1;
      uVar15 = local_f8._Ptr;
      if (0xfff < uVar21) {
        uVar21 = local_e0 + 0x28;
        uVar15 = *(HWND *)(local_f8._Ptr + -8);
        if ((char *)0x1f < local_f8._Ptr + (-8 - (longlong)*(HWND *)(local_f8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
    iVar10 = (**(code **)(*local_198 + 0x58))(local_198,0,local_d8._8_4_);
    if (iVar10 < 0) {
      (**(code **)(*local_190 + 0x10))();
      (**(code **)(*local_198 + 0x10))();
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: error (");
      pcVar16 = getErrorString(iVar10);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,") locking buffer (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,")!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_f8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_e0 < 0x10) {
        return false;
      }
      uVar21 = local_e0 + 1;
      uVar15 = local_f8._Ptr;
      if (0xfff < uVar21) {
        uVar21 = local_e0 + 0x28;
        uVar15 = *(HWND *)(local_f8._Ptr + -8);
        if ((char *)0x1f < local_f8._Ptr + (-8 - (longlong)*(HWND *)(local_f8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
    memset(local_170,0,(ulonglong)local_180 & 0xffffffff);
    iVar10 = (**(code **)(*local_198 + 0x98))(local_198,local_170);
    if (iVar10 < 0) {
      (**(code **)(*local_190 + 0x10))();
      (**(code **)(*local_198 + 0x10))();
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: error (");
      pcVar16 = getErrorString(iVar10);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,") unlocking buffer (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,")!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_f8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_e0 < 0x10) {
        return false;
      }
      uVar21 = local_e0 + 1;
      uVar15 = local_f8._Ptr;
      if (0xfff < uVar21) {
        uVar21 = local_e0 + 0x28;
        uVar15 = *(HWND *)(local_f8._Ptr + -8);
        if ((char *)0x1f < local_f8._Ptr + (-8 - (longlong)*(HWND *)(local_f8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
    local_180 = local_190;
    param_2 = local_188;
    uVar26 = local_d8._8_4_;
  }
  else if (param_2 == INPUT) {
    iVar7 = DirectSoundCaptureCreate
                      ((this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].id[1],&local_198,0);
    if (iVar7 < 0) {
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: error (");
      pcVar16 = getErrorString(iVar7);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,") opening input device (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,")!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_138);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_120 < 0x10) {
        return false;
      }
      pHVar22 = (HWND)CONCAT44(local_138._4_4_,local_138._0_4_);
      uVar21 = local_120 + 1;
      uVar15 = pHVar22;
      if (0xfff < uVar21) {
        uVar21 = local_120 + 0x28;
        uVar15 = *(HWND *)(pHVar22 + -2);
        if (0x1f < (ulonglong)((longlong)pHVar22 + (-8 - (longlong)*(HWND *)(pHVar22 + -2)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
    local_f8._0_4_ = 0x10;
    iVar7 = (**(code **)(*local_198 + 0x20))(local_198,&local_f8);
    if (iVar7 < 0) {
      (**(code **)(*local_198 + 0x10))();
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: error (");
      pcVar16 = getErrorString(iVar7);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,") getting input capabilities (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,")!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_138);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_120 < 0x10) {
        return false;
      }
      pHVar22 = (HWND)CONCAT44(local_138._4_4_,local_138._0_4_);
      uVar21 = local_120 + 1;
      uVar15 = pHVar22;
      if (0xfff < uVar21) {
        uVar21 = local_120 + 0x28;
        uVar15 = *(HWND *)(pHVar22 + -2);
        if (0x1f < (ulonglong)((longlong)pHVar22 + (-8 - (longlong)*(HWND *)(pHVar22 + -2)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
    if ((uint)local_f8._12_4_ < param_4 + local_178) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,
                 "RtApiDs::getDeviceInfo: the input device does not support requested input channels."
                 ,0x53);
      return false;
    }
    uVar20 = param_6;
    if (param_4 + local_178 == 2) {
      if ((param_6 == 1) && ((local_f8._8_4_ & 0x20222) != 0)) {
        uVar11 = 8;
        local_108._6_2_ = 8;
      }
      else {
        local_108._6_2_ = 0x10;
        uVar11 = 0x10;
        uVar20 = 2;
      }
    }
    else if ((param_6 == 1) && ((local_f8._8_4_ & 0x10111) != 0)) {
      uVar11 = 8;
      local_108._6_2_ = 8;
    }
    else {
      local_108._6_2_ = 0x10;
      uVar11 = 0x10;
      uVar20 = 2;
    }
    *(ulong *)((longlong)&this->_padding_ + 4) = uVar20;
    *(ulong *)((longlong)&this->_padding_ + 4) = param_6;
    uVar9 = (int)(local_10e * uVar11) >> 3;
    local_108 = CONCAT44(CONCAT22(local_108._6_2_,(short)uVar9),(uVar9 & 0xffff) * local_10c);
    iVar7 = (uVar11 >> 3) * *local_168 * local_178 * local_184;
    if (0x8000 < (uint)(iVar7 * 2)) {
      do {
        uVar26 = uVar26 * 2;
      } while ((uint)uVar26 < (uint)(iVar7 * 2));
    }
    local_150 = &local_110;
    local_160 = 0x28;
    local_148 = 0;
    uStack_140 = 0;
    local_154 = 0;
    local_158 = uVar26;
    iVar10 = (**(code **)(*local_198 + 0x18))(local_198,&local_160,&local_190);
    if (iVar10 < 0) {
      (**(code **)(*local_198 + 0x10))();
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: error (");
      pcVar16 = getErrorString(iVar10);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,") creating input buffer (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,")!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_138);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_120 < 0x10) {
        return false;
      }
      pHVar22 = (HWND)CONCAT44(local_138._4_4_,local_138._0_4_);
      uVar21 = local_120 + 1;
      uVar15 = pHVar22;
      if (0xfff < uVar21) {
        uVar21 = local_120 + 0x28;
        uVar15 = *(HWND *)(pHVar22 + -2);
        if (0x1f < (ulonglong)((longlong)pHVar22 + (-8 - (longlong)*(HWND *)(pHVar22 + -2)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
    local_d8._0_4_ = 0x10;
    iVar10 = (**(code **)(*local_190 + 0x18))(local_190,&local_d8);
    if (iVar10 < 0) {
      (**(code **)(*local_198 + 0x10))();
      (**(code **)(*local_190 + 0x10))();
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: error (");
      pcVar16 = getErrorString(iVar10);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,") getting buffer settings (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,")!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_138);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_120 < 0x10) {
        return false;
      }
      pHVar22 = (HWND)CONCAT44(local_138._4_4_,local_138._0_4_);
      uVar21 = local_120 + 1;
      uVar15 = pHVar22;
      if (0xfff < uVar21) {
        uVar21 = local_120 + 0x28;
        uVar15 = *(HWND *)(pHVar22 + -2);
        if (0x1f < (ulonglong)((longlong)pHVar22 + (-8 - (longlong)*(HWND *)(pHVar22 + -2)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
    iVar10 = (**(code **)(*local_190 + 0x40))(local_190,0,local_d8._8_4_);
    if (iVar10 < 0) {
      (**(code **)(*local_198 + 0x10))();
      (**(code **)(*local_190 + 0x10))();
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: error (");
      pcVar16 = getErrorString(iVar10);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,") locking input buffer (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,")!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_138);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_120 < 0x10) {
        return false;
      }
      pHVar22 = (HWND)CONCAT44(local_138._4_4_,local_138._0_4_);
      uVar21 = local_120 + 1;
      uVar15 = pHVar22;
      if (0xfff < uVar21) {
        uVar21 = local_120 + 0x28;
        uVar15 = *(HWND *)(pHVar22 + -2);
        if (0x1f < (ulonglong)((longlong)pHVar22 + (-8 - (longlong)*(HWND *)(pHVar22 + -2)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
    memset(local_170,0,(ulonglong)local_180 & 0xffffffff);
    iVar10 = (**(code **)(*local_190 + 0x58))(local_190,local_170);
    if (iVar10 < 0) {
      (**(code **)(*local_198 + 0x10))();
      (**(code **)(*local_190 + 0x10))();
      pbVar13 = std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                           "RtApiDs::probeDeviceOpen: error (");
      pcVar16 = getErrorString(iVar10);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,pcVar16);
      pbVar13 = std::operator<<<std::char_traits<char>_>(pbVar13,") unlocking input buffer (");
      pbVar14 = &(this->dsDevices)._Mypair._Myval2._Myfirst[uVar25].name;
      p_Var5 = &pbVar14->_Mypair;
      if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
        pbVar14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                   &(pbVar14->_Mypair)._Myval2._Bx;
      }
      pbVar13 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (pbVar13,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
      std::operator<<<std::char_traits<char>_>(pbVar13,")!");
      pbVar14 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                          ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )&this->_padding_,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_138);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar14);
      if (local_120 < 0x10) {
        return false;
      }
      pHVar22 = (HWND)CONCAT44(local_138._4_4_,local_138._0_4_);
      uVar21 = local_120 + 1;
      uVar15 = pHVar22;
      if (0xfff < uVar21) {
        uVar21 = local_120 + 0x28;
        uVar15 = *(HWND *)(pHVar22 + -2);
        if (0x1f < (ulonglong)((longlong)pHVar22 + (-8 - (longlong)*(HWND *)(pHVar22 + -2)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14d0cb4b3;
    }
    local_180 = local_198;
    local_198 = local_190;
    param_2 = local_188;
    uVar26 = local_d8._8_4_;
  }
  lVar24 = (longlong)(int)param_2;
  *(uint *)((longlong)&this->_padding_ + lVar24 * 4 + 4) = local_178 + param_4;
  *(uint *)((longlong)&this->_padding_ + lVar24 * 4 + 4) = local_178;
  *(uint *)((longlong)&this->_padding_ + 4) = *local_168;
  *(uint *)((longlong)&this->_padding_ + lVar24 * 4 + 4) = param_4;
  *(undefined1 *)((longlong)&this->_padding_ + lVar24 + 3) = 1;
  if ((param_8 == (StreamOptions *)0x0) || ((param_8->flags & 1) == 0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 2) = uVar6;
  *(undefined1 *)((longlong)&this->_padding_ + lVar24) = 0;
  if (*(int *)((longlong)&this->_padding_ + lVar24 * 4 + 4) !=
      *(int *)((longlong)&this->_padding_ + lVar24 * 4 + 4)) {
    *(undefined1 *)((longlong)&this->_padding_ + lVar24) = 1;
  }
  if (*(int *)((longlong)&this->_padding_ + 4) != *(int *)((longlong)&this->_padding_ + lVar24 * 4))
  {
    *(undefined1 *)((longlong)&this->_padding_ + lVar24) = 1;
  }
  if ((*(char *)((longlong)&this->_padding_ + 2) !=
       *(char *)((longlong)&this->_padding_ + lVar24 + 3)) &&
     (1 < *(uint *)((longlong)&this->_padding_ + lVar24 * 4 + 4))) {
    *(undefined1 *)((longlong)&this->_padding_ + lVar24) = 1;
  }
  uVar11 = *local_168;
  iVar10 = *(int *)((longlong)&this->_padding_ + lVar24 * 4 + 4);
  uVar9 = RtApi::formatBytes((RtApi *)this,*(ulong *)((longlong)&this->_padding_ + 4));
  pvVar17 = calloc((longlong)(int)(uVar9 * uVar11 * iVar10),1);
  (&this->_padding_)[lVar24] = (longlong)pvVar17;
  if (pvVar17 != (void *)0x0) {
    if (*(char *)((longlong)&this->_padding_ + lVar24) != '\0') {
      uVar11 = RtApi::formatBytes((RtApi *)this,*(ulong *)((longlong)&this->_padding_ + lVar24 * 4))
      ;
      iVar10 = uVar11 * *(int *)((longlong)&this->_padding_ + lVar24 * 4 + 4);
      if ((((local_188 != INPUT) || ((int)this->_padding_ != 0)) || (this->_padding_ == 0)) ||
         (iVar1 = *(int *)((longlong)&this->_padding_ + 4),
         uVar11 = RtApi::formatBytes((RtApi *)this,(ulong)this->_padding_),
         (int)(uVar11 * iVar1) < iVar10)) {
        uVar11 = *local_168;
        if ((void *)this->_padding_ != (void *)0x0) {
          free((void *)this->_padding_);
        }
        pvVar17 = calloc((longlong)(int)(iVar10 * uVar11),1);
        this->_padding_ = (longlong)pvVar17;
        if (pvVar17 == (void *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     &this->_padding_,
                     "RtApiDs::probeDeviceOpen: error allocating device buffer memory.",0x40);
          goto LAB_14d0cb842;
        }
      }
    }
    pHVar23 = (HWND)this->_padding_;
    if ((HWND)this->_padding_ == (HWND)0x0) {
      local_f8._Ptr = ::operator_new(0x50);
      if ((HWND)local_f8._Ptr != (HWND)0x0) {
        ((HWND)local_f8._Ptr)->unused = 0;
        *(undefined1 *)&((HWND)((longlong)local_f8._Ptr + 4))->unused = 0;
        *(undefined8 *)((longlong)local_f8._Ptr + 8) = 0;
        *(undefined8 *)((longlong)local_f8._Ptr + 0x10) = 0;
        *(undefined8 *)((longlong)local_f8._Ptr + 0x18) = 0;
        *(undefined8 *)((longlong)local_f8._Ptr + 0x20) = 0;
        *(undefined2 *)&((HWND)((longlong)local_f8._Ptr + 0x28))->unused = 0;
        *(undefined8 *)((longlong)local_f8._Ptr + 0x2c) = 0;
        pHVar22 = (HWND)local_f8._Ptr;
      }
      pvVar18 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
      *(HANDLE *)(pHVar22 + 0x12) = pvVar18;
      this->_padding_ = (longlong)pHVar22;
      pHVar23 = pHVar22;
    }
    *(longlong **)(pHVar23 + lVar24 * 2 + 2) = local_180;
    *(longlong **)(pHVar23 + lVar24 * 2 + 6) = local_198;
    pHVar23[lVar24 + 0xd].unused = uVar26;
    pHVar23[lVar24 + 0xf].unused = iVar7;
    *(uint *)((longlong)&this->_padding_ + lVar24 * 4) = local_174;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    if (((int)this->_padding_ != 0) || (SVar12 = DUPLEX, local_188 != INPUT)) {
      SVar12 = local_188;
    }
    *(StreamMode *)&this->_padding_ = SVar12;
    *(uint *)&this->_padding_ = local_184;
    *(uint *)&this->_padding_ = param_5;
    if (*(char *)((longlong)&this->_padding_ + lVar24) != '\0') {
      RtApi::setConvertInfo((RtApi *)this,local_188,param_4);
    }
    if ((char)this->_padding_ == '\0') {
      *(undefined1 *)&this->_padding_ = 1;
      this->_padding_ = (longlong)this;
      pvVar18 = (HANDLE)_beginthreadex((void *)0x0,0,callbackHandler,&this->_padding_,0,&local_174);
      this->_padding_ = (longlong)pvVar18;
      if (pvVar18 == (HANDLE)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   &this->_padding_,"RtApiDs::probeDeviceOpen: error creating callback thread!",0x39
                  );
        if (pHVar23 != (HWND)0x0) {
          if (*(longlong **)(pHVar23 + 6) != (longlong *)0x0) {
            plVar3 = *(longlong **)(pHVar23 + 2);
            (**(code **)(**(longlong **)(pHVar23 + 6) + 0x10))();
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
          if (*(longlong **)(pHVar23 + 8) != (longlong *)0x0) {
            plVar3 = *(longlong **)(pHVar23 + 4);
            (**(code **)(**(longlong **)(pHVar23 + 8) + 0x10))();
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
          CloseHandle(*(HANDLE *)(pHVar23 + 0x12));
          ::operator_delete(pHVar23,0x50);
          this->_padding_ = 0;
        }
        goto LAB_14d0cb842;
      }
      SetThreadPriority(pvVar18,2);
    }
    return true;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
             "RtApiDs::probeDeviceOpen: error allocating user buffer memory.",0x3e);
LAB_14d0cb842:
  if ((void *)this->_padding_ != (void *)0x0) {
    free((void *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    free((void *)this->_padding_);
    this->_padding_ = 0;
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    free((void *)this->_padding_);
    this->_padding_ = 0;
  }
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffce;
  return false;
}

// push_back @ 14d0cb8f0

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this,uint *param_1)

{
  uint **ppuVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint *_Dst;
  ulonglong uVar4;
  uint *puVar5;
  uint *_Src;
  ulonglong uVar6;
  longlong lVar7;
  size_t _Size;
  
  puVar5 = (this->_Mypair)._Myval2._Myend;
  _Src = (this->_Mypair)._Myval2._Mylast;
  if (_Src != puVar5) {
    *_Src = *param_1;
    ppuVar1 = &(this->_Mypair)._Myval2._Mylast;
    *ppuVar1 = *ppuVar1 + 1;
    return;
  }
  puVar3 = (this->_Mypair)._Myval2._Myfirst;
  lVar7 = (longlong)_Src - (longlong)puVar3 >> 2;
  if (lVar7 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar4 = (longlong)puVar5 - (longlong)puVar3 >> 2;
  uVar2 = lVar7 + 1;
  if (0x3fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar6 = 0x3fffffffffffffff;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar6 = uVar2;
    if (uVar2 <= uVar4) {
      uVar6 = uVar4;
    }
    if (0x3fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar6 * 4);
  _Dst[lVar7] = *param_1;
  puVar5 = (this->_Mypair)._Myval2._Mylast;
  puVar3 = (this->_Mypair)._Myval2._Myfirst;
  if (_Src == puVar5) {
    _Size = (longlong)puVar5 - (longlong)puVar3;
    puVar5 = _Dst;
    _Src = puVar3;
  }
  else {
    memmove(_Dst,puVar3,(longlong)_Src - (longlong)puVar3);
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)_Src;
    puVar5 = _Dst + lVar7 + 1;
  }
  memmove(puVar5,_Src,_Size);
  _Change_array(this,_Dst,uVar2,uVar6);
  return;
}

// push_back @ 14d0cba20

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::push_back
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this,uint *param_1)

{
  uint **ppuVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint *_Dst;
  ulonglong uVar4;
  uint *puVar5;
  uint *_Src;
  ulonglong uVar6;
  longlong lVar7;
  size_t _Size;
  
  puVar5 = (this->_Mypair)._Myval2._Myend;
  _Src = (this->_Mypair)._Myval2._Mylast;
  if (_Src != puVar5) {
    *_Src = *param_1;
    ppuVar1 = &(this->_Mypair)._Myval2._Mylast;
    *ppuVar1 = *ppuVar1 + 1;
    return;
  }
  puVar3 = (this->_Mypair)._Myval2._Myfirst;
  lVar7 = (longlong)_Src - (longlong)puVar3 >> 2;
  if (lVar7 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar4 = (longlong)puVar5 - (longlong)puVar3 >> 2;
  uVar2 = lVar7 + 1;
  if (0x3fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar6 = 0x3fffffffffffffff;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar6 = uVar2;
    if (uVar2 <= uVar4) {
      uVar6 = uVar4;
    }
    if (0x3fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar6 * 4);
  _Dst[lVar7] = *param_1;
  puVar5 = (this->_Mypair)._Myval2._Mylast;
  puVar3 = (this->_Mypair)._Myval2._Myfirst;
  if (_Src == puVar5) {
    _Size = (longlong)puVar5 - (longlong)puVar3;
    puVar5 = _Dst;
    _Src = puVar3;
  }
  else {
    memmove(_Dst,puVar3,(longlong)_Src - (longlong)puVar3);
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)_Src;
    puVar5 = _Dst + lVar7 + 1;
  }
  memmove(puVar5,_Src,_Size);
  _Change_array(this,_Dst,uVar2,uVar6);
  return;
}

// setConvertInfo @ 14d0cbb50

/* WARNING: Type propagation algorithm not settling */

void __thiscall RtApi::setConvertInfo(RtApi *this,StreamMode param_1,uint param_2)

{
  vector<int,std::allocator<int>_> *this_00;
  int **ppiVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  ulong *puVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  size_t sVar18;
  int iVar19;
  ulonglong uVar20;
  int local_res8;
  _Reallocation_guard local_78;
  
  puVar7 = &(this->stream_).userFormat;
  piVar11 = &(this->stream_).convertInfo[(int)param_1].outJump;
  if (param_1 == INPUT) {
    (this->stream_).convertInfo[1].inJump = (this->stream_).nDeviceChannels[1];
    uVar17 = (this->stream_).nUserChannels[1];
    puVar8 = (this->stream_).deviceFormat + 1;
    puVar12 = puVar7;
  }
  else {
    puVar12 = (this->stream_).deviceFormat;
    (this->stream_).convertInfo[(int)param_1].inJump = (this->stream_).nUserChannels[0];
    uVar17 = (this->stream_).nDeviceChannels[0];
    puVar8 = puVar7;
  }
  *piVar11 = uVar17;
  (this->stream_).convertInfo[(int)param_1].inFormat = *puVar8;
  (this->stream_).convertInfo[(int)param_1].outFormat = *puVar12;
  iVar4 = (this->stream_).convertInfo[(int)param_1].inJump;
  if (*piVar11 <= iVar4) {
    iVar4 = *piVar11;
  }
  (this->stream_).convertInfo[(int)param_1].channels = iVar4;
  bVar2 = (this->stream_).userInterleaved;
  cVar3 = (this->stream_).deviceInterleaved[(int)param_1];
  if ((bool)cVar3 == bVar2) {
    iVar19 = 0;
    if (bVar2 == false) {
      local_res8 = 0;
      if (0 < iVar4) {
        do {
          piVar13 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Myend;
          piVar14 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast;
          iVar4 = local_res8 * (this->stream_).bufferSize;
          if (piVar14 == piVar13) {
            piVar11 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Myfirst;
            lVar16 = (longlong)piVar14 - (longlong)piVar11 >> 2;
            if (lVar16 == 0x3fffffffffffffff) goto LAB_14d0cc833;
            uVar9 = lVar16 + 1;
            uVar10 = (longlong)piVar13 - (longlong)piVar11 >> 2;
            if (0x3fffffffffffffff - (uVar10 >> 1) < uVar10) {
              uVar20 = 0x3fffffffffffffff;
            }
            else {
              uVar10 = (uVar10 >> 1) + uVar10;
              uVar20 = uVar9;
              if (uVar9 <= uVar10) {
                uVar20 = uVar10;
              }
              if (0x3fffffffffffffff < uVar20) goto LAB_14d0cc839;
            }
            piVar6 = std::_Allocate<16,std::_Default_allocate_traits>(uVar20 * 4);
            piVar6[lVar16] = iVar4;
            piVar13 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast;
            local_78._Al = (allocator<int> *)&(this->stream_).convertInfo[(int)param_1].inOffset;
            piVar5 = (((vector<int,std::allocator<int>_> *)local_78._Al)->_Mypair)._Myval2._Myfirst;
            local_78._Constructed_first = piVar6 + lVar16;
            piVar11 = local_78._Constructed_first + 1;
            local_78._New_capacity = uVar20;
            local_78._Constructed_last = piVar11;
            if (piVar14 == piVar13) {
              memmove(piVar6,piVar5,(longlong)piVar13 - (longlong)piVar5);
            }
            else {
              memmove(piVar6,piVar5,(longlong)piVar14 - (longlong)piVar5);
              local_78._Constructed_first = piVar6;
              memmove(piVar11,piVar14,
                      (longlong)
                      (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast -
                      (longlong)piVar14);
            }
            local_78._New_begin = (int *)0x0;
            std::vector<int,std::allocator<int>_>::_Change_array
                      (&(this->stream_).convertInfo[(int)param_1].inOffset,piVar6,uVar9,uVar20);
            std::vector<int,std::allocator<int>_>::_Reallocation_guard::~_Reallocation_guard
                      (&local_78);
            piVar11 = &(this->stream_).convertInfo[(int)param_1].outJump;
          }
          else {
            *piVar14 = iVar4;
            ppiVar1 = &(this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast;
            *ppiVar1 = *ppiVar1 + 1;
          }
          piVar13 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Myend;
          piVar14 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast;
          iVar4 = local_res8 * (this->stream_).bufferSize;
          if (piVar14 == piVar13) {
            piVar11 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Myfirst;
            lVar16 = (longlong)piVar14 - (longlong)piVar11 >> 2;
            if (lVar16 == 0x3fffffffffffffff) goto LAB_14d0cc833;
            uVar9 = lVar16 + 1;
            uVar10 = (longlong)piVar13 - (longlong)piVar11 >> 2;
            if (0x3fffffffffffffff - (uVar10 >> 1) < uVar10) {
              uVar20 = 0x3fffffffffffffff;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
              uVar20 = uVar9;
              if (uVar9 <= uVar10) {
                uVar20 = uVar10;
              }
              if (0x3fffffffffffffff < uVar20) goto LAB_14d0cc839;
            }
            piVar6 = std::_Allocate<16,std::_Default_allocate_traits>(uVar20 * 4);
            local_78._Constructed_first = piVar6 + lVar16;
            piVar11 = local_78._Constructed_first + 1;
            this_00 = &(this->stream_).convertInfo[(int)param_1].outOffset;
            *local_78._Constructed_first = iVar4;
            piVar13 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast;
            piVar5 = (this_00->_Mypair)._Myval2._Myfirst;
            local_78._Al = (allocator<int> *)this_00;
            local_78._New_capacity = uVar20;
            local_78._Constructed_last = piVar11;
            if (piVar14 == piVar13) {
              sVar18 = (longlong)piVar13 - (longlong)piVar5;
              piVar11 = piVar6;
              piVar14 = piVar5;
            }
            else {
              memmove(piVar6,piVar5,(longlong)piVar14 - (longlong)piVar5);
              sVar18 = (longlong)
                       (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast -
                       (longlong)piVar14;
              local_78._Constructed_first = piVar6;
            }
            memmove(piVar11,piVar14,sVar18);
            local_78._New_begin = (int *)0x0;
            std::vector<int,std::allocator<int>_>::_Change_array(this_00,piVar6,uVar9,uVar20);
            std::vector<int,std::allocator<int>_>::_Reallocation_guard::~_Reallocation_guard
                      (&local_78);
            piVar11 = &(this->stream_).convertInfo[(int)param_1].outJump;
          }
          else {
            *piVar14 = iVar4;
            ppiVar1 = &(this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast;
            *ppiVar1 = *ppiVar1 + 1;
          }
          local_res8 = local_res8 + 1;
          (this->stream_).convertInfo[(int)param_1].inJump = 1;
          *piVar11 = 1;
          iVar4 = (this->stream_).convertInfo[(int)param_1].channels;
        } while (local_res8 < iVar4);
      }
    }
    else if (0 < iVar4) {
      do {
        piVar11 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Myend;
        piVar13 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast;
        if (piVar13 == piVar11) {
          piVar14 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Myfirst;
          lVar16 = (longlong)piVar13 - (longlong)piVar14 >> 2;
          if (lVar16 == 0x3fffffffffffffff) goto LAB_14d0cc833;
          uVar9 = (longlong)piVar11 - (longlong)piVar14 >> 2;
          if (0x3fffffffffffffff - (uVar9 >> 1) < uVar9) {
            uVar10 = 0x3fffffffffffffff;
          }
          else {
            uVar9 = (uVar9 >> 1) + uVar9;
            uVar10 = lVar16 + 1U;
            if (lVar16 + 1U <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x3fffffffffffffff < uVar10) goto LAB_14d0cc839;
          }
          piVar5 = std::_Allocate<16,std::_Default_allocate_traits>(uVar10 * 4);
          piVar5[lVar16] = iVar19;
          piVar11 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast;
          piVar14 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Myfirst;
          if (piVar13 == piVar11) {
            sVar18 = (longlong)piVar11 - (longlong)piVar14;
            piVar11 = piVar5;
            piVar13 = piVar14;
          }
          else {
            memmove(piVar5,piVar14,(longlong)piVar13 - (longlong)piVar14);
            sVar18 = (longlong)
                     (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast -
                     (longlong)piVar13;
            piVar11 = piVar5 + lVar16 + 1;
          }
          memmove(piVar11,piVar13,sVar18);
          std::vector<int,std::allocator<int>_>::_Change_array
                    (&(this->stream_).convertInfo[(int)param_1].inOffset,piVar5,lVar16 + 1,uVar10);
        }
        else {
          *piVar13 = iVar19;
          ppiVar1 = &(this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast;
          *ppiVar1 = *ppiVar1 + 1;
        }
        piVar11 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Myend;
        piVar13 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast;
        if (piVar13 == piVar11) {
          piVar14 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Myfirst;
          lVar16 = (longlong)piVar13 - (longlong)piVar14 >> 2;
          if (lVar16 == 0x3fffffffffffffff) goto LAB_14d0cc833;
          uVar9 = lVar16 + 1;
          uVar10 = (longlong)piVar11 - (longlong)piVar14 >> 2;
          if (0x3fffffffffffffff - (uVar10 >> 1) < uVar10) {
            uVar20 = 0x3fffffffffffffff;
          }
          else {
            uVar10 = (uVar10 >> 1) + uVar10;
            uVar20 = uVar9;
            if (uVar9 <= uVar10) {
              uVar20 = uVar10;
            }
            if (0x3fffffffffffffff < uVar20) goto LAB_14d0cc839;
          }
          piVar5 = std::_Allocate<16,std::_Default_allocate_traits>(uVar20 * 4);
          piVar5[lVar16] = iVar19;
          piVar11 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast;
          piVar14 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Myfirst;
          if (piVar13 == piVar11) {
            sVar18 = (longlong)piVar11 - (longlong)piVar14;
            piVar11 = piVar5;
            piVar13 = piVar14;
          }
          else {
            memmove(piVar5,piVar14,(longlong)piVar13 - (longlong)piVar14);
            sVar18 = (longlong)
                     (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast -
                     (longlong)piVar13;
            piVar11 = piVar5 + lVar16 + 1;
          }
          memmove(piVar11,piVar13,sVar18);
          std::vector<int,std::allocator<int>_>::_Change_array
                    (&(this->stream_).convertInfo[(int)param_1].outOffset,piVar5,uVar9,uVar20);
        }
        else {
          *piVar13 = iVar19;
          ppiVar1 = &(this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast;
          *ppiVar1 = *ppiVar1 + 1;
        }
        iVar4 = (this->stream_).convertInfo[(int)param_1].channels;
        iVar19 = iVar19 + 1;
      } while (iVar19 < iVar4);
    }
  }
  else if (((param_1 == OUTPUT) || (cVar3 = bVar2, param_1 == INPUT)) && (cVar3 != '\0')) {
    iVar19 = 0;
    if (0 < iVar4) {
      do {
        piVar11 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Myend;
        iVar4 = iVar19 * (this->stream_).bufferSize;
        piVar13 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast;
        if (piVar13 == piVar11) {
          lVar16 = *(longlong *)&(this->stream_).convertInfo[(int)param_1].inOffset._Mypair;
          lVar15 = (longlong)piVar13 - lVar16 >> 2;
          if (lVar15 == 0x3fffffffffffffff) goto LAB_14d0cc833;
          uVar9 = lVar15 + 1;
          uVar10 = (longlong)piVar11 - lVar16 >> 2;
          if (0x3fffffffffffffff - (uVar10 >> 1) < uVar10) {
            uVar20 = 0x3fffffffffffffff;
          }
          else {
            uVar10 = (uVar10 >> 1) + uVar10;
            uVar20 = uVar9;
            if (uVar9 <= uVar10) {
              uVar20 = uVar10;
            }
            if (0x3fffffffffffffff < uVar20) goto LAB_14d0cc839;
          }
          piVar5 = std::_Allocate<16,std::_Default_allocate_traits>(uVar20 * 4);
          piVar5[lVar15] = iVar4;
          piVar11 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast;
          piVar14 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Myfirst;
          if (piVar13 == piVar11) {
            sVar18 = (longlong)piVar11 - (longlong)piVar14;
            piVar11 = piVar5;
            piVar13 = piVar14;
          }
          else {
            memmove(piVar5,piVar14,(longlong)piVar13 - (longlong)piVar14);
            piVar11 = piVar5 + lVar15 + 1;
            sVar18 = (longlong)
                     (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast -
                     (longlong)piVar13;
          }
          memmove(piVar11,piVar13,sVar18);
          std::vector<int,std::allocator<int>_>::_Change_array
                    (&(this->stream_).convertInfo[(int)param_1].inOffset,piVar5,uVar9,uVar20);
        }
        else {
          *piVar13 = iVar4;
          ppiVar1 = &(this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast;
          *ppiVar1 = *ppiVar1 + 1;
        }
        piVar11 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Myend;
        piVar13 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast;
        if (piVar13 == piVar11) {
          piVar14 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Myfirst;
          lVar16 = (longlong)piVar13 - (longlong)piVar14 >> 2;
          if (lVar16 == 0x3fffffffffffffff) goto LAB_14d0cc833;
          uVar9 = lVar16 + 1;
          uVar10 = (longlong)piVar11 - (longlong)piVar14 >> 2;
          if (0x3fffffffffffffff - (uVar10 >> 1) < uVar10) {
            uVar20 = 0x3fffffffffffffff;
          }
          else {
            uVar10 = (uVar10 >> 1) + uVar10;
            uVar20 = uVar9;
            if (uVar9 <= uVar10) {
              uVar20 = uVar10;
            }
            if (0x3fffffffffffffff < uVar20) goto LAB_14d0cc839;
          }
          piVar5 = std::_Allocate<16,std::_Default_allocate_traits>(uVar20 * 4);
          piVar5[lVar16] = iVar19;
          piVar11 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast;
          piVar14 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Myfirst;
          if (piVar13 == piVar11) {
            sVar18 = (longlong)piVar11 - (longlong)piVar14;
            piVar11 = piVar5;
            piVar13 = piVar14;
          }
          else {
            memmove(piVar5,piVar14,(longlong)piVar13 - (longlong)piVar14);
            sVar18 = (longlong)
                     (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast -
                     (longlong)piVar13;
            piVar11 = piVar5 + lVar16 + 1;
          }
          memmove(piVar11,piVar13,sVar18);
          std::vector<int,std::allocator<int>_>::_Change_array
                    (&(this->stream_).convertInfo[(int)param_1].outOffset,piVar5,uVar9,uVar20);
        }
        else {
          *piVar13 = iVar19;
          ppiVar1 = &(this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast;
          *ppiVar1 = *ppiVar1 + 1;
        }
        iVar19 = iVar19 + 1;
        (this->stream_).convertInfo[(int)param_1].inJump = 1;
        iVar4 = (this->stream_).convertInfo[(int)param_1].channels;
      } while (iVar19 < iVar4);
    }
  }
  else {
    iVar19 = 0;
    if (0 < iVar4) {
      do {
        piVar13 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Myend;
        piVar14 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast;
        if (piVar14 == piVar13) {
          lVar16 = *(longlong *)&(this->stream_).convertInfo[(int)param_1].inOffset._Mypair;
          lVar15 = (longlong)piVar14 - lVar16 >> 2;
          if (lVar15 == 0x3fffffffffffffff) {
LAB_14d0cc833:
                    /* WARNING: Subroutine does not return */
            std::vector<int,std::allocator<int>_>::_Xlength();
          }
          uVar9 = (longlong)piVar13 - lVar16 >> 2;
          if (0x3fffffffffffffff - (uVar9 >> 1) < uVar9) {
            uVar10 = 0x3fffffffffffffff;
          }
          else {
            uVar9 = uVar9 + (uVar9 >> 1);
            uVar10 = lVar15 + 1U;
            if (lVar15 + 1U <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x3fffffffffffffff < uVar10) {
LAB_14d0cc839:
                    /* WARNING: Subroutine does not return */
              std::_Throw_bad_array_new_length();
            }
          }
          piVar5 = std::_Allocate<16,std::_Default_allocate_traits>(uVar10 * 4);
          piVar5[lVar15] = iVar19;
          piVar11 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast;
          piVar13 = (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Myfirst;
          if (piVar14 == piVar11) {
            sVar18 = (longlong)piVar11 - (longlong)piVar13;
            piVar11 = piVar5;
            piVar14 = piVar13;
          }
          else {
            memmove(piVar5,piVar13,(longlong)piVar14 - (longlong)piVar13);
            sVar18 = (longlong)
                     (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast -
                     (longlong)piVar14;
            piVar11 = piVar5 + lVar15 + 1;
          }
          memmove(piVar11,piVar14,sVar18);
          std::vector<int,std::allocator<int>_>::_Change_array
                    (&(this->stream_).convertInfo[(int)param_1].inOffset,piVar5,lVar15 + 1,uVar10);
          piVar11 = &(this->stream_).convertInfo[(int)param_1].outJump;
        }
        else {
          *piVar14 = iVar19;
          ppiVar1 = &(this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2._Mylast;
          *ppiVar1 = *ppiVar1 + 1;
        }
        piVar13 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Myend;
        piVar14 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast;
        iVar4 = iVar19 * (this->stream_).bufferSize;
        if (piVar14 == piVar13) {
          piVar11 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Myfirst;
          lVar16 = (longlong)piVar14 - (longlong)piVar11 >> 2;
          if (lVar16 == 0x3fffffffffffffff) goto LAB_14d0cc833;
          uVar9 = lVar16 + 1;
          uVar10 = (longlong)piVar13 - (longlong)piVar11 >> 2;
          if (0x3fffffffffffffff - (uVar10 >> 1) < uVar10) {
            uVar20 = 0x3fffffffffffffff;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
            uVar20 = uVar9;
            if (uVar9 <= uVar10) {
              uVar20 = uVar10;
            }
            if (0x3fffffffffffffff < uVar20) goto LAB_14d0cc839;
          }
          piVar5 = std::_Allocate<16,std::_Default_allocate_traits>(uVar20 * 4);
          piVar5[lVar16] = iVar4;
          piVar11 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast;
          piVar13 = (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Myfirst;
          if (piVar14 == piVar11) {
            sVar18 = (longlong)piVar11 - (longlong)piVar13;
            piVar11 = piVar5;
            piVar14 = piVar13;
          }
          else {
            memmove(piVar5,piVar13,(longlong)piVar14 - (longlong)piVar13);
            sVar18 = (longlong)
                     (this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast -
                     (longlong)piVar14;
            piVar11 = piVar5 + lVar16 + 1;
          }
          memmove(piVar11,piVar14,sVar18);
          std::vector<int,std::allocator<int>_>::_Change_array
                    (&(this->stream_).convertInfo[(int)param_1].outOffset,piVar5,uVar9,uVar20);
          piVar11 = &(this->stream_).convertInfo[(int)param_1].outJump;
        }
        else {
          *piVar14 = iVar4;
          ppiVar1 = &(this->stream_).convertInfo[(int)param_1].outOffset._Mypair._Myval2._Mylast;
          *ppiVar1 = *ppiVar1 + 1;
        }
        *piVar11 = 1;
        iVar4 = (this->stream_).convertInfo[(int)param_1].channels;
        iVar19 = iVar19 + 1;
      } while (iVar19 < iVar4);
    }
  }
  uVar9 = 0;
  if (param_2 != 0) {
    if ((this->stream_).deviceInterleaved[(int)param_1] == false) {
      if (param_1 == OUTPUT) {
        uVar10 = uVar9;
        if (0 < iVar4) {
          do {
            uVar17 = (int)uVar10 + 1;
            piVar11 = (int *)((longlong)
                              (this->stream_).convertInfo[0].outOffset._Mypair._Myval2._Myfirst +
                             uVar9);
            *piVar11 = *piVar11 + param_2 * (this->stream_).bufferSize;
            uVar9 = uVar9 + 4;
            uVar10 = (ulonglong)uVar17;
          } while ((int)uVar17 < (this->stream_).convertInfo[0].channels);
        }
      }
      else if (0 < iVar4) {
        uVar10 = uVar9;
        do {
          uVar17 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar17;
          piVar11 = (int *)((longlong)
                            (this->stream_).convertInfo[(int)param_1].inOffset._Mypair._Myval2.
                            _Myfirst + uVar10);
          *piVar11 = *piVar11 + param_2 * (this->stream_).bufferSize;
          uVar10 = uVar10 + 4;
        } while ((int)uVar17 < (this->stream_).convertInfo[(int)param_1].channels);
      }
    }
    else if (param_1 == OUTPUT) {
      uVar10 = uVar9;
      if (0 < iVar4) {
        do {
          uVar17 = (int)uVar10 + 1;
          piVar11 = (int *)(uVar9 + (longlong)
                                    (this->stream_).convertInfo[0].outOffset._Mypair._Myval2.
                                    _Myfirst);
          *piVar11 = *piVar11 + param_2;
          uVar9 = uVar9 + 4;
          uVar10 = (ulonglong)uVar17;
        } while ((int)uVar17 < (this->stream_).convertInfo[0].channels);
      }
    }
    else if (0 < iVar4) {
      uVar10 = uVar9;
      do {
        uVar17 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar17;
        piVar11 = (int *)(uVar10 + (longlong)
                                   (this->stream_).convertInfo[(int)param_1].inOffset._Mypair.
                                   _Myval2._Myfirst);
        *piVar11 = *piVar11 + param_2;
        uVar10 = uVar10 + 4;
      } while ((int)uVar17 < (this->stream_).convertInfo[(int)param_1].channels);
    }
  }
  return;
}

// setStreamTime @ 14d0cc850

void __thiscall RtApi::setStreamTime(RtApi *this,double param_1)

{
  if ((this->stream_).state == STREAM_CLOSED) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&this->errorText_,"RtApi:: a stream is not open!",0x1d);
    error(this,INVALID_USE);
  }
  if (0.0 <= param_1) {
    (this->stream_).streamTime = param_1;
  }
  return;
}

// startStream @ 14d0cc8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall RtApiDs::startStream(RtApiDs *this)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  char *pcVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  undefined8 uVar10;
  ulong64 uVar11;
  undefined1 auStackY_98 [32];
  _Bxty local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (*(int *)((longlong)&this->_padding_ + 4) == -0x32) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               "RtApi:: a stream is not open!",0x1d);
    RtApi::error((RtApi *)this,INVALID_USE);
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 2) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               "RtApiDs::startStream(): the stream is already running!",0x36);
    RtApi::error((RtApi *)this,WARNING);
    return;
  }
  puVar2 = (undefined4 *)this->_padding_;
  timeBeginPeriod(1);
  iVar6 = 0;
  this->buffersRolling = false;
  this->duplexPrerollBytes = 0;
  if ((int)this->_padding_ == 2) {
    lVar3 = this->_padding_;
    lVar4 = this->_padding_;
    uVar5 = RtApi::formatBytes((RtApi *)this,*(ulong *)((longlong)&this->_padding_ + 4));
    this->duplexPrerollBytes =
         (int)((double)uVar5 * (double)(uint)lVar4 * (double)(uint)lVar3 * __real_3fe0000000000000);
  }
  iVar1 = (int)this->_padding_;
  if (((iVar1 == 0) || (iVar1 == 2)) &&
     (iVar6 = (**(code **)(**(longlong **)(puVar2 + 6) + 0x60))(*(longlong **)(puVar2 + 6),0,0),
     iVar6 < 0)) {
    pbVar7 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                        "RtApiDs::startStream: error (");
    pcVar8 = getErrorString(iVar6);
    pbVar7 = std::operator<<<std::char_traits<char>_>(pbVar7,pcVar8);
    std::operator<<<std::char_traits<char>_>(pbVar7,") starting output buffer!");
    pbVar9 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                       ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                        &this->_padding_,
                        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                       );
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               pbVar9);
    if (local_50 < 0x10) goto LAB_14d0ccbaf;
    uVar11 = local_50 + 1;
    uVar10 = local_68._Ptr;
    if (0xfff < uVar11) {
      uVar11 = local_50 + 0x28;
      uVar10 = *(char **)(local_68._Ptr + -8);
      if ((char *)0x1f < local_68._Ptr + (-8 - (longlong)*(char **)(local_68._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    iVar1 = (int)this->_padding_;
    if (((iVar1 != 1) && (iVar1 != 2)) ||
       (iVar6 = (**(code **)(**(longlong **)(puVar2 + 8) + 0x48))(*(longlong **)(puVar2 + 8),1),
       -1 < iVar6)) {
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 0;
      ResetEvent(*(HANDLE *)(puVar2 + 0x12));
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
      if (-1 < iVar6) {
        return;
      }
      goto LAB_14d0ccbaf;
    }
    pbVar7 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                        "RtApiDs::startStream: error (");
    pcVar8 = getErrorString(iVar6);
    pbVar7 = std::operator<<<std::char_traits<char>_>(pbVar7,pcVar8);
    std::operator<<<std::char_traits<char>_>(pbVar7,") starting input buffer!");
    pbVar9 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                       ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                        &this->_padding_,
                        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                       );
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               pbVar9);
    if (local_50 < 0x10) goto LAB_14d0ccbaf;
    uVar11 = local_50 + 1;
    uVar10 = local_68._Ptr;
    if (0xfff < uVar11) {
      uVar10 = *(undefined8 *)(local_68._Ptr + -8);
      uVar11 = local_50 + 0x28;
      if ((char *)0x1f < local_68._Ptr + (-8 - uVar10)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  ::operator_delete((void *)uVar10,uVar11);
LAB_14d0ccbaf:
  RtApi::error((RtApi *)this,SYSTEM_ERROR);
  return;
}

// stopStream @ 14d0ccc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall RtApiDs::stopStream(RtApiDs *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  char *pcVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  undefined8 uVar7;
  ulong64 uVar8;
  undefined1 auStackY_a8 [32];
  uint local_68;
  void *local_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(int *)((longlong)&this->_padding_ + 4) == -0x32) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               "RtApi:: a stream is not open!",0x1d);
    RtApi::error((RtApi *)this,INVALID_USE);
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_,
               "RtApiDs::stopStream(): the stream is already stopped!",0x35);
    RtApi::error((RtApi *)this,WARNING);
    return;
  }
  iVar3 = (int)this->_padding_;
  piVar1 = (int *)this->_padding_;
  if ((iVar3 == 0) || (iVar3 == 2)) {
    if (*piVar1 == 0) {
      *piVar1 = 2;
      WaitForSingleObject(*(HANDLE *)(piVar1 + 0x12),0xffffffff);
    }
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    plVar2 = *(longlong **)(piVar1 + 6);
    iVar3 = (**(code **)(*plVar2 + 0x90))(plVar2);
    if (iVar3 < 0) {
      pbVar4 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                          "RtApiDs::stopStream: error (");
      pcVar5 = getErrorString(iVar3);
      pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,pcVar5);
      std::operator<<<std::char_traits<char>_>(pbVar4,") stopping output buffer!");
      pbVar6 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                         ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                          &this->_padding_,
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_58);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar6);
      if (local_40 < 0x10) goto LAB_14d0cd201;
      uVar8 = local_40 + 1;
      uVar7 = local_58._Ptr;
      if (0xfff < uVar8) {
        uVar8 = local_40 + 0x28;
        uVar7 = *(char **)(local_58._Ptr + -8);
        if ((char *)0x1f < local_58._Ptr + (-8 - (longlong)*(char **)(local_58._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
    else {
      iVar3 = (**(code **)(*plVar2 + 0x58))(plVar2,0,piVar1[0xd]);
      if (iVar3 < 0) {
        pbVar4 = std::operator<<<std::char_traits<char>_>
                           ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                            "RtApiDs::stopStream: error (");
        pcVar5 = getErrorString(iVar3);
        pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,pcVar5);
        std::operator<<<std::char_traits<char>_>(pbVar4,") locking output buffer!");
        pbVar6 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                           ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
                             *)&this->_padding_,
                            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_58);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   &this->_padding_,pbVar6);
        if (local_40 < 0x10) goto LAB_14d0cd201;
        uVar8 = local_40 + 1;
        uVar7 = local_58._Ptr;
        if (0xfff < uVar8) {
          uVar8 = local_40 + 0x28;
          uVar7 = *(char **)(local_58._Ptr + -8);
          if ((char *)0x1f < local_58._Ptr + (-8 - (longlong)*(char **)(local_58._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
      else {
        memset(local_60,0,(ulonglong)local_68);
        iVar3 = (**(code **)(*plVar2 + 0x98))(plVar2,local_60,local_68);
        if (-1 < iVar3) {
          piVar1[0xb] = 0;
          goto LAB_14d0ccf65;
        }
        pbVar4 = std::operator<<<std::char_traits<char>_>
                           ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                            "RtApiDs::stopStream: error (");
        pcVar5 = getErrorString(iVar3);
        pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,pcVar5);
        std::operator<<<std::char_traits<char>_>(pbVar4,") unlocking output buffer!");
        pbVar6 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                           ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
                             *)&this->_padding_,
                            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_58);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   &this->_padding_,pbVar6);
        if (local_40 < 0x10) goto LAB_14d0cd201;
        uVar8 = local_40 + 1;
        uVar7 = local_58._Ptr;
        if (0xfff < uVar8) {
          uVar8 = local_40 + 0x28;
          uVar7 = *(char **)(local_58._Ptr + -8);
          if ((char *)0x1f < local_58._Ptr + (-8 - (longlong)*(char **)(local_58._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
    }
  }
  else {
LAB_14d0ccf65:
    iVar3 = (int)this->_padding_;
    if ((iVar3 != 1) && (iVar3 != 2)) {
LAB_14d0cd22c:
      timeEndPeriod(1);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
      return;
    }
    plVar2 = *(longlong **)(piVar1 + 8);
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    if (iVar3 != 2) {
      EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    }
    iVar3 = (**(code **)(*plVar2 + 0x50))(plVar2);
    if (iVar3 < 0) {
      pbVar4 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                          "RtApiDs::stopStream: error (");
      pcVar5 = getErrorString(iVar3);
      pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,pcVar5);
      std::operator<<<std::char_traits<char>_>(pbVar4,") stopping input buffer!");
      pbVar6 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                         ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                          &this->_padding_,
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_58);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&this->_padding_
                 ,pbVar6);
      if (local_40 < 0x10) goto LAB_14d0cd201;
      uVar8 = local_40 + 1;
      uVar7 = local_58._Ptr;
      if (0xfff < uVar8) {
        uVar8 = local_40 + 0x28;
        uVar7 = *(char **)(local_58._Ptr + -8);
        if ((char *)0x1f < local_58._Ptr + (-8 - (longlong)*(char **)(local_58._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
    else {
      iVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,0,piVar1[0xe]);
      if (iVar3 < 0) {
        pbVar4 = std::operator<<<std::char_traits<char>_>
                           ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                            "RtApiDs::stopStream: error (");
        pcVar5 = getErrorString(iVar3);
        pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,pcVar5);
        std::operator<<<std::char_traits<char>_>(pbVar4,") locking input buffer!");
        pbVar6 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                           ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
                             *)&this->_padding_,
                            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_58);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   &this->_padding_,pbVar6);
        if (local_40 < 0x10) goto LAB_14d0cd201;
        uVar8 = local_40 + 1;
        uVar7 = local_58._Ptr;
        if (0xfff < uVar8) {
          uVar8 = local_40 + 0x28;
          uVar7 = *(char **)(local_58._Ptr + -8);
          if ((char *)0x1f < local_58._Ptr + (-8 - (longlong)*(char **)(local_58._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
      else {
        memset((void *)0x0,0,0);
        iVar3 = (**(code **)(*plVar2 + 0x58))(plVar2,0,0);
        if (-1 < iVar3) {
          piVar1[0xc] = 0;
          goto LAB_14d0cd22c;
        }
        pbVar4 = std::operator<<<std::char_traits<char>_>
                           ((basic_ostream<char,std::char_traits<char>_> *)&this->_padding_,
                            "RtApiDs::stopStream: error (");
        pcVar5 = getErrorString(iVar3);
        pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,pcVar5);
        std::operator<<<std::char_traits<char>_>(pbVar4,") unlocking input buffer!");
        pbVar6 = std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
                           ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
                             *)&this->_padding_,
                            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_58);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   &this->_padding_,pbVar6);
        if (local_40 < 0x10) goto LAB_14d0cd201;
        uVar8 = local_40 + 1;
        uVar7 = local_58._Ptr;
        if (0xfff < uVar8) {
          uVar7 = *(undefined8 *)(local_58._Ptr + -8);
          uVar8 = local_40 + 0x28;
          if ((char *)0x1f < local_58._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
    }
  }
  ::operator_delete((void *)uVar7,uVar8);
LAB_14d0cd201:
  timeEndPeriod(1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  RtApi::error((RtApi *)this,SYSTEM_ERROR);
  return;
}

// str @ 14d0cd290

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str
          (basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  char *pcVar1;
  char *pcVar2;
  ulong64 uStack_38;
  
  this_00 = &this->_Stringbuffer;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  uStack_38 = 0;
  if (((byte)(this->_Stringbuffer)._Mystate & 0x22) != 2) {
    pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                       ((basic_streambuf<char,std::char_traits<char>_> *)this_00);
    if (pcVar1 != (char *)0x0) {
      pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::pbase
                         ((basic_streambuf<char,std::char_traits<char>_> *)this_00);
      pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                         ((basic_streambuf<char,std::char_traits<char>_> *)this_00);
      if (pcVar2 < (this->_Stringbuffer)._Seekhigh) {
        pcVar2 = (this->_Stringbuffer)._Seekhigh;
      }
      uStack_38 = (longlong)pcVar2 - (longlong)pcVar1;
      std::basic_streambuf<char,std::char_traits<char>_>::epptr
                ((basic_streambuf<char,std::char_traits<char>_> *)this_00);
      goto LAB_14d0cd351;
    }
  }
  if (((this->_Stringbuffer)._Mystate & 4) == 0) {
    pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::gptr
                       ((basic_streambuf<char,std::char_traits<char>_> *)this_00);
    if (pcVar1 != (char *)0x0) {
      pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::eback
                         ((basic_streambuf<char,std::char_traits<char>_> *)this_00);
      pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::egptr
                         ((basic_streambuf<char,std::char_traits<char>_> *)this_00);
      uStack_38 = (longlong)pcVar2 - (longlong)pcVar1;
      goto LAB_14d0cd351;
    }
  }
  pcVar1 = (char *)0x0;
LAB_14d0cd351:
  if (pcVar1 != (char *)0x0) {
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,uStack_38);
  }
  return __return_storage_ptr__;
}

// tickStreamTime @ 14d0cd380

void __thiscall RtApi::tickStreamTime(RtApi *this)

{
  (this->stream_).streamTime =
       (double)(this->stream_).bufferSize / (double)(this->stream_).sampleRate +
       (this->stream_).streamTime;
  return;
}

// verifyStream @ 14d0cd3c0

void __thiscall RtApi::verifyStream(RtApi *this)

{
  if ((this->stream_).state == STREAM_CLOSED) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&this->errorText_,"RtApi:: a stream is not open!",0x1d);
    error(this,INVALID_USE);
    return;
  }
  return;
}

// IMPLEMENT_MODULE_AudioCaptureRtAudio @ 14d0cd410

void __cdecl IMPLEMENT_MODULE_AudioCaptureRtAudio(void)

{
  return;
}

// dtor$0 @ 15025f9f0

void `std::vector<DsDevice,std::allocator<DsDevice>_>::_Emplace_reallocate<DsDevice_const_&>'::__l1
     ::dtor_0(undefined8 param_1,longlong param_2)

{
  std::vector<DsDevice,std::allocator<DsDevice>_>::_Reallocation_guard::~_Reallocation_guard
            ((_Reallocation_guard *)(param_2 + 0x30));
  return;
}

// dtor$0 @ 15025fa10

void `Audio::FAudioCaptureRtAudioStream::FAudioCaptureRtAudioStream'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  Audio::IAudioCaptureStream::~IAudioCaptureStream(*(IAudioCaptureStream **)(param_2 + 0x30));
  return;
}

// dtor$1 @ 15025fa30

void `Audio::FAudioCaptureRtAudioStream::FAudioCaptureRtAudioStream'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  TFunction<void___cdecl(void_const_*,int,int,int,double,bool)>::
  ~TFunction<void___cdecl(void_const_*,int,int,int,double,bool)>
            ((TFunction<void___cdecl(void_const_*,int,int,int,double,bool)> *)
             (*(longlong *)(param_2 + 0x30) + 0x10));
  return;
}

// dtor$1 @ 15025fa50

void `Audio::FRtAudioInputWrapper::FRtAudioInputWrapper'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x30),0x20);
  return;
}

// dtor$0 @ 15025fa80

void `RtApi::RtApi'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbase_destructor_
            ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x50) + 8));
  return;
}

// dtor$1 @ 15025faa0

void `RtApi::RtApi'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x50) + 0xf0));
  return;
}

// dtor$3 @ 15025fac0

void `RtApi::RtApi'::__l1::dtor_3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 1) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x60) + 0x88));
  }
  return;
}

// dtor$4 @ 15025fb00

void `RtApi::RtApi'::__l1::dtor_4(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00015025fb0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x60) + 0x10));
  return;
}

// dtor$2 @ 15025fb20

void `RtApiDs::RtApiDs'::__l1::dtor_2(undefined8 param_1,longlong param_2)

{
  std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbase_destructor_
            ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x50) + 8));
  return;
}

// dtor$3 @ 15025fb40

void `RtApiDs::RtApiDs'::__l1::dtor_3(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x50) + 0xf0));
  return;
}

// dtor$5 @ 15025fb60

void `RtApiDs::RtApiDs'::__l1::dtor_5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 1) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x60) + 0x88));
  }
  return;
}

// dtor$6 @ 15025fba0

void `RtApiDs::RtApiDs'::__l1::dtor_6(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00015025fbab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x60) + 0x10));
  return;
}

// dtor$0 @ 15025fbc0

void `RtAudio::RtAudio'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  std::vector<enum_RtAudio::Api,std::allocator<enum_RtAudio::Api>_>::
  ~vector<enum_RtAudio::Api,std::allocator<enum_RtAudio::Api>_>((void *)(param_2 + 0x30));
  return;
}

// dtor$0 @ 15025fbe0

void `Audio::FAudioCaptureRtAudioStream::AbortStream'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// catch$4 @ 15025fc00

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FAudioCaptureRtAudioStream::AbortStream'::__l1::catch_4(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// catch$5 @ 15025fc50

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FAudioCaptureRtAudioStream::AbortStream'::__l1::catch_5(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
  ::FString::FString((FString *)(param_2 + 0x28),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x28));
  }
  return 0;
}

// dtor$0 @ 15025fcd0

void `Audio::FRtAudioInputWrapper::AbortStream'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// catch$4 @ 15025fcf0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FRtAudioInputWrapper::AbortStream'::__l1::catch_4(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
  ::FString::FString((FString *)(param_2 + 0x28),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x28));
  }
  return 0;
}

// catch$5 @ 15025fd70

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FRtAudioInputWrapper::AbortStream'::__l1::catch_5(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// dtor$0 @ 15025fdc0

void `Audio::FAudioCaptureRtAudioStream::CloseStream'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// catch$4 @ 15025fde0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FAudioCaptureRtAudioStream::CloseStream'::__l1::catch_4(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// catch$5 @ 15025fe30

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FAudioCaptureRtAudioStream::CloseStream'::__l1::catch_5(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
  ::FString::FString((FString *)(param_2 + 0x28),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x28));
  }
  return 0;
}

// dtor$0 @ 15025feb0

void `Audio::FRtAudioInputWrapper::CloseStream'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// catch$4 @ 15025fed0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FRtAudioInputWrapper::CloseStream'::__l1::catch_4(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
  ::FString::FString((FString *)(param_2 + 0x28),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x28));
  }
  return 0;
}

// catch$5 @ 15025ff50

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FRtAudioInputWrapper::CloseStream'::__l1::catch_5(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// dtor$0 @ 15025ffa0

void `Audio::FAudioCaptureRtAudioFactory::CreateNewAudioCaptureStream'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x48),0x50);
  return;
}

// dtor$2 @ 15025ffd0

void `Audio::FAudioCaptureRtAudioFactory::CreateNewAudioCaptureStream'::__l1::dtor_2
               (undefined8 param_1,longlong param_2)

{
  Audio::IAudioCaptureStream::~IAudioCaptureStream(*(IAudioCaptureStream **)(param_2 + 0x48));
  return;
}

// dtor$3 @ 15025fff0

void `Audio::FAudioCaptureRtAudioFactory::CreateNewAudioCaptureStream'::__l1::dtor_3
               (undefined8 param_1,longlong param_2)

{
  TFunction<void___cdecl(void_const_*,int,int,int,double,bool)>::
  ~TFunction<void___cdecl(void_const_*,int,int,int,double,bool)>
            ((TFunction<void___cdecl(void_const_*,int,int,int,double,bool)> *)
             (*(longlong *)(param_2 + 0x48) + 0x10));
  return;
}

// dtor$0 @ 150260010

void `Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  RtAudio::DeviceInfo::~DeviceInfo((DeviceInfo *)(param_2 + 0x80));
  return;
}

// dtor$1 @ 150260030

void `Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  TStringConversion<FUTF8ToTCHAR_Convert,128>::~TStringConversion<FUTF8ToTCHAR_Convert,128>
            ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)(param_2 + 0x100));
  return;
}

// dtor$2 @ 150260050

void `Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::dtor_2
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x38));
  return;
}

// dtor$3 @ 150260070

void `Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::dtor_3
               (undefined8 param_1,longlong param_2)

{
  TStringConversion<FUTF8ToTCHAR_Convert,128>::~TStringConversion<FUTF8ToTCHAR_Convert,128>
            ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)(param_2 + 0x220));
  return;
}

// dtor$4 @ 150260090

void `Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::dtor_4
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x48));
  return;
}

// dtor$5 @ 1502600b0

void `Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::dtor_5
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// dtor$6 @ 1502600d0

void `Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::dtor_6
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x58));
  return;
}

// dtor$9 @ 1502600f0

void `Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::dtor_9
               (undefined8 param_1,longlong param_2)

{
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ~ForElementType<wchar_t>((ForElementType<wchar_t> *)(param_2 + 0x100));
  return;
}

// dtor$10 @ 150260110

void `Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::dtor_10
               (undefined8 param_1,longlong param_2)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
            ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(param_2 + 0x38));
  return;
}

// dtor$11 @ 150260130

void `Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::dtor_11
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x58));
  return;
}

// dtor$23 @ 150260150

void `Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::dtor_23
               (undefined8 param_1,longlong param_2)

{
  TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
  ~ForElementType<wchar_t>((ForElementType<wchar_t> *)(param_2 + 0x220));
  return;
}

// dtor$24 @ 150260170

void `Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::dtor_24
               (undefined8 param_1,longlong param_2)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
            ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(param_2 + 0x48));
  return;
}

// dtor$25 @ 150260190

void `Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::dtor_25
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x70));
  return;
}

// catch$46 @ 1502601b0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::catch_46
          (undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x68) + 8))();
  ::FString::FString((FString *)(param_2 + 0x58),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x58));
  }
  return 0;
}

// catch$47 @ 150260230

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FAudioCaptureRtAudioStream::GetCaptureDeviceInfo'::__l1::catch_47(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// dtor$0 @ 150260280

void `Audio::FAudioCaptureRtAudioStream::GetDefaultInputDevice'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// catch$4 @ 1502602a0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FAudioCaptureRtAudioStream::GetDefaultInputDevice'::__l1::catch_4
          (undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
  ::FString::FString((FString *)(param_2 + 0x28),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x28));
  }
  return 0;
}

// catch$5 @ 150260320

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FAudioCaptureRtAudioStream::GetDefaultInputDevice'::__l1::catch_5(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// dtor$0 @ 150260370

void `Audio::FRtAudioInputWrapper::GetDefaultInputDevice'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// catch$4 @ 150260390

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FRtAudioInputWrapper::GetDefaultInputDevice'::__l1::catch_4
          (undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
  ::FString::FString((FString *)(param_2 + 0x28),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x28));
  }
  return 0;
}

// catch$5 @ 150260410

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FRtAudioInputWrapper::GetDefaultInputDevice'::__l1::catch_5(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// dtor$1 @ 150260460

void `Audio::FRtAudioInputWrapper::GetDeviceInfo'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x38));
  return;
}

// catch$9 @ 150260480

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FRtAudioInputWrapper::GetDeviceInfo'::__l1::catch_9(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x48) + 8))();
  ::FString::FString((FString *)(param_2 + 0x38),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x38));
  }
  return 0;
}

// catch$10 @ 150260500

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FRtAudioInputWrapper::GetDeviceInfo'::__l1::catch_10(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// dtor$0 @ 150260550

void `Audio::FAudioCaptureRtAudioStream::GetInputDevicesAvailable'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  Audio::FCaptureDeviceInfo::~FCaptureDeviceInfo((FCaptureDeviceInfo *)(param_2 + 0x70));
  return;
}

// dtor$1 @ 150260570

void `Audio::FAudioCaptureRtAudioStream::GetInputDevicesAvailable'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x60));
  return;
}

// dtor$2 @ 150260590

void `Audio::FAudioCaptureRtAudioStream::GetInputDevicesAvailable'::__l1::dtor_2
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString(*(FString **)(param_2 + 0xf8));
  return;
}

// dtor$5 @ 1502605b0

void `Audio::FAudioCaptureRtAudioStream::GetInputDevicesAvailable'::__l1::dtor_5
               (undefined8 param_1,longlong param_2)

{
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::~ForAnyElementType
            (*(ForAnyElementType **)(param_2 + 0x50));
  return;
}

// dtor$7 @ 1502605d0

void `Audio::FAudioCaptureRtAudioStream::GetInputDevicesAvailable'::__l1::dtor_7
               (undefined8 param_1,longlong param_2)

{
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::~ForAnyElementType
            (*(ForAnyElementType **)(param_2 + 0x50));
  return;
}

// catch$18 @ 1502605f0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FAudioCaptureRtAudioStream::GetInputDevicesAvailable'::__l1::catch_18
          (undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x58) + 8))();
  ::FString::FString((FString *)(param_2 + 0x60),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x60));
  }
  return 0;
}

// catch$19 @ 150260670

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FAudioCaptureRtAudioStream::GetInputDevicesAvailable'::__l1::catch_19(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// dtor$0 @ 1502606c0

void `Audio::FAudioCaptureRtAudioStream::GetStreamTime'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// catch$4 @ 1502606e0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FAudioCaptureRtAudioStream::GetStreamTime'::__l1::catch_4
          (undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
  ::FString::FString((FString *)(param_2 + 0x28),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x28));
  }
  return 0;
}

// catch$5 @ 150260760

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FAudioCaptureRtAudioStream::GetStreamTime'::__l1::catch_5(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// dtor$0 @ 1502607b0

void `Audio::FAudioCaptureRtAudioStream::IsCapturing'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// catch$4 @ 1502607d0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FAudioCaptureRtAudioStream::IsCapturing'::__l1::catch_4(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// catch$5 @ 150260820

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FAudioCaptureRtAudioStream::IsCapturing'::__l1::catch_5(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
  ::FString::FString((FString *)(param_2 + 0x28),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x28));
  }
  return 0;
}

// dtor$0 @ 1502608a0

void `Audio::FAudioCaptureRtAudioStream::IsStreamOpen'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// catch$4 @ 1502608c0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FAudioCaptureRtAudioStream::IsStreamOpen'::__l1::catch_4(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// catch$5 @ 150260910

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FAudioCaptureRtAudioStream::IsStreamOpen'::__l1::catch_5
          (undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
  ::FString::FString((FString *)(param_2 + 0x28),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x28));
  }
  return 0;
}

// dtor$0 @ 150260990

void `Audio::FRtAudioInputWrapper::IsStreamOpen'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// catch$4 @ 1502609b0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FRtAudioInputWrapper::IsStreamOpen'::__l1::catch_4(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// catch$5 @ 150260a00

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FRtAudioInputWrapper::IsStreamOpen'::__l1::catch_5(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
  ::FString::FString((FString *)(param_2 + 0x28),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x28));
  }
  return 0;
}

// dtor$0 @ 150260a80

void `Audio::FAudioCaptureRtAudioStream::OpenAudioCaptureStream'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  TFunction<void___cdecl(void_const_*,int,int,int,double,bool)>::
  ~TFunction<void___cdecl(void_const_*,int,int,int,double,bool)>
            (*(TFunction<void___cdecl(void_const_*,int,int,int,double,bool)> **)(param_2 + 0xa0));
  return;
}

// dtor$1 @ 150260aa0

void `Audio::FAudioCaptureRtAudioStream::OpenAudioCaptureStream'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  Audio::FCaptureDeviceInfo::~FCaptureDeviceInfo((FCaptureDeviceInfo *)(param_2 + 0x68));
  return;
}

// dtor$2 @ 150260ac0

void `Audio::FAudioCaptureRtAudioStream::OpenAudioCaptureStream'::__l1::dtor_2
               (undefined8 param_1,longlong param_2)

{
  RtAudio::DeviceInfo::~DeviceInfo((DeviceInfo *)(param_2 + 0xb0));
  return;
}

// dtor$3 @ 150260ae0

void `Audio::FAudioCaptureRtAudioStream::OpenAudioCaptureStream'::__l1::dtor_3
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x58));
  return;
}

// catch$50 @ 150260b00

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FAudioCaptureRtAudioStream::OpenAudioCaptureStream'::__l1::catch_50
          (undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x98) + 8))();
  ::FString::FString((FString *)(param_2 + 0x58),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x58));
  }
  return 0;
}

// catch$51 @ 150260b90

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FAudioCaptureRtAudioStream::OpenAudioCaptureStream'::__l1::catch_51(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// dtor$0 @ 150260be0

void `Audio::FRtAudioInputWrapper::OpenStream'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x58));
  return;
}

// catch$4 @ 150260c00

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FRtAudioInputWrapper::OpenStream'::__l1::catch_4(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x50) + 8))();
  ::FString::FString((FString *)(param_2 + 0x58),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x58));
  }
  return 0;
}

// catch$5 @ 150260c80

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FRtAudioInputWrapper::OpenStream'::__l1::catch_5(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// dtor$0 @ 150260cd0

void `Audio::FAudioCaptureRtAudioModule::ShutdownModule'::__l1::dtor_0(void)

{
  _Init_thread_abort(&`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                      ::__l2::_thread_safe_static_guard_0__);
  return;
}

// dtor$0 @ 150260cf0

void `Audio::FAudioCaptureRtAudioStream::StartStream'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// catch$4 @ 150260d10

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FAudioCaptureRtAudioStream::StartStream'::__l1::catch_4(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
  ::FString::FString((FString *)(param_2 + 0x28),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x28));
  }
  return 0;
}

// catch$5 @ 150260d90

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FAudioCaptureRtAudioStream::StartStream'::__l1::catch_5(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// dtor$0 @ 150260de0

void `Audio::FRtAudioInputWrapper::StartStream'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// catch$4 @ 150260e00

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FRtAudioInputWrapper::StartStream'::__l1::catch_4(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
  ::FString::FString((FString *)(param_2 + 0x28),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x28));
  }
  return 0;
}

// catch$5 @ 150260e80

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FRtAudioInputWrapper::StartStream'::__l1::catch_5(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// dtor$0 @ 150260ed0

void `Audio::FAudioCaptureRtAudioModule::StartupModule'::__l1::dtor_0(void)

{
  _Init_thread_abort(&`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                      ::__l2::_thread_safe_static_guard_0__);
  return;
}

// dtor$0 @ 150260ef0

void `Audio::FAudioCaptureRtAudioStream::StopStream'::__l1::dtor_0
               (undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// catch$4 @ 150260f10

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FAudioCaptureRtAudioStream::StopStream'::__l1::catch_4(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// catch$5 @ 150260f60

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FAudioCaptureRtAudioStream::StopStream'::__l1::catch_5(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
  ::FString::FString((FString *)(param_2 + 0x28),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x28));
  }
  return 0;
}

// dtor$0 @ 150260fe0

void `Audio::FRtAudioInputWrapper::StopStream'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::FString::~FString((FString *)(param_2 + 0x28));
  return;
}

// catch$4 @ 150261000

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8
`Audio::FRtAudioInputWrapper::StopStream'::__l1::catch_4(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(longlong **)(param_2 + 0x20) + 8))();
  ::FString::FString((FString *)(param_2 + 0x28),pcVar1);
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  if (*(void **)(param_2 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(param_2 + 0x28));
  }
  return 0;
}

// catch$5 @ 150261080

/* WARNING: Enum "Type": Some values do not have unique names */

undefined8 `Audio::FRtAudioInputWrapper::StopStream'::__l1::catch_5(void)

{
  if (1 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  return 0;
}

// dtor$0 @ 1502610d0

void `deviceQueryCallback'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}

// dtor$1 @ 1502610f0

void `deviceQueryCallback'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  DsDevice::~DsDevice((DsDevice *)(param_2 + 0x70));
  return;
}

// dtor$0 @ 150261110

void `RtApi::error'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x30));
  return;
}

// dtor$1 @ 150261130

void `RtApi::error'::__l1::dtor_1(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x30));
  return;
}

// dtor$0 @ 150261150

void `RtApiDs::getDeviceInfo'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    RtAudio::DeviceInfo::~DeviceInfo(*(DeviceInfo **)(param_2 + 0x70));
  }
  return;
}

// dtor$6 @ 150261180

void `RtApiDs::getDeviceInfo'::__l1::dtor_6(undefined8 param_1,longlong param_2)

{
  std::vector<unsigned_int,std::allocator<unsigned_int>_>::
  ~vector<unsigned_int,std::allocator<unsigned_int>_>
            ((vector<unsigned_int,std::allocator<unsigned_int>_> *)(param_2 + 0x38));
  return;
}

// dtor$0 @ 1502611a0

void `RtAudio::openRtApi'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  ::operator_delete(*(void **)(param_2 + 0x60),0x2a8);
  return;
}

// dtor$3 @ 1502611d0

void `RtAudio::openRtApi'::__l1::dtor_3(undefined8 param_1,longlong param_2)

{
  std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbase_destructor_
            ((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x60) + 8));
  return;
}

// dtor$4 @ 1502611f0

void `RtAudio::openRtApi'::__l1::dtor_4(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(longlong *)(param_2 + 0x60) + 0xf0));
  return;
}

// dtor$6 @ 150261210

void `RtAudio::openRtApi'::__l1::dtor_6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x68) & 1) != 0) {
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x70) + 0x88));
  }
  return;
}

// dtor$7 @ 150261250

void `RtAudio::openRtApi'::__l1::dtor_7(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00015026125b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x70) + 0x10));
  return;
}

// dtor$1 @ 150261270

void `std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::str'::__l1::
     dtor_1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40)
              );
  }
  return;
}

