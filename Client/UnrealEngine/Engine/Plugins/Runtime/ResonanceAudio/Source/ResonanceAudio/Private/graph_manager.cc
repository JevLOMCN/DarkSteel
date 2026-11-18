// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 121

// operator==<vraudio::BufferedSourceNode> @ 14f0839b0

bool __cdecl
std::operator==<vraudio::BufferedSourceNode>
          (shared_ptr<vraudio::BufferedSourceNode> *param_1,void *param_2)

{
  return *(longlong *)param_1 == 0;
}

// _Assign_counted_range<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_const_*> @ 14f0839c0

void __thiscall
std::
vector<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
::
_Assign_counted_range<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_const_*>
          (vector<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
           *this,pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                 *param_1,ulong64 param_2)

{
  pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *ppVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *ppVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  longlong lVar6;
  longlong lVar7;
  pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *ppVar8;
  ulonglong uVar9;
  
  ppVar8 = (this->_Mypair)._Myval2._Myfirst;
  uVar9 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppVar8) / 0x28;
  if (uVar9 < param_2) {
    if (0x666666666666666 < param_2) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    if (0x666666666666666 - (uVar9 >> 1) < uVar9) {
      uVar9 = 0x666666666666666;
    }
    else {
      uVar9 = uVar9 + (uVar9 >> 1);
      if (uVar9 < param_2) {
        uVar9 = param_2;
      }
    }
    if (ppVar8 != (pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *
                  )0x0) {
      ppVar1 = (this->_Mypair)._Myval2._Mylast;
      for (; ppVar8 != ppVar1; ppVar8 = ppVar8 + 1) {
        basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&ppVar8->second);
      }
      allocator<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
      ::deallocate((allocator<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                    *)this,(this->_Mypair)._Myval2._Myfirst,
                   ((longlong)(this->_Mypair)._Myval2._Myend -
                   (longlong)(this->_Mypair)._Myval2._Myfirst) / 0x28);
      (this->_Mypair)._Myval2._Myfirst =
           (pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)0x0;
      (this->_Mypair)._Myval2._Mylast =
           (pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)0x0;
      (this->_Mypair)._Myval2._Myend =
           (pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)0x0;
    }
    if (0x666666666666666 < uVar9) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
    ppVar1 = _Allocate<16,std::_Default_allocate_traits>(uVar9 * 0x28);
    (this->_Mypair)._Myval2._Myfirst = ppVar1;
    (this->_Mypair)._Myval2._Mylast = ppVar1;
    (this->_Mypair)._Myval2._Myend = ppVar1 + uVar9;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      ppVar1->first = param_1->first;
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (&ppVar1->second,&param_1->second);
      ppVar1 = ppVar1 + 1;
      param_1 = param_1 + 1;
    }
  }
  else {
    ppVar1 = (this->_Mypair)._Myval2._Mylast;
    uVar9 = ((longlong)ppVar1 - (longlong)ppVar8) / 0x28;
    if (uVar9 < param_2) {
      if (ppVar8 != ppVar1) {
        pbVar5 = &param_1->second;
        pbVar3 = &ppVar8->second;
        do {
          ppVar8->first = param_1->first;
          if (pbVar3 != pbVar5) {
            pbVar2 = pbVar5;
            if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
              pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (pbVar5->_Mypair)._Myval2._Bx._Ptr;
            }
            basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (pbVar3,(char *)pbVar2,(pbVar5->_Mypair)._Myval2._Mysize);
          }
          ppVar1 = (this->_Mypair)._Myval2._Mylast;
          ppVar8 = ppVar8 + 1;
          pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   ((longlong)(pbVar3 + 1) + 8);
          param_1 = param_1 + 1;
          pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   ((longlong)(pbVar5 + 1) + 8);
        } while (ppVar8 != ppVar1);
      }
      lVar6 = param_2 - uVar9;
      if (lVar6 != 0) {
        lVar7 = (longlong)ppVar1 + (8 - (longlong)param_1);
        do {
          ppVar1->first = param_1->first;
          basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (lVar7 + (longlong)param_1),&param_1->second);
          ppVar1 = ppVar1 + 1;
          param_1 = param_1 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      (this->_Mypair)._Myval2._Mylast = ppVar1;
      return;
    }
    ppVar1 = ppVar8 + param_2;
    if (param_2 != 0) {
      pbVar3 = &param_1->second;
      pbVar5 = &ppVar8->second;
      do {
        ppVar8->first = *(int *)((longlong)(pbVar3 + -1) + 0x18);
        if (pbVar5 != pbVar3) {
          pbVar2 = pbVar3;
          if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
            pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (pbVar3->_Mypair)._Myval2._Bx._Ptr;
          }
          basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (pbVar5,(char *)pbVar2,(pbVar3->_Mypair)._Myval2._Mysize);
        }
        ppVar8 = ppVar8 + 1;
        pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((longlong)(pbVar5 + 1) + 8);
        pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((longlong)(pbVar3 + 1) + 8);
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    ppVar8 = (this->_Mypair)._Myval2._Mylast;
    for (ppVar4 = ppVar1; ppVar4 != ppVar8; ppVar4 = ppVar4 + 1) {
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&ppVar4->second);
    }
  }
  (this->_Mypair)._Myval2._Mylast = ppVar1;
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::AmbisonicBinauralDecoderNode> @ 14f083c70

void __thiscall
std::shared_ptr<vraudio::AmbisonicBinauralDecoderNode>::
_Set_ptr_rep_and_enable_shared<vraudio::AmbisonicBinauralDecoderNode>
          (shared_ptr<vraudio::AmbisonicBinauralDecoderNode> *this,
          AmbisonicBinauralDecoderNode *param_1,_Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  AmbisonicBinauralDecoderNode *pAVar3;
  longlong *plVar4;
  longlong lVar5;
  AmbisonicBinauralDecoderNode *pAVar6;
  AmbisonicBinauralDecoderNode *pAVar7;
  
  *(AmbisonicBinauralDecoderNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (AmbisonicBinauralDecoderNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pAVar3 = *(AmbisonicBinauralDecoderNode **)&this->field_0x8;
    pAVar6 = (AmbisonicBinauralDecoderNode *)0x0;
    pAVar7 = (AmbisonicBinauralDecoderNode *)0x0;
    if (pAVar3 != (AmbisonicBinauralDecoderNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pAVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pAVar6 = param_1;
      pAVar7 = pAVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pAVar6;
    param_1->_padding_ = (longlong)pAVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pAVar3 != (AmbisonicBinauralDecoderNode *)0x0) {
      LOCK();
      plVar4 = &pAVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pAVar3->_padding_)(pAVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pAVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pAVar3->_padding_ + 8))(pAVar3);
        }
      }
    }
  }
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::AmbisonicMixingEncoderNode> @ 14f083d30

void __thiscall
std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>::
_Set_ptr_rep_and_enable_shared<vraudio::AmbisonicMixingEncoderNode>
          (shared_ptr<vraudio::AmbisonicMixingEncoderNode> *this,AmbisonicMixingEncoderNode *param_1
          ,_Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  AmbisonicMixingEncoderNode *pAVar3;
  longlong *plVar4;
  longlong lVar5;
  AmbisonicMixingEncoderNode *pAVar6;
  AmbisonicMixingEncoderNode *pAVar7;
  
  *(AmbisonicMixingEncoderNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (AmbisonicMixingEncoderNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pAVar3 = *(AmbisonicMixingEncoderNode **)&this->field_0x8;
    pAVar6 = (AmbisonicMixingEncoderNode *)0x0;
    pAVar7 = (AmbisonicMixingEncoderNode *)0x0;
    if (pAVar3 != (AmbisonicMixingEncoderNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pAVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pAVar6 = param_1;
      pAVar7 = pAVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pAVar6;
    param_1->_padding_ = (longlong)pAVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pAVar3 != (AmbisonicMixingEncoderNode *)0x0) {
      LOCK();
      plVar4 = &pAVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pAVar3->_padding_)(pAVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pAVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pAVar3->_padding_ + 8))(pAVar3);
        }
      }
    }
  }
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::BufferedSourceNode> @ 14f083df0

void __thiscall
std::shared_ptr<vraudio::BufferedSourceNode>::
_Set_ptr_rep_and_enable_shared<vraudio::BufferedSourceNode>
          (shared_ptr<vraudio::BufferedSourceNode> *this,BufferedSourceNode *param_1,
          _Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  BufferedSourceNode *pBVar3;
  longlong *plVar4;
  longlong lVar5;
  BufferedSourceNode *pBVar6;
  BufferedSourceNode *pBVar7;
  
  *(BufferedSourceNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (BufferedSourceNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pBVar3 = *(BufferedSourceNode **)&this->field_0x8;
    pBVar6 = (BufferedSourceNode *)0x0;
    pBVar7 = (BufferedSourceNode *)0x0;
    if (pBVar3 != (BufferedSourceNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pBVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pBVar6 = param_1;
      pBVar7 = pBVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pBVar6;
    param_1->_padding_ = (longlong)pBVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pBVar3 != (BufferedSourceNode *)0x0) {
      LOCK();
      plVar4 = &pBVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pBVar3->_padding_)(pBVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pBVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pBVar3->_padding_ + 8))(pBVar3);
        }
      }
    }
  }
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::FoaRotatorNode> @ 14f083eb0

void __thiscall
std::shared_ptr<vraudio::FoaRotatorNode>::_Set_ptr_rep_and_enable_shared<vraudio::FoaRotatorNode>
          (shared_ptr<vraudio::FoaRotatorNode> *this,FoaRotatorNode *param_1,
          _Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  FoaRotatorNode *pFVar3;
  longlong *plVar4;
  longlong lVar5;
  FoaRotatorNode *pFVar6;
  FoaRotatorNode *pFVar7;
  
  *(FoaRotatorNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (FoaRotatorNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pFVar3 = *(FoaRotatorNode **)&this->field_0x8;
    pFVar6 = (FoaRotatorNode *)0x0;
    pFVar7 = (FoaRotatorNode *)0x0;
    if (pFVar3 != (FoaRotatorNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pFVar6 = param_1;
      pFVar7 = pFVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pFVar6;
    param_1->_padding_ = (longlong)pFVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pFVar3 != (FoaRotatorNode *)0x0) {
      LOCK();
      plVar4 = &pFVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pFVar3->_padding_)(pFVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pFVar3->_padding_ + 8))(pFVar3);
        }
      }
    }
  }
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::GainMixerNode> @ 14f083f70

void __thiscall
std::shared_ptr<vraudio::GainMixerNode>::_Set_ptr_rep_and_enable_shared<vraudio::GainMixerNode>
          (shared_ptr<vraudio::GainMixerNode> *this,GainMixerNode *param_1,_Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  GainMixerNode *pGVar3;
  longlong *plVar4;
  longlong lVar5;
  GainMixerNode *pGVar6;
  GainMixerNode *pGVar7;
  
  *(GainMixerNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (GainMixerNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pGVar3 = *(GainMixerNode **)&this->field_0x8;
    pGVar6 = (GainMixerNode *)0x0;
    pGVar7 = (GainMixerNode *)0x0;
    if (pGVar3 != (GainMixerNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pGVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pGVar6 = param_1;
      pGVar7 = pGVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pGVar6;
    param_1->_padding_ = (longlong)pGVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pGVar3 != (GainMixerNode *)0x0) {
      LOCK();
      plVar4 = &pGVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pGVar3->_padding_)(pGVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pGVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pGVar3->_padding_ + 8))(pGVar3);
        }
      }
    }
  }
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::GainNode> @ 14f084030

void __thiscall
std::shared_ptr<vraudio::GainNode>::_Set_ptr_rep_and_enable_shared<vraudio::GainNode>
          (shared_ptr<vraudio::GainNode> *this,GainNode *param_1,_Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  GainNode *pGVar3;
  longlong *plVar4;
  longlong lVar5;
  GainNode *pGVar6;
  GainNode *pGVar7;
  
  *(GainNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (GainNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pGVar3 = *(GainNode **)&this->field_0x8;
    pGVar6 = (GainNode *)0x0;
    pGVar7 = (GainNode *)0x0;
    if (pGVar3 != (GainNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pGVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pGVar6 = param_1;
      pGVar7 = pGVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pGVar6;
    param_1->_padding_ = (longlong)pGVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pGVar3 != (GainNode *)0x0) {
      LOCK();
      plVar4 = &pGVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pGVar3->_padding_)(pGVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pGVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pGVar3->_padding_ + 8))(pGVar3);
        }
      }
    }
  }
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::HoaRotatorNode> @ 14f0840f0

void __thiscall
std::shared_ptr<vraudio::HoaRotatorNode>::_Set_ptr_rep_and_enable_shared<vraudio::HoaRotatorNode>
          (shared_ptr<vraudio::HoaRotatorNode> *this,HoaRotatorNode *param_1,
          _Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  HoaRotatorNode *pHVar3;
  longlong *plVar4;
  longlong lVar5;
  HoaRotatorNode *pHVar6;
  HoaRotatorNode *pHVar7;
  
  *(HoaRotatorNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (HoaRotatorNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pHVar3 = *(HoaRotatorNode **)&this->field_0x8;
    pHVar6 = (HoaRotatorNode *)0x0;
    pHVar7 = (HoaRotatorNode *)0x0;
    if (pHVar3 != (HoaRotatorNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pHVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pHVar6 = param_1;
      pHVar7 = pHVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pHVar6;
    param_1->_padding_ = (longlong)pHVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pHVar3 != (HoaRotatorNode *)0x0) {
      LOCK();
      plVar4 = &pHVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pHVar3->_padding_)(pHVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pHVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pHVar3->_padding_ + 8))(pHVar3);
        }
      }
    }
  }
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::MixerNode> @ 14f0841b0

void __thiscall
std::shared_ptr<vraudio::MixerNode>::_Set_ptr_rep_and_enable_shared<vraudio::MixerNode>
          (shared_ptr<vraudio::MixerNode> *this,MixerNode *param_1,_Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  MixerNode *pMVar3;
  longlong *plVar4;
  longlong lVar5;
  MixerNode *pMVar6;
  MixerNode *pMVar7;
  
  *(MixerNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (MixerNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pMVar3 = *(MixerNode **)&this->field_0x8;
    pMVar6 = (MixerNode *)0x0;
    pMVar7 = (MixerNode *)0x0;
    if (pMVar3 != (MixerNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pMVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pMVar6 = param_1;
      pMVar7 = pMVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pMVar6;
    param_1->_padding_ = (longlong)pMVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pMVar3 != (MixerNode *)0x0) {
      LOCK();
      plVar4 = &pMVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pMVar3->_padding_)(pMVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pMVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pMVar3->_padding_ + 8))(pMVar3);
        }
      }
    }
  }
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::MonoFromSoundfieldNode> @ 14f084270

void __thiscall
std::shared_ptr<vraudio::MonoFromSoundfieldNode>::
_Set_ptr_rep_and_enable_shared<vraudio::MonoFromSoundfieldNode>
          (shared_ptr<vraudio::MonoFromSoundfieldNode> *this,MonoFromSoundfieldNode *param_1,
          _Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  MonoFromSoundfieldNode *pMVar3;
  longlong *plVar4;
  longlong lVar5;
  MonoFromSoundfieldNode *pMVar6;
  MonoFromSoundfieldNode *pMVar7;
  
  *(MonoFromSoundfieldNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (MonoFromSoundfieldNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pMVar3 = *(MonoFromSoundfieldNode **)&this->field_0x8;
    pMVar6 = (MonoFromSoundfieldNode *)0x0;
    pMVar7 = (MonoFromSoundfieldNode *)0x0;
    if (pMVar3 != (MonoFromSoundfieldNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pMVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pMVar6 = param_1;
      pMVar7 = pMVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pMVar6;
    param_1->_padding_ = (longlong)pMVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pMVar3 != (MonoFromSoundfieldNode *)0x0) {
      LOCK();
      plVar4 = &pMVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pMVar3->_padding_)(pMVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pMVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pMVar3->_padding_ + 8))(pMVar3);
        }
      }
    }
  }
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::NearFieldEffectNode> @ 14f084330

void __thiscall
std::shared_ptr<vraudio::NearFieldEffectNode>::
_Set_ptr_rep_and_enable_shared<vraudio::NearFieldEffectNode>
          (shared_ptr<vraudio::NearFieldEffectNode> *this,NearFieldEffectNode *param_1,
          _Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  NearFieldEffectNode *pNVar3;
  longlong *plVar4;
  longlong lVar5;
  NearFieldEffectNode *pNVar6;
  NearFieldEffectNode *pNVar7;
  
  *(NearFieldEffectNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (NearFieldEffectNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pNVar3 = *(NearFieldEffectNode **)&this->field_0x8;
    pNVar6 = (NearFieldEffectNode *)0x0;
    pNVar7 = (NearFieldEffectNode *)0x0;
    if (pNVar3 != (NearFieldEffectNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pNVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pNVar6 = param_1;
      pNVar7 = pNVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pNVar6;
    param_1->_padding_ = (longlong)pNVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pNVar3 != (NearFieldEffectNode *)0x0) {
      LOCK();
      plVar4 = &pNVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pNVar3->_padding_)(pNVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pNVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pNVar3->_padding_ + 8))(pNVar3);
        }
      }
    }
  }
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::OcclusionNode> @ 14f0843f0

void __thiscall
std::shared_ptr<vraudio::OcclusionNode>::_Set_ptr_rep_and_enable_shared<vraudio::OcclusionNode>
          (shared_ptr<vraudio::OcclusionNode> *this,OcclusionNode *param_1,_Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  OcclusionNode *pOVar3;
  longlong *plVar4;
  longlong lVar5;
  OcclusionNode *pOVar6;
  OcclusionNode *pOVar7;
  
  *(OcclusionNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (OcclusionNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pOVar3 = *(OcclusionNode **)&this->field_0x8;
    pOVar6 = (OcclusionNode *)0x0;
    pOVar7 = (OcclusionNode *)0x0;
    if (pOVar3 != (OcclusionNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pOVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pOVar6 = param_1;
      pOVar7 = pOVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pOVar6;
    param_1->_padding_ = (longlong)pOVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pOVar3 != (OcclusionNode *)0x0) {
      LOCK();
      plVar4 = &pOVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pOVar3->_padding_)(pOVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pOVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pOVar3->_padding_ + 8))(pOVar3);
        }
      }
    }
  }
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::ReflectionsNode> @ 14f0844b0

void __thiscall
std::shared_ptr<vraudio::ReflectionsNode>::_Set_ptr_rep_and_enable_shared<vraudio::ReflectionsNode>
          (shared_ptr<vraudio::ReflectionsNode> *this,ReflectionsNode *param_1,
          _Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  ReflectionsNode *pRVar3;
  longlong *plVar4;
  longlong lVar5;
  ReflectionsNode *pRVar6;
  ReflectionsNode *pRVar7;
  
  *(ReflectionsNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (ReflectionsNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pRVar3 = *(ReflectionsNode **)&this->field_0x8;
    pRVar6 = (ReflectionsNode *)0x0;
    pRVar7 = (ReflectionsNode *)0x0;
    if (pRVar3 != (ReflectionsNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pRVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pRVar6 = param_1;
      pRVar7 = pRVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pRVar6;
    param_1->_padding_ = (longlong)pRVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pRVar3 != (ReflectionsNode *)0x0) {
      LOCK();
      plVar4 = &pRVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pRVar3->_padding_)(pRVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pRVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pRVar3->_padding_ + 8))(pRVar3);
        }
      }
    }
  }
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::ReverbNode> @ 14f084570

void __thiscall
std::shared_ptr<vraudio::ReverbNode>::_Set_ptr_rep_and_enable_shared<vraudio::ReverbNode>
          (shared_ptr<vraudio::ReverbNode> *this,ReverbNode *param_1,_Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  ReverbNode *pRVar3;
  longlong *plVar4;
  longlong lVar5;
  ReverbNode *pRVar6;
  ReverbNode *pRVar7;
  
  *(ReverbNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (ReverbNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pRVar3 = *(ReverbNode **)&this->field_0x8;
    pRVar6 = (ReverbNode *)0x0;
    pRVar7 = (ReverbNode *)0x0;
    if (pRVar3 != (ReverbNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pRVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pRVar6 = param_1;
      pRVar7 = pRVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pRVar6;
    param_1->_padding_ = (longlong)pRVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pRVar3 != (ReverbNode *)0x0) {
      LOCK();
      plVar4 = &pRVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pRVar3->_padding_)(pRVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pRVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pRVar3->_padding_ + 8))(pRVar3);
        }
      }
    }
  }
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::SinkNode> @ 14f084630

void __thiscall
std::shared_ptr<vraudio::SinkNode>::_Set_ptr_rep_and_enable_shared<vraudio::SinkNode>
          (shared_ptr<vraudio::SinkNode> *this,SinkNode *param_1,_Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  SinkNode *pSVar3;
  longlong *plVar4;
  longlong lVar5;
  SinkNode *pSVar6;
  SinkNode *pSVar7;
  
  *(SinkNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (SinkNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pSVar3 = *(SinkNode **)&this->field_0x8;
    pSVar6 = (SinkNode *)0x0;
    pSVar7 = (SinkNode *)0x0;
    if (pSVar3 != (SinkNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pSVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pSVar6 = param_1;
      pSVar7 = pSVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pSVar6;
    param_1->_padding_ = (longlong)pSVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pSVar3 != (SinkNode *)0x0) {
      LOCK();
      plVar4 = &pSVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pSVar3->_padding_)(pSVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pSVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pSVar3->_padding_ + 8))(pSVar3);
        }
      }
    }
  }
  return;
}

// _Set_ptr_rep_and_enable_shared<vraudio::StereoMixingPannerNode> @ 14f0846f0

void __thiscall
std::shared_ptr<vraudio::StereoMixingPannerNode>::
_Set_ptr_rep_and_enable_shared<vraudio::StereoMixingPannerNode>
          (shared_ptr<vraudio::StereoMixingPannerNode> *this,StereoMixingPannerNode *param_1,
          _Ref_count_base *param_2)

{
  int *piVar1;
  int iVar2;
  StereoMixingPannerNode *pSVar3;
  longlong *plVar4;
  longlong lVar5;
  StereoMixingPannerNode *pSVar6;
  StereoMixingPannerNode *pSVar7;
  
  *(StereoMixingPannerNode **)this = param_1;
  *(_Ref_count_base **)&this->field_0x8 = param_2;
  if ((param_1 != (StereoMixingPannerNode *)0x0) &&
     ((param_1->_padding_ == 0 || (*(int *)(param_1->_padding_ + 8) == 0)))) {
    if (param_2 != (_Ref_count_base *)0x0) {
      LOCK();
      param_2->_Uses = param_2->_Uses + 1;
      UNLOCK();
    }
    pSVar3 = *(StereoMixingPannerNode **)&this->field_0x8;
    pSVar6 = (StereoMixingPannerNode *)0x0;
    pSVar7 = (StereoMixingPannerNode *)0x0;
    if (pSVar3 != (StereoMixingPannerNode *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)&pSVar3->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pSVar6 = param_1;
      pSVar7 = pSVar3;
    }
    plVar4 = (longlong *)param_1->_padding_;
    param_1->_padding_ = (longlong)pSVar6;
    param_1->_padding_ = (longlong)pSVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (pSVar3 != (StereoMixingPannerNode *)0x0) {
      LOCK();
      plVar4 = &pSVar3->_padding_;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)pSVar3->_padding_)(pSVar3);
        LOCK();
        piVar1 = (int *)((longlong)&pSVar3->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pSVar3->_padding_ + 8))(pSVar3);
        }
      }
    }
  }
  return;
}

// _Try_emplace<int_const_&> @ 14f0847b0

pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>,void_*>_*,bool>
* __thiscall
std::
_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>,0>_>
::_Try_emplace<int_const_&>
          (_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>,0>_>
           *this,pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>,void_*>_*,bool>
                 *__return_storage_ptr__,int *param_1)

{
  ulong64 *puVar1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  *p_Var2;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  _Var3;
  uint uVar4;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  _Var5;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>,void_*>_*,bool>
  *extraout_RAX;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  _Var12;
  undefined1 auVar13 [16];
  
  _Var12 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
            )(this->_List)._Mypair._Myval2._Myhead;
  uVar11 = (((((ulonglong)(byte)*param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3;
  p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
  uVar9 = uVar11 & this->_Mask;
  _Var5 = p_Var2[uVar9 * 2 + 1];
  if (_Var5 != _Var12) {
    iVar6 = ((pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_> *)
            ((longlong)_Var5 + 0x10))->first;
    _Var12 = _Var5;
    while( true ) {
      if (*param_1 == iVar6) {
        __return_storage_ptr__->first =
             (_List_node<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>,void_*>
              *)_Var12;
        __return_storage_ptr__->second = false;
        return __return_storage_ptr__;
      }
      if (_Var12 == p_Var2[uVar9 * 2]) break;
      _Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                 *)((longlong)_Var12 + 8);
      iVar6 = ((pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_> *)
              ((longlong)_Var12 + 0x10))->first;
    }
  }
  if ((this->_List)._Mypair._Myval2._Mysize == 0x666666666666666) {
    _Xlength_error("unordered_map/set too long");
    return extraout_RAX;
  }
  _Var5 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
           )::operator_new(0x28);
  ((pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_> *)
  ((longlong)_Var5 + 0x10))->first = *param_1;
  uVar4 = 0;
  *(undefined8 *)((longlong)_Var5 + 0x18) = 0;
  *(undefined8 *)((longlong)_Var5 + 0x20) = 0;
  uVar7 = (this->_List)._Mypair._Myval2._Mysize + 1;
  uVar9 = this->_Maxidx;
  if ((longlong)uVar7 < 0) {
    uVar4 = (uint)(uVar7 >> 1) | (uint)uVar7 & 1;
  }
  if ((longlong)uVar9 < 0) {
    uVar4 = (uint)uVar9 & 1;
  }
  if ((float)this->_Traitsobj < (float)uVar7 / (float)uVar9) {
    auVar13._0_4_ = (float)uVar7 / (float)this->_Traitsobj;
    iVar6 = (int)auVar13._0_4_;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar13._0_4_)) {
      auVar13._4_4_ = auVar13._0_4_;
      auVar13._8_8_ = 0;
      uVar4 = movmskps(uVar4,auVar13);
      auVar13._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
    }
    lVar8 = 0;
    if ((__real_5f000000 <= auVar13._0_4_) &&
       (auVar13._0_4_ = auVar13._0_4_ - __real_5f000000, auVar13._0_4_ < __real_5f000000)) {
      lVar8 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)auVar13._0_4_ + lVar8)) {
      uVar7 = (longlong)auVar13._0_4_ + lVar8;
    }
    uVar10 = uVar9;
    if ((uVar9 < uVar7) && ((0x1ff < uVar9 || (uVar10 = uVar9 * 8, uVar9 * 8 < uVar7)))) {
      uVar10 = uVar7;
    }
    _Forced_rehash(this,uVar10);
    p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
    uVar9 = this->_Mask & uVar11;
    _Var12 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
              )(this->_List)._Mypair._Myval2._Myhead;
    _Var3 = p_Var2[uVar9 * 2 + 1];
    if (_Var3 != _Var12) {
      iVar6 = ((pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_> *)
              ((longlong)_Var3 + 0x10))->first;
      _Var12 = _Var3;
      while (((pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_> *)
             ((longlong)_Var5 + 0x10))->first != iVar6) {
        if (_Var12 == p_Var2[uVar9 * 2]) goto LAB_14f0849d1;
        _Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                   *)((longlong)_Var12 + 8);
        iVar6 = ((pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_> *)
                ((longlong)_Var12 + 0x10))->first;
      }
      _Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                 *)_Var12;
    }
  }
LAB_14f0849d1:
  _Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
            *)((longlong)_Var12 + 8);
  puVar1 = &(this->_List)._Mypair._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
    *)_Var5 = _Var12;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
    *)((longlong)_Var5 + 8) = _Var3;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
    *)_Var3 = _Var5;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
    *)((longlong)_Var12 + 8) = _Var5;
  p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
  uVar11 = this->_Mask & uVar11;
  if (p_Var2[uVar11 * 2] ==
      (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
       )(this->_List)._Mypair._Myval2._Myhead) {
    p_Var2[uVar11 * 2] = _Var5;
  }
  else {
    if (p_Var2[uVar11 * 2] == _Var12) {
      p_Var2[uVar11 * 2] = _Var5;
      __return_storage_ptr__->first =
           (_List_node<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>,void_*>
            *)_Var5;
      __return_storage_ptr__->second = true;
      return __return_storage_ptr__;
    }
    if (p_Var2[uVar11 * 2 + 1] != _Var3) goto LAB_14f084a31;
  }
  p_Var2[uVar11 * 2 + 1] = _Var5;
LAB_14f084a31:
  __return_storage_ptr__->first =
       (_List_node<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>,void_*>
        *)_Var5;
  __return_storage_ptr__->second = true;
  return __return_storage_ptr__;
}

// _Try_emplace<int_const_&> @ 14f084a60

pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*>_*,bool>
* __thiscall
std::
_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::BufferedSourceNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>,0>_>
::_Try_emplace<int_const_&>
          (_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::BufferedSourceNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>,0>_>
           *this,pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*>_*,bool>
                 *__return_storage_ptr__,int *param_1)

{
  ulong64 *puVar1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  *p_Var2;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  _Var3;
  uint uVar4;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  _Var5;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*>_*,bool>
  *extraout_RAX;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  _Var12;
  undefined1 auVar13 [16];
  
  _Var12 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
            )(this->_List)._Mypair._Myval2._Myhead;
  uVar11 = (((((ulonglong)(byte)*param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3;
  p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
  uVar9 = uVar11 & this->_Mask;
  _Var5 = p_Var2[uVar9 * 2 + 1];
  if (_Var5 != _Var12) {
    iVar6 = ((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
            ((longlong)_Var5 + 0x10))->first;
    _Var12 = _Var5;
    while( true ) {
      if (*param_1 == iVar6) {
        __return_storage_ptr__->first =
             (_List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*>
              *)_Var12;
        __return_storage_ptr__->second = false;
        return __return_storage_ptr__;
      }
      if (_Var12 == p_Var2[uVar9 * 2]) break;
      _Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                 *)((longlong)_Var12 + 8);
      iVar6 = ((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
              ((longlong)_Var12 + 0x10))->first;
    }
  }
  if ((this->_List)._Mypair._Myval2._Mysize == 0x666666666666666) {
    _Xlength_error("unordered_map/set too long");
    return extraout_RAX;
  }
  _Var5 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
           )::operator_new(0x28);
  ((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)((longlong)_Var5 + 0x10))->
  first = *param_1;
  uVar4 = 0;
  *(undefined8 *)((longlong)_Var5 + 0x18) = 0;
  *(undefined8 *)((longlong)_Var5 + 0x20) = 0;
  uVar7 = (this->_List)._Mypair._Myval2._Mysize + 1;
  uVar9 = this->_Maxidx;
  if ((longlong)uVar7 < 0) {
    uVar4 = (uint)(uVar7 >> 1) | (uint)uVar7 & 1;
  }
  if ((longlong)uVar9 < 0) {
    uVar4 = (uint)uVar9 & 1;
  }
  if ((float)this->_Traitsobj < (float)uVar7 / (float)uVar9) {
    auVar13._0_4_ = (float)uVar7 / (float)this->_Traitsobj;
    iVar6 = (int)auVar13._0_4_;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar13._0_4_)) {
      auVar13._4_4_ = auVar13._0_4_;
      auVar13._8_8_ = 0;
      uVar4 = movmskps(uVar4,auVar13);
      auVar13._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
    }
    lVar8 = 0;
    if ((__real_5f000000 <= auVar13._0_4_) &&
       (auVar13._0_4_ = auVar13._0_4_ - __real_5f000000, auVar13._0_4_ < __real_5f000000)) {
      lVar8 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)auVar13._0_4_ + lVar8)) {
      uVar7 = (longlong)auVar13._0_4_ + lVar8;
    }
    uVar10 = uVar9;
    if ((uVar9 < uVar7) && ((0x1ff < uVar9 || (uVar10 = uVar9 * 8, uVar9 * 8 < uVar7)))) {
      uVar10 = uVar7;
    }
    _Forced_rehash(this,uVar10);
    p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
    uVar9 = this->_Mask & uVar11;
    _Var12 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
              )(this->_List)._Mypair._Myval2._Myhead;
    _Var3 = p_Var2[uVar9 * 2 + 1];
    if (_Var3 != _Var12) {
      iVar6 = ((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
              ((longlong)_Var3 + 0x10))->first;
      _Var12 = _Var3;
      while (((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
             ((longlong)_Var5 + 0x10))->first != iVar6) {
        if (_Var12 == p_Var2[uVar9 * 2]) goto LAB_14f084c81;
        _Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                   *)((longlong)_Var12 + 8);
        iVar6 = ((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
                ((longlong)_Var12 + 0x10))->first;
      }
      _Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                 *)_Var12;
    }
  }
LAB_14f084c81:
  _Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
            *)((longlong)_Var12 + 8);
  puVar1 = &(this->_List)._Mypair._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
    *)_Var5 = _Var12;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
    *)((longlong)_Var5 + 8) = _Var3;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
    *)_Var3 = _Var5;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
    *)((longlong)_Var12 + 8) = _Var5;
  p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
  uVar11 = this->_Mask & uVar11;
  if (p_Var2[uVar11 * 2] ==
      (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
       )(this->_List)._Mypair._Myval2._Myhead) {
    p_Var2[uVar11 * 2] = _Var5;
  }
  else {
    if (p_Var2[uVar11 * 2] == _Var12) {
      p_Var2[uVar11 * 2] = _Var5;
      __return_storage_ptr__->first =
           (_List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*> *
           )_Var5;
      __return_storage_ptr__->second = true;
      return __return_storage_ptr__;
    }
    if (p_Var2[uVar11 * 2 + 1] != _Var3) goto LAB_14f084ce1;
  }
  p_Var2[uVar11 * 2 + 1] = _Var5;
LAB_14f084ce1:
  __return_storage_ptr__->first =
       (_List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*> *)
       _Var5;
  __return_storage_ptr__->second = true;
  return __return_storage_ptr__;
}

// _Try_emplace<int_const_&> @ 14f084d10

pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*>_*,bool> *
__thiscall
std::
_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
::_Try_emplace<int_const_&>
          (_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
           *this,pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*>_*,bool>
                 *__return_storage_ptr__,int *param_1)

{
  ulong64 *puVar1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  *p_Var2;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  _Var3;
  uint uVar4;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  _Var5;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*>_*,bool>
  *extraout_RAX;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  _Var12;
  undefined1 auVar13 [16];
  
  _Var12 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
            )(this->_List)._Mypair._Myval2._Myhead;
  uVar11 = (((((ulonglong)(byte)*param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3;
  p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
  uVar9 = uVar11 & this->_Mask;
  _Var5 = p_Var2[uVar9 * 2 + 1];
  if (_Var5 != _Var12) {
    iVar6 = ((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)((longlong)_Var5 + 0x10))->
            first;
    _Var12 = _Var5;
    while( true ) {
      if (*param_1 == iVar6) {
        __return_storage_ptr__->first =
             (_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*> *)_Var12
        ;
        __return_storage_ptr__->second = false;
        return __return_storage_ptr__;
      }
      if (_Var12 == p_Var2[uVar9 * 2]) break;
      _Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                 *)((longlong)_Var12 + 8);
      iVar6 = ((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)((longlong)_Var12 + 0x10))->
              first;
    }
  }
  if ((this->_List)._Mypair._Myval2._Mysize == 0x666666666666666) {
    _Xlength_error("unordered_map/set too long");
    return extraout_RAX;
  }
  _Var5 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
           )::operator_new(0x28);
  ((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)((longlong)_Var5 + 0x10))->first =
       *param_1;
  uVar4 = 0;
  *(undefined8 *)((longlong)_Var5 + 0x18) = 0;
  *(undefined8 *)((longlong)_Var5 + 0x20) = 0;
  uVar7 = (this->_List)._Mypair._Myval2._Mysize + 1;
  uVar9 = this->_Maxidx;
  if ((longlong)uVar7 < 0) {
    uVar4 = (uint)(uVar7 >> 1) | (uint)uVar7 & 1;
  }
  if ((longlong)uVar9 < 0) {
    uVar4 = (uint)uVar9 & 1;
  }
  if ((float)this->_Traitsobj < (float)uVar7 / (float)uVar9) {
    auVar13._0_4_ = (float)uVar7 / (float)this->_Traitsobj;
    iVar6 = (int)auVar13._0_4_;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar13._0_4_)) {
      auVar13._4_4_ = auVar13._0_4_;
      auVar13._8_8_ = 0;
      uVar4 = movmskps(uVar4,auVar13);
      auVar13._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
    }
    lVar8 = 0;
    if ((__real_5f000000 <= auVar13._0_4_) &&
       (auVar13._0_4_ = auVar13._0_4_ - __real_5f000000, auVar13._0_4_ < __real_5f000000)) {
      lVar8 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)auVar13._0_4_ + lVar8)) {
      uVar7 = (longlong)auVar13._0_4_ + lVar8;
    }
    uVar10 = uVar9;
    if ((uVar9 < uVar7) && ((0x1ff < uVar9 || (uVar10 = uVar9 * 8, uVar9 * 8 < uVar7)))) {
      uVar10 = uVar7;
    }
    _Forced_rehash(this,uVar10);
    p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
    uVar9 = this->_Mask & uVar11;
    _Var12 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
              )(this->_List)._Mypair._Myval2._Myhead;
    _Var3 = p_Var2[uVar9 * 2 + 1];
    if (_Var3 != _Var12) {
      iVar6 = ((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)((longlong)_Var3 + 0x10))->
              first;
      _Var12 = _Var3;
      while (((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)((longlong)_Var5 + 0x10))->
             first != iVar6) {
        if (_Var12 == p_Var2[uVar9 * 2]) goto LAB_14f084f31;
        _Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                   *)((longlong)_Var12 + 8);
        iVar6 = ((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)((longlong)_Var12 + 0x10))
                ->first;
      }
      _Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                 *)_Var12;
    }
  }
LAB_14f084f31:
  _Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
            *)((longlong)_Var12 + 8);
  puVar1 = &(this->_List)._Mypair._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
    *)_Var5 = _Var12;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
    *)((longlong)_Var5 + 8) = _Var3;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
    *)_Var3 = _Var5;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
    *)((longlong)_Var12 + 8) = _Var5;
  p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
  uVar11 = this->_Mask & uVar11;
  if (p_Var2[uVar11 * 2] ==
      (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
       )(this->_List)._Mypair._Myval2._Myhead) {
    p_Var2[uVar11 * 2] = _Var5;
  }
  else {
    if (p_Var2[uVar11 * 2] == _Var12) {
      p_Var2[uVar11 * 2] = _Var5;
      __return_storage_ptr__->first =
           (_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*> *)_Var5;
      __return_storage_ptr__->second = true;
      return __return_storage_ptr__;
    }
    if (p_Var2[uVar11 * 2 + 1] != _Var3) goto LAB_14f084f91;
  }
  p_Var2[uVar11 * 2 + 1] = _Var5;
LAB_14f084f91:
  __return_storage_ptr__->first =
       (_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*> *)_Var5;
  __return_storage_ptr__->second = true;
  return __return_storage_ptr__;
}

// fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_> @ 14f084fc0

void __cdecl
std::
fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
           *param_1,
          _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
          *param_2,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                   *param_3)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  _Var1;
  ulonglong uVar2;
  ulonglong uVar3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  *p_Var4;
  
  uVar3 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar3 = 0;
  }
  if ((uVar3 != 0) && (1 < uVar3)) {
    _Var1 = *param_3;
    if ((param_3 < param_1) || (param_1 + (uVar3 - 1) < param_3)) {
      p_Var4 = param_1;
      for (uVar2 = uVar3 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
        *p_Var4 = _Var1;
        p_Var4 = p_Var4 + 1;
      }
      param_1 = param_1 + (uVar3 & 0xfffffffffffffffe);
    }
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_> @ 14f085050

void __cdecl
std::
fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
           *param_1,
          _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
          *param_2,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                   *param_3)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  _Var1;
  ulonglong uVar2;
  ulonglong uVar3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  *p_Var4;
  
  uVar3 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar3 = 0;
  }
  if ((uVar3 != 0) && (1 < uVar3)) {
    _Var1 = *param_3;
    if ((param_3 < param_1) || (param_1 + (uVar3 - 1) < param_3)) {
      p_Var4 = param_1;
      for (uVar2 = uVar3 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
        *p_Var4 = _Var1;
        p_Var4 = p_Var4 + 1;
      }
      param_1 = param_1 + (uVar3 & 0xfffffffffffffffe);
    }
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_> @ 14f0850e0

void __cdecl
std::
fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
           *param_1,
          _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
          *param_2,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                   *param_3)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  _Var1;
  ulonglong uVar2;
  ulonglong uVar3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  *p_Var4;
  
  uVar3 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar3 = 0;
  }
  if ((uVar3 != 0) && (1 < uVar3)) {
    _Var1 = *param_3;
    if ((param_3 < param_1) || (param_1 + (uVar3 - 1) < param_3)) {
      p_Var4 = param_1;
      for (uVar2 = uVar3 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
        *p_Var4 = _Var1;
        p_Var4 = p_Var4 + 1;
      }
      param_1 = param_1 + (uVar3 & 0xfffffffffffffffe);
    }
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_> @ 14f085170

void __cdecl
std::
uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
           *param_1,
          _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
          *param_2,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                   *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_> @ 14f0851a0

void __cdecl
std::
uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
           *param_1,
          _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
          *param_2,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                   *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_> @ 14f0851d0

void __cdecl
std::
uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
           *param_1,
          _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
          *param_2,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                   *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// GraphManager @ 14f085200

GraphManager * __thiscall
vraudio::GraphManager::GraphManager(GraphManager *this,SystemSettings *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  SystemSettings *pSVar7;
  longlong *plVar8;
  longlong lVar9;
  code *pcVar10;
  _List_node<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>,void_*>
  *p_Var11;
  undefined1 auVar12 [8];
  void *pvVar13;
  undefined8 *puVar14;
  Mixer *pMVar15;
  AmbisonicLookupTable *pAVar16;
  Mixer *pMVar17;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>,void_*>_*,bool>
  *ppVar18;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*>_*,bool>
  *ppVar19;
  Mixer *pMVar20;
  longlong lVar21;
  ulong64 uVar22;
  pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *ppVar23;
  int local_res8 [2];
  SystemSettings *local_res10;
  pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *local_res18;
  undefined1 local_178 [8];
  undefined8 uStack_170;
  longlong local_168;
  longlong *plStack_160;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>,void_*>_*,bool>
  local_158;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*>_*,bool>
  local_148;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>,void_*>_*,bool>
  local_138;
  FatalLogger local_128;
  
  pMVar20 = (Mixer *)0x0;
  local_res8[0] = 0;
  this->room_effects_enabled_ = true;
  *(undefined8 *)&this->reverb_gain_mixer_node_ = 0;
  *(undefined8 *)&(this->reverb_gain_mixer_node_).field_0x8 = 0;
  *(undefined8 *)&this->reflections_node_ = 0;
  *(undefined8 *)&(this->reflections_node_).field_0x8 = 0;
  *(undefined8 *)&this->reflections_gain_mixer_node_ = 0;
  *(undefined8 *)&(this->reflections_gain_mixer_node_).field_0x8 = 0;
  *(undefined8 *)&this->reverb_node_ = 0;
  *(undefined8 *)&(this->reverb_node_).field_0x8 = 0;
  (this->ambisonic_output_mixer_)._Mypair._Myval2 = (Mixer *)0x0;
  local_res10 = param_1;
  GlobalConfig(&this->config_);
  this->system_settings_ = param_1;
  (this->lookup_table_)._Mypair._Myval2 = (AmbisonicLookupTable *)0x0;
  FftManager::FftManager(&this->fft_manager_,param_1->frames_per_buffer_);
  Resampler::Resampler(&this->resampler_);
  *(undefined4 *)&this->ambisonic_mixer_nodes_ = 0;
  *(undefined8 *)&(this->ambisonic_mixer_nodes_).field_0x8 = 0;
  *(undefined8 *)&(this->ambisonic_mixer_nodes_).field_0x10 = 0;
  pvVar13 = ::operator_new(0x28);
  puVar1 = &(this->ambisonic_mixer_nodes_).field_0x18;
  *(void **)pvVar13 = pvVar13;
  *(void **)((longlong)pvVar13 + 8) = pvVar13;
  *(void **)&(this->ambisonic_mixer_nodes_).field_0x8 = pvVar13;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ambisonic_mixer_nodes_).field_0x20 = 0;
  *(undefined8 *)&(this->ambisonic_mixer_nodes_).field_0x28 = 0;
  *(undefined8 *)&(this->ambisonic_mixer_nodes_).field_0x30 = 7;
  *(undefined8 *)&(this->ambisonic_mixer_nodes_).field_0x38 = 8;
  *(undefined4 *)&this->ambisonic_mixer_nodes_ = 0x3f800000;
  uVar6 = *(undefined8 *)&(this->ambisonic_mixer_nodes_).field_0x8;
  puVar14 = ::operator_new(0x80);
  uVar22 = *(longlong *)&(this->ambisonic_mixer_nodes_).field_0x28 -
           (longlong)
           *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
             **)puVar1 >> 3;
  if (uVar22 != 0) {
    std::
    allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_>
    ::deallocate((allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_>
                  *)puVar1,
                 *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                   **)puVar1,uVar22);
  }
  puVar4 = puVar14 + 0x10;
  *(undefined8 **)puVar1 = puVar14;
  *(undefined8 **)&(this->ambisonic_mixer_nodes_).field_0x20 = puVar4;
  *(undefined8 **)&(this->ambisonic_mixer_nodes_).field_0x28 = puVar4;
  for (; puVar14 != puVar4; puVar14 = puVar14 + 1) {
    *puVar14 = uVar6;
  }
  *(undefined8 *)&this->stereo_mixer_node_ = 0;
  *(undefined8 *)&(this->stereo_mixer_node_).field_0x8 = 0;
  *(undefined4 *)&this->ambisonic_mixing_encoder_nodes_ = 0;
  *(undefined8 *)&(this->ambisonic_mixing_encoder_nodes_).field_0x8 = 0;
  *(undefined8 *)&(this->ambisonic_mixing_encoder_nodes_).field_0x10 = 0;
  pvVar13 = ::operator_new(0x28);
  puVar1 = &(this->ambisonic_mixing_encoder_nodes_).field_0x18;
  *(void **)pvVar13 = pvVar13;
  *(void **)((longlong)pvVar13 + 8) = pvVar13;
  *(void **)&(this->ambisonic_mixing_encoder_nodes_).field_0x8 = pvVar13;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ambisonic_mixing_encoder_nodes_).field_0x20 = 0;
  *(undefined8 *)&(this->ambisonic_mixing_encoder_nodes_).field_0x28 = 0;
  *(undefined8 *)&(this->ambisonic_mixing_encoder_nodes_).field_0x30 = 7;
  *(undefined8 *)&(this->ambisonic_mixing_encoder_nodes_).field_0x38 = 8;
  *(undefined4 *)&this->ambisonic_mixing_encoder_nodes_ = 0x3f800000;
  uVar6 = *(undefined8 *)&(this->ambisonic_mixing_encoder_nodes_).field_0x8;
  puVar14 = ::operator_new(0x80);
  uVar22 = *(longlong *)&(this->ambisonic_mixing_encoder_nodes_).field_0x28 -
           (longlong)
           *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
             **)puVar1 >> 3;
  if (uVar22 != 0) {
    std::
    allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_>
    ::deallocate((allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_>
                  *)puVar1,
                 *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                   **)puVar1,uVar22);
  }
  puVar4 = puVar14 + 0x10;
  *(undefined8 **)puVar1 = puVar14;
  *(undefined8 **)&(this->ambisonic_mixing_encoder_nodes_).field_0x20 = puVar4;
  *(undefined8 **)&(this->ambisonic_mixing_encoder_nodes_).field_0x28 = puVar4;
  for (; puVar14 != puVar4; puVar14 = puVar14 + 1) {
    *puVar14 = uVar6;
  }
  *(undefined8 *)&this->stereo_mixing_panner_node_ = 0;
  *(undefined8 *)&(this->stereo_mixing_panner_node_).field_0x8 = 0;
  pMVar15 = ::operator_new(0x88);
  pMVar17 = pMVar20;
  if (pMVar15 != (Mixer *)0x0) {
    *(undefined4 *)&(pMVar15->output_).data_._Mypair._Myval2._Myfirst = 1;
    *(undefined4 *)((longlong)&(pMVar15->output_).data_._Mypair._Myval2._Myfirst + 4) = 1;
    (pMVar15->output_).num_frames_ = (ulong64)&___7___Ref_count_obj2_VSinkNode_vraudio___std__6B_;
    SinkNode::SinkNode((SinkNode *)&(pMVar15->output_).data_._Mypair._Myval2._Mylast);
    pMVar17 = pMVar15;
  }
  *(undefined8 *)&this->output_node_ = 0;
  *(undefined8 *)&(this->output_node_).field_0x8 = 0;
  std::shared_ptr<vraudio::SinkNode>::_Set_ptr_rep_and_enable_shared<vraudio::SinkNode>
            (&this->output_node_,(SinkNode *)&(pMVar17->output_).data_._Mypair._Myval2._Mylast,
             (_Ref_count_base *)pMVar17);
  *(undefined4 *)&this->source_nodes_ = 0;
  *(undefined8 *)&(this->source_nodes_).field_0x8 = 0;
  *(undefined8 *)&(this->source_nodes_).field_0x10 = 0;
  pvVar13 = ::operator_new(0x28);
  puVar1 = &(this->source_nodes_).field_0x18;
  *(void **)pvVar13 = pvVar13;
  *(void **)((longlong)pvVar13 + 8) = pvVar13;
  *(void **)&(this->source_nodes_).field_0x8 = pvVar13;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->source_nodes_).field_0x20 = 0;
  *(undefined8 *)&(this->source_nodes_).field_0x28 = 0;
  *(undefined8 *)&(this->source_nodes_).field_0x30 = 7;
  *(undefined8 *)&(this->source_nodes_).field_0x38 = 8;
  *(undefined4 *)&this->source_nodes_ = 0x3f800000;
  uVar6 = *(undefined8 *)&(this->source_nodes_).field_0x8;
  puVar14 = ::operator_new(0x80);
  uVar22 = *(longlong *)&(this->source_nodes_).field_0x28 -
           (longlong)
           *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
             **)puVar1 >> 3;
  if (uVar22 != 0) {
    std::
    allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_>
    ::deallocate((allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_>
                  *)puVar1,
                 *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                   **)puVar1,uVar22);
  }
  puVar4 = puVar14 + 0x10;
  *(undefined8 **)puVar1 = puVar14;
  *(undefined8 **)&(this->source_nodes_).field_0x20 = puVar4;
  *(undefined8 **)&(this->source_nodes_).field_0x28 = puVar4;
  for (; puVar14 != puVar4; puVar14 = puVar14 + 1) {
    *puVar14 = uVar6;
  }
  if (local_res10->frames_per_buffer_ < 0x4001) {
    pMVar17 = pMVar20;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__), pMVar17 = (Mixer *)0x0,
       `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
      atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
      _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  else {
    FatalLogger::FatalLogger
              (&local_128,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\graph\\graph_manager.cc"
               ,0x28);
    pMVar17 = (Mixer *)&DAT_00000001;
  }
  if (pMVar17 != (Mixer *)0x0) {
    FatalLogger::~FatalLogger(&local_128);
  }
  pSVar7 = this->system_settings_;
  pMVar15 = ::operator_new(0x120);
  pMVar17 = pMVar20;
  if (pMVar15 != (Mixer *)0x0) {
    *(undefined4 *)&(pMVar15->output_).data_._Mypair._Myval2._Myfirst = 1;
    *(undefined4 *)((longlong)&(pMVar15->output_).data_._Mypair._Myval2._Myfirst + 4) = 1;
    (pMVar15->output_).num_frames_ = (ulong64)&___7___Ref_count_obj2_VMixerNode_vraudio___std__6B_;
    MixerNode::MixerNode((MixerNode *)&(pMVar15->output_).data_._Mypair._Myval2._Mylast,pSVar7,2);
    pMVar17 = pMVar15;
  }
  local_178 = (undefined1  [8])0x0;
  uStack_170 = (longlong *)0x0;
  std::shared_ptr<vraudio::MixerNode>::_Set_ptr_rep_and_enable_shared<vraudio::MixerNode>
            ((shared_ptr<vraudio::MixerNode> *)local_178,
             (MixerNode *)&(pMVar17->output_).data_._Mypair._Myval2._Mylast,
             (_Ref_count_base *)pMVar17);
  plVar8 = *(longlong **)&(this->stereo_mixer_node_).field_0x8;
  *(undefined1 (*) [8])&this->stereo_mixer_node_ = local_178;
  *(longlong **)&(this->stereo_mixer_node_).field_0x8 = uStack_170;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar21 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar21 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  lVar21 = *(longlong *)&this->output_node_;
  lVar9 = *(longlong *)&(this->stereo_mixer_node_).field_0x8;
  pcVar10 = *(code **)(*(longlong *)(lVar21 + 0x18) + 8);
  plStack_160 = (longlong *)0x0;
  if (lVar9 != 0) {
    LOCK();
    piVar3 = (int *)(lVar9 + 8);
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    plStack_160 = *(longlong **)&(this->stereo_mixer_node_).field_0x8;
  }
  if (*(longlong *)&this->stereo_mixer_node_ == 0) {
    local_168 = 0;
  }
  else {
    local_168 = *(longlong *)&this->stereo_mixer_node_ + 0x20;
  }
  (*pcVar10)(lVar21 + 0x18,&local_168);
  plVar8 = plStack_160;
  if (plStack_160 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_160 + 1;
    lVar21 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar21 == 1) {
      (**(code **)*plStack_160)(plStack_160);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  pAVar16 = ::operator_new(0x40);
  pMVar17 = pMVar20;
  if (pAVar16 != (AmbisonicLookupTable *)0x0) {
    pMVar17 = (Mixer *)AmbisonicLookupTable::AmbisonicLookupTable
                                 (pAVar16,(this->config_).max_ambisonic_order);
  }
  pAVar16 = (this->lookup_table_)._Mypair._Myval2;
  (this->lookup_table_)._Mypair._Myval2 = (AmbisonicLookupTable *)pMVar17;
  if (pAVar16 != (AmbisonicLookupTable *)0x0) {
    std::vector<float,std::allocator<float>_>::~vector<float,std::allocator<float>_>
              (&pAVar16->symmetries_table_);
    std::vector<float,std::allocator<float>_>::~vector<float,std::allocator<float>_>
              (&pAVar16->encoder_table_);
    ::operator_delete(pAVar16,0x40);
  }
  local_res18 = (this->config_).sh_hrir_filenames._Mypair._Myval2._Mylast;
  ppVar23 = (this->config_).sh_hrir_filenames._Mypair._Myval2._Myfirst;
  if (ppVar23 != local_res18) {
    local_178 = (undefined1  [8])0x0;
    uStack_170 = (longlong *)0x0;
    do {
      local_res8[0] = ppVar23->first;
      InitializeAmbisonicRendererGraph(this,local_res8[0],&ppVar23->second);
      pAVar16 = (this->lookup_table_)._Mypair._Myval2;
      pSVar7 = this->system_settings_;
      pMVar15 = ::operator_new(400);
      pMVar17 = pMVar20;
      if (pMVar15 != (Mixer *)0x0) {
        *(undefined4 *)&(pMVar15->output_).data_._Mypair._Myval2._Myfirst = 1;
        *(undefined4 *)((longlong)&(pMVar15->output_).data_._Mypair._Myval2._Myfirst + 4) = 1;
        (pMVar15->output_).num_frames_ =
             (ulong64)&___7___Ref_count_obj2_VAmbisonicMixingEncoderNode_vraudio___std__6B_;
        AmbisonicMixingEncoderNode::AmbisonicMixingEncoderNode
                  ((AmbisonicMixingEncoderNode *)&(pMVar15->output_).data_._Mypair._Myval2._Mylast,
                   pSVar7,pAVar16,local_res8[0]);
        pMVar17 = pMVar15;
      }
      std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>::
      _Set_ptr_rep_and_enable_shared<vraudio::AmbisonicMixingEncoderNode>
                ((shared_ptr<vraudio::AmbisonicMixingEncoderNode> *)local_178,
                 (AmbisonicMixingEncoderNode *)&(pMVar17->output_).data_._Mypair._Myval2._Mylast,
                 (_Ref_count_base *)pMVar17);
      ppVar18 = std::
                _Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>,0>_>
                ::_Try_emplace<int_const_&>
                          ((_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>,0>_>
                            *)&this->ambisonic_mixing_encoder_nodes_,&local_158,local_res8);
      uVar6 = uStack_170;
      auVar12 = local_178;
      p_Var11 = ppVar18->first;
      local_178 = (undefined1  [8])0x0;
      uStack_170 = (longlong *)0x0;
      plVar8 = *(longlong **)&(p_Var11->_Myval).second.field_0x8;
      *(undefined1 (*) [8])&(p_Var11->_Myval).second = auVar12;
      *(undefined8 *)&(p_Var11->_Myval).second.field_0x8 = uVar6;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        lVar21 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar21 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
        }
      }
      ppVar19 = std::
                _Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
                ::_Try_emplace<int_const_&>
                          ((_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
                            *)&this->ambisonic_mixer_nodes_,&local_148,local_res8);
      lVar21 = *(longlong *)&(ppVar19->first->_Myval).second;
      pcVar10 = *(code **)(*(longlong *)(lVar21 + 0x18) + 8);
      ppVar18 = std::
                _Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>,0>_>
                ::_Try_emplace<int_const_&>
                          ((_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>,0>_>
                            *)&this->ambisonic_mixing_encoder_nodes_,&local_138,local_res8);
      p_Var11 = ppVar18->first;
      lVar9 = *(longlong *)&(p_Var11->_Myval).second.field_0x8;
      if (lVar9 != 0) {
        LOCK();
        piVar3 = (int *)(lVar9 + 8);
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      local_168 = *(longlong *)&(p_Var11->_Myval).second;
      if (local_168 == 0) {
        local_168 = 0;
      }
      else {
        local_168 = local_168 + 0x20;
      }
      plStack_160 = *(longlong **)&(p_Var11->_Myval).second.field_0x8;
      (*pcVar10)(lVar21 + 0x18,&local_168);
      plVar8 = plStack_160;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_160 + 1;
        lVar21 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar21 == 1) {
          (**(code **)*plStack_160)(plStack_160);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
        }
      }
      ppVar23 = ppVar23 + 1;
    } while (ppVar23 != local_res18);
  }
  pSVar7 = this->system_settings_;
  pMVar15 = ::operator_new(0x180);
  pMVar17 = pMVar20;
  if (pMVar15 != (Mixer *)0x0) {
    *(undefined4 *)&(pMVar15->output_).data_._Mypair._Myval2._Myfirst = 1;
    *(undefined4 *)((longlong)&(pMVar15->output_).data_._Mypair._Myval2._Myfirst + 4) = 1;
    (pMVar15->output_).num_frames_ =
         (ulong64)&___7___Ref_count_obj2_VStereoMixingPannerNode_vraudio___std__6B_;
    StereoMixingPannerNode::StereoMixingPannerNode
              ((StereoMixingPannerNode *)&(pMVar15->output_).data_._Mypair._Myval2._Mylast,pSVar7);
    pMVar17 = pMVar15;
  }
  local_178 = (undefined1  [8])0x0;
  uStack_170 = (longlong *)0x0;
  std::shared_ptr<vraudio::StereoMixingPannerNode>::
  _Set_ptr_rep_and_enable_shared<vraudio::StereoMixingPannerNode>
            ((shared_ptr<vraudio::StereoMixingPannerNode> *)local_178,
             (StereoMixingPannerNode *)&(pMVar17->output_).data_._Mypair._Myval2._Mylast,
             (_Ref_count_base *)pMVar17);
  plVar8 = *(longlong **)&(this->stereo_mixing_panner_node_).field_0x8;
  *(undefined1 (*) [8])&this->stereo_mixing_panner_node_ = local_178;
  *(longlong **)&(this->stereo_mixing_panner_node_).field_0x8 = uStack_170;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar21 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar21 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  lVar21 = *(longlong *)&this->stereo_mixer_node_;
  lVar9 = *(longlong *)&(this->stereo_mixing_panner_node_).field_0x8;
  pcVar10 = *(code **)(*(longlong *)(lVar21 + 0x18) + 8);
  uStack_170 = (longlong *)0x0;
  if (lVar9 != 0) {
    LOCK();
    piVar3 = (int *)(lVar9 + 8);
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    uStack_170 = *(longlong **)&(this->stereo_mixing_panner_node_).field_0x8;
  }
  if (*(longlong *)&this->stereo_mixing_panner_node_ == 0) {
    local_178 = (undefined1  [8])0x0;
  }
  else {
    local_178 = (undefined1  [8])(*(longlong *)&this->stereo_mixing_panner_node_ + 0x20);
  }
  (*pcVar10)(lVar21 + 0x18,local_178);
  plVar8 = uStack_170;
  if (uStack_170 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_170 + 1;
    lVar21 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar21 == 1) {
      (**(code **)*uStack_170)(uStack_170);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  InitializeReflectionsGraph(this);
  InitializeReverbGraph(this);
  pMVar17 = ::operator_new(0x50);
  if (pMVar17 != (Mixer *)0x0) {
    lVar21 = (longlong)(this->config_).max_ambisonic_order + 1;
    pMVar20 = Mixer::Mixer(pMVar17,lVar21 * lVar21,local_res10->frames_per_buffer_);
  }
  pMVar17 = (this->ambisonic_output_mixer_)._Mypair._Myval2;
  (this->ambisonic_output_mixer_)._Mypair._Myval2 = pMVar20;
  if (pMVar17 != (Mixer *)0x0) {
    AudioBuffer::~AudioBuffer(&pMVar17->output_);
    ::operator_delete(pMVar17,0x50);
  }
  return this;
}

// ~_Ref_count_obj2<vraudio::AmbisonicBinauralDecoderNode> @ 14f085ad0

void __thiscall
std::_Ref_count_obj2<vraudio::AmbisonicBinauralDecoderNode>::
~_Ref_count_obj2<vraudio::AmbisonicBinauralDecoderNode>
          (_Ref_count_obj2<vraudio::AmbisonicBinauralDecoderNode> *this)

{
  this->_padding_ =
       (longlong)&___7___Ref_count_obj2_VAmbisonicBinauralDecoderNode_vraudio___std__6B_;
  return;
}

// ~_Ref_count_obj2<vraudio::AmbisonicMixingEncoderNode> @ 14f085af0

void __thiscall
std::_Ref_count_obj2<vraudio::AmbisonicMixingEncoderNode>::
~_Ref_count_obj2<vraudio::AmbisonicMixingEncoderNode>
          (_Ref_count_obj2<vraudio::AmbisonicMixingEncoderNode> *this)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VAmbisonicMixingEncoderNode_vraudio___std__6B_;
  return;
}

// ~_Ref_count_obj2<vraudio::BufferedSourceNode> @ 14f085b10

void __thiscall
std::_Ref_count_obj2<vraudio::BufferedSourceNode>::~_Ref_count_obj2<vraudio::BufferedSourceNode>
          (_Ref_count_obj2<vraudio::BufferedSourceNode> *this)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VBufferedSourceNode_vraudio___std__6B_;
  return;
}

// ~_Ref_count_obj2<vraudio::FoaRotatorNode> @ 14f085b30

void __thiscall
std::_Ref_count_obj2<vraudio::FoaRotatorNode>::~_Ref_count_obj2<vraudio::FoaRotatorNode>
          (_Ref_count_obj2<vraudio::FoaRotatorNode> *this)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VFoaRotatorNode_vraudio___std__6B_;
  return;
}

// ~_Ref_count_obj2<vraudio::GainMixerNode> @ 14f085b50

void __thiscall
std::_Ref_count_obj2<vraudio::GainMixerNode>::~_Ref_count_obj2<vraudio::GainMixerNode>
          (_Ref_count_obj2<vraudio::GainMixerNode> *this)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VGainMixerNode_vraudio___std__6B_;
  return;
}

// ~_Ref_count_obj2<vraudio::GainNode> @ 14f085b70

void __thiscall
std::_Ref_count_obj2<vraudio::GainNode>::~_Ref_count_obj2<vraudio::GainNode>
          (_Ref_count_obj2<vraudio::GainNode> *this)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VGainNode_vraudio___std__6B_;
  return;
}

// ~_Ref_count_obj2<vraudio::HoaRotatorNode> @ 14f085b90

void __thiscall
std::_Ref_count_obj2<vraudio::HoaRotatorNode>::~_Ref_count_obj2<vraudio::HoaRotatorNode>
          (_Ref_count_obj2<vraudio::HoaRotatorNode> *this)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VHoaRotatorNode_vraudio___std__6B_;
  return;
}

// ~_Ref_count_obj2<vraudio::MixerNode> @ 14f085bb0

void __thiscall
std::_Ref_count_obj2<vraudio::MixerNode>::~_Ref_count_obj2<vraudio::MixerNode>
          (_Ref_count_obj2<vraudio::MixerNode> *this)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VMixerNode_vraudio___std__6B_;
  return;
}

// ~_Ref_count_obj2<vraudio::MonoFromSoundfieldNode> @ 14f085bd0

void __thiscall
std::_Ref_count_obj2<vraudio::MonoFromSoundfieldNode>::
~_Ref_count_obj2<vraudio::MonoFromSoundfieldNode>
          (_Ref_count_obj2<vraudio::MonoFromSoundfieldNode> *this)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VMonoFromSoundfieldNode_vraudio___std__6B_;
  return;
}

// ~_Ref_count_obj2<vraudio::NearFieldEffectNode> @ 14f085bf0

void __thiscall
std::_Ref_count_obj2<vraudio::NearFieldEffectNode>::~_Ref_count_obj2<vraudio::NearFieldEffectNode>
          (_Ref_count_obj2<vraudio::NearFieldEffectNode> *this)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VNearFieldEffectNode_vraudio___std__6B_;
  return;
}

// ~_Ref_count_obj2<vraudio::OcclusionNode> @ 14f085c10

void __thiscall
std::_Ref_count_obj2<vraudio::OcclusionNode>::~_Ref_count_obj2<vraudio::OcclusionNode>
          (_Ref_count_obj2<vraudio::OcclusionNode> *this)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VOcclusionNode_vraudio___std__6B_;
  return;
}

// ~_Ref_count_obj2<vraudio::ReflectionsNode> @ 14f085c30

void __thiscall
std::_Ref_count_obj2<vraudio::ReflectionsNode>::~_Ref_count_obj2<vraudio::ReflectionsNode>
          (_Ref_count_obj2<vraudio::ReflectionsNode> *this)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VReflectionsNode_vraudio___std__6B_;
  return;
}

// ~_Ref_count_obj2<vraudio::ReverbNode> @ 14f085c50

void __thiscall
std::_Ref_count_obj2<vraudio::ReverbNode>::~_Ref_count_obj2<vraudio::ReverbNode>
          (_Ref_count_obj2<vraudio::ReverbNode> *this)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VReverbNode_vraudio___std__6B_;
  return;
}

// ~_Ref_count_obj2<vraudio::SinkNode> @ 14f085c70

void __thiscall
std::_Ref_count_obj2<vraudio::SinkNode>::~_Ref_count_obj2<vraudio::SinkNode>
          (_Ref_count_obj2<vraudio::SinkNode> *this)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VSinkNode_vraudio___std__6B_;
  return;
}

// ~_Ref_count_obj2<vraudio::StereoMixingPannerNode> @ 14f085c90

void __thiscall
std::_Ref_count_obj2<vraudio::StereoMixingPannerNode>::
~_Ref_count_obj2<vraudio::StereoMixingPannerNode>
          (_Ref_count_obj2<vraudio::StereoMixingPannerNode> *this)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VStereoMixingPannerNode_vraudio___std__6B_;
  return;
}

// ~pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f085cb0

void __thiscall
std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
~pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(&this->second);
  return;
}

// ~vector<float,std::allocator<float>_> @ 14f085cc0

void __thiscall
std::vector<float,std::allocator<float>_>::~vector<float,std::allocator<float>_>
          (vector<float,std::allocator<float>_> *this)

{
  float *pfVar1;
  float *pfVar2;
  ulong64 uVar3;
  
  pfVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pfVar1 != (float *)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pfVar1 & 0xfffffffffffffffc;
    pfVar2 = pfVar1;
    if (0xfff < uVar3) {
      pfVar2 = *(float **)(pfVar1 + -2);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pfVar1 + (-8 - (longlong)pfVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pfVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (float *)0x0;
    (this->_Mypair)._Myval2._Mylast = (float *)0x0;
    (this->_Mypair)._Myval2._Myend = (float *)0x0;
  }
  return;
}

// operator= @ 14f085d40

shared_ptr<vraudio::MixerNode> * __thiscall
std::shared_ptr<vraudio::MixerNode>::operator=
          (shared_ptr<vraudio::MixerNode> *this,shared_ptr<vraudio::MixerNode> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)&param_1->field_0x8 = 0;
  plVar6 = *(longlong **)&this->field_0x8;
  *(undefined8 *)this = uVar4;
  *(undefined8 *)&this->field_0x8 = uVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
    return this;
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f085dd0

void * __thiscall
std::_Ref_count_obj2<vraudio::AmbisonicBinauralDecoderNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::AmbisonicBinauralDecoderNode> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7___Ref_count_obj2_VAmbisonicBinauralDecoderNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f085e10

void * __thiscall
std::_Ref_count_obj2<vraudio::AmbisonicMixingEncoderNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::AmbisonicMixingEncoderNode> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VAmbisonicMixingEncoderNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f085e50

void * __thiscall
std::_Ref_count_obj2<vraudio::BufferedSourceNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::BufferedSourceNode> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VBufferedSourceNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f085e90

void * __thiscall
std::_Ref_count_obj2<vraudio::FoaRotatorNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::FoaRotatorNode> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VFoaRotatorNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f085ed0

void * __thiscall
std::_Ref_count_obj2<vraudio::GainMixerNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::GainMixerNode> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VGainMixerNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f085f10

void * __thiscall
std::_Ref_count_obj2<vraudio::GainNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::GainNode> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VGainNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f085f50

void * __thiscall
std::_Ref_count_obj2<vraudio::HoaRotatorNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::HoaRotatorNode> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VHoaRotatorNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f085f90

void * __thiscall
std::_Ref_count_obj2<vraudio::MixerNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::MixerNode> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VMixerNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f085fd0

void * __thiscall
std::_Ref_count_obj2<vraudio::MonoFromSoundfieldNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::MonoFromSoundfieldNode> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VMonoFromSoundfieldNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f086010

void * __thiscall
std::_Ref_count_obj2<vraudio::NearFieldEffectNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::NearFieldEffectNode> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VNearFieldEffectNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x278);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f086050

void * __thiscall
std::_Ref_count_obj2<vraudio::OcclusionNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::OcclusionNode> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VOcclusionNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f086090

void * __thiscall
std::_Ref_count_obj2<vraudio::ReflectionsNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::ReflectionsNode> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VReflectionsNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x418);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0860d0

void * __thiscall
std::_Ref_count_obj2<vraudio::ReverbNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::ReverbNode> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VReverbNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xcb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f086110

void * __thiscall
std::_Ref_count_obj2<vraudio::SinkNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::SinkNode> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VSinkNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f086150

void * __thiscall
std::_Ref_count_obj2<vraudio::StereoMixingPannerNode>::_scalar_deleting_destructor_
          (_Ref_count_obj2<vraudio::StereoMixingPannerNode> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7___Ref_count_obj2_VStereoMixingPannerNode_vraudio___std__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// CreateAmbisonicPannerSource @ 14f086190

void __thiscall
vraudio::GraphManager::CreateAmbisonicPannerSource(GraphManager *this,int param_1,bool param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulong64 uVar4;
  _List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*> *p_Var5;
  longlong *plVar6;
  code *pcVar7;
  undefined1 auVar8 [8];
  longlong *plVar9;
  _Ref_count_base *p_Var10;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*>_*,bool>
  *ppVar11;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>,void_*>_*,bool>
  *ppVar12;
  longlong lVar13;
  int local_res10 [2];
  undefined1 local_38 [8];
  longlong *plStack_30;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>,void_*>_*,bool>
  local_28;
  
  uVar4 = this->system_settings_->frames_per_buffer_;
  local_res10[0] = param_1;
  p_Var10 = ::operator_new(0xc0);
  if (p_Var10 == (_Ref_count_base *)0x0) {
    p_Var10 = (_Ref_count_base *)0x0;
  }
  else {
    p_Var10->_Uses = 1;
    p_Var10->_Weaks = 1;
    p_Var10->_padding_ = (longlong)&___7___Ref_count_obj2_VBufferedSourceNode_vraudio___std__6B_;
    BufferedSourceNode::BufferedSourceNode
              ((BufferedSourceNode *)(p_Var10 + 1),local_res10[0],1,uVar4);
  }
  local_38 = (undefined1  [8])0x0;
  plStack_30 = (longlong *)0x0;
  std::shared_ptr<vraudio::BufferedSourceNode>::
  _Set_ptr_rep_and_enable_shared<vraudio::BufferedSourceNode>
            ((shared_ptr<vraudio::BufferedSourceNode> *)local_38,(BufferedSourceNode *)(p_Var10 + 1)
             ,p_Var10);
  ppVar11 = std::
            _Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::BufferedSourceNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>,0>_>
            ::_Try_emplace<int_const_&>
                      ((_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::BufferedSourceNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>,0>_>
                        *)&this->source_nodes_,
                       (pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*>_*,bool>
                        *)&local_28,local_res10);
  plVar9 = plStack_30;
  auVar8 = local_38;
  p_Var5 = ppVar11->first;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)&(p_Var5->_Myval).second.field_0x8;
  *(undefined1 (*) [8])&(p_Var5->_Myval).second = local_38;
  *(longlong **)&(p_Var5->_Myval).second.field_0x8 = plStack_30;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (param_2) {
    ppVar12 = std::
              _Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>,0>_>
              ::_Try_emplace<int_const_&>
                        ((_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>,0>_>
                          *)&this->ambisonic_mixing_encoder_nodes_,&local_28,
                         &(this->config_).max_ambisonic_order);
    lVar13 = *(longlong *)&(ppVar12->first->_Myval).second;
  }
  else {
    lVar13 = *(longlong *)&this->stereo_mixing_panner_node_;
  }
  pcVar7 = *(code **)(*(longlong *)(lVar13 + 0x18) + 8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if (auVar8 == (undefined1  [8])0x0) {
    local_38 = (undefined1  [8])0x0;
  }
  else {
    local_38 = (undefined1  [8])((longlong)auVar8 + 0x18);
  }
  plStack_30 = plVar9;
  (*pcVar7)(lVar13 + 0x18,local_38);
  plVar6 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar13 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  return;
}

// CreateAmbisonicSource @ 14f086370

void __thiscall
vraudio::GraphManager::CreateAmbisonicSource(GraphManager *this,int param_1,ulong64 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ulong64 uVar4;
  _List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*> *p_Var5;
  SystemSettings *pSVar6;
  code *pcVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [8];
  undefined1 auVar11 [8];
  longlong *plVar12;
  undefined1 auVar13 [8];
  _Ref_count_base *p_Var14;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*>_*,bool>
  *ppVar15;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*>_*,bool>
  *ppVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined1 auVar20 [16];
  int local_res10 [2];
  int local_res18 [2];
  AttenuationType local_res20 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *plStack_50;
  
  uVar4 = this->system_settings_->frames_per_buffer_;
  local_res10[0] = param_1;
  p_Var14 = ::operator_new(0xc0);
  if (p_Var14 == (_Ref_count_base *)0x0) {
    p_Var14 = (_Ref_count_base *)0x0;
  }
  else {
    p_Var14->_Uses = 1;
    p_Var14->_Weaks = 1;
    p_Var14->_padding_ = (longlong)&___7___Ref_count_obj2_VBufferedSourceNode_vraudio___std__6B_;
    BufferedSourceNode::BufferedSourceNode
              ((BufferedSourceNode *)(p_Var14 + 1),local_res10[0],param_2,uVar4);
  }
  local_68 = (undefined1  [8])0x0;
  plStack_60 = (longlong *)0x0;
  std::shared_ptr<vraudio::BufferedSourceNode>::
  _Set_ptr_rep_and_enable_shared<vraudio::BufferedSourceNode>
            ((shared_ptr<vraudio::BufferedSourceNode> *)local_68,(BufferedSourceNode *)(p_Var14 + 1)
             ,p_Var14);
  ppVar15 = std::
            _Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::BufferedSourceNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>,0>_>
            ::_Try_emplace<int_const_&>
                      ((_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::BufferedSourceNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>,0>_>
                        *)&this->source_nodes_,
                       (pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*>_*,bool>
                        *)local_58,local_res10);
  plVar12 = plStack_60;
  auVar10 = local_68;
  p_Var5 = ppVar15->first;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
  }
  plVar19 = *(longlong **)&(p_Var5->_Myval).second.field_0x8;
  *(undefined1 (*) [8])&(p_Var5->_Myval).second = local_68;
  *(longlong **)&(p_Var5->_Myval).second.field_0x8 = plStack_60;
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar19 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar19 + 8))(plVar19);
      }
    }
  }
  auVar20._0_8_ = (double)param_2;
  auVar20._8_8_ = 0;
  pSVar6 = this->system_settings_;
  auVar20 = sqrtpd(auVar20,auVar20);
  local_res20[0] = kDirect;
  local_res18[0] = (int)auVar20._0_8_ + -1;
  p_Var14 = ::operator_new(0x140);
  if (p_Var14 == (_Ref_count_base *)0x0) {
    p_Var14 = (_Ref_count_base *)0x0;
  }
  else {
    p_Var14->_Uses = 1;
    p_Var14->_Weaks = 1;
    p_Var14->_padding_ = (longlong)&___7___Ref_count_obj2_VGainNode_vraudio___std__6B_;
    GainNode::GainNode((GainNode *)(p_Var14 + 1),local_res10[0],param_2,local_res20,pSVar6);
  }
  local_68 = (undefined1  [8])0x0;
  plStack_60 = (longlong *)0x0;
  std::shared_ptr<vraudio::GainNode>::_Set_ptr_rep_and_enable_shared<vraudio::GainNode>
            ((shared_ptr<vraudio::GainNode> *)local_68,(GainNode *)(p_Var14 + 1),p_Var14);
  auVar11 = local_68;
  pcVar7 = *(code **)(*(longlong *)
                       &((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)
                        ((longlong)local_68 + 0x10))->second + 8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  if (auVar10 == (undefined1  [8])0x0) {
    local_78._0_8_ =
         (_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*> *)0x0;
  }
  else {
    local_78._0_8_ =
         &((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)((longlong)auVar10 + 0x10))->
          second;
  }
  local_78._8_8_ = plVar12;
  (*pcVar7)(&((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)((longlong)local_68 + 0x10))
             ->second,local_78);
  uVar9 = local_78._8_8_;
  if ((longlong *)local_78._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar19 = (longlong *)(local_78._8_8_ + 8);
    lVar8 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (*(code *)**(undefined8 **)local_78._8_8_)(local_78._8_8_);
      LOCK();
      piVar1 = (int *)(uVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)uVar9 + 8))(uVar9);
      }
    }
  }
  pSVar6 = this->system_settings_;
  if (local_res18[0] == 1) {
    p_Var14 = ::operator_new(0x158);
    if (p_Var14 == (_Ref_count_base *)0x0) {
      p_Var14 = (_Ref_count_base *)0x0;
    }
    else {
      p_Var14->_Uses = 1;
      p_Var14->_Weaks = 1;
      p_Var14->_padding_ = (longlong)&___7___Ref_count_obj2_VFoaRotatorNode_vraudio___std__6B_;
      FoaRotatorNode::FoaRotatorNode((FoaRotatorNode *)(p_Var14 + 1),local_res10[0],pSVar6);
    }
    local_58 = (undefined1  [8])0x0;
    plStack_50 = (longlong *)0x0;
    std::shared_ptr<vraudio::FoaRotatorNode>::
    _Set_ptr_rep_and_enable_shared<vraudio::FoaRotatorNode>
              ((shared_ptr<vraudio::FoaRotatorNode> *)local_58,(FoaRotatorNode *)(p_Var14 + 1),
               p_Var14);
    auVar13 = local_58;
    plVar19 = plStack_60;
    pcVar7 = *(code **)(*(longlong *)
                         &((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
                          ((longlong)local_58 + 0x10))->second + 8);
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
    if (auVar11 == (undefined1  [8])0x0) {
      local_78._0_8_ =
           (_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*> *)0x0;
    }
    else {
      local_78._0_8_ =
           &(((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)((longlong)auVar11 + 0x10))->
            second).field_0x8;
    }
    local_78._8_8_ = plStack_60;
    (*pcVar7)(&((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
               ((longlong)local_58 + 0x10))->second,local_78);
    uVar9 = local_78._8_8_;
    if ((longlong *)local_78._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar18 = (longlong *)(local_78._8_8_ + 8);
      lVar8 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (*(code *)**(undefined8 **)local_78._8_8_)(local_78._8_8_);
        LOCK();
        piVar1 = (int *)(uVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)uVar9 + 8))(uVar9);
        }
      }
    }
    ppVar16 = std::
              _Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
              ::_Try_emplace<int_const_&>
                        ((_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
                          *)&this->ambisonic_mixer_nodes_,
                         (pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*>_*,bool>
                          *)local_68,local_res18);
    plVar18 = plStack_50;
    plVar17 = (longlong *)(*(longlong *)&(ppVar16->first->_Myval).second + 0x18);
    pcVar7 = *(code **)(*plVar17 + 8);
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    if (auVar13 == (undefined1  [8])0x0) {
      local_78._0_8_ =
           (_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*> *)0x0;
      local_78._8_8_ = plStack_50;
      (*pcVar7)(plVar17,local_78);
      plVar17 = (longlong *)local_78._8_8_;
    }
    else {
      local_78._0_8_ =
           &(((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
             ((longlong)auVar13 + 0x10))->second).field_0x8;
      local_78._8_8_ = plStack_50;
      (*pcVar7)(plVar17,local_78);
      plVar17 = (longlong *)local_78._8_8_;
    }
  }
  else {
    p_Var14 = ::operator_new(0x160);
    if (p_Var14 == (_Ref_count_base *)0x0) {
      p_Var14 = (_Ref_count_base *)0x0;
    }
    else {
      p_Var14->_Uses = 1;
      p_Var14->_Weaks = 1;
      p_Var14->_padding_ = (longlong)&___7___Ref_count_obj2_VHoaRotatorNode_vraudio___std__6B_;
      HoaRotatorNode::HoaRotatorNode
                ((HoaRotatorNode *)(p_Var14 + 1),local_res10[0],pSVar6,local_res18[0]);
    }
    local_58 = (undefined1  [8])0x0;
    plStack_50 = (longlong *)0x0;
    std::shared_ptr<vraudio::HoaRotatorNode>::
    _Set_ptr_rep_and_enable_shared<vraudio::HoaRotatorNode>
              ((shared_ptr<vraudio::HoaRotatorNode> *)local_58,(HoaRotatorNode *)(p_Var14 + 1),
               p_Var14);
    auVar13 = local_58;
    plVar19 = plStack_60;
    pcVar7 = *(code **)(*(longlong *)
                         &((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
                          ((longlong)local_58 + 0x10))->second + 8);
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
    if (auVar11 == (undefined1  [8])0x0) {
      local_68 = (undefined1  [8])0x0;
    }
    else {
      local_68 = (undefined1  [8])
                 &(((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)
                   ((longlong)auVar11 + 0x10))->second).field_0x8;
    }
    (*pcVar7)(&((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
               ((longlong)local_58 + 0x10))->second,local_68);
    plVar18 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar17 = plStack_60 + 1;
      lVar8 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18);
        }
      }
    }
    ppVar16 = std::
              _Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
              ::_Try_emplace<int_const_&>
                        ((_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
                          *)&this->ambisonic_mixer_nodes_,
                         (pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*>_*,bool>
                          *)local_78,local_res18);
    plVar18 = plStack_50;
    plVar17 = (longlong *)(*(longlong *)&(ppVar16->first->_Myval).second + 0x18);
    pcVar7 = *(code **)(*plVar17 + 8);
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    if (auVar13 == (undefined1  [8])0x0) {
      local_68 = (undefined1  [8])0x0;
    }
    else {
      local_68 = (undefined1  [8])
                 &(((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
                   ((longlong)auVar13 + 0x10))->second).field_0x8;
    }
    plStack_60 = plStack_50;
    (*pcVar7)(plVar17,local_68);
    plVar17 = plStack_60;
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar17 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17);
      }
    }
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar18 + 1;
    lVar8 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18);
      }
    }
  }
  pSVar6 = this->system_settings_;
  p_Var14 = ::operator_new(0x110);
  if (p_Var14 == (_Ref_count_base *)0x0) {
    p_Var14 = (_Ref_count_base *)0x0;
  }
  else {
    p_Var14->_Uses = 1;
    p_Var14->_Weaks = 1;
    p_Var14->_padding_ = (longlong)&___7___Ref_count_obj2_VMonoFromSoundfieldNode_vraudio___std__6B_
    ;
    MonoFromSoundfieldNode::MonoFromSoundfieldNode
              ((MonoFromSoundfieldNode *)(p_Var14 + 1),local_res10[0],pSVar6);
  }
  local_58 = (undefined1  [8])0x0;
  plStack_50 = (longlong *)0x0;
  std::shared_ptr<vraudio::MonoFromSoundfieldNode>::
  _Set_ptr_rep_and_enable_shared<vraudio::MonoFromSoundfieldNode>
            ((shared_ptr<vraudio::MonoFromSoundfieldNode> *)local_58,
             (MonoFromSoundfieldNode *)(p_Var14 + 1),p_Var14);
  auVar11 = local_58;
  pcVar7 = *(code **)(*(longlong *)
                       &((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
                        ((longlong)local_58 + 0x10))->second + 8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  if (auVar10 == (undefined1  [8])0x0) {
    local_68 = (undefined1  [8])0x0;
  }
  else {
    local_68 = (undefined1  [8])
               &((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)((longlong)auVar10 + 0x10)
                )->second;
  }
  plStack_60 = plVar12;
  (*pcVar7)(&((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
             ((longlong)local_58 + 0x10))->second,local_68);
  plVar18 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_60 + 1;
    lVar8 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18);
      }
    }
  }
  plVar18 = plStack_50;
  plVar17 = (longlong *)(*(longlong *)&this->reflections_gain_mixer_node_ + 0x18);
  pcVar7 = *(code **)(*plVar17 + 8);
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
  }
  if (auVar11 == (undefined1  [8])0x0) {
    local_68 = (undefined1  [8])0x0;
  }
  else {
    local_68 = (undefined1  [8])
               &(((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
                 ((longlong)auVar11 + 0x10))->second).field_0x8;
  }
  plStack_60 = plStack_50;
  (*pcVar7)(plVar17,local_68);
  plVar17 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_60 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17);
      }
    }
  }
  plVar17 = (longlong *)(*(longlong *)&this->reverb_gain_mixer_node_ + 0x18);
  pcVar7 = *(code **)(*plVar17 + 8);
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  if (auVar11 == (undefined1  [8])0x0) {
    local_68 = (undefined1  [8])0x0;
  }
  else {
    local_68 = (undefined1  [8])
               &(((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
                 ((longlong)auVar11 + 0x10))->second).field_0x8;
  }
  plStack_60 = plVar18;
  (*pcVar7)(plVar17,local_68);
  plVar17 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_60 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17);
      }
    }
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar18 + 1;
    lVar8 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18);
      }
    }
  }
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar19 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar19 + 8))(plVar19);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar12 + 1;
    lVar8 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
  }
  return;
}

// CreateSoundObjectSource @ 14f086aa0

void __thiscall
vraudio::GraphManager::CreateSoundObjectSource
          (GraphManager *this,int param_1,int param_2,bool param_3,bool param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  ulong64 uVar5;
  _List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*> *p_Var6;
  SystemSettings *pSVar7;
  code *pcVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auVar11 [8];
  _Ref_count_base *p_Var12;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*>_*,bool>
  *ppVar13;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>,void_*>_*,bool>
  *ppVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 auVar18 [8];
  int local_res10 [2];
  int local_res18 [2];
  char local_res20;
  undefined3 in_stack_00000029;
  undefined1 local_98 [8];
  longlong *plStack_90;
  undefined1 *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *plStack_70;
  undefined1 local_68 [8];
  longlong *plStack_60;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>,void_*>_*,bool>
  local_58;
  
  uVar5 = this->system_settings_->frames_per_buffer_;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_res20 = param_3;
  p_Var12 = ::operator_new(0xc0);
  if (p_Var12 == (_Ref_count_base *)0x0) {
    p_Var12 = (_Ref_count_base *)0x0;
  }
  else {
    p_Var12->_Uses = 1;
    p_Var12->_Weaks = 1;
    p_Var12->_padding_ = (longlong)&___7___Ref_count_obj2_VBufferedSourceNode_vraudio___std__6B_;
    BufferedSourceNode::BufferedSourceNode
              ((BufferedSourceNode *)(p_Var12 + 1),local_res10[0],1,uVar5);
  }
  local_98 = (undefined1  [8])0x0;
  plStack_90 = (longlong *)0x0;
  std::shared_ptr<vraudio::BufferedSourceNode>::
  _Set_ptr_rep_and_enable_shared<vraudio::BufferedSourceNode>
            ((shared_ptr<vraudio::BufferedSourceNode> *)local_98,(BufferedSourceNode *)(p_Var12 + 1)
             ,p_Var12);
  ppVar13 = std::
            _Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::BufferedSourceNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>,0>_>
            ::_Try_emplace<int_const_&>
                      ((_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::BufferedSourceNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>,0>_>
                        *)&this->source_nodes_,
                       (pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*>_*,bool>
                        *)local_68,local_res10);
  plVar10 = plStack_90;
  auVar18 = local_98;
  p_Var6 = ppVar13->first;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  plVar16 = *(longlong **)&(p_Var6->_Myval).second.field_0x8;
  *(undefined1 (*) [8])&(p_Var6->_Myval).second = local_98;
  *(longlong **)&(p_Var6->_Myval).second.field_0x8 = plStack_90;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar16 + 1;
    lVar9 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
    }
  }
  if (param_4 != false) {
    _param_4 = 1;
    pSVar7 = this->system_settings_;
    p_Var12 = ::operator_new(0x140);
    if (p_Var12 == (_Ref_count_base *)0x0) {
      p_Var12 = (_Ref_count_base *)0x0;
    }
    else {
      p_Var12->_Uses = 1;
      p_Var12->_Weaks = 1;
      p_Var12->_padding_ = (longlong)&___7___Ref_count_obj2_VGainNode_vraudio___std__6B_;
      GainNode::GainNode((GainNode *)(p_Var12 + 1),local_res10[0],1,(AttenuationType *)&param_4,
                         pSVar7);
    }
    local_68 = (undefined1  [8])0x0;
    plStack_60 = (longlong *)0x0;
    std::shared_ptr<vraudio::GainNode>::_Set_ptr_rep_and_enable_shared<vraudio::GainNode>
              ((shared_ptr<vraudio::GainNode> *)local_68,(GainNode *)(p_Var12 + 1),p_Var12);
    auVar11 = local_68;
    pcVar8 = *(code **)(*(longlong *)
                         &((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
                          ((longlong)local_68 + 0x10))->second + 8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    if (auVar18 == (undefined1  [8])0x0) {
      local_88 = (undefined1 *)0x0;
    }
    else {
      local_88 = (undefined1 *)((longlong)auVar18 + 0x18);
    }
    local_80 = plVar10;
    (*pcVar8)(&((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
               ((longlong)local_68 + 0x10))->second,&local_88);
    plVar16 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_80 + 1;
      lVar9 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16);
        }
      }
    }
    pSVar7 = this->system_settings_;
    p_Var12 = ::operator_new(0x128);
    if (p_Var12 == (_Ref_count_base *)0x0) {
      p_Var12 = (_Ref_count_base *)0x0;
    }
    else {
      p_Var12->_Uses = 1;
      p_Var12->_Weaks = 1;
      p_Var12->_padding_ = (longlong)&___7___Ref_count_obj2_VOcclusionNode_vraudio___std__6B_;
      OcclusionNode::OcclusionNode((OcclusionNode *)(p_Var12 + 1),local_res10[0],pSVar7);
    }
    local_78 = (undefined1  [8])0x0;
    plStack_70 = (longlong *)0x0;
    std::shared_ptr<vraudio::OcclusionNode>::_Set_ptr_rep_and_enable_shared<vraudio::OcclusionNode>
              ((shared_ptr<vraudio::OcclusionNode> *)local_78,(OcclusionNode *)(p_Var12 + 1),p_Var12
              );
    plVar16 = plStack_60;
    auVar18 = local_78;
    pcVar8 = *(code **)(*(longlong *)((longlong)local_78 + 0x18) + 8);
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
    if (auVar11 == (undefined1  [8])0x0) {
      local_88 = (undefined1 *)0x0;
    }
    else {
      local_88 = &(((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
                   ((longlong)auVar11 + 0x10))->second).field_0x8;
    }
    local_80 = plStack_60;
    (*pcVar8)((longlong)local_78 + 0x18,&local_88);
    plVar17 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_80 + 1;
      lVar9 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17);
        }
      }
    }
    pSVar7 = this->system_settings_;
    p_Var12 = ::operator_new(0x278);
    if (p_Var12 == (_Ref_count_base *)0x0) {
      p_Var12 = (_Ref_count_base *)0x0;
    }
    else {
      p_Var12->_Uses = 1;
      p_Var12->_Weaks = 1;
      p_Var12->_padding_ = (longlong)&___7___Ref_count_obj2_VNearFieldEffectNode_vraudio___std__6B_;
      NearFieldEffectNode::NearFieldEffectNode
                ((NearFieldEffectNode *)(p_Var12 + 1),local_res10[0],pSVar7);
    }
    local_68 = (undefined1  [8])0x0;
    plStack_60 = (longlong *)0x0;
    std::shared_ptr<vraudio::NearFieldEffectNode>::
    _Set_ptr_rep_and_enable_shared<vraudio::NearFieldEffectNode>
              ((shared_ptr<vraudio::NearFieldEffectNode> *)local_68,
               (NearFieldEffectNode *)(p_Var12 + 1),p_Var12);
    plVar17 = plStack_70;
    if (local_res20 == '\0') {
      plVar15 = (longlong *)(*(longlong *)&this->stereo_mixing_panner_node_ + 0x18);
      pcVar8 = *(code **)(*plVar15 + 8);
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
        UNLOCK();
      }
      if (auVar18 == (undefined1  [8])0x0) {
        local_78 = (undefined1  [8])0x0;
      }
      else {
        local_78 = (undefined1  [8])((longlong)auVar18 + 0x20);
      }
      (*pcVar8)(plVar15,local_78);
      plVar15 = plStack_70;
    }
    else {
      ppVar14 = std::
                _Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>,0>_>
                ::_Try_emplace<int_const_&>
                          ((_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>,0>_>
                            *)&this->ambisonic_mixing_encoder_nodes_,&local_58,local_res18);
      plVar17 = plStack_70;
      plVar15 = (longlong *)(*(longlong *)&(ppVar14->first->_Myval).second + 0x18);
      pcVar8 = *(code **)(*plVar15 + 8);
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
        UNLOCK();
      }
      if (auVar18 == (undefined1  [8])0x0) {
        local_88 = (undefined1 *)0x0;
        local_80 = plStack_70;
        (*pcVar8)(plVar15,&local_88);
        plVar15 = local_80;
      }
      else {
        local_88 = (undefined1 *)((longlong)auVar18 + 0x20);
        local_80 = plStack_70;
        (*pcVar8)(plVar15,&local_88);
        plVar15 = local_80;
      }
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar15 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15);
        }
      }
    }
    auVar11 = local_68;
    pcVar8 = *(code **)(*(longlong *)
                         &((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
                          ((longlong)local_68 + 0x10))->second + 8);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
    }
    if (auVar18 == (undefined1  [8])0x0) {
      local_78 = (undefined1  [8])0x0;
    }
    else {
      local_78 = (undefined1  [8])((longlong)auVar18 + 0x20);
    }
    plStack_70 = plVar17;
    (*pcVar8)(&((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
               ((longlong)local_68 + 0x10))->second,local_78);
    plVar15 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_70 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15);
        }
      }
    }
    plVar15 = plStack_60;
    lVar9 = *(longlong *)&this->stereo_mixer_node_;
    pcVar8 = *(code **)(*(longlong *)(lVar9 + 0x18) + 8);
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
    if (auVar11 == (undefined1  [8])0x0) {
      local_78 = (undefined1  [8])0x0;
    }
    else {
      local_78 = (undefined1  [8])
                 &(((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
                   ((longlong)auVar11 + 0x10))->second).field_0x8;
    }
    plStack_70 = plStack_60;
    (*pcVar8)(lVar9 + 0x18,local_78);
    plVar2 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_70 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
      }
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar15 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15);
        }
      }
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar17 + 1;
      lVar9 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17);
        }
      }
    }
    auVar18 = local_98;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar16 + 1;
      lVar9 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        auVar18 = local_98;
        if (iVar4 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16);
          auVar18 = local_98;
        }
      }
    }
  }
  plVar16 = (longlong *)(*(longlong *)&this->reflections_gain_mixer_node_ + 0x18);
  pcVar8 = *(code **)(*plVar16 + 8);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if (auVar18 == (undefined1  [8])0x0) {
    local_78 = (undefined1  [8])0x0;
  }
  else {
    local_78 = (undefined1  [8])((longlong)auVar18 + 0x18);
  }
  plStack_70 = plVar10;
  (*pcVar8)(plVar16,local_78);
  plVar16 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_70 + 1;
    lVar9 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
    }
  }
  plVar16 = (longlong *)(*(longlong *)&this->reverb_gain_mixer_node_ + 0x18);
  pcVar8 = *(code **)(*plVar16 + 8);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if (auVar18 == (undefined1  [8])0x0) {
    local_78 = (undefined1  [8])0x0;
  }
  else {
    local_78 = (undefined1  [8])((longlong)auVar18 + 0x18);
  }
  plStack_70 = plVar10;
  (*pcVar8)(plVar16,local_78);
  plVar16 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_70 + 1;
    lVar9 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar10 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  return;
}

// CreateStereoSource @ 14f087170

void __thiscall vraudio::GraphManager::CreateStereoSource(GraphManager *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ulong64 uVar4;
  _List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*> *p_Var5;
  longlong *plVar6;
  SystemSettings *pSVar7;
  code *pcVar8;
  longlong lVar9;
  undefined1 auVar10 [8];
  longlong *plVar11;
  undefined1 auVar12 [8];
  _Ref_count_base *p_Var13;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*>_*,bool>
  *ppVar14;
  longlong *plVar15;
  AttenuationType local_res8 [2];
  int local_res10 [2];
  undefined1 local_48 [8];
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *plStack_30;
  
  uVar4 = this->system_settings_->frames_per_buffer_;
  local_res10[0] = param_1;
  p_Var13 = ::operator_new(0xc0);
  if (p_Var13 == (_Ref_count_base *)0x0) {
    p_Var13 = (_Ref_count_base *)0x0;
  }
  else {
    p_Var13->_Uses = 1;
    p_Var13->_Weaks = 1;
    p_Var13->_padding_ = (longlong)&___7___Ref_count_obj2_VBufferedSourceNode_vraudio___std__6B_;
    BufferedSourceNode::BufferedSourceNode
              ((BufferedSourceNode *)(p_Var13 + 1),local_res10[0],2,uVar4);
  }
  local_48 = (undefined1  [8])0x0;
  plStack_40 = (longlong *)0x0;
  std::shared_ptr<vraudio::BufferedSourceNode>::
  _Set_ptr_rep_and_enable_shared<vraudio::BufferedSourceNode>
            ((shared_ptr<vraudio::BufferedSourceNode> *)local_48,(BufferedSourceNode *)(p_Var13 + 1)
             ,p_Var13);
  ppVar14 = std::
            _Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::BufferedSourceNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>,0>_>
            ::_Try_emplace<int_const_&>
                      ((_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::BufferedSourceNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>,0>_>
                        *)&this->source_nodes_,
                       (pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>,void_*>_*,bool>
                        *)local_38,local_res10);
  plVar11 = plStack_40;
  auVar10 = local_48;
  p_Var5 = ppVar14->first;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)&(p_Var5->_Myval).second.field_0x8;
  *(undefined1 (*) [8])&(p_Var5->_Myval).second = local_48;
  *(longlong **)&(p_Var5->_Myval).second.field_0x8 = plStack_40;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar6 + 1;
    lVar9 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  pSVar7 = this->system_settings_;
  local_res8[0] = kInput;
  p_Var13 = ::operator_new(0x140);
  if (p_Var13 == (_Ref_count_base *)0x0) {
    p_Var13 = (_Ref_count_base *)0x0;
  }
  else {
    p_Var13->_Uses = 1;
    p_Var13->_Weaks = 1;
    p_Var13->_padding_ = (longlong)&___7___Ref_count_obj2_VGainNode_vraudio___std__6B_;
    GainNode::GainNode((GainNode *)(p_Var13 + 1),local_res10[0],2,local_res8,pSVar7);
  }
  local_38 = (undefined1  [8])0x0;
  plStack_30 = (longlong *)0x0;
  std::shared_ptr<vraudio::GainNode>::_Set_ptr_rep_and_enable_shared<vraudio::GainNode>
            ((shared_ptr<vraudio::GainNode> *)local_38,(GainNode *)(p_Var13 + 1),p_Var13);
  auVar12 = local_38;
  pcVar8 = *(code **)(*(longlong *)
                       &((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
                        ((longlong)local_38 + 0x10))->second + 8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  if (auVar10 == (undefined1  [8])0x0) {
    local_48 = (undefined1  [8])0x0;
  }
  else {
    local_48 = (undefined1  [8])((longlong)auVar10 + 0x18);
  }
  plStack_40 = plVar11;
  (*pcVar8)(&((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
             ((longlong)local_38 + 0x10))->second,local_48);
  plVar6 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar15 = plStack_40 + 1;
    lVar9 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  plVar6 = plStack_30;
  plVar15 = (longlong *)(*(longlong *)&this->stereo_mixer_node_ + 0x18);
  pcVar8 = *(code **)(*plVar15 + 8);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (auVar12 == (undefined1  [8])0x0) {
    local_48 = (undefined1  [8])0x0;
  }
  else {
    local_48 = (undefined1  [8])
               &(((pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_> *)
                 ((longlong)auVar12 + 0x10))->second).field_0x8;
  }
  plStack_40 = plStack_30;
  (*pcVar8)(plVar15,local_48);
  plVar15 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar6 + 1;
    lVar9 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar11 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
  return;
}

// DestroySource @ 14f087430

void __thiscall vraudio::GraphManager::DestroySource(GraphManager *this,int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  byte bStackX_11;
  byte bStackX_12;
  byte bStackX_13;
  SourceNode *local_18;
  longlong *local_10;
  
  LookupSourceNode(this,(shared_ptr<vraudio::BufferedSourceNode> *)&local_18,param_1);
  if (local_18 != (SourceNode *)0x0) {
    SourceNode::MarkEndOfStream(local_18);
    SinkNode::CleanUp(*(SinkNode **)&this->output_node_);
    bStackX_11 = (byte)((uint)param_1 >> 8);
    bStackX_12 = (byte)((uint)param_1 >> 0x10);
    bStackX_13 = (byte)((uint)param_1 >> 0x18);
    plVar4 = *(longlong **)&(this->source_nodes_).field_0x8;
    plVar7 = (longlong *)
             (((((((ulonglong)(param_1 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)bStackX_11) * 0x100000001b3 ^ (ulonglong)bStackX_12) * 0x100000001b3 ^
               (ulonglong)bStackX_13) * 0x100000001b3 &
              *(ulonglong *)&(this->source_nodes_).field_0x30) * 0x10 +
             *(longlong *)&(this->source_nodes_).field_0x18);
    plVar5 = (longlong *)plVar7[1];
    if (plVar5 == plVar4) {
LAB_14f087500:
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar3 = (int)plVar5[2];
      plVar8 = plVar5;
      while (param_1 != iVar3) {
        if (plVar8 == (longlong *)*plVar7) goto LAB_14f087500;
        plVar8 = (longlong *)plVar8[1];
        iVar3 = (int)plVar8[2];
      }
    }
    if (plVar8 != (longlong *)0x0) {
      if (plVar5 == plVar8) {
        if ((longlong *)*plVar7 == plVar8) {
          *plVar7 = (longlong)plVar4;
          plVar7[1] = (longlong)plVar4;
        }
        else {
          plVar7[1] = plVar8[1];
        }
      }
      else if ((longlong *)*plVar7 == plVar8) {
        *plVar7 = *plVar8;
      }
      lVar6 = *plVar8;
      puVar2 = &(this->source_nodes_).field_0x10;
      *(longlong *)puVar2 = *(longlong *)puVar2 + -1;
      *(longlong *)plVar8[1] = lVar6;
      *(longlong *)(lVar6 + 8) = plVar8[1];
      plVar4 = (longlong *)plVar8[4];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar4 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
      ::operator_delete(plVar8,0x28);
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10);
      }
    }
  }
  return;
}

// EnableRoomEffects @ 14f0875e0

void __thiscall vraudio::GraphManager::EnableRoomEffects(GraphManager *this,bool param_1)

{
  this->room_effects_enabled_ = param_1;
  GainMixerNode::SetMute(*(GainMixerNode **)&this->reflections_gain_mixer_node_,!param_1);
  GainMixerNode::SetMute
            (*(GainMixerNode **)&this->reverb_gain_mixer_node_,this->room_effects_enabled_ == false)
  ;
  return;
}

// GetAmbisonicBuffer @ 14f087620

AudioBuffer * __thiscall vraudio::GraphManager::GetAmbisonicBuffer(GraphManager *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  AudioBuffer *pAVar3;
  
  Mixer::Reset((this->ambisonic_output_mixer_)._Mypair._Myval2);
  puVar1 = *(undefined8 **)&(this->ambisonic_mixer_nodes_).field_0x8;
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    pAVar3 = MixerNode::GetOutputBuffer((MixerNode *)puVar2[3]);
    if (pAVar3 != (AudioBuffer *)0x0) {
      Mixer::AddInput((this->ambisonic_output_mixer_)._Mypair._Myval2,pAVar3);
    }
  }
  pAVar3 = Mixer::GetOutput((this->ambisonic_output_mixer_)._Mypair._Myval2);
  return pAVar3;
}

// GetMutableAudioBuffer @ 14f087690

AudioBuffer * __thiscall
vraudio::GraphManager::GetMutableAudioBuffer(GraphManager *this,int param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  AudioBuffer *pAVar5;
  BufferedSourceNode *local_18;
  longlong *local_10;
  
  LookupSourceNode(this,(shared_ptr<vraudio::BufferedSourceNode> *)&local_18,param_1);
  if (local_18 == (BufferedSourceNode *)0x0) {
    pAVar5 = (AudioBuffer *)0x0;
  }
  else {
    pAVar5 = BufferedSourceNode::GetMutableAudioBufferAndSetNewBufferFlag(local_18);
  }
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
    return pAVar5;
  }
  return pAVar5;
}

// GetNumMaxAmbisonicChannels @ 14f087720

ulong64 __thiscall vraudio::GraphManager::GetNumMaxAmbisonicChannels(GraphManager *this)

{
  longlong lVar1;
  
  lVar1 = (longlong)(this->config_).max_ambisonic_order + 1;
  return lVar1 * lVar1;
}

// GetRoomEffectsEnabled @ 14f087740

bool __thiscall vraudio::GraphManager::GetRoomEffectsEnabled(GraphManager *this)

{
  return this->room_effects_enabled_;
}

// GetSinkNode @ 14f087750

shared_ptr<vraudio::SinkNode> * __thiscall
vraudio::GraphManager::GetSinkNode
          (GraphManager *this,shared_ptr<vraudio::SinkNode> *__return_storage_ptr__)

{
  int *piVar1;
  longlong lVar2;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  lVar2 = *(longlong *)&(this->output_node_).field_0x8;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)&this->output_node_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)&(this->output_node_).field_0x8
  ;
  return __return_storage_ptr__;
}

// GetStereoBuffer @ 14f087790

AudioBuffer * __thiscall vraudio::GraphManager::GetStereoBuffer(GraphManager *this)

{
  AudioBuffer *pAVar1;
  
  pAVar1 = MixerNode::GetOutputBuffer(*(MixerNode **)&this->stereo_mixer_node_);
  return pAVar1;
}

// GlobalConfig @ 14f0877b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

GraphManagerConfig * __cdecl vraudio::GlobalConfig(GraphManagerConfig *__return_storage_ptr__)

{
  ulonglong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  GraphManagerConfig *_Dst;
  ulonglong uVar4;
  undefined1 auStack_b8 [32];
  pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> local_98;
  undefined4 local_70;
  _Bxty local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  _Bxty local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx + 8) =
       0;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Mysize = 0;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Myres = 0xf;
  (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Buf[0] = '\0';
  __return_storage_ptr__->max_ambisonic_order = 1;
  (__return_storage_ptr__->sh_hrir_filenames)._Mypair._Myval2._Myfirst =
       (pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)0x0;
  (__return_storage_ptr__->sh_hrir_filenames)._Mypair._Myval2._Mylast =
       (pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)0x0;
  (__return_storage_ptr__->sh_hrir_filenames)._Mypair._Myval2._Myend =
       (pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)0x0;
  uVar1 = (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Myres;
  if (uVar1 < 0xd) {
    if (0x7fffffffffffffff - (uVar1 >> 1) < uVar1) {
      pcVar3 = std::_Allocate<16,std::_Default_allocate_traits>(0x8000000000000000);
      (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Myres = 0x7fffffffffffffff;
    }
    else {
      uVar1 = (uVar1 >> 1) + uVar1;
      uVar4 = 0xf;
      if (0xf < uVar1) {
        uVar4 = uVar1;
      }
      pcVar3 = std::_Allocate<16,std::_Default_allocate_traits>(uVar4 + 1);
      (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Myres = uVar4;
    }
    (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Mysize = 0xd;
    *(undefined8 *)pcVar3 = s_Global_Config._0_8_;
    *(undefined4 *)(pcVar3 + 8) = s_Global_Config._8_4_;
    pcVar3[0xc] = s_Global_Config[0xc];
    pcVar3[0xd] = '\0';
    (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Ptr = pcVar3;
  }
  else {
    _Dst = __return_storage_ptr__;
    if (0xf < uVar1) {
      _Dst = (GraphManagerConfig *)
             (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Bx._Ptr;
    }
    (__return_storage_ptr__->configuration_name)._Mypair._Myval2._Mysize = 0xd;
    memmove(_Dst,"Global Config",0xd);
    (_Dst->configuration_name)._Mypair._Myval2._Bx._Buf[0xd] = '\0';
  }
  __return_storage_ptr__->max_ambisonic_order = 3;
  local_98.first = 1;
  local_98.second._Mypair._Myval2._Bx._Ptr = (char *)0x0;
  local_98.second._Mypair._Myval2._Bx._8_8_ = 0;
  local_98.second._Mypair._Myval2._Bx._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x30);
  uVar2 = s_WAV_Subject_002_SH_sh_hrir_orde._8_8_;
  local_98.second._Mypair._Myval2._Mysize = 0x26;
  local_98.second._Mypair._Myval2._Myres = 0x2f;
  *(undefined8 *)local_98.second._Mypair._Myval2._Bx._Ptr = s_WAV_Subject_002_SH_sh_hrir_orde._0_8_;
  *(undefined8 *)(local_98.second._Mypair._Myval2._Bx._Ptr + 8) = uVar2;
  uVar2 = s_WAV_Subject_002_SH_sh_hrir_orde._24_8_;
  *(undefined8 *)(local_98.second._Mypair._Myval2._Bx._Ptr + 0x10) =
       s_WAV_Subject_002_SH_sh_hrir_orde._16_8_;
  *(undefined8 *)(local_98.second._Mypair._Myval2._Bx._Ptr + 0x18) = uVar2;
  *(undefined4 *)(local_98.second._Mypair._Myval2._Bx._Ptr + 0x20) =
       s_WAV_Subject_002_SH_sh_hrir_orde._32_4_;
  *(undefined2 *)(local_98.second._Mypair._Myval2._Bx._Ptr + 0x24) =
       s_WAV_Subject_002_SH_sh_hrir_orde._36_2_;
  *(local_98.second._Mypair._Myval2._Bx._Ptr + 0x26) = '\0';
  local_70 = 2;
  local_68._Ptr = (char *)0x0;
  local_68._8_8_ = 0;
  local_68._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x30);
  uVar2 = s_WAV_Subject_002_SH_sh_hrir_orde._8_8_;
  local_58 = ___xmm_000000000000002f0000000000000026;
  uStack_50 = _UNK_1531041a8;
  *(undefined8 *)local_68._Ptr = s_WAV_Subject_002_SH_sh_hrir_orde._0_8_;
  *(undefined8 *)(local_68._Ptr + 8) = uVar2;
  uVar2 = s_WAV_Subject_002_SH_sh_hrir_orde._24_8_;
  *(undefined8 *)(local_68._Ptr + 0x10) = s_WAV_Subject_002_SH_sh_hrir_orde._16_8_;
  *(undefined8 *)(local_68._Ptr + 0x18) = uVar2;
  *(undefined4 *)(local_68._Ptr + 0x20) = s_WAV_Subject_002_SH_sh_hrir_orde._32_4_;
  *(undefined2 *)(local_68._Ptr + 0x24) = s_WAV_Subject_002_SH_sh_hrir_orde._36_2_;
  *(local_68._Ptr + 0x26) = '\0';
  local_48 = 3;
  local_40._Ptr = (char *)0x0;
  local_40._8_8_ = 0;
  local_40._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x30);
  uVar2 = s_WAV_Subject_002_SH_sh_hrir_orde._8_8_;
  local_30 = 0x26;
  local_28 = 0x2f;
  *(undefined8 *)local_40._Ptr = s_WAV_Subject_002_SH_sh_hrir_orde._0_8_;
  *(undefined8 *)(local_40._Ptr + 8) = uVar2;
  uVar2 = s_WAV_Subject_002_SH_sh_hrir_orde._24_8_;
  *(undefined8 *)(local_40._Ptr + 0x10) = s_WAV_Subject_002_SH_sh_hrir_orde._16_8_;
  *(undefined8 *)(local_40._Ptr + 0x18) = uVar2;
  *(undefined4 *)(local_40._Ptr + 0x20) = s_WAV_Subject_002_SH_sh_hrir_orde._32_4_;
  *(undefined2 *)(local_40._Ptr + 0x24) = s_WAV_Subject_002_SH_sh_hrir_orde._36_2_;
  *(local_40._Ptr + 0x26) = '\0';
  std::
  vector<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
  ::
  _Assign_counted_range<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_const_*>
            (&__return_storage_ptr__->sh_hrir_filenames,&local_98,3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (&local_98.second);
  return __return_storage_ptr__;
}

// InitializeAmbisonicRendererGraph @ 14f087a60

void __thiscall
vraudio::GraphManager::InitializeAmbisonicRendererGraph
          (GraphManager *this,int param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  SystemSettings *pSVar4;
  code *pcVar5;
  _List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*> *p_Var6;
  longlong *plVar7;
  undefined1 auVar8 [8];
  _Ref_count_base *p_Var9;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*>_*,bool>
  *ppVar10;
  longlong *plVar11;
  bool bVar12;
  longlong lVar13;
  int local_res10 [2];
  undefined1 local_158 [8];
  longlong *plStack_150;
  undefined1 local_148 [8];
  longlong *plStack_140;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*>_*,bool>
  local_138;
  FatalLogger local_128;
  
  local_res10[0] = param_1;
  if ((this->config_).max_ambisonic_order < param_1) {
    FatalLogger::FatalLogger
              (&local_128,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\graph\\graph_manager.cc"
               ,0x105);
    bVar12 = true;
  }
  else {
    bVar12 = false;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      bVar12 = false;
      if (`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        std::basic_ostream<char,std::char_traits<char>_>::
        basic_ostream<char,std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                    ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
        atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
        _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
  }
  if (bVar12) {
    FatalLogger::~FatalLogger(&local_128);
  }
  lVar13 = (longlong)local_res10[0];
  pSVar4 = this->system_settings_;
  p_Var9 = ::operator_new(0x120);
  if (p_Var9 == (_Ref_count_base *)0x0) {
    p_Var9 = (_Ref_count_base *)0x0;
  }
  else {
    p_Var9->_Uses = 1;
    p_Var9->_Weaks = 1;
    p_Var9->_padding_ = (longlong)&___7___Ref_count_obj2_VMixerNode_vraudio___std__6B_;
    MixerNode::MixerNode((MixerNode *)(p_Var9 + 1),pSVar4,(lVar13 + 1) * (lVar13 + 1));
  }
  local_158 = (undefined1  [8])0x0;
  plStack_150 = (longlong *)0x0;
  std::shared_ptr<vraudio::MixerNode>::_Set_ptr_rep_and_enable_shared<vraudio::MixerNode>
            ((shared_ptr<vraudio::MixerNode> *)local_158,(MixerNode *)(p_Var9 + 1),p_Var9);
  ppVar10 = std::
            _Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
            ::_Try_emplace<int_const_&>
                      ((_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
                        *)&this->ambisonic_mixer_nodes_,
                       (pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*>_*,bool>
                        *)local_148,local_res10);
  std::shared_ptr<vraudio::MixerNode>::operator=
            (&(ppVar10->first->_Myval).second,(shared_ptr<vraudio::MixerNode> *)local_158);
  plVar7 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_150 + 1;
    lVar13 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_150)(plStack_150);
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
  pSVar4 = this->system_settings_;
  p_Var9 = ::operator_new(600);
  if (p_Var9 == (_Ref_count_base *)0x0) {
    p_Var9 = (_Ref_count_base *)0x0;
  }
  else {
    p_Var9->_Uses = 1;
    p_Var9->_Weaks = 1;
    p_Var9->_padding_ =
         (longlong)&___7___Ref_count_obj2_VAmbisonicBinauralDecoderNode_vraudio___std__6B_;
    AmbisonicBinauralDecoderNode::AmbisonicBinauralDecoderNode
              ((AmbisonicBinauralDecoderNode *)(p_Var9 + 1),pSVar4,local_res10[0],param_2,
               &this->fft_manager_,&this->resampler_);
  }
  local_148 = (undefined1  [8])0x0;
  plStack_140 = (longlong *)0x0;
  std::shared_ptr<vraudio::AmbisonicBinauralDecoderNode>::
  _Set_ptr_rep_and_enable_shared<vraudio::AmbisonicBinauralDecoderNode>
            ((shared_ptr<vraudio::AmbisonicBinauralDecoderNode> *)local_148,
             (AmbisonicBinauralDecoderNode *)(p_Var9 + 1),p_Var9);
  auVar8 = local_148;
  pcVar5 = *(code **)(*(longlong *)
                       &((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)
                        ((longlong)local_148 + 0x10))->second + 8);
  ppVar10 = std::
            _Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
            ::_Try_emplace<int_const_&>
                      ((_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
                        *)&this->ambisonic_mixer_nodes_,&local_138,local_res10);
  p_Var6 = ppVar10->first;
  lVar13 = *(longlong *)&(p_Var6->_Myval).second.field_0x8;
  if (lVar13 != 0) {
    LOCK();
    piVar1 = (int *)(lVar13 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar13 = *(longlong *)&(p_Var6->_Myval).second;
  if (lVar13 == 0) {
    local_158 = (undefined1  [8])0x0;
  }
  else {
    local_158 = (undefined1  [8])(lVar13 + 0x20);
  }
  plStack_150 = *(longlong **)&(p_Var6->_Myval).second.field_0x8;
  (*pcVar5)(&((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)((longlong)auVar8 + 0x10))->
             second,local_158);
  plVar7 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_150 + 1;
    lVar13 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_150)(plStack_150);
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
  plVar7 = plStack_140;
  plVar11 = (longlong *)(*(longlong *)&this->stereo_mixer_node_ + 0x18);
  pcVar5 = *(code **)(*plVar11 + 8);
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
    UNLOCK();
  }
  if (auVar8 == (undefined1  [8])0x0) {
    local_158 = (undefined1  [8])0x0;
  }
  else {
    local_158 = (undefined1  [8])
                &(((pair<int_const_,std::shared_ptr<vraudio::MixerNode>_> *)
                  ((longlong)auVar8 + 0x10))->second).field_0x8;
  }
  plStack_150 = plStack_140;
  (*pcVar5)(plVar11,local_158);
  plVar11 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_150 + 1;
    lVar13 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar7 + 1;
    lVar13 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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
  return;
}

// InitializeReflectionsGraph @ 14f087de0

void __thiscall vraudio::GraphManager::InitializeReflectionsGraph(GraphManager *this)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  SystemSettings *pSVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  _Ref_count_base *p_Var9;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*>_*,bool>
  *ppVar10;
  AttenuationType local_res8 [2];
  int local_res10 [2];
  undefined1 local_38 [8];
  undefined8 uStack_30;
  pair<std::_List_node<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>,void_*>_*,bool>
  local_28;
  
  pSVar4 = this->system_settings_;
  local_res8[0] = kReflections;
  p_Var9 = ::operator_new(0x170);
  if (p_Var9 == (_Ref_count_base *)0x0) {
    p_Var9 = (_Ref_count_base *)0x0;
  }
  else {
    p_Var9->_Uses = 1;
    p_Var9->_Weaks = 1;
    p_Var9->_padding_ = (longlong)&___7___Ref_count_obj2_VGainMixerNode_vraudio___std__6B_;
    GainMixerNode::GainMixerNode((GainMixerNode *)(p_Var9 + 1),local_res8,pSVar4,1);
  }
  local_38 = (undefined1  [8])0x0;
  uStack_30 = (longlong *)0x0;
  std::shared_ptr<vraudio::GainMixerNode>::_Set_ptr_rep_and_enable_shared<vraudio::GainMixerNode>
            ((shared_ptr<vraudio::GainMixerNode> *)local_38,(GainMixerNode *)(p_Var9 + 1),p_Var9);
  plVar5 = *(longlong **)&(this->reflections_gain_mixer_node_).field_0x8;
  *(undefined1 (*) [8])&this->reflections_gain_mixer_node_ = local_38;
  *(longlong **)&(this->reflections_gain_mixer_node_).field_0x8 = uStack_30;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  pSVar4 = this->system_settings_;
  p_Var9 = ::operator_new(0x418);
  if (p_Var9 == (_Ref_count_base *)0x0) {
    p_Var9 = (_Ref_count_base *)0x0;
  }
  else {
    p_Var9->_Uses = 1;
    p_Var9->_Weaks = 1;
    p_Var9->_padding_ = (longlong)&___7___Ref_count_obj2_VReflectionsNode_vraudio___std__6B_;
    ReflectionsNode::ReflectionsNode((ReflectionsNode *)(p_Var9 + 1),pSVar4);
  }
  local_38 = (undefined1  [8])0x0;
  uStack_30 = (longlong *)0x0;
  std::shared_ptr<vraudio::ReflectionsNode>::
  _Set_ptr_rep_and_enable_shared<vraudio::ReflectionsNode>
            ((shared_ptr<vraudio::ReflectionsNode> *)local_38,(ReflectionsNode *)(p_Var9 + 1),p_Var9
            );
  plVar5 = *(longlong **)&(this->reflections_node_).field_0x8;
  *(undefined1 (*) [8])&this->reflections_node_ = local_38;
  *(longlong **)&(this->reflections_node_).field_0x8 = uStack_30;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  lVar8 = *(longlong *)&this->reflections_node_;
  lVar6 = *(longlong *)&(this->reflections_gain_mixer_node_).field_0x8;
  pcVar7 = *(code **)(*(longlong *)(lVar8 + 0x18) + 8);
  uStack_30 = (longlong *)0x0;
  if (lVar6 != 0) {
    LOCK();
    piVar2 = (int *)(lVar6 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    uStack_30 = *(longlong **)&(this->reflections_gain_mixer_node_).field_0x8;
  }
  if (*(longlong *)&this->reflections_gain_mixer_node_ == 0) {
    local_38 = (undefined1  [8])0x0;
  }
  else {
    local_38 = (undefined1  [8])(*(longlong *)&this->reflections_gain_mixer_node_ + 0x20);
  }
  (*pcVar7)(lVar8 + 0x18,local_38);
  plVar5 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_30 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  local_res10[0] = 1;
  ppVar10 = std::
            _Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
            ::_Try_emplace<int_const_&>
                      ((_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
                        *)&this->ambisonic_mixer_nodes_,&local_28,local_res10);
  lVar8 = *(longlong *)&(ppVar10->first->_Myval).second;
  lVar6 = *(longlong *)&(this->reflections_node_).field_0x8;
  pcVar7 = *(code **)(*(longlong *)(lVar8 + 0x18) + 8);
  uStack_30 = (longlong *)0x0;
  if (lVar6 != 0) {
    LOCK();
    piVar2 = (int *)(lVar6 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    uStack_30 = *(longlong **)&(this->reflections_node_).field_0x8;
  }
  if (*(longlong *)&this->reflections_node_ == 0) {
    local_38 = (undefined1  [8])0x0;
  }
  else {
    local_38 = (undefined1  [8])(*(longlong *)&this->reflections_node_ + 0x20);
  }
  (*pcVar7)(lVar8 + 0x18,local_38);
  plVar5 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_30 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}

// InitializeReverbGraph @ 14f088080

void __thiscall vraudio::GraphManager::InitializeReverbGraph(GraphManager *this)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  SystemSettings *pSVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  _Ref_count_base *p_Var9;
  AttenuationType local_res8 [2];
  undefined1 local_28 [8];
  undefined8 uStack_20;
  
  pSVar4 = this->system_settings_;
  local_res8[0] = kReverb;
  p_Var9 = ::operator_new(0x170);
  if (p_Var9 == (_Ref_count_base *)0x0) {
    p_Var9 = (_Ref_count_base *)0x0;
  }
  else {
    p_Var9->_Uses = 1;
    p_Var9->_Weaks = 1;
    p_Var9->_padding_ = (longlong)&___7___Ref_count_obj2_VGainMixerNode_vraudio___std__6B_;
    GainMixerNode::GainMixerNode((GainMixerNode *)(p_Var9 + 1),local_res8,pSVar4,1);
  }
  local_28 = (undefined1  [8])0x0;
  uStack_20 = (longlong *)0x0;
  std::shared_ptr<vraudio::GainMixerNode>::_Set_ptr_rep_and_enable_shared<vraudio::GainMixerNode>
            ((shared_ptr<vraudio::GainMixerNode> *)local_28,(GainMixerNode *)(p_Var9 + 1),p_Var9);
  plVar5 = *(longlong **)&(this->reverb_gain_mixer_node_).field_0x8;
  *(undefined1 (*) [8])&this->reverb_gain_mixer_node_ = local_28;
  *(longlong **)&(this->reverb_gain_mixer_node_).field_0x8 = uStack_20;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  pSVar4 = this->system_settings_;
  p_Var9 = ::operator_new(0xcb0);
  if (p_Var9 == (_Ref_count_base *)0x0) {
    p_Var9 = (_Ref_count_base *)0x0;
  }
  else {
    p_Var9->_Uses = 1;
    p_Var9->_Weaks = 1;
    p_Var9->_padding_ = (longlong)&___7___Ref_count_obj2_VReverbNode_vraudio___std__6B_;
    ReverbNode::ReverbNode((ReverbNode *)(p_Var9 + 1),pSVar4,&this->fft_manager_);
  }
  local_28 = (undefined1  [8])0x0;
  uStack_20 = (longlong *)0x0;
  std::shared_ptr<vraudio::ReverbNode>::_Set_ptr_rep_and_enable_shared<vraudio::ReverbNode>
            ((shared_ptr<vraudio::ReverbNode> *)local_28,(ReverbNode *)(p_Var9 + 1),p_Var9);
  plVar5 = *(longlong **)&(this->reverb_node_).field_0x8;
  *(undefined1 (*) [8])&this->reverb_node_ = local_28;
  *(longlong **)&(this->reverb_node_).field_0x8 = uStack_20;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  lVar8 = *(longlong *)&this->reverb_node_;
  lVar6 = *(longlong *)&(this->reverb_gain_mixer_node_).field_0x8;
  pcVar7 = *(code **)(*(longlong *)(lVar8 + 0x18) + 8);
  uStack_20 = (longlong *)0x0;
  if (lVar6 != 0) {
    LOCK();
    piVar2 = (int *)(lVar6 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    uStack_20 = *(longlong **)&(this->reverb_gain_mixer_node_).field_0x8;
  }
  if (*(longlong *)&this->reverb_gain_mixer_node_ == 0) {
    local_28 = (undefined1  [8])0x0;
  }
  else {
    local_28 = (undefined1  [8])(*(longlong *)&this->reverb_gain_mixer_node_ + 0x20);
  }
  (*pcVar7)(lVar8 + 0x18,local_28);
  plVar5 = uStack_20;
  if (uStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_20 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_20)(uStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  lVar8 = *(longlong *)&this->stereo_mixer_node_;
  lVar6 = *(longlong *)&(this->reverb_node_).field_0x8;
  pcVar7 = *(code **)(*(longlong *)(lVar8 + 0x18) + 8);
  uStack_20 = (longlong *)0x0;
  if (lVar6 != 0) {
    LOCK();
    piVar2 = (int *)(lVar6 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    uStack_20 = *(longlong **)&(this->reverb_node_).field_0x8;
  }
  if (*(longlong *)&this->reverb_node_ == 0) {
    local_28 = (undefined1  [8])0x0;
  }
  else {
    local_28 = (undefined1  [8])(*(longlong *)&this->reverb_node_ + 0x20);
  }
  (*pcVar7)(lVar8 + 0x18,local_28);
  plVar5 = uStack_20;
  if (uStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_20 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_20)(uStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}

// LookupSourceNode @ 14f088310

shared_ptr<vraudio::BufferedSourceNode> * __thiscall
vraudio::GraphManager::LookupSourceNode
          (GraphManager *this,shared_ptr<vraudio::BufferedSourceNode> *__return_storage_ptr__,
          int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  longlong *plVar6;
  
  lVar3 = *(longlong *)&(this->source_nodes_).field_0x8;
  plVar6 = (longlong *)
           ((((ulonglong)(param_1 >> 0x18 & 0xff) ^
             ((((ulonglong)(byte)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)(param_1 >> 8 & 0xff)) * 0x100000001b3 ^
             (ulonglong)(param_1 >> 0x10 & 0xff)) * 0x100000001b3) * 0x100000001b3 &
            *(ulonglong *)&(this->source_nodes_).field_0x30) * 0x10 +
           *(longlong *)&(this->source_nodes_).field_0x18);
  lVar4 = plVar6[1];
  if (lVar4 == lVar3) {
LAB_14f0883b4:
    lVar4 = 0;
  }
  else {
    iVar2 = *(int *)(lVar4 + 0x10);
    while (param_1 != iVar2) {
      if (lVar4 == *plVar6) goto LAB_14f0883b4;
      lVar4 = *(longlong *)(lVar4 + 8);
      iVar2 = *(int *)(lVar4 + 0x10);
    }
  }
  if (lVar4 == 0) {
    lVar4 = lVar3;
  }
  if (lVar4 == lVar3) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
      atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
      _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pbVar5 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)
                        &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                         ::__l2::kNullStream,"Source node ");
    pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_1);
    std::operator<<<std::char_traits<char>_>(pbVar5," not found");
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    return __return_storage_ptr__;
  }
  lVar3 = *(longlong *)(lVar4 + 0x20);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)(lVar4 + 0x20);
  return __return_storage_ptr__;
}

// Process @ 14f0884c0

void __thiscall vraudio::GraphManager::Process(GraphManager *this)

{
  SinkNode::ReadInputs(*(SinkNode **)&this->output_node_);
  return;
}

// UpdateRoomReflections @ 14f0884e0

void __thiscall vraudio::GraphManager::UpdateRoomReflections(GraphManager *this)

{
  ReflectionsNode::Update(*(ReflectionsNode **)&this->reflections_node_);
  return;
}

// UpdateRoomReverb @ 14f0884f0

void __thiscall vraudio::GraphManager::UpdateRoomReverb(GraphManager *this)

{
  ReverbNode::Update(*(ReverbNode **)&this->reverb_node_);
  return;
}

// _Assign_grow @ 14f088500

void __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_>_>
::_Assign_grow(_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_>_>
               *this,ulong64 param_1,
              _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
              param_2)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  *p_Var1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  *p_Var2;
  ulong64 uVar3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  local_res18;
  
  p_Var1 = (this->_Mypair)._Myval2._Myfirst;
  p_Var2 = (this->_Mypair)._Myval2._Mylast;
  local_res18 = param_2;
  if (param_1 <= (ulonglong)((longlong)p_Var2 - (longlong)p_Var1 >> 3)) {
    fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_>
              (p_Var1,p_Var2,&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  p_Var2 = _Allocate<16,std::_Default_allocate_traits>(param_1 * 8);
  p_Var1 = (this->_Mypair)._Myval2._Myfirst;
  uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)p_Var1 >> 3;
  if (uVar3 != 0) {
    allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_>
    ::deallocate((allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_>
                  *)this,p_Var1,uVar3);
  }
  p_Var1 = p_Var2 + param_1;
  (this->_Mypair)._Myval2._Myfirst = p_Var2;
  (this->_Mypair)._Myval2._Mylast = p_Var1;
  (this->_Mypair)._Myval2._Myend = p_Var1;
  for (; p_Var2 != p_Var1; p_Var2 = p_Var2 + 1) {
    *p_Var2 = param_2;
  }
  return;
}

// _Assign_grow @ 14f0885e0

void __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_>_>
::_Assign_grow(_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_>_>
               *this,ulong64 param_1,
              _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
              param_2)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  *p_Var1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  *p_Var2;
  ulong64 uVar3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  local_res18;
  
  p_Var1 = (this->_Mypair)._Myval2._Myfirst;
  p_Var2 = (this->_Mypair)._Myval2._Mylast;
  local_res18 = param_2;
  if (param_1 <= (ulonglong)((longlong)p_Var2 - (longlong)p_Var1 >> 3)) {
    fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_>
              (p_Var1,p_Var2,&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  p_Var2 = _Allocate<16,std::_Default_allocate_traits>(param_1 * 8);
  p_Var1 = (this->_Mypair)._Myval2._Myfirst;
  uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)p_Var1 >> 3;
  if (uVar3 != 0) {
    allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_>
    ::deallocate((allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_>
                  *)this,p_Var1,uVar3);
  }
  p_Var1 = p_Var2 + param_1;
  (this->_Mypair)._Myval2._Myfirst = p_Var2;
  (this->_Mypair)._Myval2._Mylast = p_Var1;
  (this->_Mypair)._Myval2._Myend = p_Var1;
  for (; p_Var2 != p_Var1; p_Var2 = p_Var2 + 1) {
    *p_Var2 = param_2;
  }
  return;
}

// _Assign_grow @ 14f0886c0

void __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_>_>
::_Assign_grow(_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_>_>
               *this,ulong64 param_1,
              _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
              param_2)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  *p_Var1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  *p_Var2;
  ulong64 uVar3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  local_res18;
  
  p_Var1 = (this->_Mypair)._Myval2._Myfirst;
  p_Var2 = (this->_Mypair)._Myval2._Mylast;
  local_res18 = param_2;
  if (param_1 <= (ulonglong)((longlong)p_Var2 - (longlong)p_Var1 >> 3)) {
    fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_>
              (p_Var1,p_Var2,&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  p_Var2 = _Allocate<16,std::_Default_allocate_traits>(param_1 * 8);
  p_Var1 = (this->_Mypair)._Myval2._Myfirst;
  uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)p_Var1 >> 3;
  if (uVar3 != 0) {
    allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_>
    ::deallocate((allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_>
                  *)this,p_Var1,uVar3);
  }
  p_Var1 = p_Var2 + param_1;
  (this->_Mypair)._Myval2._Myfirst = p_Var2;
  (this->_Mypair)._Myval2._Mylast = p_Var1;
  (this->_Mypair)._Myval2._Myend = p_Var1;
  for (; p_Var2 != p_Var1; p_Var2 = p_Var2 + 1) {
    *p_Var2 = param_2;
  }
  return;
}

// _Delete_this @ 14f0887a0

void __thiscall
std::_Ref_count_obj2<vraudio::AmbisonicBinauralDecoderNode>::_Delete_this
          (_Ref_count_obj2<vraudio::AmbisonicBinauralDecoderNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::AmbisonicBinauralDecoderNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f0887ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Delete_this @ 14f0887c0

void __thiscall
std::_Ref_count_obj2<vraudio::AmbisonicMixingEncoderNode>::_Delete_this
          (_Ref_count_obj2<vraudio::AmbisonicMixingEncoderNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::AmbisonicMixingEncoderNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f0887cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Delete_this @ 14f0887e0

void __thiscall
std::_Ref_count_obj2<vraudio::BufferedSourceNode>::_Delete_this
          (_Ref_count_obj2<vraudio::BufferedSourceNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::BufferedSourceNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f0887ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Delete_this @ 14f088800

void __thiscall
std::_Ref_count_obj2<vraudio::FoaRotatorNode>::_Delete_this
          (_Ref_count_obj2<vraudio::FoaRotatorNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::FoaRotatorNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f08880d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Delete_this @ 14f088820

void __thiscall
std::_Ref_count_obj2<vraudio::GainMixerNode>::_Delete_this
          (_Ref_count_obj2<vraudio::GainMixerNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::GainMixerNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f08882d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Delete_this @ 14f088840

void __thiscall
std::_Ref_count_obj2<vraudio::GainNode>::_Delete_this(_Ref_count_obj2<vraudio::GainNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::GainNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f08884d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Delete_this @ 14f088860

void __thiscall
std::_Ref_count_obj2<vraudio::HoaRotatorNode>::_Delete_this
          (_Ref_count_obj2<vraudio::HoaRotatorNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::HoaRotatorNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f08886d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Delete_this @ 14f088880

void __thiscall
std::_Ref_count_obj2<vraudio::MixerNode>::_Delete_this(_Ref_count_obj2<vraudio::MixerNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::MixerNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f08888d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Delete_this @ 14f0888a0

void __thiscall
std::_Ref_count_obj2<vraudio::MonoFromSoundfieldNode>::_Delete_this
          (_Ref_count_obj2<vraudio::MonoFromSoundfieldNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::MonoFromSoundfieldNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f0888ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Delete_this @ 14f0888c0

void __thiscall
std::_Ref_count_obj2<vraudio::NearFieldEffectNode>::_Delete_this
          (_Ref_count_obj2<vraudio::NearFieldEffectNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::NearFieldEffectNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f0888cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Delete_this @ 14f0888e0

void __thiscall
std::_Ref_count_obj2<vraudio::OcclusionNode>::_Delete_this
          (_Ref_count_obj2<vraudio::OcclusionNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::OcclusionNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f0888ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Delete_this @ 14f088900

void __thiscall
std::_Ref_count_obj2<vraudio::ReflectionsNode>::_Delete_this
          (_Ref_count_obj2<vraudio::ReflectionsNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::ReflectionsNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f08890d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Delete_this @ 14f088920

void __thiscall
std::_Ref_count_obj2<vraudio::ReverbNode>::_Delete_this(_Ref_count_obj2<vraudio::ReverbNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::ReverbNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f08892d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Delete_this @ 14f088940

void __thiscall
std::_Ref_count_obj2<vraudio::SinkNode>::_Delete_this(_Ref_count_obj2<vraudio::SinkNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::SinkNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f08894d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Delete_this @ 14f088960

void __thiscall
std::_Ref_count_obj2<vraudio::StereoMixingPannerNode>::_Delete_this
          (_Ref_count_obj2<vraudio::StereoMixingPannerNode> *this)

{
  if (this != (_Ref_count_obj2<vraudio::StereoMixingPannerNode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f08896d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// _Destroy @ 14f088980

void __thiscall
std::_Ref_count_obj2<vraudio::AmbisonicBinauralDecoderNode>::_Destroy
          (_Ref_count_obj2<vraudio::AmbisonicBinauralDecoderNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f08898a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Destroy @ 14f0889a0

void __thiscall
std::_Ref_count_obj2<vraudio::AmbisonicMixingEncoderNode>::_Destroy
          (_Ref_count_obj2<vraudio::AmbisonicMixingEncoderNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0889aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Destroy @ 14f0889c0

void __thiscall
std::_Ref_count_obj2<vraudio::BufferedSourceNode>::_Destroy
          (_Ref_count_obj2<vraudio::BufferedSourceNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0889ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Destroy @ 14f0889e0

void __thiscall
std::_Ref_count_obj2<vraudio::FoaRotatorNode>::_Destroy
          (_Ref_count_obj2<vraudio::FoaRotatorNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0889ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Destroy @ 14f088a00

void __thiscall
std::_Ref_count_obj2<vraudio::GainMixerNode>::_Destroy
          (_Ref_count_obj2<vraudio::GainMixerNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f088a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Destroy @ 14f088a20

void __thiscall
std::_Ref_count_obj2<vraudio::GainNode>::_Destroy(_Ref_count_obj2<vraudio::GainNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f088a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Destroy @ 14f088a40

void __thiscall
std::_Ref_count_obj2<vraudio::HoaRotatorNode>::_Destroy
          (_Ref_count_obj2<vraudio::HoaRotatorNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f088a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Destroy @ 14f088a60

void __thiscall
std::_Ref_count_obj2<vraudio::MixerNode>::_Destroy(_Ref_count_obj2<vraudio::MixerNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f088a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Destroy @ 14f088a80

void __thiscall
std::_Ref_count_obj2<vraudio::MonoFromSoundfieldNode>::_Destroy
          (_Ref_count_obj2<vraudio::MonoFromSoundfieldNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f088a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Destroy @ 14f088aa0

void __thiscall
std::_Ref_count_obj2<vraudio::NearFieldEffectNode>::_Destroy
          (_Ref_count_obj2<vraudio::NearFieldEffectNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f088aaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Destroy @ 14f088ac0

void __thiscall
std::_Ref_count_obj2<vraudio::OcclusionNode>::_Destroy
          (_Ref_count_obj2<vraudio::OcclusionNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f088aca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Destroy @ 14f088ae0

void __thiscall
std::_Ref_count_obj2<vraudio::ReflectionsNode>::_Destroy
          (_Ref_count_obj2<vraudio::ReflectionsNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f088aea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Destroy @ 14f088b00

void __thiscall
std::_Ref_count_obj2<vraudio::ReverbNode>::_Destroy(_Ref_count_obj2<vraudio::ReverbNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f088b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Destroy @ 14f088b20

void __thiscall
std::_Ref_count_obj2<vraudio::SinkNode>::_Destroy(_Ref_count_obj2<vraudio::SinkNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f088b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Destroy @ 14f088b40

void __thiscall
std::_Ref_count_obj2<vraudio::StereoMixingPannerNode>::_Destroy
          (_Ref_count_obj2<vraudio::StereoMixingPannerNode> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f088b4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_Storage)._Value._padding_)(&this->_Storage,0);
  return;
}

// _Forced_rehash @ 14f088b60

void __thiscall
std::
_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>,0>_>
::_Forced_rehash(_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>,0>_>
                 *this,ulong64 param_1)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  _Var1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  _Var2;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  _Var3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  *p_Var4;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  *p_Var5;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  *p_Var6;
  longlong *plVar7;
  longlong lVar8;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  _Var9;
  ulonglong uVar10;
  ulong64 uVar11;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  *p_Var12;
  
  for (lVar8 = 0x3f; 0xfffffffffffffffU >> lVar8 == 0; lVar8 = lVar8 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar8 & 0x3f)) < param_1) {
    _Xlength_error("invalid hash bucket count");
    return;
  }
  _Var1 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
           )(this->_List)._Mypair._Myval2._Myhead;
  uVar10 = param_1 - 1 | 1;
  lVar8 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
    }
  }
  uVar11 = 1L << ((char)lVar8 + 1U & 0x3f);
  _Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_>_>
  ::_Assign_grow(&this->_Vec,uVar11 * 2,_Var1);
  this->_Maxidx = uVar11;
  this->_Mask = uVar11 - 1;
  _Var9 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
           )((this->_List)._Mypair._Myval2._Myhead)->_Next;
joined_r0x00014f088bd5:
  do {
    while( true ) {
      while( true ) {
        if (_Var9 == _Var1) {
          return;
        }
        _Var2 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                  *)_Var9;
        p_Var12 = (this->_Vec)._Mypair._Myval2._Myfirst +
                  ((((((ulonglong)*(byte *)((longlong)_Var9 + 0x10) ^ 0xcbf29ce484222325) *
                      0x100000001b3 ^ (ulonglong)*(byte *)((longlong)_Var9 + 0x11)) * 0x100000001b3
                    ^ (ulonglong)*(byte *)((longlong)_Var9 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)_Var9 + 0x13)) * 0x100000001b3 & this->_Mask) * 2;
        if (*p_Var12 != _Var1) break;
        *p_Var12 = _Var9;
        p_Var12[1] = _Var9;
        _Var9 = _Var2;
      }
      _Var3 = p_Var12[1];
      if (*(int *)((longlong)_Var9 + 0x10) != *(int *)((longlong)_Var3 + 0x10)) break;
      _Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                *)_Var3;
      if (_Var3 != _Var9) {
        p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                   **)((longlong)_Var9 + 8);
        *p_Var4 = _Var2;
        p_Var5 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                   **)((longlong)_Var2 + 8);
        *p_Var5 = _Var3;
        p_Var6 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                   **)((longlong)_Var3 + 8);
        *p_Var6 = _Var9;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
          **)((longlong)_Var3 + 8) = p_Var5;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
          **)((longlong)_Var2 + 8) = p_Var4;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
          **)((longlong)_Var9 + 8) = p_Var6;
      }
      p_Var12[1] = _Var9;
      _Var9 = _Var2;
    }
    do {
      if (*p_Var12 == _Var3) {
        p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                   **)((longlong)_Var9 + 8);
        *p_Var4 = _Var2;
        p_Var5 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                   **)((longlong)_Var2 + 8);
        *p_Var5 = _Var3;
        p_Var6 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                   **)((longlong)_Var3 + 8);
        *p_Var6 = _Var9;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
          **)((longlong)_Var3 + 8) = p_Var5;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
          **)((longlong)_Var2 + 8) = p_Var4;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
          **)((longlong)_Var9 + 8) = p_Var6;
        *p_Var12 = _Var9;
        _Var9 = _Var2;
        goto joined_r0x00014f088bd5;
      }
      _Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                *)((longlong)_Var3 + 8);
    } while (*(int *)((longlong)_Var9 + 0x10) != *(int *)((longlong)_Var3 + 0x10));
    lVar8 = *(longlong *)_Var3;
    p_Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                **)((longlong)_Var9 + 8);
    *p_Var12 = _Var2;
    plVar7 = *(longlong **)((longlong)_Var2 + 8);
    *plVar7 = lVar8;
    p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
               **)(lVar8 + 8);
    *p_Var4 = _Var9;
    *(longlong **)(lVar8 + 8) = plVar7;
    *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
      **)((longlong)_Var2 + 8) = p_Var12;
    *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
      **)((longlong)_Var9 + 8) = p_Var4;
    _Var9 = _Var2;
  } while( true );
}

// _Forced_rehash @ 14f088d30

void __thiscall
std::
_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::BufferedSourceNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>,0>_>
::_Forced_rehash(_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::BufferedSourceNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>,0>_>
                 *this,ulong64 param_1)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  _Var1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  _Var2;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  _Var3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  *p_Var4;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  *p_Var5;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  *p_Var6;
  longlong *plVar7;
  longlong lVar8;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  _Var9;
  ulonglong uVar10;
  ulong64 uVar11;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  *p_Var12;
  
  for (lVar8 = 0x3f; 0xfffffffffffffffU >> lVar8 == 0; lVar8 = lVar8 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar8 & 0x3f)) < param_1) {
    _Xlength_error("invalid hash bucket count");
    return;
  }
  _Var1 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
           )(this->_List)._Mypair._Myval2._Myhead;
  uVar10 = param_1 - 1 | 1;
  lVar8 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
    }
  }
  uVar11 = 1L << ((char)lVar8 + 1U & 0x3f);
  _Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_>_>
  ::_Assign_grow(&this->_Vec,uVar11 * 2,_Var1);
  this->_Maxidx = uVar11;
  this->_Mask = uVar11 - 1;
  _Var9 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
           )((this->_List)._Mypair._Myval2._Myhead)->_Next;
joined_r0x00014f088da5:
  do {
    while( true ) {
      while( true ) {
        if (_Var9 == _Var1) {
          return;
        }
        _Var2 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                  *)_Var9;
        p_Var12 = (this->_Vec)._Mypair._Myval2._Myfirst +
                  ((((((ulonglong)*(byte *)((longlong)_Var9 + 0x10) ^ 0xcbf29ce484222325) *
                      0x100000001b3 ^ (ulonglong)*(byte *)((longlong)_Var9 + 0x11)) * 0x100000001b3
                    ^ (ulonglong)*(byte *)((longlong)_Var9 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)_Var9 + 0x13)) * 0x100000001b3 & this->_Mask) * 2;
        if (*p_Var12 != _Var1) break;
        *p_Var12 = _Var9;
        p_Var12[1] = _Var9;
        _Var9 = _Var2;
      }
      _Var3 = p_Var12[1];
      if (*(int *)((longlong)_Var9 + 0x10) != *(int *)((longlong)_Var3 + 0x10)) break;
      _Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                *)_Var3;
      if (_Var3 != _Var9) {
        p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                   **)((longlong)_Var9 + 8);
        *p_Var4 = _Var2;
        p_Var5 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                   **)((longlong)_Var2 + 8);
        *p_Var5 = _Var3;
        p_Var6 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                   **)((longlong)_Var3 + 8);
        *p_Var6 = _Var9;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
          **)((longlong)_Var3 + 8) = p_Var5;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
          **)((longlong)_Var2 + 8) = p_Var4;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
          **)((longlong)_Var9 + 8) = p_Var6;
      }
      p_Var12[1] = _Var9;
      _Var9 = _Var2;
    }
    do {
      if (*p_Var12 == _Var3) {
        p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                   **)((longlong)_Var9 + 8);
        *p_Var4 = _Var2;
        p_Var5 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                   **)((longlong)_Var2 + 8);
        *p_Var5 = _Var3;
        p_Var6 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                   **)((longlong)_Var3 + 8);
        *p_Var6 = _Var9;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
          **)((longlong)_Var3 + 8) = p_Var5;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
          **)((longlong)_Var2 + 8) = p_Var4;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
          **)((longlong)_Var9 + 8) = p_Var6;
        *p_Var12 = _Var9;
        _Var9 = _Var2;
        goto joined_r0x00014f088da5;
      }
      _Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                *)((longlong)_Var3 + 8);
    } while (*(int *)((longlong)_Var9 + 0x10) != *(int *)((longlong)_Var3 + 0x10));
    lVar8 = *(longlong *)_Var3;
    p_Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                **)((longlong)_Var9 + 8);
    *p_Var12 = _Var2;
    plVar7 = *(longlong **)((longlong)_Var2 + 8);
    *plVar7 = lVar8;
    p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
               **)(lVar8 + 8);
    *p_Var4 = _Var9;
    *(longlong **)(lVar8 + 8) = plVar7;
    *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
      **)((longlong)_Var2 + 8) = p_Var12;
    *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
      **)((longlong)_Var9 + 8) = p_Var4;
    _Var9 = _Var2;
  } while( true );
}

// _Forced_rehash @ 14f088f00

void __thiscall
std::
_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
::_Forced_rehash(_Hash<std::_Umap_traits<int,std::shared_ptr<vraudio::MixerNode>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>,0>_>
                 *this,ulong64 param_1)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  _Var1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  _Var2;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  _Var3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  *p_Var4;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  *p_Var5;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  *p_Var6;
  longlong *plVar7;
  longlong lVar8;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  _Var9;
  ulonglong uVar10;
  ulong64 uVar11;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  *p_Var12;
  
  for (lVar8 = 0x3f; 0xfffffffffffffffU >> lVar8 == 0; lVar8 = lVar8 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar8 & 0x3f)) < param_1) {
    _Xlength_error("invalid hash bucket count");
    return;
  }
  _Var1 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
           )(this->_List)._Mypair._Myval2._Myhead;
  uVar10 = param_1 - 1 | 1;
  lVar8 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
    }
  }
  uVar11 = 1L << ((char)lVar8 + 1U & 0x3f);
  _Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_>_>
  ::_Assign_grow(&this->_Vec,uVar11 * 2,_Var1);
  this->_Maxidx = uVar11;
  this->_Mask = uVar11 - 1;
  _Var9 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
           )((this->_List)._Mypair._Myval2._Myhead)->_Next;
joined_r0x00014f088f75:
  do {
    while( true ) {
      while( true ) {
        if (_Var9 == _Var1) {
          return;
        }
        _Var2 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                  *)_Var9;
        p_Var12 = (this->_Vec)._Mypair._Myval2._Myfirst +
                  ((((((ulonglong)*(byte *)((longlong)_Var9 + 0x10) ^ 0xcbf29ce484222325) *
                      0x100000001b3 ^ (ulonglong)*(byte *)((longlong)_Var9 + 0x11)) * 0x100000001b3
                    ^ (ulonglong)*(byte *)((longlong)_Var9 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)_Var9 + 0x13)) * 0x100000001b3 & this->_Mask) * 2;
        if (*p_Var12 != _Var1) break;
        *p_Var12 = _Var9;
        p_Var12[1] = _Var9;
        _Var9 = _Var2;
      }
      _Var3 = p_Var12[1];
      if (*(int *)((longlong)_Var9 + 0x10) != *(int *)((longlong)_Var3 + 0x10)) break;
      _Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                *)_Var3;
      if (_Var3 != _Var9) {
        p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                   **)((longlong)_Var9 + 8);
        *p_Var4 = _Var2;
        p_Var5 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                   **)((longlong)_Var2 + 8);
        *p_Var5 = _Var3;
        p_Var6 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                   **)((longlong)_Var3 + 8);
        *p_Var6 = _Var9;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
          **)((longlong)_Var3 + 8) = p_Var5;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
          **)((longlong)_Var2 + 8) = p_Var4;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
          **)((longlong)_Var9 + 8) = p_Var6;
      }
      p_Var12[1] = _Var9;
      _Var9 = _Var2;
    }
    do {
      if (*p_Var12 == _Var3) {
        p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                   **)((longlong)_Var9 + 8);
        *p_Var4 = _Var2;
        p_Var5 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                   **)((longlong)_Var2 + 8);
        *p_Var5 = _Var3;
        p_Var6 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                   **)((longlong)_Var3 + 8);
        *p_Var6 = _Var9;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
          **)((longlong)_Var3 + 8) = p_Var5;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
          **)((longlong)_Var2 + 8) = p_Var4;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
          **)((longlong)_Var9 + 8) = p_Var6;
        *p_Var12 = _Var9;
        _Var9 = _Var2;
        goto joined_r0x00014f088f75;
      }
      _Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                *)((longlong)_Var3 + 8);
    } while (*(int *)((longlong)_Var9 + 0x10) != *(int *)((longlong)_Var3 + 0x10));
    lVar8 = *(longlong *)_Var3;
    p_Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                **)((longlong)_Var9 + 8);
    *p_Var12 = _Var2;
    plVar7 = *(longlong **)((longlong)_Var2 + 8);
    *plVar7 = lVar8;
    p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
               **)(lVar8 + 8);
    *p_Var4 = _Var9;
    *(longlong **)(lVar8 + 8) = plVar7;
    *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
      **)((longlong)_Var2 + 8) = p_Var12;
    *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
      **)((longlong)_Var9 + 8) = p_Var4;
    _Var9 = _Var2;
  } while( true );
}

// _Xlength @ 14f0890d0

void __cdecl
std::
vector<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// deallocate @ 14f0890f0

void __thiscall
std::
allocator<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>::
deallocate(allocator<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
           *this,pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                 *param_1,ulong64 param_2)

{
  pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *ppVar1;
  ulong64 uVar2;
  
  uVar2 = param_2 * 0x28;
  ppVar1 = param_1;
  if (0xfff < uVar2) {
    ppVar1 = (pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
             param_1[-1].second._Mypair._Myval2._Myres;
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)ppVar1))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  ::operator_delete(ppVar1,uVar2);
  return;
}

// deallocate @ 14f089150

void __thiscall
std::
allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_>
::deallocate(allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>_>
             *this,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
                   *param_1,ulong64 param_2)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
  _Var1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  _Var1 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::AmbisonicMixingEncoderNode>_>_>_>_>
           )param_1;
  if (0xfff < uVar2) {
    _Var1 = param_1[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)_Var1))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  ::operator_delete((void *)_Var1,uVar2);
  return;
}

// deallocate @ 14f0891b0

void __thiscall
std::
allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_>
::deallocate(allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>_>
             *this,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
                   *param_1,ulong64 param_2)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
  _Var1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  _Var1 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::BufferedSourceNode>_>_>_>_>
           )param_1;
  if (0xfff < uVar2) {
    _Var1 = param_1[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)_Var1))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  ::operator_delete((void *)_Var1,uVar2);
  return;
}

// deallocate @ 14f089210

void __thiscall
std::
allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_>
::deallocate(allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>_>
             *this,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
                   *param_1,ulong64 param_2)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
  _Var1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  _Var1 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,std::shared_ptr<vraudio::MixerNode>_>_>_>_>
           )param_1;
  if (0xfff < uVar2) {
    _Var1 = param_1[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)_Var1))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  ::operator_delete((void *)_Var1,uVar2);
  return;
}

